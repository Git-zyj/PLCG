/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134652
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) / (var_9)));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((arr_2 [i_1] [i_1] [i_1]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_1] [i_0])))), (((/* implicit */int) ((signed char) arr_2 [i_1] [17ULL] [i_0])))))) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_1))));
            arr_5 [i_1] [i_0 - 1] [i_1] = ((/* implicit */short) ((unsigned int) min((((long long int) 11118411487049258696ULL)), (((/* implicit */long long int) ((signed char) 1282488180))))));
            var_14 &= ((/* implicit */short) (((~(((/* implicit */int) arr_1 [i_0])))) <= (((int) ((short) (unsigned short)24975)))));
            arr_6 [i_1] [i_1] = ((/* implicit */int) arr_1 [i_0]);
        }
        for (unsigned short i_2 = 2; i_2 < 17; i_2 += 1) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_2] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_2])) : (((/* implicit */int) var_7)))) + (((int) -1282488155))));
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((unsigned int) (short)-21529)) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), (var_8)))))))) ? (((((/* implicit */_Bool) min((arr_3 [i_0] [(unsigned short)14]), (((/* implicit */unsigned int) (unsigned short)47754))))) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [i_2] [(unsigned short)9]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_2] [i_2])))));
            var_15 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)127)) ? (((((/* implicit */int) (short)21528)) & (((/* implicit */int) (short)21525)))) : (((/* implicit */int) min(((unsigned short)2812), (((/* implicit */unsigned short) (unsigned char)128))))))), (((/* implicit */int) ((unsigned short) arr_8 [(unsigned short)17])))));
        }
        for (long long int i_3 = 3; i_3 < 18; i_3 += 2) 
        {
            arr_15 [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) ((unsigned short) (short)21529));
            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_6))));
        }
        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            var_17 *= ((/* implicit */signed char) arr_3 [i_0 + 1] [6LL]);
            arr_19 [i_0 + 1] [i_0 - 1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_1), ((unsigned short)3430)))) | (((((/* implicit */_Bool) var_3)) ? (arr_17 [i_0] [i_0] [i_0]) : (((/* implicit */int) var_7))))))) ? ((~(((((/* implicit */_Bool) 1571864741U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21551))) : (arr_3 [i_0] [(unsigned char)16]))))) : (((/* implicit */unsigned int) arr_17 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
            var_18 *= ((/* implicit */unsigned long long int) arr_1 [i_4]);
        }
        arr_20 [i_0] = ((/* implicit */_Bool) arr_8 [i_0]);
    }
    var_19 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) var_12))))) == (((((/* implicit */_Bool) 836721271U)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))) == (-7674307010948358437LL)));
}

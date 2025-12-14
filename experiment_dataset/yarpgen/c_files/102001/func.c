/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102001
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
    var_17 = ((/* implicit */_Bool) ((((((/* implicit */int) var_12)) * (((((/* implicit */int) var_0)) - (((/* implicit */int) var_12)))))) & (((/* implicit */int) ((signed char) max((((/* implicit */short) var_11)), (var_15)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((long long int) min((654490046747549935ULL), (((/* implicit */unsigned long long int) 2553452552U)))));
        var_18 ^= ((/* implicit */unsigned long long int) min((((unsigned short) var_8)), (((/* implicit */unsigned short) var_1))));
        arr_3 [i_0] = var_3;
        arr_4 [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_0 [i_0] [i_0])) / (((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    for (unsigned int i_1 = 3; i_1 < 12; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (arr_6 [i_1 + 1] [i_1 - 2]))))));
        var_20 = ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117))) ^ (1510513845U)));
    }
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        var_21 = ((_Bool) arr_8 [i_2] [i_2]);
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_7 [i_2]) >> (((((/* implicit */int) var_7)) - (41664)))))) ? (max((arr_7 [i_2]), (arr_7 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
        var_23 = ((/* implicit */short) arr_7 [i_2]);
    }
    var_24 = ((/* implicit */_Bool) max((var_24), (var_14)));
    /* LoopNest 2 */
    for (short i_3 = 1; i_3 < 16; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_5 = 1; i_5 < 18; i_5 += 3) 
                {
                    arr_16 [i_3] [14U] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(536870911U)))) ? (((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) arr_11 [13U])) : (((/* implicit */int) arr_11 [i_5])))) : (((((/* implicit */_Bool) arr_15 [14ULL] [i_4] [i_3 + 2] [i_4])) ? (((/* implicit */int) arr_14 [i_3] [i_4] [i_3 + 3] [i_3])) : (((/* implicit */int) var_9))))));
                    arr_17 [i_3 - 1] [i_4] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_9 [i_3 + 3])) : (((/* implicit */int) arr_9 [i_5 - 1])))) - (((((/* implicit */int) arr_9 [i_4])) - (((/* implicit */int) arr_9 [i_5 + 1]))))));
                    var_25 = ((/* implicit */unsigned char) (unsigned short)7168);
                }
                var_26 *= ((/* implicit */unsigned long long int) arr_12 [8U]);
                arr_18 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned char)103))));
            }
        } 
    } 
}

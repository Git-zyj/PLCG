/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149648
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((min(((-(var_3))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))))) + (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-16859))))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            arr_5 [i_0 - 2] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1] [(unsigned short)6]))))) ? (((/* implicit */int) min((arr_3 [i_1 - 1] [i_1] [i_0 - 1]), (((/* implicit */unsigned char) arr_2 [i_1 - 1] [i_0] [i_0]))))) : (((/* implicit */int) ((_Bool) arr_0 [i_0 - 1] [i_0]))));
            var_13 = ((/* implicit */unsigned int) max((arr_2 [i_0 - 2] [i_1 - 2] [i_1]), (((/* implicit */signed char) var_4))));
            arr_6 [i_0 - 1] [22ULL] [22ULL] &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) >> (((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 2369427848U)))) % (arr_0 [i_0] [i_0]))) - (39304U)))));
            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) arr_1 [i_1]))));
            arr_7 [10LL] &= ((((/* implicit */int) (unsigned short)61269)) * (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-21042)))))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 3) 
        {
            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) -1))));
            arr_11 [i_0] [i_0] [(unsigned char)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [(_Bool)1] [i_0 + 1]))) : (((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4267))) : (var_9)))));
        }
        for (unsigned short i_3 = 1; i_3 < 22; i_3 += 3) 
        {
            arr_14 [i_0] [i_3 + 1] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)4248)) ^ ((-(((/* implicit */int) arr_1 [i_0 - 2]))))));
            arr_15 [i_0] = ((/* implicit */unsigned short) arr_9 [i_0]);
            arr_16 [i_0] [i_3] = ((/* implicit */int) var_2);
            var_15 += ((/* implicit */long long int) (short)4855);
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_4 = 1; i_4 < 14; i_4 += 4) 
    {
        arr_20 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)61269))))) ? (((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) arr_19 [i_4])) : (((/* implicit */int) arr_19 [i_4])))) : (((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))));
        arr_21 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_17 [i_4 + 1] [i_4])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)61269)) >= (((/* implicit */int) (short)-22549)))))));
    }
}

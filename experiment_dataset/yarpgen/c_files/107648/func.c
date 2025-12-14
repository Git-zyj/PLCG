/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107648
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
    var_17 = max((var_2), (min((((/* implicit */long long int) ((short) var_1))), (((((/* implicit */_Bool) 1042292791U)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_5))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned char) min((((/* implicit */int) min((arr_8 [i_0] [i_1 + 3] [i_1 - 2] [i_1]), (arr_8 [i_2] [i_1 + 1] [i_2] [i_2])))), (((((((/* implicit */_Bool) arr_8 [(short)1] [i_1] [i_2] [(short)1])) ? (((/* implicit */int) arr_7 [(short)9] [i_0] [9] [i_2])) : (((/* implicit */int) arr_2 [i_2])))) + (((/* implicit */int) ((((/* implicit */int) var_16)) >= (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(_Bool)1])))))))));
                    arr_9 [i_0] [(signed char)12] [(unsigned short)1] [i_1] = (~((+(((/* implicit */int) var_13)))));
                }
                for (unsigned int i_3 = 3; i_3 < 14; i_3 += 1) 
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((int) (!(((/* implicit */_Bool) arr_6 [i_0] [15] [(_Bool)1]))))) << (((((/* implicit */int) (short)27975)) - (27975))))))));
                    var_20 = ((/* implicit */short) max((var_20), (((short) 2306196319U))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (-(min((((/* implicit */unsigned int) arr_5 [i_1 + 1] [i_0])), (var_14))))))));
                    arr_12 [i_1] [i_1] = ((/* implicit */short) ((_Bool) 4294967294U));
                }
                arr_13 [i_1] [0U] [i_1] = ((/* implicit */short) 1988770956U);
                arr_14 [i_0] [i_0] [i_1] = ((((int) ((((/* implicit */_Bool) 6U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) : (879585550368046302ULL)))) != (((/* implicit */int) min((arr_8 [(short)4] [i_1 + 3] [i_1] [i_1]), (((/* implicit */signed char) arr_1 [i_1 + 3]))))));
                var_22 -= ((/* implicit */unsigned char) (((((((_Bool)1) ? (1988770974U) : (((/* implicit */unsigned int) 20)))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)7327)) >= (((/* implicit */int) arr_5 [i_0] [i_0])))))) < (((var_14) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-66)))))))) : (((((/* implicit */int) (short)3289)) ^ (((/* implicit */int) (short)-16728))))));
            }
        } 
    } 
}

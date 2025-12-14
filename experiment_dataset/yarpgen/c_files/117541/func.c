/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117541
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    arr_6 [i_2] [i_1] [i_0] = (~((-(((/* implicit */int) arr_1 [i_0 - 1])))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((1905800234U), (2389167061U))))));
                    var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) ((int) arr_0 [i_0 - 1]))), (((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_0 + 1] [i_0 - 1])) ? (2389167062U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1])))))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_2]))))) ? (arr_0 [(signed char)1]) : (2389167056U))), (((/* implicit */unsigned int) ((unsigned short) var_14))))))));
                    var_22 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1])))));
                }
                for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    var_23 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((unsigned long long int) var_18))) ? (((/* implicit */int) ((2389167078U) < (1905800233U)))) : (((/* implicit */int) arr_1 [i_0 - 1])))));
                    var_24 = ((/* implicit */int) var_6);
                }
                for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    var_25 = (~(((unsigned int) (~(2389167081U)))));
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) * ((-(((/* implicit */int) var_7))))))) ? (min((arr_3 [i_1 - 1]), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_11 [7U]), (((/* implicit */unsigned short) var_10))))) ? (((/* implicit */int) ((var_5) >= (((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))))))))));
                }
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((unsigned char) (~((~(1905800251U)))))))));
                var_28 = ((/* implicit */int) max((var_28), (((((((/* implicit */int) arr_11 [i_0 - 1])) != (((/* implicit */int) arr_11 [i_0 + 1])))) ? (((/* implicit */int) max((arr_11 [i_0 - 1]), (arr_11 [i_0 - 1])))) : (((/* implicit */int) arr_11 [i_0 - 1]))))));
            }
        } 
    } 
    var_29 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((unsigned int) var_7)) : (max((var_14), (((/* implicit */unsigned int) var_8))))))), (var_6)));
}

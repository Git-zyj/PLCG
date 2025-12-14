/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114881
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
    var_20 = ((/* implicit */unsigned int) var_14);
    var_21 |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_16)))) ? (var_15) : (((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) (unsigned char)255)), (192802857U))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned int) max(((~(((long long int) var_12)))), (((/* implicit */long long int) arr_1 [i_0]))));
                var_23 = ((/* implicit */unsigned long long int) arr_6 [2] [i_1 + 1]);
                var_24 = ((/* implicit */unsigned int) min((var_24), (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1 - 2])) >> (((/* implicit */int) arr_1 [i_1 - 2]))))), (((unsigned int) var_12))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1 - 3] [i_1 - 3] [i_1 + 1])) ? ((~(arr_7 [i_1 - 2] [i_1 + 1] [i_1 - 1]))) : ((-(arr_7 [i_1 - 2] [i_1 - 1] [i_1 - 3])))));
                    var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1779717944)))))));
                    var_27 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) max((4102164439U), (((/* implicit */unsigned int) 0))))), (arr_3 [i_1] [i_1 - 3]))) == (((/* implicit */long long int) (~(arr_6 [i_1 - 3] [8U]))))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned int) var_15);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106713
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) || (((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])))))) - (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (var_10))))), (((/* implicit */unsigned int) ((unsigned char) max((12), (arr_3 [i_0] [i_1] [i_0])))))));
                arr_6 [i_0] [i_1] = ((((((((/* implicit */_Bool) -29)) ? (-1489273784) : ((-2147483647 - 1)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) arr_2 [i_0]))))));
                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) arr_4 [i_1]))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 4; i_2 < 12; i_2 += 4) 
                {
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (+(((int) 2147483647)))))));
                    var_15 = ((/* implicit */int) ((unsigned char) arr_3 [14] [i_1] [i_2]));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) min((var_16), (var_5)));
    var_17 = min((var_10), (((/* implicit */unsigned int) ((int) min((((/* implicit */int) (unsigned char)245)), (609087840))))));
}

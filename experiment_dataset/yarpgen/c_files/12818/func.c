/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12818
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
    var_19 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) (short)2048)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (3066866268U))), (((/* implicit */unsigned int) var_8))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 6; i_1 += 3) 
        {
            {
                var_20 = ((((/* implicit */int) ((7508358752286449084LL) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)56)) < (-159502833)))))))) - (((/* implicit */int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned short) (signed char)-48))))) && (((/* implicit */_Bool) 3066866263U))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */short) (signed char)-68);
                            arr_12 [i_0] [i_3] [i_0] = ((/* implicit */int) max((((var_14) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-56))))), (((/* implicit */long long int) min((((/* implicit */int) (signed char)47)), (var_8))))));
                            arr_13 [i_3] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */int) (signed char)47);
                            var_22 = ((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_4)))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_18))));
            }
        } 
    } 
}

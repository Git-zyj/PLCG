/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168937
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
    var_11 = ((/* implicit */unsigned short) ((int) (unsigned char)223));
    var_12 -= (!(((/* implicit */_Bool) var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (+((-(((/* implicit */int) arr_8 [i_3] [i_2])))))))));
                            arr_10 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) max((3111103758U), (((/* implicit */unsigned int) (+(715081660))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned int) ((arr_1 [i_0]) != (((/* implicit */unsigned long long int) ((424571130) * (((/* implicit */int) (signed char)0)))))))), (min(((~(8388606U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)102)))))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140834
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
    var_16 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((((/* implicit */long long int) max(((~(((/* implicit */int) arr_5 [i_2 + 1] [11ULL])))), (max((var_4), (((/* implicit */int) var_5))))))), (((long long int) ((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((unsigned char) 9223372036854775807LL));
                                var_19 = ((/* implicit */unsigned short) ((_Bool) ((unsigned short) arr_11 [i_0] [i_1 - 2] [i_1] [i_4 - 2])));
                                var_20 = ((/* implicit */_Bool) (-(max((max((((/* implicit */unsigned long long int) var_8)), (var_7))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_0 - 1] [i_4])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */short) (-(4294967295U)));
    var_22 = min((var_10), (((/* implicit */long long int) (~(((/* implicit */int) var_13))))));
}

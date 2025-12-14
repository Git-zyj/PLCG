/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153322
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
    var_16 = ((/* implicit */long long int) min((var_16), (((((/* implicit */long long int) ((/* implicit */int) var_9))) % (max((max((9223372036854775807LL), (var_13))), (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) (short)8064))));
    var_18 &= ((/* implicit */long long int) (short)(-32767 - 1));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) var_15);
                                var_20 = ((/* implicit */short) arr_3 [i_1] [i_3] [4]);
                                var_21 |= ((/* implicit */short) max((((/* implicit */long long int) (-((-(((/* implicit */int) (short)(-32767 - 1)))))))), (var_13)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) arr_15 [i_5] [i_5]);
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_7))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

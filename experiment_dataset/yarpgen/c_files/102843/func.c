/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102843
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
    var_11 = (-(var_6));
    var_12 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((unsigned int) (unsigned short)7156));
                var_14 = ((/* implicit */unsigned int) (-(((int) arr_3 [i_0] [i_1]))));
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 18; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) max((var_15), ((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_3])))))))));
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (~((-(((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1 - 1])))))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114924
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
    var_19 = ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_2 - 3] [i_4] = ((/* implicit */unsigned int) (unsigned short)15387);
                                var_20 = ((min((arr_11 [i_3 - 3] [i_2 - 3] [i_2] [i_1] [i_4] [i_1]), (((/* implicit */long long int) ((var_17) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))))) * (((/* implicit */long long int) min(((-(-1914563765))), (((/* implicit */int) (unsigned short)65535))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_11 [i_0] [i_1] [i_1] [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_22 &= ((/* implicit */unsigned char) (unsigned short)8621);
}

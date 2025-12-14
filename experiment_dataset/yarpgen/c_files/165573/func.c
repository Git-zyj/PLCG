/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165573
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
    var_10 = ((/* implicit */short) (+(var_4)));
    var_11 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_1] [i_1]);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) arr_2 [i_0 - 1] [i_0]);
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [5] [i_1] = -6706375961446824598LL;
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */unsigned int) arr_12 [i_4] [i_3] [i_0] [i_0]);
                                var_13 = ((unsigned int) ((-6706375961446824598LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4 - 2] [i_4 + 1] [i_1] [i_4 - 2] [i_4])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((int) (-(((/* implicit */int) ((var_4) == (((/* implicit */unsigned int) var_8))))))));
}

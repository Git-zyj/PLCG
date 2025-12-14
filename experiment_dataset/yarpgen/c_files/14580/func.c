/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14580
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
    var_11 = ((1432955650U) % (((/* implicit */unsigned int) ((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (signed char)-92))));
                            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5069654354913878087LL)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (signed char)64))));
                            arr_9 [i_2] [i_3 - 2] [i_2] [i_0] = ((/* implicit */int) var_7);
                            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((((arr_7 [i_3 - 1] [i_0] [i_1 - 3]) / (arr_7 [i_3 - 1] [i_0] [i_1 + 3]))) << (((((/* implicit */int) ((signed char) arr_7 [i_3 + 1] [i_0] [i_1 + 2]))) - (63)))));
                            arr_11 [18] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) (unsigned short)5)))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned long long int) var_2);
            }
        } 
    } 
    var_15 = (signed char)-64;
}

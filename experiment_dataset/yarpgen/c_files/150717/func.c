/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150717
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
    var_20 = ((/* implicit */int) var_17);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) -9);
                            arr_11 [9] [i_1] = ((/* implicit */unsigned char) arr_1 [i_0]);
                            arr_12 [i_0] [i_1] [i_0] [i_1] [i_3] = ((/* implicit */_Bool) ((long long int) arr_7 [i_0] [i_1] [i_0] [i_0]));
                        }
                    } 
                } 
                arr_13 [i_0] [(signed char)9] [i_1] = ((/* implicit */signed char) (-(min((-1360326181), (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1]))))));
                arr_14 [i_0] [i_0] = arr_8 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0];
                var_21 = ((/* implicit */unsigned char) (-(var_2)));
                arr_15 [i_0] = ((/* implicit */unsigned short) max((((signed char) arr_2 [i_0])), ((signed char)126)));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) (signed char)-126);
    var_23 *= ((/* implicit */signed char) var_7);
}

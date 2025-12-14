/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146492
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_20 |= ((/* implicit */int) min(((((_Bool)1) ? (3541480293U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) ((signed char) var_11)))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (signed char i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_12 [i_2] [i_0] |= ((/* implicit */unsigned int) var_16);
                                arr_13 [i_3] = ((/* implicit */unsigned int) var_4);
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4024528358U)) ? (2147483638) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 |= ((/* implicit */signed char) var_14);
    var_22 = ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)32755)), (var_4)))) ? (var_0) : (((/* implicit */long long int) min((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_16)))), (((/* implicit */int) var_9))))));
    var_23 = ((/* implicit */_Bool) var_0);
}

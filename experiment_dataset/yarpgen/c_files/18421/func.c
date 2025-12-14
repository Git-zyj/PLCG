/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18421
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    var_20 |= ((/* implicit */unsigned long long int) min(((_Bool)0), (var_7)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_21 -= ((/* implicit */unsigned short) (+(max((arr_14 [i_2 + 1] [i_3] [i_2 - 2] [4U] [i_0 + 1] [i_3] [i_0]), (((/* implicit */unsigned int) arr_9 [i_0 - 3]))))));
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min(((((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-68))) : (var_3))) == (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-20043), (((/* implicit */short) (signed char)58)))))))), ((!(((/* implicit */_Bool) ((signed char) arr_6 [i_0] [i_0] [i_0] [i_0]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 18; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_23 -= ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [(unsigned short)16] [i_5] [i_0]);
                                var_24 *= ((/* implicit */short) arr_18 [i_0] [i_1] [i_1] [i_2] [2U] [i_6]);
                                var_25 -= ((/* implicit */signed char) ((arr_17 [i_1] [i_2] [i_2 - 1] [i_2] [i_2] [i_6]) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)31)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-50))))) - (var_17)));
}

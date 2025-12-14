/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154172
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
    var_10 = ((/* implicit */signed char) min((max(((unsigned short)55246), ((unsigned short)55246))), (((/* implicit */unsigned short) var_5))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] [i_2] [i_2] [i_1] [(signed char)4] [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 1695741312748737662ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-20))))));
                                var_11 = ((/* implicit */signed char) ((long long int) max((((/* implicit */long long int) var_5)), (max((var_7), (var_7))))));
                            }
                        } 
                    } 
                    var_12 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_3)), ((~(var_0)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) var_9);
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max(((~(min((((/* implicit */unsigned long long int) (short)6119)), (var_0))))), (((/* implicit */unsigned long long int) var_3)))))));
}

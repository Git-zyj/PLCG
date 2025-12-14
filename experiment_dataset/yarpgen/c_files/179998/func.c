/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179998
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = 131071U;
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1 + 2] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) (+(max((arr_10 [i_0] [i_1 - 1] [i_0] [4LL] [i_4] [i_4]), (((131071U) | (131071U)))))));
                                var_20 *= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 131054U)) || (((/* implicit */_Bool) 131056U))))) % (((/* implicit */int) min((arr_3 [i_3 - 1] [i_3] [i_4]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [(short)4] [(unsigned char)0] [i_0])) && (((/* implicit */_Bool) arr_2 [i_1] [(unsigned char)6] [i_3]))))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [(signed char)3] [i_1 - 2] [(short)2] [i_2]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) 131071U);
}

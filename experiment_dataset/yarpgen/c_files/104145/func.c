/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104145
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
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_14 [(short)6] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_3] [i_4 + 1]))));
                                arr_15 [i_0] [17] [i_0] [i_3] [(signed char)4] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))) << (((min((((unsigned long long int) arr_9 [i_1] [i_4])), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)234)) ^ (((/* implicit */int) (signed char)0))))))) - (216ULL)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_10))));
                }
            } 
        } 
    } 
    var_18 ^= (~(65535LL));
    var_19 = ((/* implicit */unsigned long long int) var_14);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101477
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [(unsigned short)8] [(signed char)4] = min(((signed char)-11), ((signed char)-11));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) var_7);
                                var_14 = ((/* implicit */short) ((((arr_4 [i_2] [i_1 - 1] [i_3]) - (arr_4 [i_2] [14] [i_2]))) * (((((/* implicit */_Bool) arr_4 [i_2] [i_2 - 1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_4 [i_2] [i_1 - 1] [i_1 - 1])))));
                                var_15 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_3] [(unsigned short)2] [i_1 - 1] [i_4 + 1])) ? (((((/* implicit */int) (signed char)80)) & (((/* implicit */int) (signed char)-30)))) : ((+(((/* implicit */int) var_9))))));
                                var_16 = ((/* implicit */_Bool) arr_10 [i_0]);
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) var_1)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            {
                arr_21 [i_5] [i_6] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
                var_17 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_5] [i_5] [14LL] [5LL] [i_6] [i_6]))))) <= (max((((/* implicit */long long int) (signed char)80)), (-2785195109376101002LL)))));
                arr_22 [i_5] [i_6] [2LL] = ((/* implicit */signed char) var_0);
            }
        } 
    } 
}

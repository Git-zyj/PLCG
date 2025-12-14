/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117105
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
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_2] [i_3])))));
                                var_15 = ((/* implicit */long long int) min((var_15), (((arr_0 [i_0 - 4]) ? (((((/* implicit */_Bool) 0U)) ? (-85985292819887333LL) : (((/* implicit */long long int) 2147483647)))) : (((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_4] [i_4 + 1] [(unsigned char)4]))))))))));
                                arr_15 [i_0 - 1] [i_3] [i_2] [i_3] [i_2] [i_3] [i_2] = ((/* implicit */int) min((arr_12 [i_3] [i_3] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */long long int) arr_11 [i_1 - 3] [i_3] [i_3] [i_4]))));
                                arr_16 [i_0] [i_0 - 2] [i_1 - 3] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */int) ((_Bool) ((arr_0 [i_0 - 1]) ? (((/* implicit */unsigned long long int) ((arr_12 [i_3] [i_1 - 1] [i_2] [i_2] [i_4] [i_3]) & (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_3] [i_3] [i_0])))))) : (((((/* implicit */_Bool) arr_14 [i_4 - 2] [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_10 [i_3] [i_1 + 1] [i_2] [i_4]))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */long long int) 4294967295U)) | (1391829990248796701LL))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_13);
}

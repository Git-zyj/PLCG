/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18508
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = max((((((/* implicit */_Bool) (short)-30813)) ? ((((_Bool)1) ? (var_3) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_0]))))), (15941337790417280852ULL));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_11 [i_3] [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_3] [12]) != (((/* implicit */int) (_Bool)1)))));
                            arr_12 [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_2] [i_3]);
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_1 [i_3])))) | (((var_4) + (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                        }
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */unsigned char) 2134776551);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 2) 
        {
            {
                arr_21 [i_5] [i_5] [i_5] = ((/* implicit */signed char) (~((~(var_10)))));
                arr_22 [i_5] = ((/* implicit */unsigned char) arr_15 [(_Bool)1]);
            }
        } 
    } 
}

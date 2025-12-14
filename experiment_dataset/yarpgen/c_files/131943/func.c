/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131943
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [(signed char)14] [i_3] [i_4] = ((/* implicit */int) (~((~((~(arr_3 [i_0])))))));
                                var_15 = ((/* implicit */unsigned int) (unsigned char)249);
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1 + 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (!(arr_8 [i_0] [i_0])))) >> (((((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) - (arr_0 [i_0] [i_0])))) ? (arr_5 [(signed char)15] [i_1 + 2]) : (max((arr_5 [i_0] [i_1 + 2]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_0] [i_0] [i_1] [(short)19])))))) - (18438379596111810914ULL)))));
                }
            } 
        } 
    } 
    var_16 *= ((/* implicit */unsigned int) min((var_7), (max((((17592186044415ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) (_Bool)1)))))))));
}

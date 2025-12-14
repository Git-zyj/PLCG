/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155708
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
    for (short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_8 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((/* implicit */long long int) min((arr_6 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0]), (((/* implicit */int) arr_5 [i_1] [i_1] [i_0])))))))) ^ (((unsigned long long int) ((arr_1 [i_0]) ^ (((/* implicit */unsigned int) arr_2 [i_1])))))));
                            var_15 = ((/* implicit */short) arr_3 [i_0 - 3] [i_2] [i_0]);
                            arr_9 [i_0] [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_3])) ? (7925922980518695430LL) : (((/* implicit */long long int) arr_1 [i_0])))), (min((((/* implicit */long long int) arr_2 [i_0])), (549621596160LL)))))), (arr_4 [i_3] [i_1])));
                        }
                    } 
                } 
                var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)0)), ((+(10168453582772612518ULL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_12);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155839
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = (-(((/* implicit */int) arr_3 [i_1] [i_0 + 1] [i_1])));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 3) 
                            {
                                var_11 &= arr_5 [i_0] [i_2] [i_3];
                                arr_11 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) var_9);
                                var_12 = ((arr_1 [i_0 + 1]) << (((/* implicit */int) (signed char)0)));
                            }
                            arr_12 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */signed char) min((3102150977U), (3102150977U)));
                            arr_13 [i_0 + 1] [i_1] [i_1] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) min((max((min((9713705907998610756ULL), (((/* implicit */unsigned long long int) 796236661)))), (((/* implicit */unsigned long long int) (signed char)24)))), (((/* implicit */unsigned long long int) (short)27019))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))) | (1192816312U)));
            }
        } 
    } 
    var_14 = 3758096384U;
}

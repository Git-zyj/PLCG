/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17824
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
    var_17 = ((unsigned int) min((((/* implicit */int) var_11)), (var_4)));
    var_18 |= ((/* implicit */unsigned short) ((var_6) ? (min((((((/* implicit */_Bool) -1757672274855350042LL)) ? (var_7) : (1757672274855350062LL))), (var_7))) : (-1757672274855350018LL)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_1 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) var_1))))))) % ((~(((arr_3 [i_1] [i_1] [i_1 + 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    arr_10 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) 2305843009209499648LL);
                    var_19 = ((/* implicit */unsigned short) 3485770629382412652ULL);
                    arr_11 [i_0] [i_1] = ((/* implicit */short) 1757672274855350062LL);
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] [i_4] = (~(((/* implicit */int) arr_5 [i_0])));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_14 [i_3 - 3] [i_3 + 1] [i_3 + 2] [i_3 - 1] [i_1])) : (((/* implicit */int) arr_14 [i_3 + 2] [i_3 - 2] [i_3 + 3] [i_3 + 1] [i_1]))));
                                arr_18 [2] [2] [2] [i_1] [i_2] [i_3 + 1] [i_1] = ((/* implicit */long long int) arr_4 [i_1 - 1] [i_3 - 2] [i_4]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}

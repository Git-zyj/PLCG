/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115918
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
    var_14 = ((/* implicit */int) 662454261119391176LL);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) (_Bool)1);
                var_16 = min((((/* implicit */long long int) ((unsigned char) arr_3 [i_1 + 2]))), (((((/* implicit */long long int) arr_3 [i_1 + 2])) & (arr_2 [i_1 + 3]))));
                var_17 += ((/* implicit */short) ((long long int) ((2147483647) ^ (2147483647))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) (signed char)-69)), ((+(((/* implicit */int) arr_5 [i_0] [i_3 + 1] [i_3] [i_3]))))));
                                arr_12 [5] [i_2] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_9 [i_0] [11U] [i_1] [(signed char)8] [i_3] [i_4])), (var_7)))) ? (min((((/* implicit */long long int) (_Bool)1)), (36028796884746240LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_1 - 1] [i_2] [i_2] [i_3 - 1] [i_4])))));
                            }
                        } 
                    } 
                } 
                var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-23603)) ? (((/* implicit */long long int) 4279576789U)) : (8761367667042687803LL)));
            }
        } 
    } 
}

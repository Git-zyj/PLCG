/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164278
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
    var_11 -= ((/* implicit */_Bool) var_6);
    var_12 |= ((/* implicit */long long int) ((max(((((_Bool)0) ? (((/* implicit */int) (signed char)51)) : ((-2147483647 - 1)))), (((/* implicit */int) var_0)))) * (((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((arr_1 [i_0]) ^ (1693000029701241298LL)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_9 [i_2 - 3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] [0] = ((/* implicit */unsigned long long int) var_1);
                                var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_6)) <= (var_8)));
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((int) arr_7 [11] [i_2 - 3] [i_3 - 1])))));
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned short)18332)) + (((/* implicit */int) (unsigned short)63996)))))))));
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_4] [i_1 - 1])) ? (arr_13 [i_1 - 1] [i_1] [i_1] [i_1] [i_4] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) (~(arr_8 [i_0] [i_0])));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 1059042874425918662ULL)))) | (var_4))))));
    }
}

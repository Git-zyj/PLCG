/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171940
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
    var_14 = ((/* implicit */int) var_2);
    var_15 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned int) var_9)), (arr_3 [i_0] [i_1] [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_3 [i_0] [i_1] [i_1])))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [20U] [i_3] [(_Bool)1] = ((/* implicit */short) var_10);
                                arr_14 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_4])))) && (((/* implicit */_Bool) arr_1 [i_4] [i_2]))));
                                arr_15 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_11)) & (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(signed char)16] [i_2] [(_Bool)1] [7LL])))) ^ (((/* implicit */int) max(((_Bool)0), ((_Bool)1))))))) ? (arr_7 [i_0] [i_1] [(_Bool)1] [i_3] [i_4]) : (min(((~(arr_7 [i_4] [i_3] [i_2] [(_Bool)1] [(short)13]))), (((/* implicit */long long int) arr_2 [(_Bool)1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126982
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_4 [i_3] [i_2] [i_1]))))))), (((unsigned long long int) (-(((/* implicit */int) var_10)))))));
                            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_3] [i_0] [i_0]))))) ? (((int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_3])) : (((/* implicit */int) ((signed char) var_11)))));
                            var_14 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (max((arr_2 [i_2] [(signed char)6] [(signed char)6]), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_2])))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_6 [i_0] [i_2] [i_2])), (arr_0 [i_0] [i_0])))))), (((/* implicit */unsigned long long int) max((min((arr_10 [i_0] [i_0] [i_2] [i_0] [i_0]), (arr_9 [i_0] [i_1] [i_0] [i_0] [i_1]))), (((/* implicit */long long int) ((int) arr_3 [i_0]))))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_0])) ? (arr_7 [6] [6] [i_0]) : (arr_7 [i_1] [i_1] [13])))));
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_15 [i_4] = ((/* implicit */int) var_3);
                    arr_16 [i_4] [i_1] [i_1] [i_4] = ((/* implicit */short) (-((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_4]))))));
                    arr_17 [i_4] = var_6;
                }
                for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    arr_21 [i_5] [i_1] [i_5] &= ((/* implicit */_Bool) (-((-(((/* implicit */int) ((_Bool) arr_14 [i_0] [i_1] [i_1])))))));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (min(((~(arr_8 [i_0] [i_1] [i_5] [i_5] [i_0]))), (min((arr_20 [i_0] [i_1] [i_5]), (((/* implicit */long long int) var_4)))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_3)))))));
                }
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) arr_4 [5] [i_0] [5]))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((_Bool) (!((!(((/* implicit */_Bool) var_7))))))))));
}

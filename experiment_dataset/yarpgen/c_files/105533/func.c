/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105533
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
    var_10 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_12 [0LL] [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) var_1);
                            var_11 = ((/* implicit */long long int) ((min((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9))))));
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_5 [i_2] [i_3])) | (var_0)));
                            var_13 = ((int) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_0])) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 1])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_1))));
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_1))));
                            arr_20 [i_4] [i_5] [i_4] [(unsigned char)12] [i_4] = ((/* implicit */long long int) ((min((arr_1 [i_1 - 1]), (arr_1 [i_1 + 1]))) ^ (((((/* implicit */int) var_9)) ^ (arr_5 [i_1 + 1] [i_1 + 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */int) (((~(((((/* implicit */_Bool) var_7)) ? (var_0) : (var_6))))) + (var_6)));
    var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((2996441647151426828LL), (((/* implicit */long long int) var_1))))) ? (((unsigned long long int) var_7)) : (((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
    var_18 = ((/* implicit */unsigned char) var_1);
}

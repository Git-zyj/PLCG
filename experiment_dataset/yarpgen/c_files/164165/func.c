/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164165
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_1]);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        arr_9 [i_0] [i_2] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */int) (signed char)64);
                        arr_10 [i_0] [i_0] [i_1] [9] [i_3 + 3] [i_3] = ((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_1 [i_3 + 1]), (arr_1 [i_0]))))))) > (((/* implicit */int) ((short) arr_2 [i_0] [i_0]))));
                        arr_11 [i_3] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) (unsigned char)167)), (max((((/* implicit */long long int) arr_3 [i_1] [i_1] [1U])), (((arr_8 [i_0] [i_1] [i_2] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) (short)-2048)))))))));
                        arr_12 [i_0] [i_0] = ((/* implicit */signed char) arr_4 [6LL] [i_2]);
                        var_20 = ((/* implicit */short) ((((max((((/* implicit */unsigned int) arr_0 [7LL])), (arr_1 [i_1]))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_2]))))) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (unsigned char)99))));
                    }
                    arr_13 [i_0] = ((/* implicit */short) arr_7 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_2);
    var_22 = ((/* implicit */signed char) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))), (((/* implicit */int) ((short) var_19)))));
}

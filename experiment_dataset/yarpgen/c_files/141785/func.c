/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141785
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
    var_19 = ((/* implicit */signed char) var_3);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_2 - 1] = ((/* implicit */_Bool) max((((/* implicit */int) min((arr_3 [i_1 - 1]), (arr_3 [i_2 + 1])))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_1 - 1]))))));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (unsigned short)59370);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_5 [i_1 - 1] [i_1] [i_2 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59391))) : (((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3 - 1]))) : (arr_5 [i_0] [i_2 - 1] [4LL])))));
                        arr_15 [8LL] [i_1 - 1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (((-(arr_2 [i_1 - 1] [i_2 + 1] [i_3 - 1]))) | (((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_2 + 1] [i_3 - 1])) ? (arr_2 [i_1 - 1] [i_3] [i_3 - 1]) : (arr_2 [i_1 - 1] [i_1 - 1] [i_3 - 1])))));
                    }
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((arr_6 [i_2 + 1] [i_1] [i_0]), (((/* implicit */int) arr_8 [i_0]))))) + (((((/* implicit */unsigned long long int) ((-7798719521759719170LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59391)))))) + (arr_5 [i_0] [i_1] [i_2])))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
    var_23 = ((/* implicit */unsigned char) max((var_5), (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))));
}

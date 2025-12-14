/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132336
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
    var_19 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (min((var_11), (((/* implicit */unsigned long long int) var_15)))))))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max(((+(min((((/* implicit */int) var_6)), (-310603292))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) var_0)))))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)171)) & (arr_0 [i_0]))))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (min((((min((945664987U), (((/* implicit */unsigned int) arr_2 [i_0])))) + (((/* implicit */unsigned int) (~(arr_2 [i_0])))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_2 [i_0]) == (arr_0 [(signed char)7])))) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (3627292685U)))))))))));
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) max((var_2), (((/* implicit */short) (signed char)124))))), (min((arr_0 [i_0]), (((/* implicit */int) (signed char)-106))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (((((/* implicit */_Bool) (unsigned char)86)) ? (3145829091214492238ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))))) : (min((arr_2 [i_0]), (arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) var_3);
        var_24 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_0)), (((unsigned long long int) (-(-303001997))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 3627292685U)) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) + (((/* implicit */unsigned int) 310603291))))) ? (max((arr_9 [i_3] [i_1] [i_1]), (arr_9 [i_3] [(unsigned char)13] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max((1428391866), (310603291)))) ^ (5U))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 13; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            {
                                var_25 *= ((/* implicit */unsigned int) arr_9 [i_1] [i_1] [i_3]);
                                arr_19 [i_1] [i_1] [i_3] [i_4] [1ULL] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) >= (arr_17 [i_1] [i_2] [i_2] [i_1] [i_4] [i_4]))))));
                                arr_20 [i_1] [(unsigned char)1] [i_4] [(unsigned char)1] [i_2] [i_1] = ((/* implicit */signed char) 127222576U);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}

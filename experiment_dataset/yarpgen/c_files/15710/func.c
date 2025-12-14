/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15710
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) (signed char)-106)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_16 = ((((_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((unsigned char) (signed char)-106))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) var_0))))), (arr_2 [(short)7])))) ? ((~(arr_7 [i_2] [i_3]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_8 [i_3] [(_Bool)1])) : (((/* implicit */int) arr_8 [i_0] [i_0]))))));
                                arr_14 [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (signed char)115);
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_2] [i_3])) | (((((/* implicit */int) arr_6 [i_0] [8] [i_3])) ^ (152640845)))));
                                var_19 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])) ? (arr_10 [3U] [i_1] [i_2] [i_3] [16U]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108))))) | (((/* implicit */unsigned int) var_8))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_4])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_3 [5LL] [5LL] [i_2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_21 = (-(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (((/* implicit */int) arr_16 [i_5] [i_5])) : (((/* implicit */int) var_3))))) / (((-3833398168544927535LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned int) var_1);
    }
}

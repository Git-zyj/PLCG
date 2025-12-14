/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183407
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
    for (int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_3 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3 + 2] [i_0 + 2]))) : (((arr_5 [i_0] [i_0] [i_0 + 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1])))))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_8 [i_3] [(_Bool)1] [i_2])), (arr_6 [i_0 - 1] [i_1])))) && (((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))))))));
                        arr_11 [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)0))));
                        var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_3])) ? (var_13) : (var_13)))) ? ((-(arr_7 [i_3] [i_1] [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_3] [i_0] [i_0])) / (((/* implicit */int) arr_0 [i_3] [(unsigned short)7]))))))), (((/* implicit */unsigned long long int) min((((long long int) arr_9 [i_3] [i_3])), (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_3] [i_2] [i_0])) / (((/* implicit */int) var_3))))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 1; i_4 < 10; i_4 += 2) 
                    {
                        var_19 = ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 - 2])) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 2])) : (((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 1])));
                        var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [7LL] [i_2] [7LL])) ? (((/* implicit */int) arr_15 [i_0])) : (((/* implicit */int) arr_0 [i_2] [i_1])))) * (((/* implicit */int) (!(arr_0 [i_0] [i_0]))))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_1] [i_2]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1] [i_2])))))) : (arr_4 [i_0] [i_1] [i_0 + 2])));
                        arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((_Bool) arr_10 [i_4 + 2] [0] [i_1])) && (((/* implicit */_Bool) ((long long int) var_0)))));
                    }
                    for (int i_5 = 3; i_5 < 9; i_5 += 1) 
                    {
                        var_22 = max((((/* implicit */int) ((signed char) arr_1 [i_0] [i_5 - 2]))), (((int) (~(((/* implicit */int) (signed char)0))))));
                        arr_20 [i_5] = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9353960040261115316ULL)) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) (signed char)-3))))), ((+(var_7))))));
                    }
                    var_23 = ((/* implicit */_Bool) ((unsigned char) arr_8 [i_0] [i_0 - 2] [i_0 + 1]));
                    var_24 = ((/* implicit */int) arr_9 [i_0 - 1] [i_0]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 1) 
    {
        arr_24 [i_6 + 2] = ((/* implicit */unsigned short) arr_23 [10ULL]);
        arr_25 [i_6] [(_Bool)1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1] [(_Bool)1]))));
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6 - 1] [i_6 + 1]))) | (arr_14 [i_6 + 2] [i_6 - 1] [i_6] [i_6] [i_6])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))) - (arr_18 [(signed char)0]))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_18 [i_6]))))))));
    }
}

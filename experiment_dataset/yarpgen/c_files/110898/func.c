/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110898
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
    var_14 &= ((/* implicit */long long int) ((((/* implicit */int) var_9)) < (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))))))));
    var_15 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_16 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((var_13) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_1])))) - (((((/* implicit */int) var_9)) + (((/* implicit */int) var_1))))))), (((((/* implicit */unsigned int) arr_4 [i_1] [i_0])) & (arr_7 [i_2] [i_1] [i_0])))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_2 [i_0]))) < (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_0]))) ? (((/* implicit */int) max((((/* implicit */short) var_7)), (arr_3 [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2])) || (((/* implicit */_Bool) arr_3 [i_2])))))));
                }
                for (int i_3 = 1; i_3 < 6; i_3 += 4) 
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_3 + 3])) >= (arr_4 [i_0] [i_1])))) < (((((/* implicit */_Bool) var_10)) ? (arr_10 [i_0] [i_1] [i_3 + 4]) : (arr_4 [i_0] [i_3 - 1])))));
                    arr_11 [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3])) ? (((((/* implicit */_Bool) var_1)) ? (arr_0 [i_1]) : (((/* implicit */int) arr_3 [i_0])))) : (((((/* implicit */int) var_3)) / (var_12)))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_3 - 1] [i_0])) ? (arr_5 [i_0] [i_3 + 1] [i_3 + 2]) : (arr_5 [i_0] [i_3 + 2] [i_3]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_0])), (var_12)))) : (((var_13) ? (((/* implicit */unsigned int) arr_4 [7ULL] [i_1])) : (arr_8 [0ULL] [i_3 + 1]))))))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_3 + 1])) ? (arr_4 [i_0] [i_3 + 3]) : (arr_4 [i_1] [i_3 + 1])))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_9 [i_0] [i_3 + 2] [i_3] [i_0])) : (arr_4 [i_0] [i_3 + 1]))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_3 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [0ULL] [i_3 + 1] [i_3] [i_1])))))))));
                }
                var_21 *= ((/* implicit */short) arr_4 [i_0] [i_1]);
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((var_12) >= (((/* implicit */int) var_5))));
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((var_13) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((var_3) ? (((/* implicit */int) var_8)) : (var_12)))))))))));
}

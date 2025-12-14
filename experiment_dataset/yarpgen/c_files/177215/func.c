/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177215
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
    var_12 = ((/* implicit */signed char) var_2);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_2 [i_2])))), (((/* implicit */int) (signed char)-30))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) arr_0 [i_2]))));
                        arr_10 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_3] [(short)19] [i_1] [i_0] [i_0]))));
                        var_15 = var_5;
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_9 [i_0])), ((unsigned short)22469)))) ? (((/* implicit */int) arr_6 [i_0] [12ULL] [i_3])) : ((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_0])))))))));
                    }
                    var_17 = ((/* implicit */unsigned long long int) (-(max((max((var_11), (arr_4 [i_0] [i_0] [i_2] [i_2]))), (((/* implicit */int) ((1972690688U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_1] [i_1] [i_1] [(_Bool)1] [i_0]))))))))));
                    var_18 |= ((max((max((arr_1 [i_1] [i_1]), (arr_1 [i_0] [i_2]))), (((/* implicit */long long int) arr_2 [i_1])))) * (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_7 [i_0] [(unsigned char)1] [(unsigned char)1])) : (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [(unsigned short)15])) < (((/* implicit */int) arr_3 [i_1]))))) : (((/* implicit */int) arr_0 [i_2]))))));
                    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])) >= (var_5)))), ((-(((/* implicit */int) arr_2 [i_2]))))));
                }
            } 
        } 
    } 
}

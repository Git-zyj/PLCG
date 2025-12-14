/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141109
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) arr_2 [i_0]))))), ((-(((/* implicit */int) min((arr_2 [i_0]), ((short)0))))))));
        arr_5 [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)3), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)13))))))))) % (max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_1 [i_0] [i_0])) : (arr_0 [i_0] [(short)2]))), (((/* implicit */unsigned int) (+(arr_1 [(short)7] [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_6 [i_0] [i_0] [i_0]))) ? ((((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_2])))) ? ((+(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_1])))) : (((/* implicit */int) (unsigned char)3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)3)), (arr_6 [i_2] [i_2] [i_2])))))))));
                    var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_1 [i_0] [i_1]))))));
                    var_13 = ((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_2] [i_0]))) : ((+(arr_0 [i_0] [i_2]))));
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (short)-26432))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((arr_8 [i_0] [i_0]), (((/* implicit */int) (unsigned char)255))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (arr_7 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0]))))));
    }
    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        arr_16 [i_3] [i_3] = ((/* implicit */signed char) (~(((int) (short)127))));
        arr_17 [(unsigned char)5] = ((/* implicit */unsigned long long int) max((arr_1 [i_3] [i_3]), (((/* implicit */int) var_10))));
        arr_18 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_3] [i_3] [i_3])) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3])))))));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), ((-(min((arr_7 [i_3] [i_3]), (((/* implicit */unsigned long long int) max((arr_15 [i_3]), (((/* implicit */unsigned int) arr_2 [(short)10])))))))))));
    }
    var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned char)253)), ((-(var_1)))));
    var_17 = ((/* implicit */short) (unsigned char)252);
}

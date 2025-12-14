/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111504
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_0 [i_0 + 1]), (var_4)))) != (((/* implicit */int) var_3))));
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned long long int) var_8);
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 7; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_10 = ((/* implicit */unsigned short) var_3);
                            var_11 = ((/* implicit */int) var_3);
                            arr_15 [i_0] [(unsigned short)5] [(short)3] [i_0] [i_2] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_8 [i_1 + 1])))), ((-(((/* implicit */int) var_3))))));
                            arr_16 [i_0] [i_1] [1ULL] [i_0] [i_3] [i_2] = ((/* implicit */unsigned short) (+(((unsigned long long int) 1048575))));
                            arr_17 [i_0] [i_1] [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) arr_14 [(_Bool)1] [i_1 - 1] [i_2 - 1] [i_3] [i_4])) != (arr_10 [(unsigned short)6] [i_2 + 3] [(short)1] [i_4]))));
                        }
                        for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            arr_21 [(short)7] [i_2] [(unsigned short)4] [i_2] [(unsigned short)1] = ((/* implicit */unsigned int) arr_20 [i_0] [i_0] [i_2] [3U] [i_5]);
                            var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((unsigned short) arr_6 [(short)8] [i_1])))));
                        }
                        arr_22 [i_0] [i_2] [i_2 + 1] = ((/* implicit */short) (((-(arr_14 [i_0] [i_0 + 2] [i_2 + 3] [i_3] [4]))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0 + 2] [i_3] [i_2] [i_2] [i_2 + 2]))))))));
                        arr_23 [i_3] [i_2] [i_1 + 1] [(short)9] [i_2] [i_0 - 1] = ((/* implicit */unsigned int) ((int) (unsigned short)14884));
                        arr_24 [i_2] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) var_6);
                    }
                } 
            } 
        } 
        arr_25 [i_0 + 1] [i_0] = ((/* implicit */unsigned int) 6208215690235752116ULL);
    }
    for (unsigned short i_6 = 1; i_6 < 8; i_6 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) arr_27 [i_6 + 1]))));
        var_14 |= ((/* implicit */unsigned short) arr_5 [i_6] [i_6]);
    }
    var_15 = var_9;
    var_16 = ((/* implicit */int) var_1);
    var_17 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (var_1)))));
}

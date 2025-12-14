/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148908
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_2)) : (var_6))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_2 [i_0] [i_0])), (max((((/* implicit */int) arr_0 [i_0])), (var_11))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) ((int) max((((/* implicit */int) var_3)), (arr_6 [i_1]))));
                                var_13 = ((/* implicit */unsigned int) ((min((((((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) (unsigned char)60)))), (((/* implicit */int) min((arr_11 [i_4 + 1] [i_1] [i_2] [i_1] [i_1] [i_0]), (var_0)))))) - (((/* implicit */int) max((arr_13 [i_1] [i_1] [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_4 - 1]), (arr_13 [i_1] [i_1] [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_4 - 1]))))));
                                arr_15 [i_1] [i_1] [i_2 + 2] [i_3] [i_4] [i_1] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] [i_4 - 2])) && (((/* implicit */_Bool) (unsigned char)218))))))), (((max((((/* implicit */int) var_7)), (var_1))) ^ (((((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 2])) + (((/* implicit */int) (unsigned char)29))))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (unsigned char)122);
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */unsigned char) 0U);
    }
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (-(var_6))))));
}

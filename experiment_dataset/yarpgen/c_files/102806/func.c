/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102806
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((((unsigned int) arr_4 [i_0 + 2])), (((var_17) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_5 [i_0] [i_3])))))) ? (arr_12 [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_3 + 2]), (((/* implicit */signed char) arr_6 [i_3 + 2] [i_0 + 2]))))))));
                        arr_13 [i_3] [i_1] [i_2] [12U] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_11), (arr_2 [i_0])))) ? ((~(arr_2 [i_0 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 1; i_4 < 21; i_4 += 2) 
                    {
                        arr_18 [i_2] [13U] = ((/* implicit */unsigned long long int) (((-(max((3791264175U), (((/* implicit */unsigned int) var_3)))))) / (((/* implicit */unsigned int) ((/* implicit */int) min((arr_16 [i_4 + 1] [i_2] [i_2] [i_4]), (arr_16 [i_4 + 1] [i_2] [i_2] [i_4])))))));
                        var_21 = ((/* implicit */_Bool) ((unsigned int) 0));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((-1), (-1)))) ? (((/* implicit */int) ((short) max((var_0), (((/* implicit */unsigned long long int) var_17)))))) : (((/* implicit */int) ((((/* implicit */int) var_2)) < (((1) >> (((((/* implicit */int) (signed char)-126)) + (156))))))))));
}

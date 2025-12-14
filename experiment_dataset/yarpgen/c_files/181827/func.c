/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181827
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
    var_17 = ((/* implicit */long long int) max(((+(((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_16))))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_7)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) (((~((+(((/* implicit */int) arr_3 [i_1] [i_1] [i_0])))))) <= (((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) max((arr_3 [i_1 + 1] [i_1 + 1] [i_0]), (arr_3 [i_1 - 1] [i_1 - 1] [i_0])))) : (((/* implicit */int) ((short) arr_0 [i_0])))))));
                var_19 -= ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_3 [i_1 + 1] [i_1] [i_1 + 1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 2; i_3 < 12; i_3 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((unsigned int) min((arr_5 [i_2]), (arr_5 [i_2]))));
                var_21 = ((/* implicit */_Bool) min((((arr_3 [i_3 + 1] [i_3 - 1] [i_3 - 2]) ? ((-(((/* implicit */int) arr_6 [i_2 - 1])))) : (((arr_5 [i_2]) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_0 [i_2])))))), (((/* implicit */int) max((arr_6 [i_2 - 1]), (arr_6 [i_2 - 1]))))));
                /* LoopSeq 1 */
                for (signed char i_4 = 4; i_4 < 12; i_4 += 4) 
                {
                    arr_11 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1])))), ((~(((/* implicit */int) arr_5 [i_2]))))));
                    arr_12 [i_2] [i_2] = ((((((/* implicit */_Bool) arr_6 [i_3 - 2])) ? (((/* implicit */int) arr_3 [i_3 - 2] [i_4 - 4] [i_2 - 1])) : (((/* implicit */int) arr_6 [i_3 - 2])))) > (((/* implicit */int) max((((/* implicit */signed char) arr_3 [i_2] [i_2] [i_2])), (arr_10 [i_3 - 2] [i_3 - 2] [i_3 - 2])))));
                    var_22 = ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)51015)));
                    arr_13 [i_2] [i_2] [i_2 - 1] [i_2] = ((/* implicit */unsigned char) ((unsigned short) min((arr_5 [i_2]), (arr_5 [i_2]))));
                }
            }
        } 
    } 
}

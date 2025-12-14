/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184772
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) min((var_7), (((/* implicit */unsigned int) (unsigned char)49)))))) ? (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_14)), ((unsigned short)10933)))))) : (((/* implicit */unsigned int) min((min((2079145336), (((/* implicit */int) (unsigned short)65169)))), (((/* implicit */int) (short)22733)))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) min((min((((/* implicit */int) ((short) (unsigned short)65198))), (-488146557))), (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
            arr_7 [i_0 - 1] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_4 [i_0 - 1] [i_0 - 1]), (arr_4 [i_0 - 1] [i_0 - 1])))) ? (((arr_4 [i_0 - 1] [i_0 - 1]) << (((((/* implicit */int) var_9)) - (239))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_4 [i_0 - 1] [i_1]))))));
        }
        var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])) | (((/* implicit */int) (unsigned short)346))))) ? (((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_11))))) : (((/* implicit */int) (unsigned short)10945))))) ? (arr_6 [i_0]) : (((/* implicit */int) var_9))));
        var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */int) arr_0 [i_0 - 1])) + ((-(((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))))));
        var_18 |= ((/* implicit */unsigned long long int) max((((/* implicit */int) min((((unsigned short) var_12)), (((/* implicit */unsigned short) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))), (arr_6 [i_0])));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 24; i_2 += 2) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */long long int) arr_10 [i_2]);
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((arr_13 [i_2] [i_2 - 1]) == (((/* implicit */unsigned long long int) var_0))));
            arr_16 [i_3] = ((/* implicit */unsigned char) arr_8 [i_2 + 1]);
            arr_17 [i_2] = ((/* implicit */int) ((arr_11 [i_2 + 1]) - (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3])))));
            arr_18 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((signed char) arr_11 [i_2 - 1]));
        }
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            arr_22 [i_2] [i_2] [i_2] = ((arr_11 [i_2 + 1]) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 - 1]))));
            arr_23 [i_4] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) var_12)) | (((/* implicit */int) arr_20 [i_2] [i_4] [i_2 - 1]))))) / (((((/* implicit */_Bool) (unsigned char)92)) ? (arr_11 [i_2 + 1]) : (((/* implicit */long long int) arr_9 [i_2]))))));
        }
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            arr_28 [i_2] [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2 - 1])) ? (((/* implicit */int) arr_20 [i_2] [i_5] [i_2 - 1])) : (((/* implicit */int) arr_10 [i_2 - 1]))));
            var_19 = ((((/* implicit */_Bool) arr_10 [i_5])) ? (((/* implicit */int) arr_20 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_10 [i_2 - 1])));
            var_20 = ((/* implicit */_Bool) ((unsigned short) arr_13 [i_2 - 1] [i_2 + 1]));
        }
        var_21 |= ((/* implicit */_Bool) var_7);
    }
    var_22 |= ((/* implicit */long long int) ((unsigned long long int) var_7));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120764
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_3 [i_2 + 4]), (((/* implicit */signed char) arr_2 [i_2 + 1] [i_1 + 1])))))));
                        arr_11 [i_0] [i_0] [i_1] [i_2 + 2] [i_2 + 3] [i_3] &= ((/* implicit */_Bool) arr_10 [i_0] [i_1 + 1] [i_2 + 2] [i_3]);
                        var_21 = ((/* implicit */signed char) (-(((/* implicit */int) arr_2 [i_2 - 1] [i_1 + 1]))));
                        arr_12 [i_0] = var_9;
                    }
                    arr_13 [i_0] = max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1]))))), (((((/* implicit */_Bool) ((unsigned char) arr_8 [i_0] [i_1 - 2]))) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1 + 1]))))))));
                    var_22 = ((/* implicit */long long int) (+(((/* implicit */int) var_14))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                {
                    arr_24 [i_4] [i_4] [i_4] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (((((unsigned int) var_17)) | (((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_4] [i_4] [i_5] [i_6]) == (((/* implicit */long long int) ((/* implicit */int) var_1)))))))))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_0) < (arr_4 [i_6] [i_5]))))) > ((+(max((((/* implicit */unsigned int) arr_17 [i_5])), (var_10)))))));
                }
            } 
        } 
    } 
    var_24 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_8))) & (((/* implicit */unsigned int) var_16))))) ? (var_17) : (((((/* implicit */long long int) (-(((/* implicit */int) var_12))))) - ((~(var_15))))));
}

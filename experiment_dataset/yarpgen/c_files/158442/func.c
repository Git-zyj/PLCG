/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158442
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-110)) ? (min((((/* implicit */unsigned long long int) (-(1603915004U)))), (((((/* implicit */unsigned long long int) 3374295501U)) / (arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) ((unsigned int) var_3)))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) & (18446744073709551604ULL)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(signed char)10])) ? (min((((/* implicit */unsigned int) max(((signed char)127), ((signed char)0)))), (((((/* implicit */unsigned int) -807300482)) * (4294967295U))))) : (min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) != (var_15)))), (max((((/* implicit */unsigned int) var_1)), (var_0))))))))));
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (signed char i_5 = 2; i_5 < 9; i_5 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 1; i_6 < 8; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */signed char) arr_11 [i_2] [i_3] [i_2]);
                            arr_18 [i_2] [i_3] [i_4] [i_2] [i_6] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [i_2] [2] [i_4 - 1])) : (807300482))));
                        }
                        arr_19 [i_2] [i_3] [i_2] [i_4] [i_3] = ((((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) <= (((/* implicit */int) ((2293810822U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_9 [i_5 - 2] [(_Bool)1] [i_4 - 1])) : (((/* implicit */int) arr_9 [i_5 - 1] [i_5 - 1] [i_4 - 1]))))) : ((+(((unsigned int) var_12)))));
                        var_24 = ((/* implicit */long long int) (signed char)-119);
                        var_25 = (-(min((arr_13 [i_4 - 1] [i_4 - 1] [i_2] [i_4 - 1] [i_4]), (arr_12 [i_2] [i_4 - 1] [i_4 - 1]))));
                        arr_20 [i_2] [i_3] [i_3] [8U] [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) (signed char)26))), (min((((/* implicit */unsigned int) (signed char)-1)), (1387523979U)))));
                    }
                } 
            } 
        } 
    }
}

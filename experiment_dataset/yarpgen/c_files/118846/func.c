/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118846
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_15 = ((((/* implicit */int) var_6)) + (((/* implicit */int) (_Bool)1)));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_5 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 5)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (short)32767))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (var_3)))));
            var_17 = ((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)-1)) + (17))))) & (((/* implicit */int) (!(((/* implicit */_Bool) (short)32757))))));
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_0 + 2])) + (((/* implicit */int) var_7))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) >= (((((-399707643) + (2147483647))) >> (((((/* implicit */int) var_10)) + (12488)))))));
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) 377026438345968088LL)) && (((/* implicit */_Bool) (-(-470784570))))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)124)))))))), (max((((/* implicit */int) (_Bool)0)), (-1313094458)))));
}

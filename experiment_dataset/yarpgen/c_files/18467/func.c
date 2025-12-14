/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18467
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
    var_20 = var_2;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_1 [i_1 + 3]))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((arr_4 [i_1 + 1] [i_1 + 1]) >> ((((+(arr_0 [i_1 + 1]))) - (154322765)))));
                            var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3 + 2])) ? (((((/* implicit */int) arr_1 [6])) + (((/* implicit */int) arr_5 [i_3 - 1] [i_0] [i_0])))) : (((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_1 + 3]))))) ? (((((/* implicit */int) arr_1 [i_1 + 1])) / (((/* implicit */int) arr_9 [i_0] [i_1 + 3] [i_2] [i_3 - 1])))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 3] [i_3] [i_3 - 1])) ? (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_0] [i_3 + 2])) : (((/* implicit */int) arr_7 [i_1] [i_1 + 3] [i_2] [i_2])))));
                            arr_11 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [6LL] [i_1 - 1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) arr_6 [i_0])) : (arr_4 [i_3 + 1] [i_3 - 1])))) ? (((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3])) & (arr_0 [i_0]))) : (((/* implicit */int) ((2275540944502288668ULL) != (((/* implicit */unsigned long long int) 1363893871U)))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)110))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_2]))))) ? (((((/* implicit */_Bool) (unsigned short)14036)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14058))) : (10774125605434887616ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [(short)8])))))));
                            arr_12 [i_0] [i_3] [i_0] [i_0] = arr_5 [i_0] [(signed char)11] [i_3 - 1];
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_8);
}

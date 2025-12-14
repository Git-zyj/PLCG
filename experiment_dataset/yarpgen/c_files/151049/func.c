/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151049
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) arr_6 [i_1 - 1] [i_3 + 1] [i_1 - 1] [i_1 - 1]);
                        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) arr_8 [i_0 - 1] [i_0] [i_3]))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 19; i_4 += 2) 
                    {
                        arr_14 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((int) arr_1 [i_0]));
                        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-80)) % (((/* implicit */int) ((signed char) (signed char)(-127 - 1)))))))));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 1; i_5 < 18; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_0] [i_2] [(signed char)6] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_5 + 1]))));
                            arr_18 [i_0] [i_0] [i_0] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) arr_10 [i_1]);
                        }
                        for (signed char i_6 = 3; i_6 < 19; i_6 += 4) 
                        {
                            arr_21 [i_0 - 1] [i_1 + 2] [i_2] [i_0] [i_2] = ((/* implicit */signed char) arr_5 [i_0] [i_0]);
                            arr_22 [(short)1] [i_1] [i_0] [i_4] [i_6 - 1] = ((/* implicit */unsigned long long int) (signed char)-41);
                        }
                    }
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        var_14 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0]))));
                        arr_26 [i_0] = ((/* implicit */int) arr_20 [i_2] [i_7]);
                    }
                    var_15 = ((/* implicit */signed char) max((61440LL), (((/* implicit */long long int) (signed char)16))));
                    var_16 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_11 [i_0 + 2] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_11 [i_0 + 3] [i_0 + 2] [i_0])) : (((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0])))), (((((/* implicit */int) var_0)) % (((/* implicit */int) arr_24 [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 2] [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_8 = 2; i_8 < 21; i_8 += 3) 
    {
        for (int i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) ((((arr_28 [i_8 - 2] [i_8]) < (arr_31 [i_8] [i_8]))) ? (((((/* implicit */int) (short)10403)) - (-2129269274))) : (((((/* implicit */int) (signed char)17)) - (((/* implicit */int) var_4))))));
                arr_32 [i_8] [i_8] [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_28 [i_8 + 1] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-13))) : (arr_28 [i_8 + 1] [i_8]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_8 - 1] [i_8]))))))));
            }
        } 
    } 
    var_18 = var_5;
}

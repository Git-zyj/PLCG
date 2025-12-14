/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144646
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 3; i_3 < 19; i_3 += 1) 
                    {
                        var_17 += ((/* implicit */signed char) var_5);
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)45))))) / (((2779299337U) >> (((((/* implicit */int) (signed char)47)) - (47)))))));
                        arr_11 [i_0] [i_1] [i_0 - 1] [i_0] = ((/* implicit */_Bool) ((arr_10 [i_1] [i_3] [i_2 - 1] [i_1]) / (arr_10 [i_1] [i_1] [i_2 + 3] [i_1])));
                    }
                    for (short i_4 = 3; i_4 < 18; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) var_6);
                        arr_15 [19U] [i_1] [i_2] [i_4] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) ((signed char) arr_1 [i_0 - 1]))) : ((-(((/* implicit */int) arr_4 [11U] [i_1]))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 19; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) arr_8 [(short)17] [(short)5] [(short)16] [i_4] [i_5] [i_5]);
                            var_21 = ((/* implicit */_Bool) arr_7 [i_1] [(_Bool)1] [i_1] [i_5]);
                            var_22 = ((arr_0 [i_4 + 1] [i_5 - 1]) << (((arr_0 [i_4 + 1] [i_5 - 1]) - (349753969))));
                        }
                    }
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned char) (signed char)100))))) ? (((/* implicit */unsigned int) ((arr_2 [i_0 - 1]) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1]))))) : (((((/* implicit */_Bool) (unsigned char)54)) ? (1907858881U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1])))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) min((((/* implicit */int) (((((_Bool)0) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))))) == (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))), (((((2779299338U) != (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_8))))));
}

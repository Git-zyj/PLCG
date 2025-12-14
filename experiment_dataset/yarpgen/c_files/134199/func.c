/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134199
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            var_11 = ((/* implicit */_Bool) max((var_11), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_3] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_4 - 1])))))))));
                            arr_12 [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)123))));
                            arr_13 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)123)) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (unsigned short)29722)))) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [(signed char)3] [(_Bool)1] [i_2] [i_2]))));
                            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (-(((/* implicit */int) arr_6 [i_4 - 2])))))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] = ((/* implicit */unsigned long long int) (!(arr_9 [i_4] [i_4] [i_4 - 1] [i_4 - 2] [i_4 - 2])));
                        }
                        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)119)))))));
                        var_14 = arr_11 [i_0] [i_1] [i_3] [i_0] [i_3] [i_2] [i_1];
                        var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) min((arr_11 [i_0] [i_0] [i_0] [(short)5] [(short)5] [i_0] [i_0]), ((unsigned char)59))))))) : (((((/* implicit */_Bool) arr_8 [i_3] [i_2] [i_1] [i_0])) ? ((-(arr_7 [i_3] [i_0] [i_1] [i_0] [i_0]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))))))));
                    }
                } 
            } 
        } 
        var_16 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_5 [i_0] [i_0] [i_0] [i_0])), (arr_6 [i_0])))) ? (((/* implicit */int) (unsigned short)11427)) : (((((/* implicit */_Bool) min(((unsigned short)35802), (((/* implicit */unsigned short) (unsigned char)59))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (short i_5 = 4; i_5 < 17; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_6 = 3; i_6 < 14; i_6 += 3) 
        {
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_17 [i_5 - 4] [i_6 - 3])));
            var_18 += ((/* implicit */unsigned short) (short)25178);
            arr_19 [i_5] = ((/* implicit */unsigned long long int) (-(arr_17 [i_5 + 1] [i_6 + 4])));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_22 [i_5] = ((/* implicit */unsigned char) arr_16 [i_5]);
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5 - 2] [i_5 - 1] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8192))) : (arr_18 [i_5 - 3] [i_7] [i_7])));
            var_20 += ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_5 - 4] [i_7])) ? (arr_17 [i_5 + 1] [i_7]) : (arr_17 [(short)8] [i_7])));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_5 - 2] [i_5 - 1])) ? (arr_17 [i_5 - 1] [i_5 - 4]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7)))));
        }
        var_22 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
    }
    var_23 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)25178))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))));
}

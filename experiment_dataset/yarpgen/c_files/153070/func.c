/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153070
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) (-(arr_1 [i_0 + 3])));
        arr_2 [i_0] = arr_1 [22];
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0 + 2]);
    }
    for (signed char i_1 = 1; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */short) arr_0 [(signed char)14] [(signed char)14]);
        /* LoopNest 3 */
        for (long long int i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            for (short i_3 = 1; i_3 < 22; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    {
                        arr_13 [(_Bool)1] [i_2 + 1] [i_3 + 1] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) min((((/* implicit */signed char) arr_5 [i_1 + 3])), ((signed char)-114))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_8 [i_1 - 1] [i_3 + 1] [i_5])))))))));
                            var_15 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_1 + 3] [i_2 - 1] [i_3 - 1] [i_5] [i_5])) || (((/* implicit */_Bool) arr_6 [i_2]))))), (max((var_2), (((/* implicit */int) (_Bool)1))))));
                            arr_17 [i_1] [i_1 + 3] [i_1] [i_1 - 1] [i_1] [i_2] [16] = ((/* implicit */unsigned long long int) (-((~(arr_6 [i_2])))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_6 = 2; i_6 < 19; i_6 += 4) 
    {
        arr_20 [i_6 + 1] [i_6] |= ((int) (+(((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6 - 1] [i_6] [i_6] [i_6]))) : (-9223372036854775799LL)))));
        var_16 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [22U] [22U] [i_6 - 1] [i_6] [i_6 - 2])) || (((/* implicit */_Bool) arr_14 [(short)12] [(short)12] [i_6] [i_6] [i_6 - 1]))))), (min((((/* implicit */unsigned int) arr_1 [i_6])), (max((((/* implicit */unsigned int) arr_7 [i_6])), (arr_11 [i_6 - 1] [i_6 - 2] [i_6 + 1] [i_6] [i_6 + 1]))))));
        /* LoopNest 3 */
        for (short i_7 = 3; i_7 < 19; i_7 += 4) 
        {
            for (unsigned char i_8 = 4; i_8 < 18; i_8 += 4) 
            {
                for (unsigned int i_9 = 3; i_9 < 19; i_9 += 4) 
                {
                    {
                        arr_30 [i_7] = arr_22 [i_6];
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_7])) ? (max((((/* implicit */unsigned int) arr_14 [i_8] [i_7 - 2] [i_7 - 3] [i_9 - 3] [i_7 - 3])), (arr_19 [i_6 - 1] [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_9 - 1])) || (((/* implicit */_Bool) arr_4 [i_9 - 1]))))))));
                        var_18 |= var_4;
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned short) arr_11 [i_6] [i_6] [i_6] [14LL] [i_6]);
        arr_31 [i_6] = ((/* implicit */unsigned short) min((((arr_6 [i_6]) << (((((((/* implicit */_Bool) arr_14 [i_6 + 1] [i_6] [i_6] [i_6 - 2] [i_6])) ? (((/* implicit */int) arr_7 [i_6])) : (((/* implicit */int) arr_28 [i_6] [i_6] [i_6] [i_6])))) - (229))))), (arr_1 [i_6 - 2])));
    }
    var_20 |= ((/* implicit */unsigned int) var_9);
}

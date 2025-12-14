/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162834
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] = var_14;
                    var_20 &= ((/* implicit */signed char) arr_7 [i_0] [i_1] [i_2] [i_2]);
                    arr_10 [i_0] [i_1] [i_2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 960345256)))) ? (1063981242) : (((/* implicit */int) arr_8 [i_0] [i_2]))))) || (((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (int i_3 = 1; i_3 < 13; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_4 = 2; i_4 < 13; i_4 += 1) 
        {
            var_21 += ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)50609)), (-207648657)));
            arr_17 [i_3] [i_4] [i_4 - 1] = ((/* implicit */unsigned short) ((short) -207648631));
            arr_18 [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) 2147483647)) == (arr_0 [i_3 + 1])))) != (arr_11 [i_3])));
        }
        for (int i_5 = 2; i_5 < 13; i_5 += 4) 
        {
            var_22 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_20 [i_3 - 1] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3]))) : (arr_0 [i_3 + 1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 11; i_6 += 2) 
            {
                for (int i_7 = 1; i_7 < 12; i_7 += 2) 
                {
                    for (int i_8 = 4; i_8 < 10; i_8 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */short) arr_0 [i_6 + 1]);
                            var_24 = 518946314U;
                        }
                    } 
                } 
            } 
        }
        arr_28 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_3] [i_3] [i_3 - 1])) << (((((/* implicit */int) arr_2 [i_3])) - (21963)))));
    }
    for (int i_9 = 1; i_9 < 13; i_9 += 3) /* same iter space */
    {
        var_25 *= ((/* implicit */short) min((((var_2) | (((/* implicit */long long int) ((/* implicit */int) arr_14 [4]))))), (((/* implicit */long long int) arr_14 [(short)4]))));
        /* LoopSeq 1 */
        for (unsigned short i_10 = 2; i_10 < 11; i_10 += 2) 
        {
            arr_33 [i_9] [i_9] = ((/* implicit */int) min((((/* implicit */long long int) 2797495993U)), (1308959239090081509LL)));
            arr_34 [i_10] [i_10 + 3] &= ((/* implicit */long long int) ((((/* implicit */unsigned int) var_11)) == (max((((/* implicit */unsigned int) var_10)), (var_17)))));
            arr_35 [i_9] = ((/* implicit */unsigned int) arr_30 [i_9]);
            arr_36 [i_9] = (i_9 % 2 == 0) ? (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_5 [i_9])))) * (((arr_0 [i_9 - 1]) << (((arr_12 [i_9]) + (4161574845666841951LL))))))))))) : (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_5 [i_9])))) * (((arr_0 [i_9 - 1]) << (((((arr_12 [i_9]) + (4161574845666841951LL))) - (5512199948685595086LL)))))))))));
        }
        var_26 = ((/* implicit */short) (-(((int) ((((/* implicit */_Bool) arr_30 [i_9])) ? (((/* implicit */int) arr_4 [i_9] [i_9] [i_9])) : (((/* implicit */int) (unsigned short)0)))))));
    }
    for (short i_11 = 1; i_11 < 7; i_11 += 4) 
    {
        arr_40 [i_11 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_20 [i_11 + 2] [i_11 + 3] [(unsigned short)2]) & (arr_20 [i_11 + 1] [i_11 - 1] [(short)0])))) ? ((~(((/* implicit */int) ((signed char) (signed char)105))))) : ((((~(arr_23 [i_11] [i_11] [i_11] [i_11] [i_11 - 1]))) & (((int) 2147483637))))));
        var_27 = ((/* implicit */unsigned short) var_2);
    }
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) (signed char)-118)) : (2147483647)));
}

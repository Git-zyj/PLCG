/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161220
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) var_0));
                    arr_10 [(unsigned char)0] [i_0] [i_1] [(short)2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [19LL] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_2] [i_0])) : (((/* implicit */int) var_4))))) | (((1572864ULL) | (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_1] [i_2]))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (var_11)))) ? (((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3]))));
                        var_17 = ((/* implicit */int) ((unsigned short) arr_4 [i_1] [i_3]));
                        var_18 = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_3] [i_2] [i_0] [i_0])) >= (((/* implicit */int) var_15))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_3] [15ULL] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_2]))) : (arr_6 [i_0] [i_1] [i_2] [i_3])));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_4 + 1] [i_4 + 1] [i_4 + 2])) ? (((/* implicit */int) arr_8 [i_4 + 1] [i_4 + 2])) : (((/* implicit */int) arr_8 [i_4 - 1] [i_1])))))));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) << (((/* implicit */int) arr_13 [i_4 + 3] [i_4] [i_4 + 1] [i_4 + 3]))));
                        var_22 = ((/* implicit */signed char) var_9);
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    arr_20 [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) var_6);
                    arr_21 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_5])) && (((/* implicit */_Bool) var_8))));
                }
                /* vectorizable */
                for (unsigned short i_6 = 2; i_6 < 19; i_6 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                    {
                        var_23 *= ((/* implicit */unsigned long long int) ((signed char) var_6));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((arr_12 [i_0] [i_6 + 1] [(signed char)4] [i_7] [13U] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)24)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (signed char)-97))));
                        var_26 = ((/* implicit */unsigned int) (short)29907);
                        var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-114)) ? (arr_12 [8] [i_6] [i_6 + 2] [i_6] [i_6 + 1] [i_6 + 2]) : (((/* implicit */unsigned long long int) 33546240U))));
                        arr_28 [(signed char)12] [i_1] [i_6] [i_8] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_6 [i_0] [i_0] [i_6 - 1] [i_6 - 1]) : (arr_6 [14LL] [i_6] [i_6 - 1] [i_6 - 1])));
                    }
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                    {
                        var_28 -= ((/* implicit */unsigned char) arr_16 [i_0] [i_1] [i_6] [i_1] [i_6]);
                        var_29 = ((/* implicit */signed char) arr_11 [i_6 + 1] [i_6 + 2] [i_9] [i_9]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 2; i_10 < 21; i_10 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_11 = 1; i_11 < 19; i_11 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) arr_18 [i_10 - 2] [i_10 + 1] [i_10 + 1]))));
                            arr_37 [i_1] [i_1] [i_1] [i_10] [i_1] = ((/* implicit */unsigned int) var_8);
                            arr_38 [i_1] = ((/* implicit */short) ((((/* implicit */int) (signed char)57)) >> (((((/* implicit */int) var_14)) + (6812)))));
                        }
                        var_31 = ((/* implicit */int) var_4);
                    }
                    var_32 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_1] [i_1] [i_1] [i_6 + 2])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                }
                var_33 = ((/* implicit */unsigned short) var_10);
                arr_39 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) (short)25704)))))) ? (((((((/* implicit */int) (signed char)-125)) + (2147483647))) << (((((/* implicit */int) (signed char)30)) - (30))))) : (((/* implicit */int) ((signed char) (~(-259267684)))))));
                var_34 = ((/* implicit */long long int) arr_33 [i_0] [i_0]);
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned long long int) (-(1241186496U)));
    var_36 = ((/* implicit */short) var_2);
    var_37 = ((/* implicit */_Bool) var_0);
}

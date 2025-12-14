/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102944
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
    var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-87))) != (((unsigned long long int) (signed char)-87)))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0 + 1])))) ? (((/* implicit */unsigned long long int) max((var_0), (((((/* implicit */int) arr_0 [i_0])) & (var_14)))))) : (min((((/* implicit */unsigned long long int) ((var_2) ^ (((/* implicit */int) arr_1 [i_0]))))), (arr_2 [i_0 + 1])))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 5819988068095346026ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) - (509672204)))) ? (((((/* implicit */_Bool) var_6)) ? (1752449885) : (var_13))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1]))))))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) 206276306)) : (8415296517082929248ULL)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                var_20 = ((/* implicit */int) (((+(883294650))) < (((/* implicit */int) ((signed char) 17907249209530405049ULL)))));
                arr_8 [i_0] [i_1] [i_2] = ((/* implicit */int) arr_2 [i_0]);
            }
            /* vectorizable */
            for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 4) 
            {
                var_21 |= ((/* implicit */int) ((var_8) | (arr_7 [i_0] [i_1 + 1])));
                var_22 = var_13;
                /* LoopSeq 2 */
                for (int i_4 = 1; i_4 < 18; i_4 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1] [i_1])) ? (arr_5 [i_0 + 1] [i_0 - 1] [i_1]) : (arr_5 [i_0] [i_0 + 1] [i_3])))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) ((arr_7 [i_1 - 3] [i_1]) > ((+(var_12)))));
                        var_25 &= ((unsigned long long int) arr_5 [i_4 - 1] [i_1 - 3] [i_3]);
                    }
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        arr_19 [i_0] [i_1] [i_3] [i_4] [i_1] = ((/* implicit */unsigned long long int) ((17907249209530405045ULL) <= (((/* implicit */unsigned long long int) var_11))));
                        var_26 = var_8;
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-6)) ^ (((/* implicit */int) (signed char)-19))))) ? (((/* implicit */int) ((signed char) arr_17 [i_0 + 4] [i_0 + 4] [i_4 + 1] [8]))) : (((var_2) << (((((var_0) + (307610155))) - (10))))))))));
                    }
                    var_28 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_9 [(signed char)17] [i_3] [i_1])) ? (var_3) : (((/* implicit */unsigned long long int) arr_11 [i_4 + 1] [i_3] [i_1 + 1] [i_0 + 1])))) * (((((/* implicit */_Bool) 2147483629)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5))) : (arr_9 [i_4] [i_1 + 1] [i_0])))));
                    arr_20 [i_0] [i_1 - 1] [i_1] [i_4] = ((((/* implicit */_Bool) arr_10 [i_4] [i_3] [i_1] [i_0 + 2])) ? (arr_5 [i_0] [i_0] [i_1 - 3]) : ((-(arr_5 [i_0 + 1] [i_3] [i_3]))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) 12204385043652621055ULL)) ? (((/* implicit */int) (signed char)35)) : (((var_10) & (arr_4 [i_0 + 2] [i_1 + 1])))));
                    arr_24 [i_0 + 4] [i_1] [i_0 + 1] = (signed char)-87;
                    var_30 &= ((/* implicit */unsigned long long int) var_16);
                }
                arr_25 [i_1] [i_1] [i_1] = arr_10 [i_0 + 3] [i_0] [i_3] [i_1];
                /* LoopSeq 4 */
                for (int i_8 = 1; i_8 < 15; i_8 += 4) 
                {
                    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((((/* implicit */int) arr_10 [i_0] [i_1] [i_3] [i_8 + 1])) + (2147483647))) << (((((arr_6 [i_0 + 2] [i_1 - 3] [i_8 - 1]) ^ (var_7))) - (15462221703401495944ULL))))))));
                    var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_12)))));
                    var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83))) - (((((/* implicit */_Bool) 2561099829072071006ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (arr_26 [i_3 + 1] [i_1] [i_3])))));
                    arr_28 [i_0 + 1] [i_0 + 1] [i_1] [i_1] [i_3 + 1] [i_8] = ((/* implicit */unsigned long long int) arr_21 [i_0] [i_1 - 2] [i_3 - 1] [14ULL]);
                }
                for (int i_9 = 1; i_9 < 17; i_9 += 4) 
                {
                    arr_31 [15] [i_0] [i_1] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (signed char)57))) / (((/* implicit */int) arr_27 [i_0] [i_1] [i_1] [i_1 + 1] [i_1]))));
                    arr_32 [4ULL] [i_1] [i_1] [i_9 + 2] = ((/* implicit */signed char) -1817531581);
                    arr_33 [i_0] [i_0 + 3] [i_1] [i_1 - 1] [i_1] [i_9] = ((int) arr_13 [i_0 - 1] [i_0 - 1] [18ULL] [i_0] [i_0 - 1] [i_0 + 2]);
                    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)89))))))));
                }
                for (signed char i_10 = 3; i_10 < 15; i_10 += 4) /* same iter space */
                {
                    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((arr_11 [i_0] [i_1] [i_3 - 2] [i_0 - 1]) ^ (arr_11 [i_0 + 2] [i_1] [i_3] [i_0 + 3]))))));
                    arr_36 [i_3] &= ((/* implicit */unsigned long long int) var_0);
                    var_36 += ((((/* implicit */_Bool) arr_34 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_6 [i_3] [i_3 - 1] [i_3]));
                }
                for (signed char i_11 = 3; i_11 < 15; i_11 += 4) /* same iter space */
                {
                    var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) 10031447556626622352ULL))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_12 = 4; i_12 < 18; i_12 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned long long int) var_5);
                        arr_43 [i_1] = ((/* implicit */signed char) (((~(arr_34 [i_1]))) % (((/* implicit */int) arr_1 [i_0 + 2]))));
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_11 + 1] [i_1] [i_3 - 1] [i_11 - 3] [i_12] [i_12 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_1])) || (((/* implicit */_Bool) arr_22 [i_0 + 4] [i_1] [i_11] [i_12]))))) : (var_10)));
                        var_40 += ((/* implicit */signed char) arr_4 [i_1] [i_0]);
                    }
                    for (unsigned long long int i_13 = 4; i_13 < 18; i_13 += 4) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned long long int) min((var_41), (arr_18 [i_0 + 2] [i_1 - 2] [i_3] [i_1 - 2] [i_13 - 1] [i_3] [i_13])));
                        var_42 = ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_13] [i_1] [i_1] [i_0])) ? (arr_17 [i_0] [i_1] [i_3] [i_11]) : (((/* implicit */unsigned long long int) arr_4 [i_11] [i_1 - 2]))));
                    }
                    for (unsigned long long int i_14 = 4; i_14 < 18; i_14 += 4) /* same iter space */
                    {
                        var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) (+((+(1518041028))))))));
                        var_44 &= var_16;
                        var_45 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))));
                    }
                    var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9002801208229888ULL)) || (((/* implicit */_Bool) ((arr_17 [i_0 - 1] [i_0] [i_0 - 1] [i_0]) | (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_3] [i_11])))))));
                    arr_49 [i_0 + 2] [i_1] [i_3 - 2] = ((/* implicit */int) var_7);
                }
            }
            var_47 &= ((((/* implicit */_Bool) -748028864)) ? (8415296517082929235ULL) : (((/* implicit */unsigned long long int) var_15)));
        }
    }
}

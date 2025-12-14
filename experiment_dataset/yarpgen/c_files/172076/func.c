/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172076
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [20ULL])) | (((/* implicit */int) arr_1 [i_0] [i_0])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (var_0)))));
            var_12 -= ((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1]);
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_3 [i_0] [i_1] [i_2]))))));
                arr_8 [i_0] = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) ((signed char) var_8))), (((unsigned long long int) arr_4 [i_1] [i_0]))))));
                arr_9 [i_0] [i_1] [i_2] = ((/* implicit */signed char) min((10969351869136127824ULL), (7477392204573423813ULL)));
            }
        }
        arr_10 [14ULL] |= (_Bool)1;
        arr_11 [i_0] [(_Bool)1] |= ((/* implicit */signed char) (-(arr_4 [i_0] [i_0 - 1])));
        var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((unsigned long long int) arr_6 [i_0] [i_0] [i_0 - 1] [i_0]))))) && (((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))));
    }
    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        arr_14 [i_3] |= var_1;
        arr_15 [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) -7655173316472669217LL)), (14666187818254062475ULL)));
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 1) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((_Bool) ((var_2) ? (((/* implicit */int) (unsigned short)65519)) : (((/* implicit */int) var_1)))))), (((arr_3 [i_4] [i_4 + 2] [i_4]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
        arr_19 [(signed char)20] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
        arr_20 [i_4] = ((/* implicit */unsigned int) ((7477392204573423784ULL) / (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4 - 1] [i_4 + 3]))) : (8024891290432716423ULL)))));
    }
    for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((/* implicit */_Bool) arr_21 [i_5])) ? (var_9) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (((((/* implicit */long long int) ((/* implicit */int) var_3))) & (arr_23 [2LL]))))))))));
        arr_24 [i_5] = ((signed char) var_10);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_7 = 4; i_7 < 14; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                {
                    arr_34 [i_6] [i_6] [i_6] [i_6] = var_8;
                    var_16 *= ((/* implicit */unsigned short) 0ULL);
                    arr_35 [i_7 + 3] [i_7] [i_7] [12ULL] = ((/* implicit */_Bool) (+((~(arr_4 [i_7 + 1] [i_7 - 1])))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 3; i_9 < 15; i_9 += 3) 
                    {
                        arr_39 [i_6] [i_7 - 4] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_6] [i_9 - 2]))) < (-250574627418178998LL)))), (max((max((arr_27 [i_6]), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_6] [i_6])))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 3) 
                        {
                            arr_43 [(signed char)10] [(signed char)3] [i_7] [i_8] [(signed char)10] [i_10] [(signed char)10] &= ((/* implicit */unsigned short) var_1);
                            var_17 = ((unsigned long long int) (signed char)74);
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (-(min((3780556255455489137ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))))))))));
                            arr_44 [i_6] [i_7] [i_8] [i_9] [(unsigned short)8] |= ((/* implicit */unsigned short) max((min((3780556255455489137ULL), (((/* implicit */unsigned long long int) (signed char)-43)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)963)) / (((/* implicit */int) arr_31 [i_9 - 3] [i_7 + 2])))))));
                        }
                        arr_45 [i_7] [i_7] [i_7] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_30 [i_7 - 3]))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_22 [(_Bool)1])) && (((/* implicit */_Bool) 8024891290432716423ULL)))) && ((!(((/* implicit */_Bool) arr_12 [i_6]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_36 [i_8])))))))));
                        var_19 = ((/* implicit */unsigned int) ((arr_17 [i_6]) & (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) / (1280063948))))));
                    }
                    arr_46 [i_6] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_42 [i_7] [2ULL] [i_7]))))) ? ((~(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)62175)) && (((/* implicit */_Bool) arr_16 [4U]))))), (((((/* implicit */int) arr_25 [i_6] [i_6])) - (((/* implicit */int) arr_22 [0ULL])))))))));
                }
            } 
        } 
        var_20 = ((((max((((/* implicit */unsigned long long int) var_7)), (3023858593024564999ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [14ULL] [i_6])) ? (arr_28 [i_6]) : (((/* implicit */long long int) arr_21 [i_6]))))))) && (((/* implicit */_Bool) min((((((/* implicit */int) var_2)) | (((/* implicit */int) var_5)))), (((/* implicit */int) min(((unsigned short)28), (arr_2 [i_6] [9ULL]))))))));
        var_21 = ((/* implicit */_Bool) ((((min((arr_27 [(signed char)15]), (((/* implicit */unsigned long long int) arr_4 [i_6] [i_6])))) | (((unsigned long long int) var_6)))) ^ (min((((unsigned long long int) arr_33 [i_6] [i_6] [i_6] [i_6])), (((/* implicit */unsigned long long int) ((arr_37 [i_6] [i_6] [i_6] [(unsigned short)1]) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
    }
}

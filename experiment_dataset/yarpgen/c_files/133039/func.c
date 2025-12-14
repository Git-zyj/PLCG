/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133039
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_20 *= ((/* implicit */short) (!(max((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_2)))), (((((/* implicit */_Bool) (short)17563)) || (((/* implicit */_Bool) 65535U))))))));
            var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_0])), (((int) arr_3 [i_0] [(short)19]))))), (min((arr_2 [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_0] [(short)15])))));
            var_22 = ((/* implicit */int) ((signed char) arr_0 [i_0] [i_1]));
        }
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            arr_6 [i_2] [i_0] [i_0] = ((/* implicit */short) arr_5 [i_2]);
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_16)))) ? (var_16) : (((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */int) ((arr_9 [i_0] [i_0] [(short)14]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) (short)-25620))))));
                /* LoopSeq 2 */
                for (short i_4 = 4; i_4 < 24; i_4 += 3) 
                {
                    arr_13 [i_0] [i_0] &= ((/* implicit */short) var_4);
                    arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */short) var_14);
                }
                for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
                    {
                        arr_22 [i_0] [(signed char)21] [i_3] [(signed char)24] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_12))));
                        arr_23 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((var_5) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-25620)))));
                        var_24 = ((/* implicit */unsigned int) arr_2 [i_2] [6U] [i_5]);
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_11 [i_0] [i_2] [i_3])))) ? ((-(arr_11 [i_3] [i_5] [i_6]))) : (arr_11 [i_0] [i_0] [(short)10]))))));
                    }
                    for (int i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
                    {
                        arr_27 [i_0] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_5 [i_0]) - (arr_5 [i_0]))))));
                        var_26 = ((/* implicit */signed char) (short)-17568);
                    }
                    var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) arr_12 [i_0] [i_0] [i_0] [i_2] [i_3] [(short)6])))));
                }
                arr_28 [i_0] = ((/* implicit */unsigned int) var_2);
            }
        }
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 713357757)), (((((/* implicit */_Bool) 976057019U)) ? (3318910292U) : (3318910306U)))))) ? (((/* implicit */int) (short)6168)) : (((((/* implicit */int) ((((/* implicit */int) (short)31)) <= (((/* implicit */int) (signed char)75))))) << (((((unsigned int) (short)-25620)) - (4294941664U)))))));
        arr_29 [8U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-25626)) - (((/* implicit */int) (signed char)-9))))) && (((/* implicit */_Bool) (-((~(((/* implicit */int) var_2)))))))));
        var_29 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) arr_12 [i_0] [(short)12] [i_0] [i_0] [i_0] [(signed char)22]))))));
    }
    for (short i_8 = 0; i_8 < 24; i_8 += 1) 
    {
        var_30 ^= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_8] [i_8] [i_8] [i_8] [4ULL] [(signed char)24] [i_8]))))) ? (((/* implicit */unsigned long long int) ((max((var_16), (((/* implicit */int) arr_18 [i_8] [i_8] [i_8] [i_8])))) & ((-(((/* implicit */int) (short)10913))))))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-94)), (2871315869U)))), ((+(var_7))))));
        /* LoopSeq 2 */
        for (short i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            arr_35 [i_8] = ((/* implicit */signed char) (-(min((((/* implicit */int) var_13)), ((+(var_16)))))));
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                var_31 = ((/* implicit */int) ((signed char) max((((unsigned int) var_12)), (((/* implicit */unsigned int) (-(((/* implicit */int) var_18))))))));
                arr_38 [i_8] [i_10] [i_9] [i_10] = ((/* implicit */short) arr_8 [i_8] [i_9] [i_10]);
                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((arr_36 [i_8] [i_9] [i_9]) * (arr_36 [i_8] [i_9] [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)26531))))))));
            }
        }
        for (short i_11 = 0; i_11 < 24; i_11 += 3) 
        {
            var_33 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
            /* LoopSeq 1 */
            for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                var_34 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_42 [i_8] [(signed char)23] [i_12]))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_4 [i_12] [i_8] [i_8])) : (((/* implicit */int) (short)-17549)))) : (min((32767), (((/* implicit */int) (short)32767))))))) ? (((((/* implicit */_Bool) ((signed char) (short)0))) ? (arr_34 [i_8]) : (((unsigned long long int) arr_30 [22ULL])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_15)) : (arr_30 [i_8]))))))));
                var_35 = ((/* implicit */signed char) (-(((/* implicit */int) arr_7 [i_8] [i_11] [i_8] [i_8]))));
                arr_43 [2U] [i_8] [i_11] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) var_9)) <= (((((/* implicit */_Bool) arr_39 [i_8])) ? (min((((/* implicit */int) (short)25621)), (var_4))) : ((-(((/* implicit */int) arr_37 [i_8] [i_8] [i_12] [i_12]))))))));
                arr_44 [(short)15] [i_11] [i_11] = ((/* implicit */short) (~((~(954673889U)))));
                var_36 = ((/* implicit */signed char) ((short) (-((-(1489808515U))))));
            }
            var_37 = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (short)-32760))))));
        }
    }
    var_38 = var_1;
    var_39 = ((/* implicit */unsigned int) var_15);
}

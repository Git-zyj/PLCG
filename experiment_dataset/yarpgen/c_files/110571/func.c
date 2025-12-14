/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110571
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */short) max((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (15953086683393278811ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0]))))))), (arr_2 [i_0])));
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)14606)) ^ (50331648)))) : (16777215U))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                /* LoopSeq 3 */
                for (signed char i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned short) ((2147483647) + (arr_2 [i_5])));
                    var_16 = ((/* implicit */signed char) arr_10 [i_4] [i_3] [i_4]);
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_3] [i_4] [i_5])) ? (arr_7 [i_5] [i_4] [i_3] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5]))))))));
                    var_18 = ((/* implicit */long long int) max((var_18), ((-(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5] [i_0]))) : (-8822009488706276132LL)))))));
                    arr_20 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)12402)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19181))) : (1572923052442760183LL)));
                }
                for (signed char i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
                {
                    arr_24 [i_3] [i_4] [i_0] = arr_0 [i_3] [i_6];
                    var_19 = ((/* implicit */int) arr_3 [i_6]);
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_0])) ? (((((/* implicit */_Bool) arr_5 [i_4] [i_3])) ? (-8822009488706276132LL) : (((/* implicit */long long int) ((/* implicit */int) (short)24842))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))));
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        var_21 -= ((/* implicit */unsigned short) 283726776524341248ULL);
                        var_22 = ((/* implicit */unsigned int) arr_26 [i_0] [i_3] [i_4] [i_6] [i_7]);
                        var_23 = 18446744073709551615ULL;
                        var_24 = ((/* implicit */_Bool) ((arr_21 [i_0] [i_0] [i_4] [i_6] [i_7] [i_3]) + (((/* implicit */int) arr_1 [i_0] [i_7]))));
                    }
                }
                for (signed char i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
                {
                    arr_29 [(signed char)19] [i_3] [i_4] [i_0] = ((/* implicit */short) 1572923052442760183LL);
                    var_25 = ((/* implicit */long long int) max((var_25), (((arr_7 [i_8] [i_3] [i_3] [i_8]) / (arr_7 [i_8] [i_3] [i_4] [i_8])))));
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_21 [i_0] [i_0] [i_3] [i_4] [i_4] [i_8])) + (8796093022207LL)));
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) : (((/* implicit */int) arr_13 [i_0] [i_3]))));
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (-(arr_19 [i_0] [19ULL] [i_4] [i_4] [19ULL] [i_3]))))));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-41)) ? (-2147483647) : (2147483647)));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned short i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    var_30 = ((/* implicit */unsigned int) arr_5 [i_0] [i_10]);
                    var_31 = ((/* implicit */unsigned short) 324313571);
                }
            }
            arr_35 [i_0] [i_3] [(signed char)14] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) -1572923052442760183LL)))));
        }
        /* LoopSeq 2 */
        for (int i_11 = 0; i_11 < 23; i_11 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_12 = 1; i_12 < 21; i_12 += 1) 
            {
                var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((3), (arr_17 [i_0] [i_0] [i_12 + 1] [i_11])))) ? (((unsigned long long int) 2047795690205071229LL)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_12 + 1] [i_12])) ? (arr_37 [i_0] [i_0]) : (((/* implicit */int) var_8))))))))));
                arr_41 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -445981105454139660LL)) ? ((-(max((-6470295644278401757LL), (((/* implicit */long long int) var_10)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_0] [i_11] [i_12] [i_0]))))) < (((/* implicit */int) arr_6 [i_11] [i_12 + 1] [i_12]))))))));
                var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) max((((/* implicit */long long int) 2147483647)), (1100674019363692479LL))))));
                var_34 = min((((/* implicit */long long int) (((-(((/* implicit */int) arr_14 [i_12 - 1] [i_11] [(unsigned short)12] [(unsigned short)12])))) == ((-(3)))))), (((1572923052442760183LL) % (((/* implicit */long long int) var_11)))));
                var_35 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) min((arr_26 [i_0] [i_11] [(short)7] [i_12] [i_12]), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) && (((/* implicit */_Bool) arr_25 [i_0] [i_12 + 1] [i_12 - 1])))))));
            }
            for (short i_13 = 0; i_13 < 23; i_13 += 3) 
            {
                var_36 = ((/* implicit */unsigned char) arr_26 [i_0] [i_0] [i_11] [i_11] [i_13]);
                var_37 = ((/* implicit */unsigned long long int) -4347968569214331604LL);
            }
            var_38 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) var_0))), ((~(((long long int) arr_42 [i_0] [20] [i_11] [4ULL]))))));
        }
        for (int i_14 = 1; i_14 < 20; i_14 += 3) 
        {
            arr_48 [i_0] [i_0] [(unsigned short)21] = ((/* implicit */short) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) (short)24929))));
            arr_49 [i_0] [i_0] = ((/* implicit */int) ((max((max((15564940894996040640ULL), (((/* implicit */unsigned long long int) arr_33 [i_0] [i_0] [i_14] [i_14 + 2] [i_14 + 1] [i_14])))), (((/* implicit */unsigned long long int) (unsigned short)12499)))) + (((/* implicit */unsigned long long int) var_0))));
            var_39 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) min((((/* implicit */int) (short)0)), (arr_17 [i_0] [i_0] [i_0] [(short)9])))), (arr_10 [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) arr_39 [i_14 + 1] [11U])) ? (arr_39 [i_14 + 3] [i_14]) : (arr_39 [i_14 + 1] [i_14 + 1])))));
            var_40 = min((max((((((/* implicit */_Bool) 2881803178713510975ULL)) ? (arr_10 [i_0] [i_0] [i_0]) : (-1572923052442760183LL))), (((/* implicit */long long int) ((var_2) == (arr_39 [i_14 - 1] [i_0])))))), (((/* implicit */long long int) arr_36 [i_14])));
        }
    }
    var_41 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((((/* implicit */_Bool) 6)) ? (2147483647) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((var_2) == (((/* implicit */long long int) ((/* implicit */int) (short)-14553))))))))), ((-(var_2)))));
}

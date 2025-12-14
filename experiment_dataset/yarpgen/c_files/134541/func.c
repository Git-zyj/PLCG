/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134541
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) -599923049);
                                arr_14 [i_4] [i_3] [1ULL] = ((/* implicit */short) ((((/* implicit */_Bool) 1796572286173648595ULL)) && (((/* implicit */_Bool) (short)-15263))));
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */signed char) max((((long long int) (-(18446744073709551590ULL)))), (((/* implicit */long long int) arr_9 [i_0] [i_1] [(signed char)15] [(signed char)15]))));
                var_13 = ((/* implicit */long long int) arr_8 [i_1]);
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    var_14 = ((/* implicit */long long int) ((((((/* implicit */int) arr_5 [i_0] [i_0] [i_5])) + (2147483647))) >> (((((((/* implicit */_Bool) arr_9 [i_0] [7] [i_5] [7])) ? (var_6) : (((/* implicit */unsigned long long int) -8353176205389627155LL)))) - (4781781011634333159ULL)))));
                    var_15 -= ((/* implicit */signed char) var_2);
                }
                for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    var_16 = ((/* implicit */long long int) min(((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16969))) : (arr_6 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) (signed char)39))));
                    arr_21 [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) arr_1 [i_6])), (((((/* implicit */_Bool) 4380866641920LL)) ? (3803685166163896241LL) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)31)) % (((/* implicit */int) arr_5 [i_0] [i_1] [i_6])))))))));
                }
                for (unsigned long long int i_7 = 4; i_7 < 17; i_7 += 4) 
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) 2133213540))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -5665143083867494121LL)))) : (max((((/* implicit */unsigned long long int) (~(-1364115801)))), (7485027491905435930ULL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        for (long long int i_9 = 1; i_9 < 17; i_9 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */int) arr_1 [i_0]);
                                var_19 = ((/* implicit */long long int) arr_23 [i_8]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) ((((16650171787535903020ULL) + (((/* implicit */unsigned long long int) 2125052579)))) >= (((/* implicit */unsigned long long int) arr_11 [i_7] [i_1] [i_0]))));
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        var_21 &= ((/* implicit */int) ((((/* implicit */_Bool) (-(6216496572198976413LL)))) ? (arr_6 [i_10] [i_7 + 1] [i_1]) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)0)), (arr_23 [i_10]))))));
                        arr_30 [5] [i_1] [i_7] [i_7] = ((/* implicit */int) max((((/* implicit */long long int) min(((!(((/* implicit */_Bool) (short)32743)))), (((((/* implicit */unsigned long long int) -8519766759427819683LL)) > (36028797018963936ULL)))))), (min((max((((/* implicit */long long int) arr_15 [i_0] [i_1])), (arr_19 [i_0] [i_1] [(signed char)2]))), (min((((/* implicit */long long int) 270460166)), (288230376017494016LL)))))));
                        /* LoopSeq 3 */
                        for (int i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            var_22 += ((/* implicit */signed char) (+(((((/* implicit */int) arr_2 [i_7 - 1])) & (((/* implicit */int) arr_2 [i_7 - 3]))))));
                            var_23 = ((/* implicit */signed char) min((((/* implicit */int) ((short) (short)552))), (arr_9 [i_0] [i_7 - 3] [i_1] [i_10])));
                            arr_33 [i_10] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)557))) - (max((((/* implicit */long long int) arr_1 [i_10])), (4083717539274953040LL)))));
                            var_24 = ((/* implicit */int) arr_26 [i_11] [12LL] [i_1]);
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 4) 
                        {
                            arr_36 [i_0] [i_0] [2LL] [i_0] [i_10] [i_12] = max((max((((/* implicit */long long int) ((((/* implicit */int) var_4)) >> (((arr_24 [i_0] [4LL] [i_0] [4LL] [(signed char)18] [8LL]) - (595270490484614204ULL)))))), (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [3] [i_10])) ? (arr_31 [i_0] [i_0] [i_7] [i_10] [15]) : (((/* implicit */long long int) arr_27 [i_0] [i_0] [i_7] [i_7])))))), ((~(max((((/* implicit */long long int) var_5)), (arr_7 [i_0] [i_1] [(signed char)8] [i_1]))))));
                            var_25 = ((/* implicit */short) arr_11 [i_10] [i_10] [i_0]);
                        }
                        for (long long int i_13 = 0; i_13 < 19; i_13 += 1) 
                        {
                            var_26 *= ((long long int) ((((/* implicit */long long int) ((((/* implicit */int) (short)540)) * (((/* implicit */int) (signed char)-42))))) / (((((/* implicit */_Bool) arr_19 [i_1] [i_7] [i_10])) ? (-7770770448642397922LL) : (((/* implicit */long long int) arr_15 [i_0] [i_0]))))));
                            arr_40 [i_13] [i_10] [i_7] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_15 [i_7] [0LL]);
                            arr_41 [i_1] [i_10] [i_7] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((long long int) ((unsigned long long int) arr_2 [i_13]))) * (((min((((/* implicit */long long int) var_5)), (arr_29 [i_1] [i_7] [i_10] [i_13]))) * (((/* implicit */long long int) ((int) arr_11 [i_10] [i_7] [i_0])))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 4) 
                        {
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (~((-9223372036854775807LL - 1LL)))))));
                            var_28 += arr_22 [(short)9] [i_10] [(short)9];
                        }
                        /* vectorizable */
                        for (long long int i_15 = 0; i_15 < 19; i_15 += 2) 
                        {
                            var_29 = ((arr_12 [i_7 - 3] [i_7 + 1] [i_7 - 4] [i_7 + 1] [i_7 - 3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_7 - 3] [i_7 + 1] [i_7 - 4]))));
                            var_30 = ((/* implicit */signed char) ((long long int) arr_31 [i_7 - 4] [i_7 - 2] [i_7 - 2] [i_7 - 4] [i_7 + 1]));
                            arr_49 [i_0] [i_1] [i_7] [i_7] [i_15] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)18683))) | (((long long int) 10961716581804115685ULL))));
                            var_31 = ((/* implicit */long long int) ((signed char) -1LL));
                        }
                        for (signed char i_16 = 1; i_16 < 18; i_16 += 4) 
                        {
                            arr_53 [i_0] [i_0] [i_7] [i_7] [i_10] [0LL] [i_7] = ((/* implicit */short) (~(18446744073709551615ULL)));
                            var_32 = ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */long long int) var_10)) == (288230376017494026LL))))))));
                        }
                        var_33 += ((/* implicit */long long int) arr_4 [i_0] [12LL]);
                    }
                }
                for (long long int i_17 = 0; i_17 < 19; i_17 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_18 = 1; i_18 < 16; i_18 += 1) 
                    {
                        for (short i_19 = 0; i_19 < 19; i_19 += 1) 
                        {
                            {
                                var_34 = max((max((1309492104032982568LL), (-178738194238122596LL))), (max((((/* implicit */long long int) (signed char)41)), (288230376017494017LL))));
                                arr_62 [i_19] [i_19] = ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-17527))) : (-3057085878144528980LL));
                                arr_63 [i_0] [(short)8] [(short)8] [i_1] [(short)8] |= ((/* implicit */long long int) (~(min((((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_17] [i_18 - 1])) ? (3958394232829139393ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_2 [i_1])), (arr_55 [i_17] [i_19]))))))));
                                var_35 = ((/* implicit */long long int) max((0ULL), (((/* implicit */unsigned long long int) 2366289974518204892LL))));
                            }
                        } 
                    } 
                    arr_64 [i_0] = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) arr_45 [i_0] [i_1] [i_17] [i_17])) | (arr_6 [3LL] [i_1] [i_17]))), (((/* implicit */unsigned long long int) ((5665143083867494120LL) > (((/* implicit */long long int) -778238565)))))));
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) 2LL))) ? (((/* implicit */int) ((short) 15444530699358498981ULL))) : (min((var_10), (((/* implicit */int) arr_39 [i_0] [i_0] [i_1] [i_0]))))));
                }
            }
        } 
    } 
    var_37 = max(((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_3))))) : (min((((/* implicit */long long int) (short)-18185)), (var_1))))), (max((((((/* implicit */_Bool) var_8)) ? (3057085878144528961LL) : (((/* implicit */long long int) var_5)))), (var_1))));
    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (signed char)69))));
}

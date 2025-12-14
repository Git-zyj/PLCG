/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174374
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
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)184)), (max(((-2147483647 - 1)), (((/* implicit */int) (signed char)40))))))), (((((((/* implicit */int) (short)10797)) < (((/* implicit */int) (signed char)-40)))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((long long int) arr_10 [i_0] [i_1 - 1] [i_0] [i_0] [i_0] [i_0])))))));
                        arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)-40);
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8443515727261429858LL)) ? (20477617U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3)))))) ? (min((arr_2 [i_0]), (((/* implicit */unsigned int) arr_4 [i_1 - 1] [i_0])))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (max((2146435072U), (697552393U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)-41))))))));
                            var_12 = ((/* implicit */signed char) min((max((min((6869584886674200056LL), (((/* implicit */long long int) (unsigned char)103)))), (((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)42)), ((unsigned char)100)))))), (((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)10))))))))));
                        }
                        for (int i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_1] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_1] [i_0]);
                            var_13 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
                        }
                        for (int i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned char) ((signed char) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_3] [(unsigned char)15] [(signed char)9])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8601802175011994530LL))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)130))))))));
                            var_15 = ((/* implicit */long long int) var_6);
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_3] [i_6] [i_6] = ((/* implicit */unsigned int) ((int) max(((unsigned char)12), (arr_17 [i_1] [i_1] [i_1 - 1] [i_0] [i_6] [i_0 + 2] [i_1]))));
                        }
                        arr_24 [i_0] = ((/* implicit */signed char) ((var_10) >> (((/* implicit */int) ((((/* implicit */int) (signed char)-42)) == (((/* implicit */int) (signed char)(-127 - 1))))))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)117)) >> (((((/* implicit */int) arr_5 [i_0] [i_2] [i_3])) - (211)))));
                    }
                    for (unsigned int i_7 = 2; i_7 < 24; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            arr_29 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] [20U] = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
                            var_17 = (signed char)-112;
                            arr_30 [i_2] [i_2] [i_0] [i_2] = ((((((/* implicit */_Bool) -4372844114108147375LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))) <= (((((/* implicit */_Bool) arr_28 [(unsigned char)9] [i_0] [(unsigned char)9] [i_1] [(unsigned char)19] [i_8] [i_0 - 3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-29361)))));
                            var_18 = ((/* implicit */long long int) arr_28 [i_0 - 3] [i_0 - 2] [i_0 - 3] [i_1 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 2]);
                            arr_31 [i_0 - 3] [i_0 - 3] [i_2] [i_0] [i_7] [(short)19] = (+(var_4));
                        }
                        /* vectorizable */
                        for (short i_9 = 1; i_9 < 22; i_9 += 1) 
                        {
                            var_19 = ((/* implicit */long long int) (+(arr_15 [i_9] [i_7] [i_0] [i_0] [3LL] [i_0 - 3])));
                            arr_34 [i_9] [i_7 - 2] [i_0] [i_1 - 1] [i_0 - 3] = ((/* implicit */signed char) -2LL);
                            arr_35 [i_0] [i_0] [i_2] [(unsigned char)2] [i_9 + 1] = ((((/* implicit */_Bool) -7781437050959868168LL)) ? (4372844114108147376LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-36))));
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (arr_21 [i_0] [i_1] [i_1 - 1] [2]) : (arr_25 [i_0 + 1] [i_1 - 1] [i_7 - 2] [i_0])));
                        }
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-36)) ? (min((var_4), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) (unsigned char)133))))))))) ? (((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)28)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1 - 1]))))) : (((long long int) arr_28 [i_7] [i_7 - 2] [(signed char)15] [i_7 - 2] [i_1 - 1] [i_0 - 3] [i_0]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 2; i_10 < 24; i_10 += 1) /* same iter space */
                    {
                        arr_38 [i_0] [i_0] = var_3;
                        arr_39 [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0 - 3] [5U] [i_0] [(signed char)18])) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) arr_16 [i_0] [i_0] [(unsigned char)6] [i_0] [i_0]))))) * (((unsigned int) arr_18 [i_0] [i_2] [i_2] [i_0] [i_0]))));
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967272U)) ? (((int) arr_8 [22] [i_1] [i_0] [i_11 + 1])) : (arr_33 [i_0] [i_0] [i_0] [i_0 + 1] [i_1 - 1] [(short)2] [i_1 - 1])));
                        arr_43 [i_0] [i_0] [i_2] [i_11] [1] = ((/* implicit */_Bool) ((unsigned long long int) (signed char)-28));
                    }
                    arr_44 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_9);
                    var_23 = ((/* implicit */unsigned int) arr_41 [i_0] [i_0] [17LL] [i_0]);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) min((min((-9223372036854775806LL), (((/* implicit */long long int) 260046848U)))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) (signed char)51))))), (((((/* implicit */_Bool) (unsigned char)15)) ? (-4372844114108147375LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-30)))))))));
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (4294967272U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((var_8), (var_8))))))));
}

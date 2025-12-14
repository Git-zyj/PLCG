/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134768
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
    var_14 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) != (((/* implicit */int) (unsigned short)2)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-12026)), (9223372036854775807LL)))) ? ((~(9223372036854775800LL))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
    var_15 = ((/* implicit */short) ((signed char) max((((((/* implicit */int) var_10)) >> (((9223372036854775807LL) - (9223372036854775777LL))))), ((+(((/* implicit */int) (signed char)-81)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_16 &= ((/* implicit */unsigned short) var_2);
        var_17 *= ((/* implicit */unsigned int) (short)-12006);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (short)12024)) + (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (17457995838318013607ULL))))))) >= (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_8)), ((unsigned short)8011)))) ? (((/* implicit */int) (unsigned short)38835)) : ((-(((/* implicit */int) arr_0 [i_2] [i_4]))))))));
                            var_19 = ((/* implicit */short) ((unsigned short) arr_7 [i_0] [i_0] [i_3] [i_4]));
                            arr_13 [i_0] [i_0] [i_2] [(short)12] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_1)), (var_8)));
                            var_20 = ((/* implicit */signed char) min((var_20), (var_13)));
                            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) 12762053891644543616ULL)))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */_Bool) 1773220897372397312ULL);
                            arr_17 [i_0] [i_0] [i_2] [i_0] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)12019))));
                            var_22 = ((/* implicit */unsigned long long int) var_7);
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_6] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))));
                            var_23 = ((/* implicit */short) (!(var_4)));
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_6] [i_3] [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_6 [i_2] [i_1] [i_2] [i_3])) : (((/* implicit */int) (unsigned char)162))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            arr_26 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) var_4);
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_2] [i_2] [i_7])), ((-(18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned short)34381)))), ((!(((/* implicit */_Bool) arr_5 [i_0] [i_7]))))))))));
                            arr_27 [i_3] [i_0] [i_2] [i_3] [i_7] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_7] [i_3] [i_2] [i_1] [i_1] [i_0])))))) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65520))))), (max((((/* implicit */unsigned long long int) var_5)), (5684690182065008000ULL)))))));
                            arr_28 [(unsigned char)1] [i_1] [i_0] [i_3] [i_3] [i_7] = max((((/* implicit */signed char) (!(((-1911550152337764728LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))), (((signed char) max((((/* implicit */unsigned long long int) (unsigned short)38835)), (5684690182065007991ULL)))));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)32290))))) ? (((/* implicit */int) ((10ULL) > (((/* implicit */unsigned long long int) 1537695112U))))) : (((/* implicit */int) arr_3 [i_0] [i_0] [3ULL]))))), (max((((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [(short)14] [i_0]))) / (16673523176337154292ULL)))))))));
                        }
                        arr_29 [i_0] = ((/* implicit */_Bool) max((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)190))))), (var_12))))));
                    }
                } 
            } 
            var_26 ^= ((/* implicit */short) arr_16 [i_0] [i_0] [i_0] [i_1] [(_Bool)1] [5ULL]);
        }
    }
}

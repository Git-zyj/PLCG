/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174571
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
    var_13 += ((/* implicit */unsigned int) var_9);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_0 [i_0]))));
        var_15 -= ((/* implicit */unsigned long long int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_16 -= var_5;
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */long long int) min((var_17), (1125899906842623LL)));
                        var_18 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 536608768U)) && (((/* implicit */_Bool) arr_4 [i_2])))) ? (arr_7 [i_3] [i_1] [i_1]) : (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_2] [i_3])) ^ (((/* implicit */int) (unsigned char)255)))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 2; i_4 < 8; i_4 += 4) 
                        {
                            var_19 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_4 [i_1])) << (((((/* implicit */int) (unsigned char)151)) - (143)))))));
                            var_20 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) arr_5 [i_4] [i_2 + 2] [i_2 + 2])) + (27330)))));
                            var_21 = ((/* implicit */unsigned short) 2000404545U);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            var_22 ^= ((/* implicit */unsigned char) arr_1 [i_1]);
                            var_23 ^= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */long long int) -687065575)) : (1125899906842623LL))));
                        }
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (+(arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                        var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [i_3])) ? (7700293862390004141LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1] [i_1] [i_0])) & (((/* implicit */int) (unsigned char)245)))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_26 ^= ((/* implicit */long long int) var_1);
                            var_27 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_7]))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) arr_20 [i_2] [i_6] [i_2] [i_2] [i_1] [i_1] [i_0]))));
                        }
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            var_29 &= ((/* implicit */long long int) 10U);
                            var_30 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_2 - 2])) & (((/* implicit */int) arr_3 [i_2 - 2]))));
                            var_31 ^= ((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_2 - 1] [i_2 - 2] [i_6] [i_2 - 1]))));
                            var_32 |= ((((/* implicit */_Bool) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_6])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_2 - 1] [i_0]))) : ((~(6805291645066964646LL))));
                            var_33 ^= (!(arr_6 [i_2] [i_2 - 2] [i_2]));
                        }
                        for (signed char i_9 = 3; i_9 < 10; i_9 += 3) 
                        {
                            var_34 -= ((/* implicit */unsigned char) 9223372036854775806LL);
                            arr_27 [i_1] [i_1] |= ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                        }
                        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) arr_17 [i_0] [i_0] [i_2] [i_6]))));
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            var_36 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? ((+(var_9))) : (((/* implicit */unsigned long long int) arr_26 [i_0])))))));
                            arr_31 [i_0] [i_0] [i_0] [i_6] [i_2] [i_10] [i_10] |= ((/* implicit */long long int) var_0);
                        }
                        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (arr_8 [i_2 - 2] [i_2] [i_2 - 1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_21 [i_2] [i_2 - 2] [i_2] [i_2 - 2] [i_2 + 1])) : (((/* implicit */int) arr_21 [i_2] [i_2 - 1] [i_2] [i_2 + 2] [i_2 + 2])))) : (((/* implicit */int) ((arr_26 [i_2 - 2]) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5069454469719165960ULL)) ? (-687065575) : (((/* implicit */int) (unsigned char)220)))))))))))));
                    }
                    var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) (unsigned char)240))));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (unsigned char)251))));
                        var_40 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)123)) && (((/* implicit */_Bool) arr_32 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2 + 1])))) || (((((/* implicit */_Bool) var_6)) && (var_8)))));
                        var_41 ^= ((/* implicit */int) (((!(((((/* implicit */long long int) ((/* implicit */int) (short)-21812))) == (4800021212753914180LL))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_10 [i_0] [i_1] [i_1] [i_0] [i_0]), (((/* implicit */unsigned short) var_6)))))))) : (((arr_30 [i_1] [i_1] [i_1] [i_1] [i_11]) | (((/* implicit */unsigned long long int) var_1))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 2; i_12 < 10; i_12 += 3) 
                    {
                        var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_28 [i_2] [i_2] [i_2 - 1] [i_2] [i_0])) ? (arr_20 [i_0] [i_0] [i_2 + 1] [i_0] [i_0] [i_2] [i_0]) : (((/* implicit */unsigned int) var_12)))))))));
                        var_43 -= ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)-29171))) < (((((/* implicit */_Bool) (unsigned char)178)) ? (arr_19 [i_0]) : (((/* implicit */unsigned int) var_12)))))), ((((~(1125899906842623LL))) != (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_1 [i_12])), (arr_4 [i_0])))))))));
                        var_44 += ((/* implicit */signed char) var_0);
                        var_45 &= ((/* implicit */int) (short)-32767);
                    }
                }
            } 
        } 
    }
}

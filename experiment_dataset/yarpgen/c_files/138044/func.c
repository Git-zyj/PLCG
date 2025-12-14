/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138044
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_4)) + (31944)))))) && (((/* implicit */_Bool) 2147483647))));
    var_14 = ((/* implicit */_Bool) (~((-(((2147483647) << (((var_6) - (3962837836U)))))))));
    var_15 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 3; i_3 < 15; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */int) var_10);
                        arr_13 [(unsigned short)5] [i_1] [i_2] [i_3] = ((/* implicit */short) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32141)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-122))))))), ((_Bool)1)));
                    }
                } 
            } 
            arr_14 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) max(((((_Bool)1) ? (2147483647) : (((/* implicit */int) (unsigned char)138)))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))))) : (var_0)));
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-(((/* implicit */int) ((arr_6 [(short)1] [(short)1] [i_0]) != (-584071841)))))))));
        }
        for (short i_4 = 1; i_4 < 15; i_4 += 4) 
        {
            arr_17 [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_15 [i_0] [i_4] [i_4 - 1]) & (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
            var_18 = ((/* implicit */_Bool) var_0);
            arr_18 [i_4] [i_4 + 1] = ((/* implicit */int) var_11);
        }
        for (unsigned char i_5 = 2; i_5 < 15; i_5 += 4) 
        {
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_5))));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)12)))))));
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((((((((/* implicit */int) var_12)) > (((/* implicit */int) (unsigned short)65535)))) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])) : (1526383677822852954ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (signed char)17)) : (-2147483647)))) ? (((((/* implicit */int) arr_16 [i_0] [i_5])) ^ ((-2147483647 - 1)))) : (((((/* implicit */int) arr_8 [i_0] [i_5 - 2] [i_5] [i_0])) ^ (((/* implicit */int) (_Bool)1))))))))))));
        }
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)32756)) >= (-2147483647))))) : (((15870278854440586297ULL) << (((584071855) - (584071827)))))))));
            var_23 = ((/* implicit */unsigned char) ((((584071855) >= (arr_9 [i_0] [i_0] [i_0]))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) (short)32134)) && (((/* implicit */_Bool) (signed char)-8))))))) : (max((((/* implicit */int) var_10)), (arr_9 [i_0] [i_0] [i_6])))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 2; i_9 < 15; i_9 += 4) 
                    {
                        for (int i_10 = 0; i_10 < 17; i_10 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) - (min((((/* implicit */long long int) 2147483647)), (-7149927143778637102LL))))), (((/* implicit */long long int) arr_0 [i_0]))));
                                arr_32 [i_0] [i_7] [i_8] [13] [i_9] [i_8] = ((/* implicit */unsigned short) ((short) (+(max((((/* implicit */int) (unsigned char)164)), (arr_31 [i_0] [i_0] [i_7] [i_7] [i_9 + 2] [i_9] [i_10]))))));
                                arr_33 [i_10] [i_0] [i_7] [i_7] [i_0] = ((/* implicit */_Bool) min((((3999714175U) >> (((12830729159010525519ULL) - (12830729159010525513ULL))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_9 - 2] [i_9 + 2])))))));
                                var_25 = ((/* implicit */unsigned int) ((signed char) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9])))))))));
                                arr_34 [i_0] [i_0] [i_8] [i_7] [i_10] &= (short)30932;
                            }
                        } 
                    } 
                    arr_35 [i_0] [(unsigned char)4] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127))));
                    var_26 = ((/* implicit */short) ((9223372036854775807LL) != (((/* implicit */long long int) (((_Bool)1) ? (max((-584071832), (((/* implicit */int) (unsigned short)52346)))) : (-584071832))))));
                    var_27 = ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_20 [i_0] [i_8])) : (((/* implicit */int) arr_20 [i_0] [i_8])))) != ((+(var_8)))));
                }
            } 
        } 
    }
}

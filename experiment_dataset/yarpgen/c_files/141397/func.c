/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141397
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
    var_10 = ((/* implicit */long long int) ((_Bool) ((long long int) ((((/* implicit */_Bool) (signed char)11)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) min((((((((/* implicit */_Bool) 78931953)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) ((_Bool) (_Bool)1))))), ((-(((int) var_1)))))))));
                                var_12 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_7), (arr_10 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])))) ? (((((/* implicit */_Bool) min((arr_6 [i_1] [i_1] [i_1]), ((signed char)11)))) ? ((((_Bool)1) ? (((/* implicit */int) var_8)) : (arr_3 [i_2] [i_4]))) : ((+(((/* implicit */int) (_Bool)1)))))) : (((arr_8 [i_0 + 1]) ? (((/* implicit */int) ((_Bool) (signed char)11))) : ((-(((/* implicit */int) (_Bool)1))))))));
                                var_13 = ((/* implicit */long long int) (+((+((~(((/* implicit */int) arr_1 [i_0] [i_3]))))))));
                                var_14 = ((/* implicit */unsigned char) min((((/* implicit */int) max(((_Bool)1), (arr_12 [i_0 + 1])))), ((((((~(((/* implicit */int) var_8)))) + (2147483647))) << (((((long long int) 1099511625728ULL)) - (1099511625728LL)))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_0 + 1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((((/* implicit */int) (signed char)28)) >> (((/* implicit */int) arr_5 [i_0]))))))), ((~(arr_9 [i_0] [i_1] [i_2] [i_0 + 1])))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_5 = 1; i_5 < 15; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 4; i_6 < 15; i_6 += 4) 
                        {
                            arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_2] [i_5 + 2])) : (((/* implicit */int) (short)-17085))))));
                            var_15 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-26)) : (arr_17 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0])))));
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)17084)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */int) (unsigned short)5775)) | (((/* implicit */int) (signed char)-6)))) : ((+(((/* implicit */int) var_5))))));
                            var_17 = ((/* implicit */short) (!((!(arr_12 [i_0])))));
                            arr_19 [i_2] [i_1] [i_2] [i_1] [i_0 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-112))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            var_18 = ((/* implicit */_Bool) (+(12011911717633740794ULL)));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) (short)17080)) : (((/* implicit */int) (signed char)93))));
                        }
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0] [i_0 - 1] [i_0 - 1])) ? (1099511625728ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                        var_21 = ((((unsigned long long int) var_8)) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_10 [i_5] [i_2] [i_1] [i_0])))));
                    }
                    for (short i_8 = 1; i_8 < 17; i_8 += 4) 
                    {
                        var_22 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_8 - 1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */long long int) arr_3 [i_1] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_1 [i_8 - 1] [i_8 - 1])), (var_8))))))));
                        var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_1), (((/* implicit */short) (_Bool)1)))))))), (min((min((((/* implicit */unsigned long long int) var_5)), (18119702843949669277ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_8])) + (((/* implicit */int) var_1)))))))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)17085))))) ? (((/* implicit */long long int) ((/* implicit */int) min((max((arr_6 [i_1] [i_1] [i_1]), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-94)) <= (((/* implicit */int) var_8))))))))) : (((((/* implicit */_Bool) max((((/* implicit */int) (signed char)14)), (arr_17 [i_0 + 1] [i_0 + 1] [i_1] [i_1] [i_0 + 1] [i_8 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_1]))) : (var_7)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) min((var_25), ((!(((/* implicit */_Bool) ((arr_12 [i_1]) ? (((/* implicit */int) arr_25 [i_0 - 1] [i_9] [i_2] [i_9 - 1])) : (((/* implicit */int) arr_4 [i_1] [i_1])))))))));
                        var_26 = ((/* implicit */long long int) (+(18446742974197925887ULL)));
                        arr_27 [i_1] = ((/* implicit */_Bool) ((unsigned int) (unsigned short)11761));
                        arr_28 [i_9 - 1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_24 [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                    }
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (min((9765203338264201066ULL), (((/* implicit */unsigned long long int) (signed char)-13))))));
                        var_28 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) var_0)) | (((/* implicit */int) arr_0 [i_0 + 1] [i_2])))), (((/* implicit */int) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) (short)-27281))))))))) ? ((+((+(((/* implicit */int) var_5)))))) : (((/* implicit */int) ((signed char) max((((/* implicit */unsigned char) (signed char)26)), ((unsigned char)255)))))));
                    }
                    var_29 = ((/* implicit */_Bool) (+((-(var_2)))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) + ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))))));
    var_31 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_4))) : (((/* implicit */long long int) (+(((/* implicit */int) var_6))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) (unsigned char)255))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) var_6)))) : (((((/* implicit */int) var_1)) * (((/* implicit */int) (_Bool)1)))))))));
}

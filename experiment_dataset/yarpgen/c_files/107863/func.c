/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107863
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
    var_15 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((min((((/* implicit */unsigned int) arr_1 [i_0])), (595942406U))) % (((/* implicit */unsigned int) ((/* implicit */int) min((var_11), (var_0))))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))));
        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) ((arr_0 [(unsigned short)8]) <= (((/* implicit */long long int) var_9))))))))));
        var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_12)), (arr_0 [i_0])));
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) arr_1 [i_0 + 1]))))) ? ((+(((/* implicit */int) arr_1 [i_0 + 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40031))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 1; i_3 < 24; i_3 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_2]);
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_3])) ? (arr_6 [(unsigned short)3] [i_1] [(unsigned short)13]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(_Bool)1])))))) ? (min((arr_10 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)57468)) && (((/* implicit */_Bool) var_6))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned short)8]))) : (arr_10 [i_1] [i_2] [i_2 + 1] [i_3]))))))))));
                        var_21 = var_0;
                    }
                    for (int i_4 = 1; i_4 < 24; i_4 += 3) /* same iter space */
                    {
                        arr_13 [i_4] [i_4] [i_4] [i_4 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) min(((unsigned short)43202), (arr_3 [i_0] [i_0] [i_4])))) <= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [13LL] [i_1] [i_1])) : (((/* implicit */int) (short)8938))))))) & (((/* implicit */int) var_11))));
                        var_22 = ((/* implicit */short) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (signed char)-114)))), (((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (short)-8957)) : (((/* implicit */int) arr_5 [i_0])))) / (((/* implicit */int) arr_8 [i_0 - 1]))))));
                        arr_14 [i_1] [i_4] [i_4] [i_0] = arr_0 [i_2];
                        var_23 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (~(((/* implicit */int) max(((unsigned short)27706), (var_11))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8938)) ? (((/* implicit */long long int) 2097150U)) : (8823331795660176856LL)))) ? (max((arr_10 [i_4] [i_2] [i_1] [i_0]), (((/* implicit */long long int) arr_8 [(unsigned short)0])))) : (((/* implicit */long long int) max((arr_9 [i_2] [i_4 - 1] [i_2] [i_2] [i_1] [(unsigned short)5]), (((/* implicit */int) var_7)))))))));
                    }
                    for (int i_5 = 1; i_5 < 24; i_5 += 3) /* same iter space */
                    {
                        arr_17 [(unsigned short)4] [i_5] [i_2] [i_5] [i_0 + 1] [i_5] = ((/* implicit */unsigned char) arr_11 [i_5 - 1] [i_2] [i_1] [20]);
                        var_24 &= ((/* implicit */unsigned int) min((max((min((((/* implicit */long long int) (_Bool)0)), (arr_16 [i_0] [i_1] [(unsigned short)14] [i_1]))), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_12 [i_0])), ((unsigned short)25491)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_11)))))));
                    }
                    var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? ((~(((((/* implicit */_Bool) 5035570099704909541LL)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) : (1048575))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8))))))))));
                    var_26 = ((/* implicit */unsigned short) min((var_26), (var_3)));
                }
            } 
        } 
    }
    for (short i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        var_27 &= ((/* implicit */unsigned short) max((((/* implicit */int) arr_18 [(unsigned short)14])), ((((!(((/* implicit */_Bool) arr_3 [i_6] [(unsigned char)16] [(unsigned char)16])))) ? (((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_6])) : (((((/* implicit */int) var_7)) | (((/* implicit */int) var_7))))))));
        var_28 ^= ((/* implicit */unsigned char) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_19 [i_6])) : (((/* implicit */int) arr_3 [i_6] [i_6] [i_6]))))), (min((((/* implicit */long long int) arr_3 [i_6] [i_6] [i_6])), (arr_7 [i_6] [i_6]))))) > (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_6])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_6] [i_6]))))))))));
        /* LoopSeq 2 */
        for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            arr_23 [i_6] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_11 [i_7] [i_6] [i_6] [i_6])) <= (((/* implicit */int) (signed char)113)))) ? ((+(arr_0 [i_7]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6] [i_7] [i_6] [i_7]))) - (arr_0 [i_7])))));
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_22 [i_6] [i_6] [i_6]) ? (((/* implicit */int) arr_5 [i_7])) : (((/* implicit */int) arr_1 [i_6]))))), (((((/* implicit */_Bool) arr_21 [i_7])) ? (arr_16 [i_6] [(unsigned short)2] [i_6] [14U]) : (((/* implicit */long long int) ((/* implicit */int) (short)-8938)))))))) ? ((-(((/* implicit */int) arr_1 [i_7])))) : ((~(((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) arr_5 [(short)13]))))))));
        }
        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            arr_27 [i_6] [15LL] = ((/* implicit */int) ((((/* implicit */long long int) var_2)) ^ (((((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-8939)), (var_4)))) + (min((-5035570099704909541LL), (((/* implicit */long long int) arr_5 [i_8]))))))));
            var_30 = ((/* implicit */unsigned int) arr_18 [i_8]);
            arr_28 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_1)))), (((/* implicit */int) min((var_11), (var_11))))))) ? (var_9) : (((((/* implicit */int) arr_20 [i_8])) % (((/* implicit */int) arr_20 [i_8]))))));
            /* LoopSeq 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                arr_32 [i_8] [i_8] [i_9] = ((/* implicit */long long int) min((var_0), (((/* implicit */unsigned short) (((~(-6590166564642753434LL))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3769360838U)))))))))));
                var_31 = ((/* implicit */short) max((((((/* implicit */int) arr_8 [i_6])) << (((((/* implicit */int) arr_19 [i_9])) - (17507))))), (((/* implicit */int) ((max((var_12), (((/* implicit */int) (unsigned short)65535)))) < (((/* implicit */int) arr_21 [i_6])))))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_11 = 3; i_11 < 16; i_11 += 2) 
                {
                    for (short i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        {
                            var_32 &= ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_31 [(short)13])) ? (((((/* implicit */_Bool) var_7)) ? (arr_9 [i_12] [i_12] [10] [i_11] [i_12] [15LL]) : (((/* implicit */int) arr_33 [i_8] [i_11] [(signed char)1])))) : (((((/* implicit */_Bool) (unsigned short)11045)) ? (((/* implicit */int) arr_21 [i_12])) : (((/* implicit */int) var_8)))))) + (2147483647))) << (((((((/* implicit */int) arr_29 [i_11 - 2] [i_11 - 2] [i_11 - 1] [i_11 - 2])) & (((/* implicit */int) arr_29 [i_11 - 3] [i_11 - 3] [i_11 + 1] [i_11])))) - (39328)))));
                            var_33 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (var_9) : (var_9))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8727)))))))) ? ((-(((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_10]))) : (arr_6 [i_6] [i_6] [i_6]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -6767679507273243548LL)) ? (((/* implicit */unsigned int) 2147483647)) : (525606457U)))));
                            var_34 = ((/* implicit */unsigned short) (~((~((+(var_9)))))));
                            var_35 = (~(min((((/* implicit */int) arr_18 [i_6])), (((((/* implicit */int) arr_4 [i_6])) & (((/* implicit */int) arr_3 [i_6] [(signed char)19] [(signed char)19])))))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned short) max((((min((arr_25 [i_6]), (((/* implicit */long long int) arr_1 [i_10])))) / (arr_16 [i_8] [i_8] [i_10] [i_8]))), (((((((/* implicit */_Bool) arr_25 [i_8])) ? (arr_10 [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */long long int) arr_37 [i_10])))) & (((/* implicit */long long int) min((arr_37 [i_10]), (((/* implicit */int) arr_35 [i_6] [i_6] [i_6] [i_6])))))))));
            }
        }
        var_37 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_33 [i_6] [i_6] [i_6])), ((unsigned short)56833)))) > (((((/* implicit */_Bool) (-(arr_7 [i_6] [i_6])))) ? (((((/* implicit */_Bool) (unsigned short)15641)) ? (((/* implicit */int) (unsigned short)54150)) : (((/* implicit */int) (signed char)-81)))) : (((/* implicit */int) max(((unsigned short)49202), (arr_35 [i_6] [i_6] [i_6] [i_6]))))))));
    }
}

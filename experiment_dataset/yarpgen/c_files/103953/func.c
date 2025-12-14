/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103953
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
    var_12 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    var_13 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 + 2] [i_2 + 1] [i_2]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (3167114028910677392ULL) : (arr_0 [i_0])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)32767))))) : (arr_2 [i_0 + 3])))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned int) (signed char)-119);
                        arr_9 [i_0] [i_3] = ((((/* implicit */_Bool) ((arr_0 [i_0 - 1]) % (18446744073709551615ULL)))) ? (arr_0 [i_0 + 1]) : ((+(arr_0 [i_0 + 3]))));
                        arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)75))))) / (2551784055U)));
                    }
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        arr_15 [i_4] [i_0] [(_Bool)1] [i_4] [i_4] = ((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_2 - 2] [i_0 + 2])) | (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_0 + 3])))));
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-1)) / (((((arr_7 [i_0]) / (((/* implicit */int) (signed char)111)))) / ((-(((/* implicit */int) var_4)))))))))));
                        arr_16 [i_0] [i_0] [i_0] [(unsigned short)10] = ((/* implicit */signed char) var_1);
                        var_16 = (+((-2147483647 - 1)));
                        var_17 = ((/* implicit */unsigned int) min((((arr_4 [i_0] [i_1]) - (arr_4 [i_0] [i_1]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-34)))))));
                    }
                    for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 4) /* same iter space */
                    {
                        arr_19 [i_0 + 1] [i_1] [i_0] [13LL] = ((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1]);
                        arr_20 [i_0 - 1] [i_1] [i_0] [i_5] = ((/* implicit */signed char) (~(((long long int) (unsigned char)38))));
                        arr_21 [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(14)))) ? (34359737856ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81)))))));
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_1] [i_6] [i_0] [5U]);
                            var_19 = ((/* implicit */signed char) (-(0ULL)));
                        }
                        var_20 = ((/* implicit */int) var_0);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_8 = 1; i_8 < 20; i_8 += 3) 
                    {
                        arr_29 [i_0] [i_1] [(signed char)14] [i_0] &= ((/* implicit */long long int) arr_24 [10ULL] [i_2 - 1]);
                        /* LoopSeq 2 */
                        for (int i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 0U)) != (15279630044798874228ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) : (arr_18 [i_0] [i_0 + 1] [i_0 + 3] [i_8 + 1])));
                            var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-119))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 23; i_10 += 4) 
                        {
                            arr_36 [i_0] = ((/* implicit */_Bool) ((18446744073709551594ULL) << (((/* implicit */int) (_Bool)1))));
                            var_23 = ((/* implicit */unsigned char) 876290065);
                            arr_37 [i_0] [i_1] [(signed char)11] [i_0] [i_10] = ((/* implicit */short) ((unsigned long long int) arr_30 [i_1] [i_1] [i_0] [i_8 - 1] [i_8 + 1] [i_8 - 1] [21ULL]));
                            arr_38 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_0 - 1] [i_0] [(short)18] [i_2 - 1] [i_8 - 1] [(unsigned short)22])) << (((((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 3] [i_2 + 1] [i_8 + 1] [i_0 + 3] [i_8])) + (83)))));
                        }
                        arr_39 [12ULL] [i_0] = ((/* implicit */short) 6ULL);
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((signed char) (unsigned char)31)))));
                        arr_40 [i_0] [(unsigned char)13] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_2] [i_2 - 2] [i_8 + 3])) >= (((/* implicit */int) (signed char)115))));
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) var_5);
    var_26 = ((/* implicit */signed char) 4503599627370495ULL);
    var_27 = ((/* implicit */signed char) (unsigned short)38980);
}

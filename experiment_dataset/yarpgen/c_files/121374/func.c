/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121374
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
    var_12 = ((/* implicit */int) (signed char)-86);
    var_13 = ((17635224591002527322ULL) + (((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)53))) * (18446744073709551613ULL))))));
    var_14 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_1 [i_1]))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
                        {
                            var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */int) ((unsigned char) var_3))) + (((/* implicit */int) var_2))))));
                            arr_13 [i_0] [i_0] [i_1] [i_2] [(unsigned char)7] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -1813811616)) < (arr_3 [i_0] [i_0])));
                            arr_14 [i_1] [i_1] [9U] [i_4] [i_4] = ((unsigned long long int) (unsigned char)53);
                            var_17 = arr_5 [i_0] [i_1];
                        }
                        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) -1898482419))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-37)) * (2047)));
                            var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 524287))) ? (arr_3 [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((int) 392961752U)))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((unsigned int) arr_17 [i_0] [i_1] [i_6] [(short)17] [i_6])))));
                            var_22 = ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_2] [i_3] [i_6])) || (((/* implicit */_Bool) arr_19 [i_0] [i_1] [(short)3] [20ULL] [i_6])));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_3] [i_6])) ? (var_7) : (var_7)));
                        }
                        arr_21 [i_0] [i_1] [i_1] [11ULL] [(unsigned short)5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3] [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) arr_19 [i_0] [i_1] [i_2] [i_3] [i_0])))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
                    {
                        var_24 -= ((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [4U] [i_2] [15] [(unsigned char)4]))));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_25 += ((/* implicit */unsigned int) (+((+(arr_26 [i_1] [i_8 - 1] [i_8] [i_8] [i_8])))));
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((short) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            var_27 += ((/* implicit */_Bool) ((short) (unsigned char)53));
                            var_28 = ((((/* implicit */_Bool) ((arr_26 [i_0] [(unsigned short)8] [i_2] [i_7] [i_8]) / (arr_26 [i_8 - 1] [0ULL] [11ULL] [6ULL] [i_0])))) ? (((((/* implicit */int) ((unsigned short) var_3))) / (((((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_7] [22])) + (((/* implicit */int) var_9)))))) : ((-(((/* implicit */int) (short)6897)))));
                        }
                        arr_28 [i_2] [i_0] [9ULL] [19ULL] [i_7] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_17 [(unsigned short)3] [i_0] [i_1] [i_2] [7ULL])))) / (((arr_11 [i_1] [i_1] [5] [i_2] [(short)20] [i_1]) / (((/* implicit */long long int) var_5)))))) * (((/* implicit */long long int) (-(arr_26 [i_2] [i_1] [i_2] [i_1] [i_7]))))));
                        var_29 = ((unsigned long long int) ((signed char) 524287));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        arr_32 [i_0] [i_1] [i_2] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */_Bool) (unsigned short)55892)) ? (((/* implicit */int) ((signed char) 18446744073709551598ULL))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) (short)32767))))))));
                        arr_33 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_9])))) && (((/* implicit */_Bool) ((unsigned long long int) -3458098117143554819LL)))));
                    }
                    var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [9U] [8ULL] [22U] [i_1] [i_2]))));
                    var_31 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [(signed char)15])) ? (var_1) : (((/* implicit */unsigned long long int) arr_9 [14] [i_1] [i_2])))) ^ (((unsigned long long int) arr_9 [i_0] [i_1] [1LL]))));
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */int) ((unsigned long long int) (unsigned short)3072));
}

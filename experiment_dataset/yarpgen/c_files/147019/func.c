/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147019
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [12U] [12U] [i_0] [12U] [(signed char)0] |= ((/* implicit */unsigned int) ((13678898006483763847ULL) >= (((/* implicit */unsigned long long int) ((((arr_12 [i_4 - 3] [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_1 - 1] [i_1 + 1]) + (9223372036854775807LL))) << (((((unsigned int) var_2)) - (1925087921U))))))));
                                var_12 += 4767846067225787781ULL;
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] = ((/* implicit */int) 13678898006483763816ULL);
                    var_13 += ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_7 [i_0] [i_0] [i_0] [i_0]))))));
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_2] [i_1] [i_2]))))) : (min((arr_12 [i_0] [i_2] [i_2] [i_2] [i_2] [i_0] [i_0]), (((/* implicit */long long int) (unsigned char)137)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [(short)16]))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((arr_7 [3ULL] [i_5] [3ULL] [i_6]) & (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_17 [i_5] [i_6])))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 1) /* same iter space */
            {
                var_16 = ((/* implicit */short) var_2);
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(short)19] [(_Bool)1] [(_Bool)1] [(short)19] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_7] [i_7] [8LL]))) : (var_10)))))))));
            }
            for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 1) /* same iter space */
            {
                arr_25 [8U] [i_6] [i_5] [(_Bool)1] = ((/* implicit */short) 2159385911U);
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) arr_20 [10ULL] [10ULL]))));
                var_19 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((arr_7 [i_5] [i_8 + 1] [i_8] [i_8]) / (arr_7 [i_5] [i_8 - 2] [i_8] [i_6])))), (((((/* implicit */_Bool) arr_21 [i_8 + 1] [i_6] [i_8])) ? (((/* implicit */unsigned long long int) var_8)) : (var_5)))));
                var_20 = ((/* implicit */int) ((unsigned int) max((var_7), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)137)), (1657067160)))))));
            }
        }
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */int) ((unsigned short) ((signed char) arr_8 [0ULL] [i_5] [i_5] [i_5])))) != (((/* implicit */int) arr_17 [i_5] [i_5])))))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_5]))))) || ((!(((/* implicit */_Bool) var_5)))))) ? (((/* implicit */int) arr_24 [i_5] [i_5])) : (((((/* implicit */int) (unsigned char)118)) + (1657067186))))))));
    }
    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_10 = 1; i_10 < 12; i_10 += 1) 
        {
            for (short i_11 = 0; i_11 < 13; i_11 += 2) 
            {
                {
                    arr_33 [i_9] [4ULL] [i_9] = arr_14 [i_9] [i_9] [i_10 - 1] [i_10] [i_10 - 1] [i_11];
                    var_23 += ((/* implicit */signed char) max((arr_7 [i_9] [i_10 - 1] [i_9] [i_10]), (((/* implicit */unsigned int) arr_3 [i_9] [i_9]))));
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 2; i_13 < 11; i_13 += 3) 
                        {
                            {
                                arr_39 [i_12] [i_10 - 1] [i_12] [i_10] [i_10 - 1] [i_10] [i_10 - 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) arr_9 [i_10 + 1] [i_10] [i_10] [i_10 + 1])) > (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                                arr_40 [i_9] [i_12] [i_11] [i_9] [i_12] = ((/* implicit */long long int) ((signed char) ((unsigned int) (!(((/* implicit */_Bool) var_2))))));
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-2584))))) > (((var_7) * (((/* implicit */unsigned int) arr_21 [i_13] [i_13] [i_11])))))))) ^ (arr_31 [i_9] [i_10] [i_10] [5U]))))));
                                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8192))) / (arr_37 [i_9] [i_9] [i_10] [6LL] [6LL] [i_13]))) | (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)8191)), (1155201109U)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6)))))))));
                                arr_41 [i_11] [i_10 + 1] [i_11] &= ((/* implicit */unsigned int) arr_29 [i_9] [i_10]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_9] [i_9])) ? (arr_36 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (short)-8184))))))))))));
        var_27 ^= ((/* implicit */long long int) (+(-1913053070)));
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 13; i_14 += 3) /* same iter space */
    {
        var_28 -= ((/* implicit */short) (-(131071U)));
        var_29 = ((/* implicit */unsigned long long int) arr_12 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]);
    }
    var_30 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (short)-11309)), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)8184))))) ? (((13601980375250156635ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))));
    var_31 = ((/* implicit */unsigned char) (-(min((max((var_11), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) ((_Bool) var_8)))))));
}

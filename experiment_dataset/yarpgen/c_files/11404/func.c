/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11404
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((unsigned short) arr_4 [18ULL] [i_1]))))) == (max((arr_2 [i_0] [i_3] [i_4]), (arr_2 [21ULL] [i_2] [i_1]))))))));
                            arr_11 [i_4] [i_4] [i_4] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-73))) / (arr_10 [i_2] [i_2] [i_2] [i_3] [i_2])));
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)8] [(unsigned short)8] [i_0] [(short)13] [(unsigned short)8])))))));
                            arr_12 [i_2] [i_3] [(unsigned short)19] [i_2] [i_2] = ((/* implicit */short) arr_2 [i_1] [i_3] [i_1]);
                        }
                        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                        {
                            var_20 ^= ((/* implicit */_Bool) var_15);
                            var_21 = ((/* implicit */unsigned int) arr_1 [(unsigned short)6] [i_5]);
                        }
                        var_22 |= ((((/* implicit */unsigned long long int) arr_8 [(short)0] [i_1] [i_2] [i_3])) | (((((/* implicit */_Bool) 461297179U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)5040)) << (((((/* implicit */int) arr_13 [i_2] [i_2] [(unsigned short)22] [i_1])) - (38979)))))) : (max((16892893064564729918ULL), (((/* implicit */unsigned long long int) var_7)))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [1ULL] [i_0] [(short)14]);
        arr_17 [(signed char)2] [i_0] = ((/* implicit */short) arr_8 [i_0] [i_0] [i_0] [i_0]);
        var_24 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_2 [i_0] [i_0] [i_0]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))));
    }
    for (unsigned int i_6 = 1; i_6 < 11; i_6 += 1) 
    {
        arr_21 [i_6 - 1] [i_6] = ((/* implicit */unsigned short) arr_2 [i_6] [i_6] [i_6]);
        /* LoopNest 2 */
        for (long long int i_7 = 1; i_7 < 11; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                {
                    arr_28 [i_8] [i_6] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((((((/* implicit */int) arr_1 [i_6 - 1] [i_6 - 1])) & (((/* implicit */int) arr_5 [(_Bool)1] [(unsigned short)20])))), (((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_8 + 1] [i_6 - 1])) ? (((/* implicit */int) arr_3 [(unsigned short)5] [i_7 - 1])) : (((/* implicit */int) (short)15867))))))), (((long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_14))))));
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((short) ((4LL) << (((-4LL) + (34LL))))))) ? (((unsigned long long int) var_14)) : (((/* implicit */unsigned long long int) arr_16 [(unsigned short)16] [(_Bool)1] [i_7 + 2] [i_7 - 1] [i_6 + 2] [(_Bool)1])))))));
                }
            } 
        } 
        var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_6 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(short)12] [i_6 + 1] [12LL] [i_6 + 2]))) : (arr_4 [i_6] [8ULL])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((var_14), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_15 [i_6] [i_6] [i_6] [(unsigned short)2] [i_6])), (arr_5 [i_6] [(unsigned short)10]))))))));
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6] [i_6] [(unsigned short)18] [i_6])) ? (((var_3) % (((/* implicit */long long int) ((/* implicit */int) (short)32767))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)19653)) ? (((/* implicit */int) (unsigned short)31383)) : (((/* implicit */int) (signed char)-106)))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)45072)) % (((/* implicit */int) arr_25 [i_6] [i_6 - 1] [i_6 - 1])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned short)16] [i_6 + 2] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) arr_8 [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1])) : (18446744073709551615ULL)))) ? (((/* implicit */int) min(((unsigned short)41684), (arr_9 [i_6] [i_6] [i_6 - 1] [0LL])))) : (((/* implicit */int) arr_0 [i_6] [i_6]))))));
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (short)4219)), ((+(((/* implicit */int) arr_1 [i_6] [9ULL]))))))) ? (((((/* implicit */unsigned long long int) arr_27 [i_6] [i_6 - 1] [(unsigned short)10] [i_6])) / (((((/* implicit */_Bool) var_9)) ? (1ULL) : (((/* implicit */unsigned long long int) arr_8 [i_6 - 1] [(_Bool)1] [i_6] [i_6])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
    }
    for (short i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
    {
        var_29 -= arr_9 [i_9] [19LL] [16U] [2ULL];
        var_30 = ((/* implicit */_Bool) ((min((4ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [i_9] [i_9])), (arr_8 [i_9] [i_9] [i_9] [i_9])))))) & (max((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) arr_29 [i_9] [i_9])), (var_16)))))));
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
    {
        var_31 = arr_7 [i_10] [i_10] [i_10] [i_10] [12LL] [(unsigned short)15];
        var_32 = ((/* implicit */long long int) (short)570);
    }
    var_33 = ((/* implicit */short) var_8);
}

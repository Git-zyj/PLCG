/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160304
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((var_12) % (var_2)))))) : ((+(min((17763358697722097008ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [18LL] [18LL] [i_0]))))))));
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_8))));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
                {
                    var_15 = ((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))));
                    var_16 = ((/* implicit */int) ((long long int) (unsigned short)36857));
                    var_17 = (!(((/* implicit */_Bool) ((unsigned short) arr_5 [(short)10] [(short)10]))));
                    var_18 = ((/* implicit */int) var_8);
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_3])) : (var_5))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    var_19 |= ((/* implicit */long long int) var_1);
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_5 [6LL] [i_1])) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_12)) ? (var_2) : (arr_4 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_4]))));
                    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -5256018996661804292LL))));
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) ((short) var_7));
                        var_23 &= ((/* implicit */signed char) ((long long int) (((_Bool)1) ? (-4502197173123978460LL) : (var_6))));
                        var_24 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
                        var_25 = ((/* implicit */unsigned long long int) ((long long int) (unsigned short)39164));
                    }
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                    {
                        arr_21 [i_0] [i_1] [i_4] [(short)13] [i_6] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_12 [i_4] [i_1]))));
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (-(((/* implicit */int) ((short) var_6))))))));
                            var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0])) ? (var_5) : (arr_4 [i_0] [i_0] [i_4] [(short)3]))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                            arr_24 [i_0] [i_1] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 17763358697722097017ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_0] [i_6]))));
                        }
                        arr_25 [i_0] [i_4] [i_1] [i_1] [i_0] &= (-(var_12));
                    }
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) ^ ((~(arr_4 [i_1] [i_1] [i_4] [i_8])))));
                        var_29 = ((/* implicit */int) var_10);
                    }
                }
                for (unsigned short i_9 = 2; i_9 < 18; i_9 += 2) 
                {
                    var_30 = ((/* implicit */unsigned short) ((((unsigned int) var_9)) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_9] [i_0])) & (((/* implicit */int) arr_10 [i_9 + 2] [i_1] [i_0] [i_0])))))));
                    var_31 ^= (((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_9 - 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_9 + 2] [i_1] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))));
                    arr_30 [i_0] [i_0] [i_9] [(unsigned short)7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((-(var_12)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */long long int) var_12))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [2])))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) > ((~(-2305843009213693952LL))))))));
                    arr_31 [i_9] [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) ((var_2) / (((/* implicit */int) arr_12 [i_9 - 2] [i_9 - 2])))))));
                }
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)26354)) + (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (var_1) : (var_12))) != (var_12))))));
}

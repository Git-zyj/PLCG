/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149204
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
    var_14 = (unsigned char)38;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        arr_3 [7LL] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) ((arr_0 [i_0]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)38)))))) | (((/* implicit */int) var_8))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)139))))), (arr_1 [i_0 + 2])));
        arr_5 [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) var_8);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) (short)28156)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) != (((/* implicit */int) arr_6 [i_1]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) != (var_12))))));
        var_15 = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
    }
    /* LoopSeq 1 */
    for (short i_2 = 2; i_2 < 11; i_2 += 1) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (!(((((/* implicit */_Bool) (unsigned char)218)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31523)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (signed char)87))))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_17 += ((/* implicit */short) arr_11 [(unsigned char)2] [i_3] [i_2 - 1]);
            var_18 = ((/* implicit */signed char) arr_6 [i_2]);
        }
        for (unsigned int i_4 = 1; i_4 < 11; i_4 += 3) /* same iter space */
        {
            arr_15 [i_2] [(unsigned char)2] = ((/* implicit */short) arr_2 [i_2]);
            /* LoopSeq 2 */
            for (unsigned int i_5 = 1; i_5 < 11; i_5 += 1) /* same iter space */
            {
                var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) (~(703161453391379592ULL)))) ? (arr_9 [i_2]) : (((/* implicit */unsigned long long int) arr_0 [i_2 - 1]))))));
                var_20 = ((/* implicit */signed char) arr_11 [i_2] [i_4] [i_2]);
            }
            /* vectorizable */
            for (unsigned int i_6 = 1; i_6 < 11; i_6 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_6 [16ULL]))));
                arr_23 [i_2] [i_4] = var_11;
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        {
                            arr_30 [i_2] [i_7] [i_6] [i_4] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)238)) ? (((((/* implicit */_Bool) arr_26 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)123)))));
                            arr_31 [i_2] [5LL] [i_2] [i_2] [i_2] = arr_13 [i_4 + 1] [i_2] [i_4];
                            arr_32 [i_2] [i_4] [i_2] [i_7] [i_8] = ((/* implicit */long long int) (-(((/* implicit */int) arr_17 [(signed char)10] [i_6 - 1] [i_8]))));
                            var_22 = ((/* implicit */_Bool) (-(arr_7 [i_6 + 1])));
                        }
                    } 
                } 
                arr_33 [i_2] = ((/* implicit */long long int) arr_19 [i_6] [i_6 + 1] [2LL] [i_6]);
            }
        }
        for (unsigned int i_9 = 1; i_9 < 11; i_9 += 3) /* same iter space */
        {
            arr_37 [i_9] [i_2] [i_2] = ((/* implicit */unsigned int) (signed char)87);
            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) 5629970889224999624LL))));
            arr_38 [(unsigned char)0] [i_2] = ((/* implicit */short) var_10);
            arr_39 [i_2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_24 [i_2])))) ? (3590261394460667896LL) : (5629970889224999618LL)));
        }
        arr_40 [i_2] = ((/* implicit */_Bool) (short)-28156);
    }
    var_24 = ((/* implicit */signed char) -7107116626495131013LL);
}

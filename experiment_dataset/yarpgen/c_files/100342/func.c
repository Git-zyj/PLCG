/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100342
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
    var_17 = ((unsigned short) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_18 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_14))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_1 [i_0]) - (((((/* implicit */_Bool) (short)-24875)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)35433))) ? (max((((/* implicit */int) var_6)), ((~(((/* implicit */int) (short)-28927)))))) : (((/* implicit */int) (signed char)113))));
        arr_10 [i_2] = arr_5 [i_2] [i_2] [(short)3];
    }
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        arr_24 [8ULL] [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((short) var_10))), (arr_11 [i_3] [i_5])));
                        var_19 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))) + (10007667024938205050ULL))), (((/* implicit */unsigned long long int) max((var_15), (arr_0 [i_6])))));
                        arr_25 [i_3] [i_3] [i_4] [i_4] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) max((arr_20 [i_3] [i_4] [i_5] [i_3]), (arr_8 [i_3] [i_4])))) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) ((unsigned short) arr_20 [7ULL] [i_4] [i_4] [i_6])))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
                    {
                        var_20 ^= ((/* implicit */short) var_4);
                        arr_29 [i_3] [(short)3] [i_3] [i_5] [(short)5] [i_4] = ((/* implicit */long long int) arr_2 [i_5] [i_7]);
                    }
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
                    {
                        arr_34 [i_4] [i_3] = var_13;
                        arr_35 [i_5] [i_3] [i_4] [i_5] [i_5] [(unsigned short)0] &= ((/* implicit */short) arr_22 [i_3] [i_5] [i_8]);
                        arr_36 [i_3] [i_8] [i_4] [i_5] [i_5] [8ULL] &= ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35448)))))) ? (min((12553507779265632773ULL), (((/* implicit */unsigned long long int) (signed char)16)))) : (((((/* implicit */_Bool) (short)-31785)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12051)))))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
                    {
                        arr_39 [i_3] [9ULL] [i_4] = ((/* implicit */short) ((unsigned short) ((unsigned long long int) arr_32 [i_4] [i_4])));
                        var_21 = ((/* implicit */short) max((max(((-(((/* implicit */int) arr_0 [i_9])))), (((/* implicit */int) max((((/* implicit */short) arr_3 [i_3] [i_5] [i_9])), ((short)5711)))))), (((/* implicit */int) arr_7 [i_4]))));
                        arr_40 [i_9] [i_4] [i_4] [i_4] [i_4] &= (unsigned short)38256;
                    }
                    arr_41 [i_3] [i_4] [i_4] [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned short) min(((short)19811), (((/* implicit */short) (signed char)79))))), (((unsigned short) (unsigned short)65534))));
                }
            } 
        } 
        arr_42 [i_3] = ((/* implicit */long long int) ((((arr_12 [i_3] [i_3]) >> (((((/* implicit */int) (unsigned short)28549)) - (28506))))) == (arr_12 [i_3] [i_3])));
        var_22 -= ((short) ((short) arr_32 [i_3] [i_3]));
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_15)) < (((/* implicit */int) var_2))))), ((-(((/* implicit */int) var_11))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) var_12))), (var_7)))) : (((((/* implicit */int) ((short) var_8))) * (((/* implicit */int) var_11))))));
}

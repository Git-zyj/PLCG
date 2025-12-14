/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144218
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 1) 
                    {
                        {
                            arr_15 [9U] [i_1] [i_2] [(unsigned short)5] [21U] [i_4] [(unsigned char)1] = ((/* implicit */signed char) ((unsigned int) arr_10 [i_4 - 1] [(short)1] [19LL] [i_4 - 1] [i_4 + 1]));
                            arr_16 [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) arr_1 [i_4 + 1] [i_4 + 1]));
                            var_11 = ((/* implicit */int) ((_Bool) 9223372036854775807LL));
                            var_12 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (-9223372036854775807LL) : (((/* implicit */long long int) 1290964286))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4 + 1] [16U] [i_4 + 1] [i_4] [i_4 + 1])))));
                        }
                    } 
                } 
            } 
            var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (4447846700843763287ULL) : (arr_3 [i_0])));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                for (long long int i_6 = 3; i_6 < 22; i_6 += 2) 
                {
                    {
                        var_14 = var_6;
                        arr_21 [i_6] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_10 [(unsigned short)11] [1LL] [i_5] [(_Bool)1] [(signed char)2]))))));
                        arr_22 [(unsigned short)16] [i_6] [8ULL] [7ULL] [i_6] [13ULL] = ((((/* implicit */_Bool) arr_9 [i_6 - 3] [i_6 - 1] [i_1])) ? (arr_9 [i_6 - 2] [i_6 - 2] [15U]) : (arr_9 [i_6] [i_6 - 1] [(unsigned char)21]));
                    }
                } 
            } 
        }
        for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            var_15 = ((/* implicit */signed char) ((unsigned char) arr_14 [i_0] [18U] [i_0] [i_0] [i_0]));
            var_16 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_7])) ? (var_4) : (((/* implicit */int) ((unsigned char) 9223372036854775789LL)))));
            var_17 = ((/* implicit */long long int) (-(((int) (unsigned char)183))));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                var_18 = ((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)65535))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 22; i_9 += 3) 
                {
                    for (long long int i_10 = 1; i_10 < 22; i_10 += 3) 
                    {
                        {
                            arr_32 [(unsigned char)14] [(unsigned char)14] [i_7] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_7] [i_8]))) & ((-9223372036854775807LL - 1LL))));
                            arr_33 [8U] [(unsigned char)0] [i_8] [(short)14] [17U] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_10 - 1] [(signed char)6] [i_10 + 1] [(signed char)6] [i_10])) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) arr_29 [i_10 - 1] [(signed char)1] [i_10 + 1] [i_10] [(signed char)4]))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((10161425640972659392ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)668))))))));
            }
        }
        var_20 &= ((/* implicit */unsigned int) arr_25 [i_0] [i_0]);
    }
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 10; i_11 += 3) 
    {
        arr_36 [i_11] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) 1904409140)) ? (215091632673120049ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_3)))) > (9223372036854775807LL)));
        var_22 = ((/* implicit */long long int) arr_24 [14ULL] [(unsigned short)13] [(signed char)22]);
    }
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242)))))))) ? (18231652441036431567ULL) : (((((/* implicit */unsigned long long int) ((unsigned int) 9223372036854775807LL))) % (2147483646ULL)))));
    var_24 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) var_10)) - ((+(12596907966238177986ULL)))))));
    var_25 = ((/* implicit */signed char) ((short) ((((((/* implicit */_Bool) (signed char)-40)) || (((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) 2620894941U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (2469900124094382931ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16303))))));
}

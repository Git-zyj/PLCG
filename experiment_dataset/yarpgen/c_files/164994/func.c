/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164994
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-1)), (min((((/* implicit */long long int) (_Bool)1)), (var_8)))))) ? ((+(((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */long long int) var_3)))))) : (((((/* implicit */long long int) (-(((/* implicit */int) var_10))))) % (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7))) : (var_8)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (((var_7) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))));
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_1 [i_0])))))));
            var_16 -= ((unsigned short) ((var_9) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_1]))));
            var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_0]))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_18 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_3] [i_2]))));
                        arr_12 [i_2] [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (_Bool)0))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8729512036850155574LL)));
                    }
                } 
            } 
            arr_13 [i_2] [i_2] [i_2] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) (_Bool)0)) / (arr_5 [i_0] [i_0]))));
            /* LoopSeq 4 */
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_6 = 1; i_6 < 17; i_6 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */int) ((unsigned long long int) arr_16 [i_5] [i_5] [i_6 + 2] [i_6]));
                    var_20 = ((/* implicit */int) ((arr_15 [i_6 - 1] [i_6] [i_6] [i_6 + 1]) & (arr_15 [i_6 + 2] [i_6] [i_6] [i_6 + 2])));
                }
                for (int i_7 = 1; i_7 < 17; i_7 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */_Bool) ((arr_7 [i_2] [i_7 + 1] [i_7 - 1] [i_2]) | (((((/* implicit */_Bool) (short)7)) ? (((/* implicit */unsigned long long int) 16515072)) : (10687755642514474797ULL)))));
                    var_22 |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-18926))) / (arr_19 [i_0] [i_7 - 1] [i_7 + 2] [i_7 + 1])));
                    var_23 ^= ((/* implicit */long long int) (-(arr_7 [i_2] [i_7 - 1] [i_7 + 2] [i_7 + 2])));
                }
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-18937)) ? (arr_11 [i_0] [i_2] [i_5] [i_5] [i_8]) : (((/* implicit */int) ((short) arr_0 [i_0])))));
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        arr_27 [i_0] [i_2] [i_5] [i_8] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_3 [i_9] [i_5] [i_5])))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_5) : (((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_2] [i_8] [i_9])))));
                        var_25 |= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) >= (((/* implicit */int) arr_18 [i_0]))));
                        arr_28 [i_8] = ((/* implicit */_Bool) (((!(var_9))) ? (((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_8] [i_2])) ? (arr_5 [i_8] [i_8]) : (((/* implicit */int) (short)-18926)))) : (((/* implicit */int) arr_22 [i_0] [i_2] [i_5] [i_8] [i_9]))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((3319974637U) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) != (((/* implicit */int) (short)-17887))))))))));
                    }
                    for (long long int i_10 = 2; i_10 < 19; i_10 += 1) 
                    {
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] = ((/* implicit */long long int) ((arr_23 [i_10 - 2] [i_10 - 1] [i_10 - 2] [i_10] [i_10 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_10] [i_0]))) : ((+(arr_14 [i_8] [i_8] [i_8] [i_8])))));
                        var_27 = ((/* implicit */short) ((int) arr_0 [i_10 + 1]));
                    }
                }
                var_28 = ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0]))) >= (((0LL) % (((/* implicit */long long int) 3652298904U)))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
            {
                var_29 = ((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_0])) * (arr_5 [i_0] [i_0])));
                /* LoopSeq 1 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_37 [i_0] [i_0] [i_0] = ((/* implicit */int) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15658))) : (10140698763386266376ULL)));
                    arr_38 [i_11] [i_2] [i_11] [i_12] [i_11] = ((/* implicit */unsigned long long int) ((arr_9 [i_2] [i_2] [i_11] [i_12]) - (arr_9 [i_2] [i_2] [i_11] [i_12])));
                    var_30 = arr_21 [i_2] [i_2] [i_2] [i_2] [i_2];
                    var_31 = ((/* implicit */short) ((((arr_26 [i_0]) ? (arr_20 [i_0] [i_2] [i_2] [i_11] [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_2] [i_11]))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3663))) : (var_3))))));
                    arr_39 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((arr_11 [i_0] [i_2] [i_11] [i_11] [i_12]) - (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])));
                }
            }
            for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
            {
                var_32 = ((/* implicit */short) ((arr_34 [i_0] [i_0] [i_0]) <= (arr_34 [i_0] [i_0] [i_0])));
                var_33 &= arr_21 [i_13] [i_2] [i_2] [i_0] [i_0];
            }
            for (long long int i_14 = 0; i_14 < 20; i_14 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_15 = 0; i_15 < 20; i_15 += 4) 
                {
                    var_34 = ((/* implicit */unsigned int) arr_43 [i_0] [i_2] [i_14] [i_15]);
                    arr_48 [i_0] [i_2] [i_14] [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (arr_11 [i_0] [i_2] [i_14] [i_15] [i_15]) : (((((/* implicit */_Bool) -11394236)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
                    arr_49 [i_14] [i_14] [i_2] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_21 [i_0] [i_0] [i_0] [i_14] [i_0])));
                    var_35 = ((/* implicit */unsigned int) arr_7 [i_14] [i_2] [i_14] [i_15]);
                }
                var_36 += (+(17985939865582573695ULL));
            }
        }
        var_37 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (-(var_3)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (arr_9 [(_Bool)1] [i_0] [i_0] [i_0])))))))));
        var_38 = ((/* implicit */long long int) arr_7 [(short)4] [i_0] [(short)4] [i_0]);
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170980
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (var_1)))) : (((((/* implicit */unsigned long long int) var_10)) ^ (var_9))))) : (((/* implicit */unsigned long long int) max((var_10), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_19)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_2] [12LL] [i_1] [i_2] = ((/* implicit */signed char) ((short) arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1]));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */signed char) ((long long int) arr_4 [i_0] [(unsigned short)8] [i_2 + 1]));
                            arr_15 [i_4] [i_4] [i_4] [i_3] [i_4] [i_4] |= ((/* implicit */_Bool) var_7);
                            var_22 = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [8U] [13ULL])) >> (((arr_3 [i_1] [i_2 - 2]) + (153323633832321243LL)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [8U] [13ULL])) >> (((((arr_3 [i_1] [i_2 - 2]) + (153323633832321243LL))) + (4777437851294847443LL))))));
                            var_23 = ((/* implicit */short) ((unsigned int) arr_5 [i_2 + 1] [i_2] [i_2 + 1]));
                        }
                        for (long long int i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                        {
                            arr_20 [i_0] [i_5] [i_5] &= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)244)) % (((/* implicit */int) (signed char)-22))));
                            arr_21 [i_1] [9] [11U] [i_1] [9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))));
                        }
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_19 [i_0] [i_2 + 2] [i_1])) : (arr_11 [15U] [15U] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1])));
                            var_25 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (arr_16 [i_0] [7ULL] [i_0] [i_0] [i_0] [i_0] [20LL]))) - (arr_24 [i_6] [i_6] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                            arr_25 [i_0] [i_1] [7U] [(unsigned char)0] [i_1] [i_1] = ((/* implicit */unsigned int) var_1);
                            var_26 += ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (unsigned char)251)))));
                        }
                    }
                } 
            } 
            var_27 &= ((/* implicit */signed char) ((arr_18 [(unsigned char)18] [(unsigned char)18] [(unsigned char)18] [i_1] [i_0] [i_0]) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_22 [(_Bool)1]))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (-((+(arr_3 [8ULL] [8ULL]))))))));
            arr_28 [i_7] [i_0] [i_0] = ((/* implicit */signed char) ((arr_24 [i_0] [i_0] [i_7] [i_0] [5LL] [i_7]) >= (((/* implicit */unsigned long long int) arr_27 [i_7]))));
        }
        arr_29 [i_0] [i_0] = ((/* implicit */long long int) ((var_11) ? (((/* implicit */int) var_4)) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [19ULL])));
    }
    var_29 ^= max((((max((((/* implicit */long long int) var_17)), (562949953421184LL))) >= (((/* implicit */long long int) ((/* implicit */int) max((var_3), (var_4))))))), (((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((long long int) ((_Bool) (signed char)-7))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))))))));
    var_31 = ((/* implicit */unsigned long long int) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)21))) <= (4611123068473966592ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 4362862139015168ULL)))) : (((((/* implicit */_Bool) (unsigned char)7)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
}

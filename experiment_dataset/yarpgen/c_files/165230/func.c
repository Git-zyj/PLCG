/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165230
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
    var_19 = (_Bool)1;
    var_20 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_10))))) / (var_10)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 11; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_2 - 2] [i_1 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_2 - 3] [i_1 - 2]))));
                var_22 = ((/* implicit */signed char) var_4);
                /* LoopSeq 2 */
                for (int i_3 = 1; i_3 < 12; i_3 += 1) 
                {
                    arr_9 [i_3 - 1] [i_3] [i_3] [i_0] = ((((_Bool) 3U)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_0 [5ULL] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 3; i_4 < 12; i_4 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned int) (_Bool)1);
                        arr_14 [i_0] [i_1] [i_2] [7ULL] [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) (short)-30582)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
                    }
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_18 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) var_0);
                    arr_19 [i_0] [i_5] = ((/* implicit */unsigned char) var_2);
                }
            }
            for (long long int i_6 = 1; i_6 < 12; i_6 += 4) 
            {
                var_24 ^= ((/* implicit */_Bool) ((((max((arr_0 [i_0] [i_6 + 1]), (((/* implicit */unsigned long long int) arr_2 [i_1 - 2] [i_6])))) | (((/* implicit */unsigned long long int) max((4199214743U), (arr_16 [i_0])))))) % (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (363152687U))))));
                var_25 &= ((/* implicit */_Bool) (((~(((/* implicit */int) arr_13 [i_1 + 2] [i_1 - 1] [i_1 - 2])))) % (((arr_20 [i_1 - 2] [9ULL] [i_1 + 2] [i_1 + 1]) ? (((/* implicit */int) arr_20 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 2])) : (((/* implicit */int) arr_20 [i_1 + 2] [i_1] [i_1] [i_1 - 1]))))));
            }
            var_26 -= ((/* implicit */short) (-(((/* implicit */int) max((((/* implicit */signed char) arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 2])), (var_5))))));
        }
        for (signed char i_7 = 2; i_7 < 11; i_7 += 4) /* same iter space */
        {
            var_27 -= ((/* implicit */_Bool) 363152689U);
            arr_26 [i_0] [i_7] [i_7 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((((_Bool)1) || (((/* implicit */_Bool) 363152668U)))))))) : (((unsigned long long int) arr_3 [i_7 - 1] [i_7 + 1]))));
            arr_27 [(_Bool)1] &= ((/* implicit */short) (((-(((/* implicit */int) (_Bool)1)))) != (((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) arr_6 [i_7] [i_0] [i_7] [i_0])) << (((/* implicit */int) var_14))))))));
            arr_28 [i_0] = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_16 [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 2]))))), (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) arr_7 [i_0] [i_7] [i_0])))))))));
        }
        var_28 = ((/* implicit */signed char) var_15);
        arr_29 [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
        var_29 = ((/* implicit */signed char) max((((/* implicit */unsigned int) max(((short)-31517), (((/* implicit */short) arr_6 [i_0] [i_0] [(unsigned short)11] [i_0]))))), (95752538U)));
    }
    for (signed char i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
    {
        arr_33 [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((_Bool) 95752559U)), (((((/* implicit */int) var_14)) != (((/* implicit */int) arr_8 [i_8] [i_8] [i_8])))))))));
        var_30 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_6 [i_8] [i_8] [i_8] [i_8]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_6))))) : (min((((/* implicit */unsigned int) (_Bool)1)), (3931814610U))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((1U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_9 = 1; i_9 < 11; i_9 += 1) 
        {
            arr_36 [i_9] [i_9] [i_9 + 2] = ((/* implicit */short) 3540222973U);
            var_31 = ((/* implicit */int) min((min((arr_32 [i_9 + 2]), (((/* implicit */long long int) ((4294967286U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_9] [i_8])))))))), (((/* implicit */long long int) min((9U), (((/* implicit */unsigned int) (_Bool)1)))))));
        }
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122461
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_4 [(unsigned short)9] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_4) * (var_5)))) ? (arr_1 [9U] [i_1]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) (-(arr_0 [i_0] [i_0]))))))));
            arr_5 [i_0] [(signed char)0] = arr_0 [i_0] [i_1];
            arr_6 [i_0] [(unsigned short)14] [i_0] = max((2153812188U), (((/* implicit */unsigned int) (signed char)-69)));
        }
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */signed char) ((_Bool) var_1));
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) 2206292996U))))) ? (var_4) : (min((((/* implicit */unsigned int) var_11)), (var_1)))))), (((((/* implicit */long long int) ((var_10) / (((/* implicit */int) var_15))))) + (((((/* implicit */_Bool) arr_1 [(unsigned short)18] [i_0])) ? (var_8) : (((/* implicit */long long int) arr_2 [(unsigned short)11] [i_2])))))))))));
            var_19 = ((/* implicit */signed char) ((arr_1 [i_0] [18ULL]) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) - (((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
        {
            arr_12 [i_0] = ((/* implicit */unsigned short) ((long long int) (_Bool)1));
            arr_13 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_2)))) ? (arr_7 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) var_16))));
        }
        /* LoopSeq 3 */
        for (short i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) | (((var_16) + (((/* implicit */int) (_Bool)1)))))) | (((((((/* implicit */int) (unsigned short)27518)) << (((((/* implicit */int) var_13)) - (28420))))) >> (((((/* implicit */int) (_Bool)1)) << (((arr_11 [(_Bool)1] [i_4] [i_4]) - (992280420U))))))))))));
            arr_17 [(short)2] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_16 [i_0]))))), (((unsigned short) max((arr_1 [i_4] [i_0]), (((/* implicit */unsigned long long int) (_Bool)1)))))));
            var_21 = ((unsigned int) (+(max((((/* implicit */unsigned int) var_15)), (var_3)))));
        }
        for (unsigned short i_5 = 2; i_5 < 19; i_5 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) ((((arr_19 [i_5 - 1] [i_5]) && ((_Bool)1))) ? (max((((/* implicit */unsigned long long int) var_16)), (arr_1 [i_5 + 2] [i_5 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5]))) / (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((arr_11 [(short)3] [(short)19] [i_5]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)75))))))))));
            var_23 = ((/* implicit */int) max((var_23), ((-((+(((/* implicit */int) arr_18 [i_5 + 1] [i_5 - 2]))))))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned int) max(((((_Bool)1) ? (0) : (var_10))), (((/* implicit */int) arr_14 [i_5 - 1]))))) >= ((~(var_2)))));
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                arr_22 [(_Bool)0] [i_5] = ((/* implicit */signed char) 12135221709456922745ULL);
                var_25 = ((/* implicit */unsigned int) max((var_25), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_6])) ^ (((/* implicit */int) arr_19 [i_6] [11ULL]))))), (((((/* implicit */_Bool) arr_0 [i_0] [(short)1])) ? (arr_7 [i_5]) : (247028287U)))))) ? (max((((/* implicit */unsigned int) arr_19 [i_5 + 2] [i_5 + 2])), (((arr_15 [i_0] [i_0] [i_0]) >> (((arr_7 [i_6]) - (397921647U))))))) : (((arr_2 [i_5] [i_5 - 2]) << (((arr_2 [i_5] [i_5 - 2]) - (3661549477U)))))))));
                /* LoopSeq 2 */
                for (signed char i_7 = 3; i_7 < 20; i_7 += 2) 
                {
                    arr_26 [i_7] [i_6] [i_5] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_15 [i_0] [i_0] [i_6]), (((/* implicit */unsigned int) arr_19 [i_7] [i_5]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_25 [i_0] [i_5] [i_0] [i_7]))))) : ((~(var_14))))))));
                    var_26 += ((/* implicit */_Bool) var_11);
                }
                for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    arr_30 [i_0] [i_0] [14U] [i_0] = ((/* implicit */int) (_Bool)1);
                    arr_31 [i_0] [i_5] [i_8] = ((/* implicit */unsigned int) var_7);
                }
                var_27 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
            }
        }
        /* vectorizable */
        for (unsigned short i_9 = 2; i_9 < 19; i_9 += 2) /* same iter space */
        {
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_9] [i_9 + 2])) && (((/* implicit */_Bool) arr_21 [i_9 - 1] [i_9 - 2] [i_9 - 2] [i_9]))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                for (int i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    {
                        var_29 = ((/* implicit */unsigned int) 6311522364252628860ULL);
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0] [i_9] [i_9 - 1]))) - (var_14)));
                        arr_39 [i_0] [i_9] [i_0] [12] = ((/* implicit */unsigned short) ((4089833811U) - (((((/* implicit */_Bool) 12135221709456922745ULL)) ? (arr_11 [i_0] [i_9] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
            var_31 = ((/* implicit */int) arr_3 [i_0] [i_9 - 2]);
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                for (long long int i_13 = 1; i_13 < 18; i_13 += 1) 
                {
                    {
                        arr_44 [12U] [i_13] [i_9] [i_12] [i_13] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_9 - 2] [i_9] [(short)13] [i_9])))))));
                        var_32 = ((/* implicit */unsigned int) var_16);
                    }
                } 
            } 
        }
    }
    var_33 = ((/* implicit */signed char) (~(var_16)));
    var_34 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((14870489245436971688ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (_Bool)1)) : (var_16)))) ? (((/* implicit */unsigned long long int) var_14)) : (var_12));
}

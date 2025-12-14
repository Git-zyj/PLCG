/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141467
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) var_10);
        var_19 *= ((/* implicit */short) ((unsigned short) arr_2 [i_0]));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_20 |= ((/* implicit */unsigned char) arr_3 [i_1]);
            /* LoopNest 3 */
            for (unsigned short i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        {
                            var_21 = arr_1 [i_0];
                            arr_14 [i_0] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) arr_0 [i_0] [i_2 - 1]));
                            var_22 = ((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (arr_3 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (var_14)))));
                        }
                    } 
                } 
            } 
            var_23 &= ((/* implicit */long long int) var_1);
            /* LoopSeq 3 */
            for (short i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */int) ((signed char) arr_10 [i_0] [i_0] [i_1] [i_1] [i_1]));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        {
                            var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65019)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32256)))));
                            var_26 = ((/* implicit */unsigned long long int) ((unsigned char) -4899447496776140527LL));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32256)) ? (((/* implicit */unsigned long long int) 2085311084)) : (2037341473731916831ULL)))) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_6] [i_0])) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_5] [i_6] [i_7])) : (((/* implicit */int) var_15)))))))));
                            var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))) == ((+(((/* implicit */int) arr_19 [i_1] [i_5] [i_1] [20LL]))))));
                            var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (arr_6 [i_0]) : (arr_6 [i_0])));
                        }
                    } 
                } 
            }
            for (short i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned long long int) ((unsigned short) arr_21 [i_8] [i_0] [i_0] [i_0]));
                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_7)))))));
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    arr_30 [i_0] [i_0] [(unsigned char)20] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_0] [i_9])) ? (arr_25 [i_0] [i_9]) : (arr_25 [i_1] [i_8])));
                    var_32 = ((/* implicit */unsigned long long int) arr_26 [i_9] [i_8]);
                    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_9] [i_1] [(unsigned short)20] [i_9] [i_9])) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [8ULL] [i_1] [i_1] [(short)3] [i_1]))))))));
                }
                var_34 = ((/* implicit */unsigned short) var_14);
            }
            for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                var_35 = ((/* implicit */unsigned short) var_1);
                /* LoopNest 2 */
                for (short i_11 = 1; i_11 < 22; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 1; i_12 < 23; i_12 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */short) arr_1 [i_0]);
                            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_12 + 1])) + (((/* implicit */int) arr_10 [i_11 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1])))))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)22191)) : (((/* implicit */int) arr_5 [i_0]))));
            }
        }
        for (unsigned char i_13 = 3; i_13 < 21; i_13 += 3) 
        {
            var_39 &= ((/* implicit */unsigned short) ((unsigned int) arr_25 [i_13 - 2] [i_13 + 2]));
            var_40 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_24 [i_0] [(short)16])) : (((/* implicit */int) arr_10 [(unsigned short)9] [(unsigned short)9] [(unsigned short)9] [(unsigned short)9] [i_13 + 2]))));
        }
    }
    var_41 ^= ((/* implicit */unsigned char) min((((/* implicit */short) ((unsigned char) var_5))), (var_15)));
    var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) var_17))));
}

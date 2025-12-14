/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110701
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
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~((-(var_6)))));
        var_12 = ((/* implicit */unsigned short) (short)30519);
        var_13 ^= ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) min((var_5), (arr_1 [i_0] [i_0])))), (min((var_6), (((/* implicit */long long int) arr_1 [i_0] [i_0])))))), (((/* implicit */long long int) var_1))));
        var_14 ^= ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */short) min((5426422176621642986LL), (((/* implicit */long long int) var_10))));
    }
    for (unsigned short i_1 = 4; i_1 < 19; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            arr_10 [i_1 - 2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1 - 4] [i_1 + 1])) ? (((/* implicit */int) arr_5 [i_1 - 4])) : (((/* implicit */int) arr_1 [i_1 - 4] [i_1 + 1]))));
            arr_11 [i_1] [i_1] |= ((/* implicit */unsigned short) ((_Bool) arr_8 [i_1] [i_1 - 4]));
            var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)16))));
        }
        for (long long int i_3 = 1; i_3 < 16; i_3 += 3) 
        {
            var_16 *= ((/* implicit */signed char) min((((arr_0 [i_1] [i_3 + 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 - 3] [i_1 - 2]))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_14 [i_1 - 1])), (arr_7 [i_3] [i_1 + 1]))))));
            var_17 = ((/* implicit */unsigned short) min((max((max((((/* implicit */unsigned int) var_0)), (var_7))), (((/* implicit */unsigned int) ((((/* implicit */long long int) var_11)) != (-8155653317236625263LL)))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_1 - 3])))))));
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_1)), ((unsigned short)34391))))));
        }
        for (unsigned int i_4 = 3; i_4 < 16; i_4 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_5 = 3; i_5 < 18; i_5 += 2) 
            {
                var_19 *= ((/* implicit */short) arr_15 [i_4]);
                var_20 = ((/* implicit */unsigned short) var_0);
                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
            }
            /* LoopSeq 3 */
            for (unsigned short i_6 = 2; i_6 < 17; i_6 += 1) 
            {
                arr_24 [i_1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) var_11);
                var_22 = ((/* implicit */unsigned short) min((var_7), (((/* implicit */unsigned int) max((arr_13 [i_1]), (((/* implicit */unsigned char) arr_19 [i_4])))))));
                /* LoopSeq 1 */
                for (unsigned short i_7 = 3; i_7 < 19; i_7 += 3) 
                {
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) min((arr_9 [i_1] [i_4]), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned char)89))))))))))));
                    var_24 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) (unsigned char)239)))))))), (arr_23 [i_1 + 1] [i_4] [i_6] [i_4])));
                    var_25 = (i_4 % 2 == zero) ? (((/* implicit */unsigned short) ((max((min((((/* implicit */long long int) arr_26 [i_1] [i_1] [i_6 + 1] [i_7])), (var_6))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (arr_20 [i_1 - 2])))))) >> (((min((((/* implicit */long long int) arr_25 [i_1 - 1] [i_6 + 2] [i_6 + 3] [i_7 - 1] [i_4])), (arr_23 [i_1 - 3] [i_6 + 1] [i_6 + 1] [i_4]))) + (6054977878873753794LL)))))) : (((/* implicit */unsigned short) ((max((min((((/* implicit */long long int) arr_26 [i_1] [i_1] [i_6 + 1] [i_7])), (var_6))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (arr_20 [i_1 - 2])))))) >> (((((min((((/* implicit */long long int) arr_25 [i_1 - 1] [i_6 + 2] [i_6 + 3] [i_7 - 1] [i_4])), (arr_23 [i_1 - 3] [i_6 + 1] [i_6 + 1] [i_4]))) + (6054977878873753794LL))) + (2156599432653150450LL))))));
                }
            }
            for (unsigned short i_8 = 3; i_8 < 18; i_8 += 1) 
            {
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_1] [i_1])) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_28 [i_8] [i_4])), (arr_16 [(unsigned short)18])))))))));
                var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_6 [i_4 - 3]), (((/* implicit */short) var_9)))))));
                var_28 ^= ((/* implicit */short) (-(((/* implicit */int) arr_19 [18LL]))));
                var_29 = ((/* implicit */unsigned short) arr_16 [i_4]);
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((+(((/* implicit */int) arr_19 [i_4]))))))) ? (((/* implicit */int) var_5)) : ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_1] [i_4 + 2]))))))));
                arr_32 [i_1] [i_1] [(unsigned char)4] [i_9] |= ((/* implicit */short) max((max(((+(arr_26 [i_1 + 1] [i_1] [i_4] [i_9]))), (((/* implicit */unsigned int) arr_18 [i_4 - 2] [i_1 - 4] [i_4])))), (((/* implicit */unsigned int) min((arr_22 [(short)8] [i_1 - 1] [i_1 - 2]), (arr_22 [16ULL] [i_1 + 1] [i_1 - 4]))))));
                arr_33 [i_1] [i_4] [i_9] = arr_31 [i_9] [i_9] [i_9] [i_1];
                var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_29 [i_1 + 1] [i_1] [i_1 + 1] [i_4]))));
            }
            arr_34 [i_4] [i_4] = ((/* implicit */unsigned int) var_5);
        }
        arr_35 [i_1] = ((/* implicit */unsigned short) var_8);
    }
    var_32 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_10 = 1; i_10 < 19; i_10 += 1) 
    {
        var_33 = ((/* implicit */long long int) arr_14 [i_10]);
        arr_38 [i_10] [i_10] = ((/* implicit */_Bool) var_9);
    }
}

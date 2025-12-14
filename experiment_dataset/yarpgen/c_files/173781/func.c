/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173781
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
    var_14 = ((/* implicit */short) var_12);
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) /* same iter space */
    {
        var_15 ^= ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1])))) || (((/* implicit */_Bool) ((signed char) var_1))));
    }
    for (signed char i_1 = 1; i_1 < 9; i_1 += 1) /* same iter space */
    {
        arr_5 [(short)4] [i_1] &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(unsigned short)6])))))) * (min((arr_3 [(unsigned char)6]), (((/* implicit */unsigned int) arr_1 [i_1]))))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)1)) >> (((/* implicit */int) (signed char)19)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) arr_1 [i_1 - 1]);
            /* LoopSeq 4 */
            for (signed char i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
            {
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((unsigned short) arr_10 [i_3] [(unsigned short)7] [i_1])))));
                var_19 = ((/* implicit */short) arr_4 [(_Bool)1] [i_2 + 2]);
                var_20 = ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
            }
            for (signed char i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */signed char) var_2);
                var_22 = ((/* implicit */unsigned short) ((unsigned long long int) arr_6 [i_1 + 1]));
            }
            for (signed char i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) arr_12 [i_1 + 1] [i_2 - 1] [i_5] [i_2 - 1]))));
                arr_18 [i_1] [i_1] = ((/* implicit */unsigned short) arr_9 [i_1 + 1] [i_1 + 1] [i_1 - 1]);
            }
            for (signed char i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (signed char i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    var_24 = ((/* implicit */unsigned int) arr_23 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1]);
                    arr_25 [i_1] [i_6] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_24 [i_2 - 1] [(signed char)0] [(signed char)0] [i_7 - 1])) < (((/* implicit */int) arr_10 [i_2 + 1] [i_6] [i_6]))));
                }
                for (signed char i_8 = 2; i_8 < 8; i_8 += 1) 
                {
                    var_25 += ((/* implicit */signed char) ((unsigned long long int) var_11));
                    var_26 = (signed char)-2;
                }
                for (unsigned char i_9 = 1; i_9 < 7; i_9 += 4) 
                {
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) arr_9 [i_9 + 2] [i_1 - 1] [i_2 + 2]))));
                    arr_31 [i_1] [i_2] [i_2] [i_9] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)12)) >> (((arr_16 [i_2 + 3] [i_2 + 3]) - (3651368906U)))));
                    var_28 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-2))));
                }
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    for (signed char i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        {
                            var_29 = ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_13 [i_11] [i_1] [i_1] [i_1])));
                            arr_38 [i_1] [i_1] [i_1] [i_10] [i_11] = ((/* implicit */unsigned short) ((unsigned char) arr_10 [i_1 + 1] [i_1 + 1] [i_2 - 1]));
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)1)))))));
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_19 [i_1 - 1])))))));
                        }
                    } 
                } 
            }
            arr_39 [i_1] = ((/* implicit */unsigned short) ((arr_14 [i_1] [i_1] [i_2 + 2]) || (((/* implicit */_Bool) ((signed char) var_10)))));
            arr_40 [i_1] = ((/* implicit */unsigned short) arr_3 [i_1]);
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_30 [i_2] [i_2] [i_2] [i_2 + 1])) == (((/* implicit */int) arr_30 [i_2] [i_2] [i_2] [i_2 + 2]))));
        }
        for (signed char i_12 = 0; i_12 < 10; i_12 += 3) /* same iter space */
        {
            var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_26 [(signed char)0] [i_1] [i_1] [(signed char)0]), (arr_26 [(unsigned short)2] [i_1 - 1] [i_1 - 1] [(unsigned short)2])))) >> (((((((/* implicit */int) var_11)) - (((/* implicit */int) arr_26 [4] [i_1] [i_1] [4])))) + (133)))));
            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1])) >> (((((/* implicit */int) var_3)) - (43345)))))))))));
        }
        for (signed char i_13 = 0; i_13 < 10; i_13 += 3) /* same iter space */
        {
            arr_47 [i_1] [i_13] [i_1] = ((/* implicit */_Bool) arr_21 [i_1] [i_1] [(short)4]);
            var_35 = ((/* implicit */unsigned short) min((var_35), (var_6)));
        }
    }
    for (signed char i_14 = 1; i_14 < 9; i_14 += 1) /* same iter space */
    {
        var_36 |= ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) arr_19 [i_14])))));
        var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((unsigned long long int) min((arr_42 [i_14 - 1] [(signed char)3] [i_14]), (arr_42 [i_14 - 1] [i_14] [i_14])))))));
        arr_51 [i_14] [i_14] = ((/* implicit */signed char) var_4);
    }
}

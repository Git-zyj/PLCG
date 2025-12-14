/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173521
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
    var_17 |= ((/* implicit */int) var_4);
    var_18 += ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) var_16);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
                        arr_16 [i_4] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_12);
                        var_20 = ((/* implicit */unsigned int) (!(var_5)));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) var_8);
                        var_22 = ((arr_18 [i_5] [i_5] [i_5] [i_5] [i_5]) >> ((((~(var_9))) - (805823698U))));
                        arr_20 [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)255)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15418)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_18 [i_0 - 2] [i_3] [i_1] [i_0 - 2] [i_5])));
                        var_23 = ((/* implicit */short) (~(((/* implicit */int) var_7))));
                    }
                    arr_21 [i_3] = ((/* implicit */_Bool) var_14);
                }
                /* LoopNest 2 */
                for (unsigned short i_6 = 1; i_6 < 18; i_6 += 3) 
                {
                    for (unsigned short i_7 = 1; i_7 < 17; i_7 += 4) 
                    {
                        {
                            var_24 *= ((/* implicit */unsigned int) ((long long int) ((int) var_13)));
                            var_25 = ((/* implicit */long long int) (-(arr_18 [i_0] [i_0 + 1] [i_1] [i_2 + 2] [i_7 - 1])));
                            var_26 *= ((/* implicit */_Bool) (~(arr_9 [i_0] [i_2 - 4] [i_6 + 1] [i_7 - 1])));
                        }
                    } 
                } 
            }
            /* LoopSeq 3 */
            for (unsigned long long int i_8 = 3; i_8 < 18; i_8 += 4) 
            {
                arr_32 [i_8 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) ((unsigned char) arr_8 [i_0 - 2] [i_8 - 1]));
                arr_33 [i_0] [i_0] [i_1] [i_8 - 1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_8 - 2])) == (((/* implicit */int) arr_12 [i_8 + 1] [i_0 + 1] [i_8 + 1] [i_0 + 1] [i_0 - 1] [i_1] [i_8 + 1])))))));
                var_27 |= ((/* implicit */unsigned long long int) var_2);
            }
            for (short i_9 = 2; i_9 < 17; i_9 += 4) 
            {
                arr_36 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((15579489142733500879ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-65)))));
                arr_37 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)480))));
                arr_38 [i_9 + 2] [i_1] = ((/* implicit */short) max(((signed char)-65), ((signed char)-40)));
            }
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_28 -= ((((/* implicit */int) (signed char)-82)) * (((/* implicit */int) (signed char)54)));
                    var_29 = ((/* implicit */unsigned long long int) (+(arr_10 [i_0 + 1] [i_0 + 1])));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 1) /* same iter space */
                    {
                        var_30 *= ((/* implicit */unsigned int) (signed char)21);
                        var_31 -= ((/* implicit */long long int) ((unsigned long long int) (-(var_15))));
                        var_32 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) -5321787224435135664LL)) && (((/* implicit */_Bool) var_7))));
                        arr_47 [i_12 + 1] [i_1] [i_10] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) & (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 18; i_13 += 1) /* same iter space */
                    {
                        var_33 *= ((/* implicit */unsigned long long int) (signed char)-65);
                        arr_52 [i_0] [i_1] |= ((/* implicit */short) (-(((/* implicit */int) ((short) (short)-31066)))));
                        var_34 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0 - 2] [i_11] [i_13] [i_13] [i_13 + 1] [i_13 - 1]))));
                    }
                    for (unsigned long long int i_14 = 1; i_14 < 18; i_14 += 1) /* same iter space */
                    {
                        arr_56 [i_1] = ((/* implicit */_Bool) ((unsigned long long int) (signed char)60));
                        var_35 ^= ((/* implicit */long long int) (signed char)-1);
                    }
                    for (unsigned long long int i_15 = 1; i_15 < 18; i_15 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */long long int) (signed char)81);
                        arr_59 [i_0] [i_11] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) 1999585578)) ? (72057456598974464ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)53))));
                    }
                }
                var_37 += ((/* implicit */unsigned int) (signed char)81);
            }
        }
        arr_60 [i_0] [i_0 - 1] = ((/* implicit */long long int) var_3);
    }
    var_38 *= ((/* implicit */unsigned long long int) var_5);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101274
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
    var_18 &= ((/* implicit */signed char) (~(((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) && (((((/* implicit */int) var_8)) > (var_3))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned short i_3 = 4; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) 18446744073709551594ULL);
                            /* LoopSeq 2 */
                            for (signed char i_4 = 1; i_4 < 23; i_4 += 4) 
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_1 + 2] [i_2 + 1] [i_3 - 1] [i_4 - 1])) == (((/* implicit */int) arr_10 [i_4] [i_1 + 3] [i_1] [i_1] [19]))));
                                var_21 ^= ((/* implicit */long long int) ((((((/* implicit */int) arr_8 [i_1 + 2] [i_3] [i_4 + 1])) - (((/* implicit */int) arr_4 [i_3])))) << (((min((((/* implicit */unsigned long long int) 2147483647)), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (12086065171275900307ULL) : (((/* implicit */unsigned long long int) arr_2 [i_1] [i_2])))))) - (2147483647ULL)))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_7 [i_0] [i_1] [i_3] [i_3]))))))) >> (((((/* implicit */_Bool) (+(22ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [16] [i_1] [i_3] [19ULL]))))) : (((/* implicit */int) ((1054685396U) != (arr_11 [i_0] [i_4] [(short)0] [i_3] [i_4 + 2] [i_3]))))))));
                                var_23 = ((/* implicit */unsigned int) ((18446744073709551578ULL) << (((((/* implicit */int) arr_8 [i_0] [i_3] [i_0])) - (21561)))));
                            }
                            for (unsigned short i_5 = 1; i_5 < 23; i_5 += 2) 
                            {
                                var_24 = ((/* implicit */unsigned short) ((arr_5 [i_2] [i_3] [i_5 + 1]) + (((/* implicit */unsigned long long int) ((2147483647) - (((/* implicit */int) (short)27300)))))));
                                var_25 &= ((/* implicit */unsigned short) (-(((arr_0 [i_2]) >> ((((-(((/* implicit */int) (short)15845)))) + (15848)))))));
                                var_26 += ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_3 + 2] [i_5]))) * (((arr_11 [i_2] [i_2 + 1] [i_3 - 4] [i_5] [24U] [24U]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1 - 2] [i_2] [i_3] [i_5]))))));
                                var_27 = (-(((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 + 1] [i_3])) ? (((/* implicit */int) ((12086065171275900315ULL) < (21ULL)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) && (((/* implicit */_Bool) (short)15845))))))));
                            }
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_3 - 4] [i_3 - 4])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_7 [i_3] [i_1] [i_3 + 2] [i_3])) < (arr_15 [6U] [i_0] [(short)13] [i_1] [i_2] [i_3 + 1] [i_3]))))) : ((+(arr_15 [4] [(signed char)4] [i_2] [i_2] [23ULL] [i_3 + 1] [i_3 + 1])))));
                            var_29 -= ((/* implicit */signed char) (~(((arr_9 [i_0] [i_1 - 1] [i_2 + 2] [i_2 + 1] [i_3 + 1] [i_3]) & (arr_9 [i_0] [i_1 - 1] [i_2 + 2] [i_2 + 1] [i_3 + 1] [i_3])))));
                            var_30 += ((/* implicit */signed char) (-(arr_16 [i_1] [i_3])));
                        }
                    } 
                } 
                var_31 *= min((((/* implicit */unsigned int) min(((~(var_3))), ((~(((/* implicit */int) arr_13 [i_0]))))))), ((~(((arr_7 [i_0] [i_0] [i_1 + 2] [i_1 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1]))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 3; i_8 < 22; i_8 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_16 [i_1 + 2] [i_1])) ? (arr_17 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1] [i_8 + 3]) : (arr_17 [i_1 + 3] [0LL] [i_1 + 1] [i_1 + 1] [i_1] [i_8 + 3]))));
                                arr_24 [i_1] [i_1] = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) arr_16 [i_1 + 3] [i_1])), (((((/* implicit */_Bool) arr_21 [i_0] [4U] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_8 + 1] [i_7] [i_1] [i_1] [i_0]))) : (15ULL))))), (((/* implicit */unsigned long long int) arr_4 [i_1]))));
                                var_33 = ((/* implicit */signed char) arr_5 [i_6] [i_6] [i_8]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_34 = ((/* implicit */signed char) var_6);
    var_35 |= ((/* implicit */unsigned int) (-(((/* implicit */int) ((21ULL) < (18446744073709551594ULL))))));
    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1U)))))) : (var_17)))));
}

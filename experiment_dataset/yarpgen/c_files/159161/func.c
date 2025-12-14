/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159161
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((signed char) (signed char)66)))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) min((var_4), (var_0))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) (signed char)64)))))));
        var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_6))))));
        arr_4 [(signed char)1] = ((/* implicit */signed char) min((min((((/* implicit */int) (signed char)-123)), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0])))))), (((/* implicit */int) min(((signed char)-115), ((signed char)-112))))));
    }
    for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)123))));
        arr_7 [i_1] = ((signed char) arr_5 [i_1]);
    }
    for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (signed char i_4 = 2; i_4 < 16; i_4 += 4) 
            {
                {
                    var_18 = arr_11 [(signed char)2] [i_2];
                    var_19 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) arr_16 [i_2] [(signed char)9] [i_2] [i_2])) : (((/* implicit */int) arr_12 [i_2] [i_2] [i_4]))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_5 = 3; i_5 < 14; i_5 += 1) 
        {
            for (signed char i_6 = 2; i_6 < 14; i_6 += 4) 
            {
                {
                    var_20 = var_13;
                    /* LoopSeq 3 */
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        arr_26 [i_6] [i_6] [(signed char)16] [i_2] = (signed char)7;
                        var_21 -= (signed char)122;
                    }
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_6 - 1])) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) (signed char)-87))));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-36)))))));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [(signed char)7] [i_8])) : (((/* implicit */int) arr_28 [i_2] [i_5 - 3] [i_6] [i_8]))))) ? (((/* implicit */int) ((signed char) arr_13 [i_6]))) : (((/* implicit */int) arr_25 [i_2] [i_5] [i_6] [i_8])))))));
                        /* LoopSeq 2 */
                        for (signed char i_9 = 1; i_9 < 13; i_9 += 3) 
                        {
                            arr_33 [i_2] [i_2] [(signed char)11] [(signed char)8] [i_6] [i_8] [i_6] = arr_11 [i_5 + 3] [(signed char)8];
                            var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-7)))) <= (((/* implicit */int) (signed char)-109))));
                            arr_34 [i_6] [i_6] [i_6] [i_6 + 2] [(signed char)13] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-65))))) ? (((/* implicit */int) arr_32 [i_2] [i_5] [i_6] [(signed char)12] [i_9])) : (((/* implicit */int) arr_31 [i_9] [i_9 - 1] [i_9 + 2] [i_9 + 1] [i_9 - 1]))));
                        }
                        for (signed char i_10 = 1; i_10 < 15; i_10 += 4) 
                        {
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_2] [i_2] [(signed char)13] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((signed char) (signed char)-80))) : (((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) var_13))))));
                        }
                        arr_39 [i_5] [(signed char)6] [(signed char)5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) (signed char)-53))));
                    }
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */signed char) max((((/* implicit */int) max(((signed char)-96), ((signed char)-9)))), ((-(((/* implicit */int) max((arr_41 [i_2] [i_2] [(signed char)12] [i_6] [i_2]), (arr_29 [i_2] [i_5] [(signed char)4] [i_5] [(signed char)2]))))))));
                        var_29 ^= max((((signed char) ((((/* implicit */int) arr_40 [i_2] [i_6])) >= (((/* implicit */int) (signed char)58))))), (max((max((arr_8 [i_5]), (var_1))), (var_0))));
                        var_30 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-25)))))));
                    }
                }
            } 
        } 
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [(signed char)7] [i_2] [i_2] [i_2] [i_2] [(signed char)14] [i_2])) ? (((/* implicit */int) max(((signed char)-123), ((signed char)80)))) : (((/* implicit */int) min(((signed char)(-127 - 1)), (min(((signed char)33), (arr_8 [(signed char)16]))))))));
        arr_43 [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) arr_14 [i_2] [i_2] [(signed char)4]))));
        arr_44 [(signed char)4] = arr_10 [i_2] [(signed char)3];
    }
}

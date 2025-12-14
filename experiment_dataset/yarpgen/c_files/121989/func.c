/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121989
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) max((((((/* implicit */int) var_5)) - (((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_2))))))), ((+((~(32767))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) arr_5 [i_0] [i_2] [i_2]);
                    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
                    var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_0]) > (arr_5 [i_2] [i_2 + 1] [i_1 + 2])))), (((arr_5 [i_2] [i_2 - 1] [i_1 + 2]) << (((((/* implicit */int) (unsigned char)187)) - (147)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        for (unsigned char i_4 = 3; i_4 < 16; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 17; i_5 += 2) 
                {
                    for (unsigned short i_6 = 1; i_6 < 17; i_6 += 2) 
                    {
                        {
                            var_17 ^= ((((/* implicit */_Bool) ((unsigned short) (~(var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1)))) : (((unsigned int) var_10)));
                            arr_19 [i_6] [i_4] [i_4] [i_4] = ((((((/* implicit */int) arr_17 [i_3] [i_4] [i_5] [i_6])) != (((/* implicit */int) var_8)))) ? (min((((/* implicit */long long int) arr_13 [i_5] [i_5 + 1] [i_5 - 1])), (-805772038385202833LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((arr_14 [i_6]) & (((/* implicit */long long int) ((/* implicit */int) var_11))))) != (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_4] [i_6]))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) var_9);
                /* LoopSeq 4 */
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_8 = 1; i_8 < 17; i_8 += 4) 
                    {
                        var_19 = ((/* implicit */int) ((unsigned int) 255ULL));
                        arr_25 [i_3] |= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) 32767)) ? (((/* implicit */int) arr_20 [i_3])) : (((/* implicit */int) arr_10 [i_4] [i_7])))));
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned short) 805772038385202832LL)))));
                        arr_26 [i_3] [i_4] [i_8] = ((/* implicit */unsigned long long int) -32761);
                    }
                    for (signed char i_9 = 3; i_9 < 16; i_9 += 3) 
                    {
                        arr_29 [i_9] [i_7] [i_7] [i_7] [i_4] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_3] [i_7]))));
                        arr_30 [i_3] [i_4] [i_4] [i_7] = ((/* implicit */unsigned char) ((long long int) (!(((((/* implicit */long long int) ((/* implicit */int) var_10))) < (arr_11 [i_3] [i_3]))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        var_21 = ((((/* implicit */_Bool) min((arr_28 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]), (arr_28 [i_7] [i_4] [i_7] [i_4] [i_10] [i_3])))) ? (((unsigned long long int) 2064384U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((/* implicit */long long int) var_7)), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) var_7))))), (((long long int) arr_28 [i_3] [i_4] [i_7] [i_10] [i_10] [i_10])))))))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) min((arr_9 [i_3]), (((/* implicit */unsigned long long int) 2064410U))))) ? (((unsigned long long int) 1146713296U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19457))))));
                        var_24 ^= ((/* implicit */unsigned char) (+(((((/* implicit */int) var_7)) * (((/* implicit */int) ((signed char) var_4)))))));
                        var_25 *= ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_4 + 1] [i_4 - 2]))) : (((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3])) ? (11660390562371491386ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */int) (unsigned char)7)), (var_1)))) < (arr_27 [i_3] [i_3]))))));
                    }
                    var_26 = ((/* implicit */unsigned char) ((long long int) min((var_4), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_3])) && (((/* implicit */_Bool) arr_12 [i_3]))))))));
                }
                /* vectorizable */
                for (unsigned short i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_13 = 2; i_13 < 17; i_13 += 4) /* same iter space */
                    {
                        var_27 ^= ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
                        arr_40 [i_3] [i_4] [i_12] [i_12] [i_12] [i_13] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_3]))) ^ (-6730871689078150455LL))));
                    }
                    for (long long int i_14 = 2; i_14 < 17; i_14 += 4) /* same iter space */
                    {
                        arr_44 [i_14] [i_12] [i_12] [i_4] [i_4] [i_3] |= ((/* implicit */long long int) var_1);
                        var_28 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
                        /* LoopSeq 4 */
                        for (unsigned char i_15 = 0; i_15 < 18; i_15 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))));
                            var_30 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)65533))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 18; i_16 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned short) ((long long int) arr_12 [i_14 - 2]));
                            var_32 += ((/* implicit */signed char) (unsigned short)4732);
                            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) var_4))));
                            var_34 += ((/* implicit */unsigned short) arr_47 [i_16] [i_14] [i_12] [i_4] [i_3]);
                        }
                        for (unsigned char i_17 = 0; i_17 < 18; i_17 += 2) /* same iter space */
                        {
                            arr_54 [i_17] [i_12] [i_3] = ((/* implicit */unsigned char) ((((unsigned long long int) 6559616021309481371LL)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_3] [i_3] [i_3])))));
                            var_35 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_51 [i_4 + 2] [i_4] [i_14 - 2] [i_14 - 2] [i_14]))));
                            arr_55 [i_3] [i_12] [i_4] = ((/* implicit */long long int) ((arr_38 [i_3] [i_4] [i_17] [i_3] [i_17]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) arr_42 [i_3] [i_4 + 1] [i_12] [i_14] [i_17] [i_17]))));
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_35 [i_4 - 3] [i_4] [i_4])) : (((/* implicit */int) arr_23 [i_12]))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_37 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_2)))));
                            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (((+(8245147849405027235ULL))) >> (((/* implicit */int) arr_38 [i_4] [i_4] [i_4] [i_4 - 3] [i_12])))))));
                        }
                    }
                    var_39 &= ((unsigned long long int) arr_10 [i_4 - 3] [i_4]);
                }
                for (unsigned short i_19 = 0; i_19 < 18; i_19 += 2) /* same iter space */
                {
                    var_40 += ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                    var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) arr_53 [i_3] [i_4] [i_19]))));
                }
                for (unsigned short i_20 = 0; i_20 < 18; i_20 += 2) /* same iter space */
                {
                    var_42 ^= ((/* implicit */long long int) var_0);
                    var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) var_8))))))));
                }
                /* LoopNest 3 */
                for (unsigned short i_21 = 2; i_21 < 17; i_21 += 1) 
                {
                    for (int i_22 = 1; i_22 < 15; i_22 += 4) 
                    {
                        for (unsigned long long int i_23 = 3; i_23 < 15; i_23 += 2) 
                        {
                            {
                                arr_73 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_23] [i_22 + 2] [i_21] [i_21 - 1] [i_23])) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_6)) / (((/* implicit */int) arr_46 [i_23] [i_22 + 1] [i_21] [i_21 - 2] [i_21]))))));
                                var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((signed char) (-(arr_18 [i_22 + 1] [i_21 - 1])))))));
                                arr_74 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) ((_Bool) (unsigned char)2)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (max(((~(((/* implicit */int) var_6)))), (var_1))) : (((/* implicit */int) var_5))));
}

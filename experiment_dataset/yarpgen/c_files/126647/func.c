/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126647
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
    var_18 &= ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_19 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) ^ (((/* implicit */int) (unsigned short)23136)));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    arr_6 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) var_0);
                    arr_7 [i_0] [i_0] [(short)8] [i_0] = ((/* implicit */long long int) ((var_13) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (signed char)76)))))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)31)) * (((/* implicit */int) var_2))));
                }
                for (unsigned char i_3 = 2; i_3 < 17; i_3 += 3) 
                {
                    var_23 -= ((/* implicit */unsigned long long int) -1628576556);
                    var_24 += ((/* implicit */unsigned char) var_5);
                }
                for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    arr_15 [(signed char)10] [(signed char)10] [i_4] [i_4] |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (426855507U))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_16)))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (_Bool)1))));
                        var_26 &= ((/* implicit */long long int) var_7);
                        /* LoopSeq 3 */
                        for (signed char i_6 = 1; i_6 < 15; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_0] [i_4] [(signed char)11] [6] = ((/* implicit */unsigned long long int) ((_Bool) 1628576556));
                            var_27 = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_14)))));
                            arr_23 [(_Bool)1] [0] [i_0] = ((/* implicit */short) ((-1628576556) / (((/* implicit */int) (unsigned short)18051))));
                        }
                        for (short i_7 = 3; i_7 < 16; i_7 += 3) /* same iter space */
                        {
                            arr_26 [i_0] [i_0] [(signed char)10] [(unsigned char)6] [i_7] = ((/* implicit */int) ((unsigned int) var_4));
                            var_28 |= ((/* implicit */unsigned int) var_13);
                        }
                        for (short i_8 = 3; i_8 < 16; i_8 += 3) /* same iter space */
                        {
                            var_29 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_8)) : (1628576546)));
                            arr_29 [i_1] [i_0] [i_0] [i_1] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) var_8)) + (((/* implicit */int) (_Bool)0))))));
                        }
                    }
                    for (long long int i_9 = 0; i_9 < 18; i_9 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_10 = 2; i_10 < 14; i_10 += 1) 
                        {
                            arr_34 [i_0] [9] [i_4] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) (unsigned char)28))))) * (((/* implicit */int) var_4))));
                            var_30 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) var_12)) <= (1628576567))));
                            arr_35 [i_4] [i_4] [i_4] [(short)4] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_4)) >> (((-1628576567) + (1628576592)))));
                            var_31 -= ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) (unsigned char)31))))));
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 17; i_11 += 4) 
                        {
                            var_32 = ((/* implicit */int) var_4);
                            arr_38 [8U] [i_1 - 2] [8U] [i_9] |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) -1628576556)))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((/* implicit */int) var_12))));
                        }
                        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((long long int) min((max((((/* implicit */int) var_6)), (214378260))), (((/* implicit */int) var_17))))))));
                    }
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 18; i_12 += 3) /* same iter space */
                    {
                        arr_43 [i_0] [(_Bool)1] [i_4] [i_0] [3ULL] [i_4] = ((/* implicit */signed char) (short)30823);
                        arr_44 [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((int) var_15));
                        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (unsigned char)251))));
                    }
                    for (short i_13 = 2; i_13 < 17; i_13 += 3) 
                    {
                        arr_48 [3] [i_0] [i_0] [(unsigned short)11] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_13)))) || ((((_Bool)1) && (((/* implicit */_Bool) (unsigned short)23100))))));
                        arr_49 [i_0] [14] [14] [14] = ((/* implicit */unsigned int) var_10);
                        var_35 = ((/* implicit */unsigned long long int) var_8);
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) * (((/* implicit */int) ((_Bool) var_8)))));
                        var_37 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) != (((/* implicit */int) ((unsigned short) var_0)))));
                    }
                }
                for (int i_14 = 0; i_14 < 18; i_14 += 3) 
                {
                    var_38 += ((/* implicit */int) var_3);
                    var_39 = ((/* implicit */short) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)255)));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 18; i_15 += 2) 
                    {
                        for (unsigned char i_16 = 4; i_16 < 16; i_16 += 3) 
                        {
                            {
                                arr_61 [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (signed char)-126))) ? (((/* implicit */int) ((((((/* implicit */int) var_8)) ^ (var_15))) > (((((/* implicit */int) var_2)) / (((/* implicit */int) (signed char)58))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) min((2147483647), (((/* implicit */int) var_6))))) > (((((/* implicit */_Bool) var_10)) ? (var_13) : (var_13))))))));
                                var_40 *= ((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) var_16)))));
                                arr_62 [i_0] [i_0] [i_0] [i_15] [i_16 - 1] [i_0] [(unsigned short)4] = ((/* implicit */unsigned char) var_11);
                                var_41 = ((_Bool) ((-747021709) & (((/* implicit */int) var_12))));
                                arr_63 [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) var_16)) % (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)30811)) : (var_7))))), (((((/* implicit */_Bool) -4218276497984311013LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))));
                            }
                        } 
                    } 
                }
                arr_64 [i_0 - 2] [(short)0] |= ((/* implicit */unsigned short) var_15);
            }
        } 
    } 
    var_42 = ((/* implicit */_Bool) var_0);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12492
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_1] [i_0 + 2] = ((/* implicit */long long int) (((~(-1479861623))) / (((/* implicit */int) min((arr_6 [i_0 + 2] [i_0 + 1]), (arr_6 [i_0 + 2] [i_0 + 1]))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            arr_14 [i_1] [i_3] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) min(((+(arr_2 [i_0 + 2]))), (((/* implicit */int) (unsigned char)244))));
                            var_17 = ((((((/* implicit */unsigned int) ((int) 8541359044551604086LL))) * (var_5))) == (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
                            arr_15 [i_4] [(unsigned short)9] [i_2] [i_1] [i_1] [i_1] [i_0 + 2] = ((/* implicit */signed char) (_Bool)1);
                        }
                        var_18 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) ((arr_7 [i_3] [i_2] [i_0 + 1] [i_0 + 1]) + (((/* implicit */unsigned int) var_9))))), (((1853646504682995536LL) - (((/* implicit */long long int) var_16)))))), (((/* implicit */long long int) ((max((((/* implicit */int) (unsigned char)80)), (var_16))) + (((/* implicit */int) (unsigned short)65523)))))));
                        arr_16 [i_0 - 2] [i_2] [i_1] [i_0 - 2] = ((/* implicit */unsigned short) (+(var_12)));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
                    {
                        arr_19 [i_5] [i_2] [i_2] [i_1] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-22)) ? (-1902898319) : (-1902898328)));
                        /* LoopSeq 2 */
                        for (int i_6 = 2; i_6 < 20; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_11))));
                            var_20 = ((/* implicit */long long int) (+(var_5)));
                        }
                        for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            var_21 += ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                            arr_26 [i_7] [i_1] [i_2] [i_1] [(unsigned short)8] = ((((/* implicit */long long int) var_4)) & (0LL));
                        }
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((max((1902898319), (((/* implicit */int) var_14)))), (((((((/* implicit */unsigned int) var_16)) < (var_12))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)35)))))))));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((int) (unsigned char)35)))));
                        var_24 &= ((/* implicit */short) var_0);
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 3; i_9 < 21; i_9 += 2) 
                        {
                            arr_33 [i_9 - 1] [i_8 - 1] [i_2] [i_1] [(signed char)5] [i_0 + 3] = ((/* implicit */long long int) var_10);
                            var_25 += ((/* implicit */int) ((((/* implicit */_Bool) -1902898311)) ? (3543689091U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1392)))));
                            var_26 = ((/* implicit */unsigned int) (unsigned short)55175);
                            var_27 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_22 [i_9 - 3] [i_9] [i_9 - 3] [i_9] [i_9 + 1])) ? (((/* implicit */long long int) var_4)) : (arr_22 [i_9 - 1] [(short)7] [21] [i_9] [i_9 - 1]))), (arr_22 [i_9 - 3] [i_9] [i_9] [i_9] [i_9 + 1])));
                        }
                        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
                        {
                            arr_36 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_6);
                            arr_37 [i_1] [i_1] [i_0 - 3] [i_1] [i_0 - 3] = ((/* implicit */unsigned int) (unsigned short)4633);
                        }
                        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
                        {
                            arr_40 [i_11] [i_8] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (+(22)));
                            arr_41 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) min((1902898322), (var_9)));
                            arr_42 [i_11] [i_8] [i_0 + 3] [i_1] [i_0 + 3] = (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))) / (751278205U))));
                            arr_43 [i_8] [(unsigned short)10] [i_8] [i_8] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_1] [i_0 - 3])) || (arr_21 [i_11] [i_8] [i_8 - 1] [i_2] [i_0 - 3]))) && (((((/* implicit */_Bool) arr_6 [i_2] [i_0 - 3])) && (((/* implicit */_Bool) arr_6 [i_0 - 3] [i_0 - 3]))))));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_12 = 1; i_12 < 16; i_12 += 4) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (int i_14 = 0; i_14 < 18; i_14 += 3) 
            {
                {
                    var_28 = ((((/* implicit */_Bool) arr_47 [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40))) : (var_11));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 18; i_15 += 1) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                arr_57 [i_15] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (unsigned short)65523))) - (((((/* implicit */int) (_Bool)1)) - (1902898319)))));
                                arr_58 [i_16] [11] [i_13] [i_12] [i_13] [i_12] |= ((/* implicit */int) ((((/* implicit */int) min((arr_48 [i_12 + 2] [i_12 + 1] [i_12 + 2]), (arr_48 [i_13] [i_12 + 2] [i_12 + 2])))) <= (var_2)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned int) (unsigned char)213);
}

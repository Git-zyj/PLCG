/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141719
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (var_7)));
    var_16 = ((/* implicit */_Bool) 4294967294U);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 4; i_0 < 6; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_0 + 3] [i_0 + 2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1])))))) ? ((~(arr_0 [i_0 - 3] [i_0 + 4]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((511U), (2U)))) ? (-1628679412) : (arr_3 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */signed char) (+(1U)));
        arr_5 [i_0] |= max((4294966784U), (((/* implicit */unsigned int) (signed char)12)));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 8; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 8; i_3 += 2) /* same iter space */
                    {
                        var_18 = var_4;
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((unsigned char) max((((/* implicit */int) arr_10 [3U] [i_1] [i_2] [i_3])), ((-(((/* implicit */int) arr_8 [i_0] [i_2 - 3] [i_3 + 1])))))))));
                        var_20 = ((/* implicit */unsigned char) max((((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_3 - 1])) == (((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_1 - 1]))))), (var_6)));
                        var_21 += ((/* implicit */_Bool) (~(4294966784U)));
                    }
                    for (signed char i_4 = 2; i_4 < 8; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            arr_21 [i_2] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)127)) >= (((/* implicit */int) arr_7 [i_0 + 3] [i_0 - 1]))));
                            arr_22 [7U] [i_1] [i_2] = 4294967292U;
                            arr_23 [i_5] [i_1] [i_2] [3U] = arr_6 [i_0];
                            arr_24 [i_2] [i_2] [0U] [(unsigned char)6] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 23U)) ? (4294967294U) : (0U)));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_4 + 1] [i_1 - 1])) ? (arr_19 [i_1 - 1] [i_1] [i_2] [i_4 + 1] [i_4]) : (arr_19 [i_1 + 1] [i_1 + 1] [i_4] [i_4 - 1] [i_4 - 1])));
                        }
                        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (arr_6 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0 - 2] [i_2 - 2])))) ? (((/* implicit */int) ((arr_19 [i_2 + 1] [i_2] [i_2] [i_2] [i_2]) > (max((1124636271U), (((/* implicit */unsigned int) (signed char)82))))))) : (((((/* implicit */_Bool) arr_3 [4U] [4U])) ? (((/* implicit */int) min((arr_2 [(_Bool)1]), (((/* implicit */unsigned char) (signed char)-116))))) : (((/* implicit */int) (_Bool)0)))));
                        var_24 += var_0;
                        arr_25 [i_2] [i_1] [i_2] [i_4] = ((/* implicit */int) (-(max((max((((/* implicit */unsigned int) arr_2 [i_4])), (var_0))), (((/* implicit */unsigned int) (_Bool)1))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 7; i_6 += 2) 
                    {
                        var_25 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_6 + 3] [i_2 + 2]))));
                        arr_29 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */_Bool) ((unsigned int) var_8));
                    }
                    arr_30 [i_0 - 4] [i_2] [i_0] [i_0 - 3] = ((/* implicit */signed char) 2373770362U);
                    var_26 -= ((/* implicit */_Bool) ((int) (signed char)108));
                }
            } 
        } 
        arr_31 [i_0] [i_0] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 2]))))));
    }
    for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
    {
        arr_35 [(unsigned char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) + (min((arr_33 [(unsigned char)10]), (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [(signed char)8] [i_7])) ? (var_9) : (((/* implicit */unsigned int) -1))))) ? (max((((/* implicit */int) (signed char)-109)), (var_2))) : (((/* implicit */int) arr_34 [i_7] [i_7]))))) : (3170331025U)));
        var_27 = ((/* implicit */unsigned int) ((max((((unsigned int) 511U)), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_33 [i_7])) == (var_9)))))) < (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) 33554431U))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            var_28 = (~(((/* implicit */int) arr_34 [i_7] [i_8])));
            var_29 = ((/* implicit */int) var_13);
            var_30 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_33 [i_7])) ? (((/* implicit */unsigned int) var_14)) : (var_5))));
        }
        /* vectorizable */
        for (signed char i_9 = 1; i_9 < 12; i_9 += 2) 
        {
            var_31 = ((/* implicit */unsigned char) max((var_31), ((unsigned char)174)));
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 12; i_10 += 4) 
            {
                for (unsigned int i_11 = 2; i_11 < 12; i_11 += 2) 
                {
                    for (signed char i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_10] [i_12]))));
                            var_33 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) ((signed char) var_12)))));
                            var_34 = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))) == (4294967285U))));
                            var_35 = ((/* implicit */unsigned int) var_6);
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))) > (var_9))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_13 = 0; i_13 < 14; i_13 += 2) 
        {
            var_37 = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) arr_33 [i_7])) >= (2726374320U)))));
            var_38 = ((/* implicit */unsigned int) min((var_38), (((((/* implicit */_Bool) arr_51 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) arr_50 [i_13] [i_7] [i_13] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (1124636271U)))))));
        }
    }
    /* vectorizable */
    for (int i_14 = 2; i_14 < 12; i_14 += 1) 
    {
        var_39 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) arr_45 [i_14] [8U])) : (((/* implicit */int) var_11))))) ? (((4294966785U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [4U] [4U] [3U]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((319970924U) == (4294967295U))))));
        arr_56 [i_14] = ((/* implicit */unsigned int) ((arr_50 [i_14] [i_14 - 2] [i_14 + 2] [10] [i_14 - 2] [i_14 - 2] [i_14 + 1]) < ((+(((/* implicit */int) (signed char)96))))));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 23; i_15 += 2) 
    {
        var_40 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_15])))))) ? (-267317477) : (arr_58 [i_15])));
        arr_59 [i_15] = ((/* implicit */int) ((((/* implicit */unsigned int) -587738807)) > (3170331024U)));
        arr_60 [i_15] [i_15] = ((/* implicit */_Bool) (unsigned char)255);
    }
}

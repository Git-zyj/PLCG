/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110926
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_11 = min((max((arr_1 [i_0] [i_0]), (((/* implicit */short) ((((/* implicit */int) (short)-1)) != (((/* implicit */int) (signed char)31))))))), (((/* implicit */short) min((((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) (signed char)-109))))), (arr_0 [i_0])))));
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))))) >> (((max(((~(3997497004657524892LL))), (((/* implicit */long long int) min((((/* implicit */short) var_1)), (var_8)))))) - (134LL))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 8; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] |= max((((((/* implicit */_Bool) -2665281523289280371LL)) ? (-2033765852667761868LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-118))))), (((/* implicit */long long int) min((max((var_10), (((/* implicit */unsigned char) var_6)))), (((/* implicit */unsigned char) (signed char)-37))))));
                        var_13 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-93)) ? (2691683088U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)13801))))) : (max((((/* implicit */long long int) (unsigned char)20)), (-8638005456548706284LL))))) : (((((/* implicit */_Bool) ((signed char) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 + 2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_0] [i_1] [(signed char)6] [i_3]) >= (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))) ? ((-(((/* implicit */int) (short)11203)))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-26)), (2715410242147107761LL)))) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) arr_6 [i_0] [i_0]))))));
        arr_12 [i_0] = ((/* implicit */unsigned int) (signed char)26);
    }
    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
    {
        arr_17 [i_4] = ((/* implicit */unsigned char) max((var_8), (((/* implicit */short) (signed char)95))));
        var_15 = ((/* implicit */long long int) (unsigned char)195);
        arr_18 [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) (signed char)-96)))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_5 = 2; i_5 < 24; i_5 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_5 + 1])) ? (((((/* implicit */_Bool) arr_19 [i_5 - 2])) ? (((/* implicit */int) arr_22 [i_5] [i_5])) : (((/* implicit */int) (short)13801)))) : ((+(((/* implicit */int) arr_22 [i_5 - 2] [i_5])))))))));
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    {
                        arr_31 [i_5] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_24 [i_5 - 2]))));
                        arr_32 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) arr_24 [i_6]);
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [(signed char)4] [i_9] [i_9] [i_5] [i_5] [i_6] [i_5])) ? (((/* implicit */long long int) var_3)) : (-2715410242147107776LL)))) ? (arr_28 [i_5] [i_5 + 1] [i_7] [i_8]) : (((/* implicit */long long int) (+(((/* implicit */int) arr_19 [i_5 - 2])))))));
                            arr_35 [i_6] [i_6] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_24 [i_5 - 2])) && (((/* implicit */_Bool) (signed char)49)))) && (((/* implicit */_Bool) arr_28 [i_9] [20U] [i_6] [i_5]))));
                            var_18 = ((/* implicit */signed char) arr_23 [i_5]);
                            arr_36 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_34 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 + 1]))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
                        {
                            arr_39 [i_5] [i_5] [i_6] [i_7] [i_7] [i_7] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) arr_33 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))) ? (((unsigned int) (unsigned char)127)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (short)-29585)) : (((/* implicit */int) (signed char)-44)))))));
                            arr_40 [i_5] [i_5] [i_7] [i_7] [i_5] = ((/* implicit */unsigned char) ((unsigned int) arr_19 [i_5 - 2]));
                        }
                        var_19 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5 - 1] [i_5 - 2]))) < (1023906799002945706LL)));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_11 = 1; i_11 < 24; i_11 += 4) 
        {
            for (long long int i_12 = 0; i_12 < 25; i_12 += 2) 
            {
                for (signed char i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_14 = 0; i_14 < 25; i_14 += 1) /* same iter space */
                        {
                            arr_50 [(short)15] [i_11] [i_5] [i_13] [(short)15] [i_5] = ((/* implicit */unsigned int) var_0);
                            arr_51 [i_5] [i_5] [i_5] [i_5] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_44 [i_11 - 1] [i_11] [i_11 + 1])) ? (((/* implicit */int) arr_44 [i_11 - 1] [i_11] [i_11 + 1])) : (((/* implicit */int) arr_44 [i_11 - 1] [i_11 - 1] [i_11 - 1]))));
                            var_20 = ((/* implicit */short) ((unsigned char) arr_25 [i_5]));
                        }
                        for (long long int i_15 = 0; i_15 < 25; i_15 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_45 [i_12]))));
                            var_22 *= ((/* implicit */short) ((var_4) | (((/* implicit */long long int) ((((/* implicit */int) arr_41 [i_5] [i_13] [i_5])) + (((/* implicit */int) arr_44 [i_5] [i_11] [i_15])))))));
                        }
                        var_23 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)62))));
                    }
                } 
            } 
        } 
        arr_54 [i_5] [i_5] = ((/* implicit */long long int) ((signed char) 2533038824210471220LL));
    }
    for (signed char i_16 = 0; i_16 < 19; i_16 += 2) 
    {
        arr_57 [i_16] [i_16] = ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))))) ? (((((/* implicit */_Bool) arr_25 [i_16])) ? (arr_23 [i_16]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_16] [i_16] [i_16] [i_16]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_16] [i_16] [i_16] [i_16]))))) | (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_16]))));
        /* LoopNest 2 */
        for (unsigned int i_17 = 1; i_17 < 15; i_17 += 2) 
        {
            for (unsigned char i_18 = 1; i_18 < 17; i_18 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_19 = 0; i_19 < 19; i_19 += 2) 
                    {
                        for (unsigned char i_20 = 3; i_20 < 15; i_20 += 3) 
                        {
                            {
                                var_24 *= ((/* implicit */signed char) ((unsigned char) max((((((/* implicit */_Bool) arr_62 [i_16] [i_16])) ? (((/* implicit */int) arr_34 [i_16] [i_17] [i_18 - 1] [i_18] [i_19] [i_16])) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((signed char) 7104983288941627871LL))))));
                                var_25 &= ((/* implicit */short) (-(min((((/* implicit */long long int) arr_33 [i_18 - 1] [i_18 - 1] [i_18 + 1] [i_18] [i_18 + 2] [i_18 - 1] [(signed char)23])), (((9223370937343148032LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-77)))))))));
                                arr_69 [i_20 - 1] [i_18] [i_17] [i_17] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)19), (arr_38 [(signed char)5] [i_17 + 3] [(signed char)5] [i_17 - 1] [i_17])))) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) ((short) (signed char)-114)))))) ? ((-(((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) arr_68 [i_18] [i_19])) : (((/* implicit */int) (unsigned char)233)))))) : (max((((((/* implicit */_Bool) arr_22 [i_16] [i_16])) ? (((/* implicit */int) arr_59 [i_19])) : (((/* implicit */int) arr_52 [i_16] [i_16] [i_19] [i_20 + 4])))), (((/* implicit */int) var_10))))));
                            }
                        } 
                    } 
                    arr_70 [i_16] [i_17] [i_18 + 2] = ((/* implicit */unsigned int) arr_58 [i_16] [i_16]);
                }
            } 
        } 
        var_26 -= ((/* implicit */unsigned int) arr_23 [i_16]);
    }
    /* vectorizable */
    for (unsigned char i_21 = 0; i_21 < 14; i_21 += 2) 
    {
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_21] [i_21] [i_21])) ? (arr_48 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] [i_21]) : ((+(34359721984LL)))));
        arr_75 [i_21] [i_21] = (unsigned char)176;
    }
    for (long long int i_22 = 0; i_22 < 14; i_22 += 4) 
    {
        var_28 *= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)85))) > (var_3)))) > (((/* implicit */int) ((signed char) arr_59 [i_22]))))))));
        arr_79 [i_22] [(unsigned char)13] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)65)))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) : (((/* implicit */int) ((signed char) max((((/* implicit */short) (signed char)85)), ((short)-2514)))))));
        arr_80 [i_22] |= ((/* implicit */unsigned int) arr_72 [i_22] [i_22]);
    }
}

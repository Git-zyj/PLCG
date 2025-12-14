/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167067
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
    var_20 += ((/* implicit */short) (((((~(((((var_7) + (2147483647))) << (((((/* implicit */int) var_17)) - (23411))))))) + (2147483647))) >> ((((~(((((/* implicit */_Bool) -275577161)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32760))) : (var_1))))) - (32741LL)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_21 = (unsigned char)0;
        var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned short) (!(var_10))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? (max((var_18), (((/* implicit */int) (unsigned char)128)))) : (((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) (unsigned char)255)))))) : (((/* implicit */int) arr_1 [i_0]))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((((/* implicit */int) (unsigned short)65523)) ^ (((/* implicit */int) arr_0 [i_0])))))))));
        var_24 = ((/* implicit */_Bool) max((var_24), (arr_1 [i_0])));
    }
    for (unsigned char i_1 = 2; i_1 < 14; i_1 += 2) 
    {
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_25 = ((/* implicit */int) min((var_25), (min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_7) : (min((((/* implicit */int) var_19)), (var_18))))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)23)) || (((/* implicit */_Bool) -1)))))))));
            var_26 *= ((/* implicit */signed char) (unsigned short)25);
            var_27 &= ((/* implicit */_Bool) min((1023LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_1]))))))))));
        }
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
        {
            arr_11 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_19)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_4)) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_2))))))) < (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65526)))))));
            var_28 += ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (7359308184618859314LL)))));
        }
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) min((min((((/* implicit */int) arr_0 [i_4])), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11)))))), (((/* implicit */int) arr_14 [i_4])))))));
            var_30 = ((/* implicit */signed char) ((((_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (((/* implicit */int) arr_8 [(unsigned char)13]))))) ? (((arr_1 [i_1]) ? (((/* implicit */int) (!(arr_1 [i_4])))) : (((((/* implicit */_Bool) 1073739776)) ? (((/* implicit */int) (unsigned short)7680)) : (((/* implicit */int) (unsigned char)48)))))) : (((/* implicit */int) arr_2 [i_1] [i_1]))));
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((arr_12 [i_1] [i_1] [i_1]) ? (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)255))))) >= (min((((/* implicit */long long int) var_18)), (3220958842376627352LL)))))) : (((/* implicit */int) arr_9 [(signed char)6] [i_1])))))));
        }
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 4; i_6 < 14; i_6 += 2) 
            {
                var_32 *= ((/* implicit */unsigned char) -7359308184618859319LL);
                /* LoopSeq 3 */
                for (short i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
                {
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_1]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_19))))) : (var_1))))));
                    arr_23 [(unsigned short)4] [(unsigned char)8] [(unsigned char)8] [i_5] [i_1] = ((/* implicit */short) ((long long int) var_9));
                    var_34 += ((/* implicit */_Bool) var_17);
                    var_35 *= ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_8 [i_6 - 4])) : (((/* implicit */int) arr_19 [i_1 - 2] [i_1 - 2] [i_6 - 2])));
                }
                for (short i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
                {
                    arr_26 [i_5] [i_6 - 4] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_5] = ((/* implicit */short) (signed char)63);
                    var_36 -= ((/* implicit */long long int) (+(((/* implicit */int) var_14))));
                    var_37 = ((/* implicit */unsigned char) (~(arr_21 [i_6 + 1] [9] [i_1 + 1] [i_8])));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 2; i_9 < 13; i_9 += 2) 
                    {
                        arr_30 [i_8] [i_8] [i_8] [i_8] [i_8] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) var_19)))));
                        arr_31 [i_5] [i_8] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) : (arr_21 [i_1] [i_1] [(_Bool)1] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) arr_24 [i_1] [(unsigned char)1] [(unsigned char)1] [i_1] [i_8] [i_9])) : (((/* implicit */int) var_19))))) : (arr_22 [12LL] [i_6 - 3] [i_5] [7LL] [7LL])));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned short) var_4);
                        arr_35 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_9) == (((/* implicit */int) arr_18 [i_5] [i_5])))))) : (((((/* implicit */_Bool) var_14)) ? (arr_22 [i_1 - 1] [i_5] [i_6] [i_8] [14LL]) : (((/* implicit */long long int) arr_21 [i_1] [i_1 - 1] [i_1 - 1] [i_1]))))));
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_12 [(unsigned char)0] [i_1 - 2] [i_6 - 2])) : (((/* implicit */int) arr_12 [i_1] [i_1 + 1] [i_6 - 1]))));
                        var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) var_12))));
                        arr_36 [i_6] [i_5] [i_6] [i_5] [i_1] = ((/* implicit */int) arr_34 [i_6] [i_6] [(short)1] [i_6] [(short)1] [i_5] [i_6]);
                    }
                }
                for (short i_11 = 0; i_11 < 15; i_11 += 3) 
                {
                    arr_40 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_5] [i_1 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 1] [i_5] [i_5])) ? (((/* implicit */int) (short)2047)) : (var_18)));
                    arr_41 [i_5] [i_5] [i_5] [i_5] [i_11] [i_11] = ((/* implicit */signed char) ((((var_8) ? (((/* implicit */int) arr_33 [i_1] [i_1] [i_1] [i_5])) : (((/* implicit */int) var_13)))) != (((/* implicit */int) (unsigned char)12))));
                }
            }
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 1; i_12 < 12; i_12 += 2) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        {
                            var_41 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-31022))))) ? (((((/* implicit */int) arr_24 [i_1] [i_5] [i_12] [i_13] [i_13] [i_14])) * (((/* implicit */int) (unsigned char)150)))) : (((/* implicit */int) ((short) arr_45 [i_14])))));
                            var_42 = ((/* implicit */unsigned char) 2013265920);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_15 = 3; i_15 < 12; i_15 += 4) 
            {
                for (unsigned char i_16 = 2; i_16 < 14; i_16 += 4) 
                {
                    {
                        var_43 -= ((/* implicit */signed char) (~(((/* implicit */int) arr_33 [i_1] [(unsigned char)2] [i_15] [i_1]))));
                        var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_15 + 2] [i_16 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 - 2])) : (((/* implicit */int) arr_0 [i_1 - 2]))));
                    }
                } 
            } 
            var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) var_4))));
            arr_54 [i_1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_1] [i_1 - 2])) ? ((+(var_9))) : (((/* implicit */int) (_Bool)1))));
        }
        var_46 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned short)55728)), (((((/* implicit */_Bool) ((arr_12 [i_1 + 1] [i_1 + 1] [4]) ? (((/* implicit */int) arr_2 [i_1] [i_1 + 1])) : (((/* implicit */int) (unsigned char)151))))) ? (min((-7359308184618859315LL), (((/* implicit */long long int) (unsigned char)151)))) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 1] [i_1 - 1])))))));
    }
}

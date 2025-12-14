/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182184
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
    var_13 = (~(max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)142))) : (var_3))), (max((var_3), (((/* implicit */unsigned long long int) var_1)))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */int) ((((((/* implicit */int) (short)-5117)) >= (15))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (17130645685840839499ULL)));
        var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) + (((((/* implicit */_Bool) max((17130645685840839496ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) -5007740100982852656LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (17130645685840839499ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (short i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */short) ((var_3) * (((/* implicit */unsigned long long int) ((((-5007740100982852656LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44634))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (var_3)))))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 3; i_3 < 23; i_3 += 4) 
            {
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((unsigned short) 1316098387868712116ULL)))));
                var_18 = ((/* implicit */long long int) min((var_18), (min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)44624))))), (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_6 [2])))))));
                var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_3 - 3])))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) : (max((((/* implicit */unsigned long long int) (short)13710)), (var_3))))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) var_8))))))))));
            }
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */unsigned short) var_1)), (var_4)))), (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))), (arr_6 [i_1])))));
            var_21 = ((/* implicit */int) arr_4 [i_2]);
        }
        for (short i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (int i_5 = 2; i_5 < 24; i_5 += 2) 
            {
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? ((+(var_3))) : (((/* implicit */unsigned long long int) max((arr_6 [i_5 + 1]), (arr_6 [i_5 - 2])))))))));
                var_23 -= ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)127)) == (((/* implicit */int) (short)-13710)))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_5 - 2] [i_5 - 1] [i_5 - 1] [i_5]))) : (((var_6) ? (((/* implicit */unsigned long long int) -9223372036854775798LL)) : (arr_10 [i_5] [i_5] [i_5 - 2] [i_5])))));
            }
            for (short i_6 = 3; i_6 < 23; i_6 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_7 = 1; i_7 < 24; i_7 += 1) 
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)55776))) != (((((/* implicit */_Bool) (signed char)127)) ? (-5007740100982852663LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                    arr_20 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) var_10);
                    arr_21 [i_1] [i_4] [i_6] [i_7] = ((/* implicit */short) min((((/* implicit */int) arr_15 [i_6 - 2] [i_6 - 2])), ((~(((/* implicit */int) arr_17 [i_7 + 1] [i_7] [i_7 + 1] [i_7]))))));
                }
                var_25 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25442))) > (3079065642U))))) % (((1252513242U) % (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) >= (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 7986890029032899302ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)65535)))) & (((/* implicit */int) ((signed char) (unsigned short)21354))))))));
                /* LoopSeq 2 */
                for (int i_8 = 2; i_8 < 23; i_8 += 3) 
                {
                    var_26 = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)32767)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (3079065642U)))))) / (((/* implicit */int) var_0))));
                    var_27 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_8] [i_6 + 1] [i_6 + 1] [i_1])) ? (((/* implicit */int) arr_23 [i_8] [i_8] [i_6 - 1] [i_6])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_4)) : (min(((+(((/* implicit */int) (unsigned char)241)))), ((+(((/* implicit */int) var_10))))))));
                }
                for (signed char i_9 = 1; i_9 < 24; i_9 += 1) 
                {
                    arr_28 [i_1] [i_4] [3LL] [4] [12LL] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) max((var_4), (((/* implicit */unsigned short) (signed char)127)))))), (((((/* implicit */_Bool) arr_10 [i_1] [i_4] [i_6] [i_9])) ? (((((/* implicit */_Bool) 5007740100982852648LL)) ? (131071ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)81))))) : (var_3)))));
                    var_28 = ((/* implicit */int) (-(421263538468616494LL)));
                    var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_8))) != (((/* implicit */int) (short)-26379))));
                }
                arr_29 [i_4] [i_4] [i_1] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((var_11) % (421263538468616483LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1] [i_6 + 1])) / (((/* implicit */int) var_7)))))))), (arr_10 [i_1] [i_4] [i_6] [i_6])));
            }
            /* vectorizable */
            for (short i_10 = 3; i_10 < 23; i_10 += 2) /* same iter space */
            {
                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (-(((/* implicit */int) var_12)))))));
                var_31 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_12)))) > (((/* implicit */int) var_6))));
                var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_6)))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (-5007740100982852659LL))))));
            }
            for (short i_11 = 3; i_11 < 23; i_11 += 2) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (!(((((/* implicit */unsigned long long int) arr_11 [i_1])) < (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_9))))))))));
                var_34 = arr_22 [i_4] [i_4] [i_4] [i_4];
                var_35 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)52984)) > (((/* implicit */int) arr_2 [i_11 - 1])))) ? (((/* implicit */int) ((_Bool) (unsigned char)9))) : (-1)));
            }
            var_36 = ((/* implicit */_Bool) min((((((/* implicit */int) var_4)) + (((/* implicit */int) max((((/* implicit */short) var_6)), (var_0)))))), (((((/* implicit */_Bool) arr_31 [i_1] [2LL] [i_4])) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (arr_31 [i_1] [i_1] [i_1])))));
            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) 6707060101716890138LL)))) ? (((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) max((var_12), (var_1))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_4] [i_4])))))));
            var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_19 [i_1] [i_4] [i_4] [i_4] [i_4] [i_4]), (((/* implicit */unsigned long long int) max((var_10), (var_10))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967275U)) ? (((/* implicit */unsigned long long int) arr_4 [i_4])) : (var_3))))))) : (((/* implicit */int) ((unsigned char) var_2))))))));
        }
        /* vectorizable */
        for (short i_12 = 0; i_12 < 25; i_12 += 3) /* same iter space */
        {
            var_39 = ((/* implicit */short) (+(((/* implicit */int) arr_12 [i_1] [i_12]))));
            var_40 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)5199))));
        }
        for (unsigned short i_13 = 1; i_13 < 22; i_13 += 2) 
        {
            var_41 = ((-5153008805961676439LL) > (((/* implicit */long long int) 20U)));
            /* LoopNest 2 */
            for (unsigned char i_14 = 0; i_14 < 25; i_14 += 2) 
            {
                for (long long int i_15 = 0; i_15 < 25; i_15 += 4) 
                {
                    {
                        var_42 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) == (((int) var_11))))), (((((/* implicit */_Bool) arr_41 [i_13 + 1])) ? (max((var_9), (((/* implicit */unsigned long long int) arr_1 [i_1] [(unsigned char)15])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 812899668708601565ULL)) ? (-421263538468616494LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
                        var_43 &= ((/* implicit */unsigned short) ((((((/* implicit */int) ((unsigned short) 7419338516647131792LL))) / (((((/* implicit */int) var_10)) + (arr_16 [i_14] [i_14]))))) > (((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_4)))) % (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))));
                        var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) var_11))));
                    }
                } 
            } 
        }
        arr_46 [i_1] = min((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-26379))) > (-100176604578714022LL)))), (((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_5)) : (var_3)))));
        var_45 = ((/* implicit */unsigned short) var_12);
    }
    for (int i_16 = 0; i_16 < 25; i_16 += 4) /* same iter space */
    {
        var_46 = ((/* implicit */short) var_3);
        var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_26 [i_16] [i_16] [i_16]))))) ? (((/* implicit */long long int) -1257602719)) : (((((/* implicit */_Bool) (unsigned short)5199)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (var_5) : (((/* implicit */long long int) 719238587)))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_16] [10ULL] [i_16])))));
    }
}

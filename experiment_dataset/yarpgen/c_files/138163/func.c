/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138163
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_4 [i_0] = (+(((((/* implicit */_Bool) arr_3 [i_0])) ? (var_4) : (((/* implicit */int) (_Bool)1)))));
        arr_5 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) var_2)) >= (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (var_9)))));
        arr_6 [i_0] [i_0] = ((/* implicit */int) var_13);
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((var_8) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)111)) : (arr_0 [i_1]))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) var_19))))))) ? ((~(var_9))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_6))))) : (((int) arr_1 [i_1]))))))))));
        arr_9 [i_1] = ((/* implicit */unsigned int) ((var_5) == ((+(((/* implicit */int) arr_2 [i_1] [i_1]))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]))));
        /* LoopSeq 3 */
        for (int i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            var_22 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_12 [i_2 - 1] [i_2])) ? (arr_12 [i_2 - 2] [i_2]) : (arr_12 [i_2 - 2] [i_2]))) != (((297946171) << (((var_17) - (52458079)))))));
            var_23 += ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_8 [i_2 - 1]))))));
            var_24 = ((/* implicit */unsigned char) min(((-((-(arr_10 [i_1]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_11)))))));
            arr_14 [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_1])) ? (var_9) : (arr_10 [i_2])))))) ? (((int) arr_10 [i_1])) : ((+(((((/* implicit */int) arr_11 [(unsigned short)13])) / (1606958587)))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                arr_21 [i_1] [i_3] [i_4] |= ((/* implicit */unsigned short) min((arr_15 [i_4] [i_1]), (((/* implicit */int) var_11))));
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)144)) & (((/* implicit */int) (unsigned char)120))))) ? (((/* implicit */unsigned long long int) ((int) ((arr_13 [i_1]) && (((/* implicit */_Bool) 0)))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_22 [i_1] [2ULL] [i_4]))))))));
                    var_26 = ((/* implicit */unsigned short) var_8);
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((int) (_Bool)0)))));
                    var_28 ^= ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_7 [i_3] [i_1]))))));
                }
                arr_25 [i_1] [i_3] [8ULL] [i_4] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned long long int) var_4)) : (arr_22 [i_4] [i_3] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)102))) ^ (var_16)))) : ((-(var_13))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)144)))));
            }
            for (unsigned int i_6 = 2; i_6 < 19; i_6 += 2) 
            {
                var_29 *= ((/* implicit */signed char) arr_27 [10U] [i_3]);
                var_30 ^= ((/* implicit */long long int) arr_13 [i_6]);
            }
            arr_28 [i_1] [i_3] = ((/* implicit */int) arr_16 [i_1]);
        }
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                var_31 = ((/* implicit */unsigned int) ((_Bool) ((int) (~(var_0)))));
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_7] [i_1])) || (((((/* implicit */_Bool) ((unsigned int) var_16))) && (((/* implicit */_Bool) 2147483647))))));
                var_33 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) 1606958577)))) ? ((-(((/* implicit */int) arr_7 [i_1] [i_8])))) : (var_18)))) ? ((+(((/* implicit */int) (unsigned char)116)))) : ((+(((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))))))));
                arr_33 [i_1] [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) ((int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_10)) : (17870283321406128128ULL))) != (((/* implicit */unsigned long long int) ((int) var_6))))));
            }
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
            {
                var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) min((((int) (unsigned short)27000)), (((/* implicit */int) arr_26 [i_1] [8] [i_9] [i_9])))))));
                arr_36 [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)4036))));
                arr_37 [i_1] [i_7] = ((/* implicit */unsigned int) max((((int) (+(((/* implicit */int) var_11))))), (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) var_5)) : (var_9)))))))));
                /* LoopSeq 4 */
                for (unsigned char i_10 = 3; i_10 < 17; i_10 += 3) /* same iter space */
                {
                    var_35 *= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                    var_36 ^= ((/* implicit */unsigned int) var_6);
                }
                for (unsigned char i_11 = 3; i_11 < 17; i_11 += 3) /* same iter space */
                {
                    arr_42 [i_1] [i_7] [i_9] [i_11] = ((/* implicit */unsigned short) 1848459099U);
                    arr_43 [i_1] [i_7] [i_9] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_11] [i_1] [i_9] [i_9] [i_1] [i_1])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_9] [i_1] [i_7] [i_7] [i_7] [i_11])))))) && (arr_13 [6U])))) | ((-(((/* implicit */int) arr_13 [i_11 + 2]))))));
                }
                for (unsigned char i_12 = 3; i_12 < 17; i_12 += 3) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned int) var_6);
                    arr_47 [i_1] [i_7] [i_12] [i_12] [i_9] [i_12] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_12)))) ? (((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_12 + 3])) && (((/* implicit */_Bool) arr_19 [i_12 + 3]))))))));
                    arr_48 [i_12] [i_12] [i_7] [i_12] [i_1] = ((((/* implicit */_Bool) var_7)) && (var_8));
                }
                for (short i_13 = 0; i_13 < 20; i_13 += 4) 
                {
                    var_38 |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_45 [i_1] [i_1]))));
                    var_39 -= ((/* implicit */int) min(((!((!(((/* implicit */_Bool) (short)-31285)))))), ((!(((var_8) || (((/* implicit */_Bool) var_11))))))));
                }
            }
            for (unsigned char i_14 = 0; i_14 < 20; i_14 += 4) 
            {
                var_40 = ((/* implicit */unsigned char) (~((+(((((/* implicit */int) arr_18 [i_1] [i_1])) ^ (((/* implicit */int) var_14))))))));
                arr_55 [i_1] [i_1] [i_14] = ((/* implicit */int) (-(arr_50 [i_14] [i_7] [i_7] [i_7] [i_1])));
            }
            for (unsigned short i_15 = 0; i_15 < 20; i_15 += 1) 
            {
                var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)139))))) ? (((var_4) / (arr_0 [i_1]))) : (((((/* implicit */_Bool) arr_30 [i_15])) ? (((((/* implicit */int) arr_3 [i_1])) * (((/* implicit */int) arr_56 [i_1] [i_7] [i_15])))) : (((int) var_12))))));
                arr_58 [i_1] [i_7] [i_15] = (~(((/* implicit */int) ((short) arr_19 [i_1]))));
                arr_59 [i_1] [i_7] [i_15] = ((/* implicit */unsigned char) min((((-1) ^ (((/* implicit */int) (short)(-32767 - 1))))), (-172617638)));
                arr_60 [i_15] [i_7] = ((/* implicit */_Bool) arr_54 [i_15] [i_1] [(_Bool)1]);
            }
            arr_61 [i_1] [i_1] [i_1] = max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_44 [i_1] [i_7])) || (((/* implicit */_Bool) arr_15 [i_1] [i_7]))))), (arr_45 [i_1] [i_7]));
            var_42 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (min((0U), (((/* implicit */unsigned int) var_8))))))) ? (((/* implicit */unsigned int) (-(arr_52 [i_1] [i_7])))) : (((((/* implicit */_Bool) 0U)) ? (1848459099U) : (((/* implicit */unsigned int) 439166727))))));
            arr_62 [i_7] [i_1] [i_1] = min(((_Bool)1), (var_19));
            var_43 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)7)) && (((/* implicit */_Bool) var_1)))) || (((/* implicit */_Bool) arr_20 [i_1] [i_7]))));
        }
        var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) min(((~(var_13))), (((((/* implicit */_Bool) ((arr_18 [i_1] [i_1]) ? (((/* implicit */long long int) arr_0 [i_1])) : (arr_49 [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (11827781168460515302ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_1] [i_1]))))))))));
    }
    var_45 *= ((((/* implicit */_Bool) min((3497829371U), (((/* implicit */unsigned int) var_14))))) ? (((((/* implicit */int) var_3)) & (((var_17) ^ (((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned long long int) var_1))))) ? (((int) 0U)) : (((/* implicit */int) (unsigned short)8191)))));
}

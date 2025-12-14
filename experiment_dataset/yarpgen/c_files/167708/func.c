/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167708
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
    var_15 = min((min((((int) var_9)), (((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_7)) - (15123))))))), (((/* implicit */int) var_13)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            arr_4 [i_0] = ((/* implicit */signed char) (-(((((var_6) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))));
            var_16 = ((/* implicit */unsigned long long int) 460723025U);
            arr_5 [i_1] [i_0] = ((/* implicit */unsigned short) var_14);
            var_17 = ((/* implicit */unsigned short) min((((/* implicit */int) (signed char)-90)), (min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) == (var_1)))), ((+(((/* implicit */int) var_10))))))));
        }
        for (int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_18 ^= ((/* implicit */signed char) var_8);
            var_19 = ((/* implicit */unsigned short) ((unsigned int) ((72057594037927935ULL) >= (72057594037927915ULL))));
        }
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            arr_10 [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) max((18374686479671623681ULL), (((/* implicit */unsigned long long int) (unsigned short)65528))));
            arr_11 [i_3] = ((/* implicit */signed char) (unsigned short)61008);
        }
        /* LoopNest 2 */
        for (unsigned int i_4 = 1; i_4 < 24; i_4 += 4) 
        {
            for (unsigned short i_5 = 1; i_5 < 23; i_5 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) var_14);
                    var_21 ^= ((/* implicit */unsigned short) ((short) min((var_11), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)613)) ^ (((/* implicit */int) var_2))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1350740162253609452LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))) : (((long long int) var_0)))))));
        var_23 = ((/* implicit */long long int) var_11);
    }
    for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_6])) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_19 [i_6])))) : (((/* implicit */int) min((arr_19 [i_6]), (arr_19 [i_6]))))));
        arr_20 [i_6] = ((/* implicit */unsigned char) max((4282917435U), (4282917435U)));
        var_25 = ((/* implicit */unsigned long long int) arr_18 [i_6]);
        var_26 = ((/* implicit */_Bool) var_3);
    }
    for (unsigned int i_7 = 2; i_7 < 22; i_7 += 1) 
    {
        var_27 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) arr_0 [i_7 - 2])), (((unsigned int) arr_23 [i_7]))))));
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 4) 
        {
            for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                for (unsigned char i_10 = 4; i_10 < 22; i_10 += 2) 
                {
                    {
                        var_28 += ((/* implicit */_Bool) max((arr_32 [i_7] [i_7] [i_7 + 1] [i_7 - 1] [i_10 - 2]), (((/* implicit */unsigned long long int) ((var_11) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)15))))))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_11 = 2; i_11 < 19; i_11 += 4) 
                        {
                            var_29 = ((/* implicit */signed char) ((((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_7] [i_8] [i_9] [i_10 - 3] [i_11 + 2] [i_11]))) * (4282917435U))))) << (((((/* implicit */int) (signed char)-122)) + (122)))));
                            var_30 = ((/* implicit */signed char) min(((short)3449), (((/* implicit */short) (unsigned char)81))));
                        }
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            var_31 = ((/* implicit */int) (unsigned char)254);
                            var_32 = ((((/* implicit */long long int) ((/* implicit */int) max((arr_24 [i_10 - 2]), (arr_24 [i_10 - 4]))))) * (min((((/* implicit */long long int) (short)-1)), (3282739159525360279LL))));
                        }
                        for (int i_13 = 3; i_13 < 21; i_13 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) var_1);
                            arr_43 [i_13] [i_8] [i_9] [i_8] [i_7 + 1] = ((/* implicit */short) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned long long int) arr_42 [i_13] [i_10] [i_9] [i_8])), (arr_16 [i_9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)3440), (((/* implicit */short) arr_25 [i_8] [i_13])))))))) - (3866562335ULL)))));
                            var_34 = ((/* implicit */signed char) min((min((max((((/* implicit */unsigned int) arr_26 [i_7] [i_8] [i_8])), (arr_42 [i_13] [i_10] [i_9] [i_7]))), (((/* implicit */unsigned int) ((8176U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15317)))))))), (min((((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (81041831)))), ((-(4294959119U)))))));
                        }
                        for (unsigned short i_14 = 0; i_14 < 23; i_14 += 2) 
                        {
                            arr_46 [i_7] [i_8] [i_9] [i_9] [i_8] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_16 [i_14])) ? (18374686479671623694ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_10] [i_14])) * (((/* implicit */int) var_2))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                            var_35 |= arr_3 [i_10] [i_8] [i_9];
                            arr_47 [i_14] [i_8] [i_9] [i_8] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((-(arr_42 [i_14] [i_9] [i_8] [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-79)))))) ? (min((arr_29 [i_10 - 3] [i_8] [i_9] [i_8]), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */short) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((arr_14 [i_7 + 1] [i_8] [i_9] [i_10]) >> (((((/* implicit */int) (signed char)122)) - (98))))))));
                        }
                        var_36 = ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-3469)) : (((/* implicit */int) var_6)))) ^ (min((((/* implicit */int) (signed char)121)), (-971431395))));
                        /* LoopSeq 2 */
                        for (unsigned int i_15 = 2; i_15 < 21; i_15 += 2) 
                        {
                            var_37 = ((/* implicit */unsigned long long int) 4294959120U);
                            var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) var_9))));
                        }
                        for (short i_16 = 3; i_16 < 21; i_16 += 4) 
                        {
                            var_39 = ((/* implicit */int) 18374686479671623681ULL);
                            var_40 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_34 [i_16 + 2] [i_8] [i_9] [i_8] [i_16] [i_7])), (((((/* implicit */_Bool) arr_34 [i_7 - 1] [i_8 - 1] [i_9] [i_8] [i_16] [i_10])) ? (arr_16 [i_16 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_7] [i_8 - 1] [i_9] [i_8] [i_10 - 4] [i_16 - 1])))))));
                            var_41 = ((/* implicit */int) min((((((((/* implicit */_Bool) 4294959120U)) ? (72057594037927935ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), ((short)-26182))))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))), (((/* implicit */int) arr_34 [i_7] [i_8] [i_9] [i_8] [i_8] [i_9])))))));
                            var_42 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_10 - 2] [i_10])) && (((/* implicit */_Bool) arr_36 [i_8] [i_7] [i_8 + 1] [i_16 - 3] [i_16] [i_16]))))), (var_1)));
                            var_43 = ((/* implicit */int) var_14);
                        }
                    }
                } 
            } 
        } 
        var_44 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) var_6)) ^ (min((((/* implicit */int) arr_44 [i_7 - 2] [i_7])), (-887722436))))));
        arr_52 [i_7] [i_7] = ((/* implicit */unsigned int) min((((arr_32 [i_7 - 2] [i_7] [i_7 - 1] [i_7 + 1] [i_7 + 1]) - (arr_32 [i_7] [i_7] [i_7] [i_7 - 2] [i_7 - 2]))), (arr_32 [i_7] [i_7] [i_7] [i_7 - 1] [i_7 - 1])));
    }
    var_45 = ((/* implicit */signed char) ((long long int) (short)-1));
    var_46 = ((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned int) ((signed char) (short)26084)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106084
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
    var_10 = ((((/* implicit */_Bool) (~(min((4U), (((/* implicit */unsigned int) var_8))))))) ? ((+(((/* implicit */int) var_6)))) : ((((+(((/* implicit */int) (short)27553)))) / (var_3))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                arr_8 [i_0 - 1] [i_0 - 1] [i_2 - 2] = ((int) (short)-27561);
                arr_9 [i_1] [(unsigned char)11] = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) (~(var_9)))) % (max((((/* implicit */unsigned int) (short)27556)), (var_4)))))));
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(min((var_4), (((/* implicit */unsigned int) arr_5 [i_1] [i_2 - 1]))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) var_8)))))) : (((((/* implicit */_Bool) arr_2 [i_2 + 2] [i_0 - 1])) ? (arr_2 [i_2 + 1] [i_0 - 1]) : (arr_2 [i_2 - 2] [i_0 + 1])))));
                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)8176)) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) (signed char)42)))) * ((~(((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */int) (short)27560)))))))))));
            }
            for (int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) (short)28983)) ? (-3448173168940843933LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) ? (((((/* implicit */_Bool) (short)-27561)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27565))) : (14138613549618040127ULL))) : (((/* implicit */unsigned long long int) var_9)))))));
                var_14 = ((/* implicit */short) ((_Bool) var_7));
                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (!(((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_4)) : (var_0)))))))))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)51)) ? (((((/* implicit */_Bool) (short)27563)) ? ((-(((/* implicit */int) (unsigned short)57359)))) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_2)))))))));
            }
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) var_5)))))) % (((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1]))) : (var_4)))));
            arr_14 [i_0] [i_0] [i_1] = arr_3 [i_0] [i_1];
        }
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned int i_5 = 1; i_5 < 22; i_5 += 1) 
            {
                arr_19 [i_0] [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) var_5);
                arr_20 [i_0] [i_4] [i_4] = ((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1]);
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_24 [i_0] [i_4] [i_6] [i_0] = ((/* implicit */signed char) var_0);
                var_18 = ((/* implicit */short) max((var_1), (((/* implicit */long long int) (+(((var_6) ? (((/* implicit */int) (short)27563)) : (((/* implicit */int) var_8)))))))));
            }
            for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                arr_28 [i_0 - 1] [i_0] [i_7] [i_7] = ((arr_22 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_7] [i_0]))));
                arr_29 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_7] [i_4])) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_0 + 1])))))));
            }
            var_19 = ((/* implicit */int) var_4);
        }
        for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 2) 
        {
            var_20 = (((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)8176))))))) ? ((-(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) (~(var_5)))) ? ((~(((/* implicit */int) arr_27 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)27549)) && (((/* implicit */_Bool) (unsigned short)57336))))))));
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                arr_34 [i_9] [(short)4] [(short)4] [i_0] = ((/* implicit */short) max((((/* implicit */int) ((short) arr_10 [i_0 - 1] [i_9]))), (((((/* implicit */_Bool) arr_10 [i_8 + 1] [i_9])) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_8 - 1])) : (((/* implicit */int) arr_10 [i_8 + 1] [i_0 + 1]))))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) (unsigned short)65535))) % ((~((~(((/* implicit */int) (short)27564)))))))))));
            }
        }
        var_22 = ((/* implicit */short) max((((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-120)), ((unsigned short)1)))) % (((/* implicit */int) arr_12 [i_0 + 1] [i_0 - 1] [i_0])))), (((/* implicit */int) arr_30 [i_0]))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((_Bool) (!(((/* implicit */_Bool) (short)27538))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((!(((/* implicit */_Bool) var_0)))), ((!(((/* implicit */_Bool) var_4)))))))) : (((((/* implicit */_Bool) (unsigned short)3)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27560))))))))));
        arr_35 [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1]))))) ? ((-(((/* implicit */int) arr_25 [i_0 - 1] [i_0] [i_0] [i_0 - 1])))) : (((((/* implicit */int) var_2)) - (((/* implicit */int) (signed char)-64))))));
        arr_36 [i_0] = ((((/* implicit */_Bool) ((long long int) (short)-27541))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)57359)))))))) : (((arr_2 [i_0] [i_0 + 1]) / (((/* implicit */long long int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((-20LL) + (26LL)))))))));
    }
    for (short i_10 = 0; i_10 < 22; i_10 += 1) 
    {
        arr_39 [i_10] = ((/* implicit */unsigned short) (~(min((((/* implicit */int) var_2)), ((-(((/* implicit */int) var_2))))))));
        arr_40 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? ((+(var_0))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_26 [i_10] [i_10] [i_10]))))));
        arr_41 [i_10] = ((/* implicit */short) (~(((((/* implicit */int) (signed char)127)) ^ (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((short) ((short) (short)(-32767 - 1)))))));
        /* LoopSeq 4 */
        for (short i_11 = 0; i_11 < 22; i_11 += 1) 
        {
            arr_45 [i_10] [i_10] = ((/* implicit */int) ((long long int) (unsigned short)4));
            arr_46 [i_10] [i_10] = ((/* implicit */unsigned char) ((int) var_3));
            arr_47 [i_10] [i_11] = ((/* implicit */_Bool) var_2);
        }
        for (short i_12 = 2; i_12 < 21; i_12 += 1) 
        {
            arr_51 [i_10] = ((/* implicit */unsigned long long int) var_2);
            arr_52 [i_10] = ((/* implicit */unsigned char) arr_0 [i_10] [i_10]);
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)73)) | ((~(((/* implicit */int) (unsigned short)14)))))))));
            /* LoopSeq 2 */
            for (long long int i_13 = 1; i_13 < 21; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    for (signed char i_15 = 1; i_15 < 21; i_15 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((unsigned short) (unsigned short)24566)))));
                            var_27 = ((/* implicit */unsigned short) (~((-(max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_2))))))));
                        }
                    } 
                } 
                arr_62 [i_10] [i_10] [(signed char)9] [i_10] = ((/* implicit */unsigned short) var_9);
            }
            for (long long int i_16 = 0; i_16 < 22; i_16 += 1) 
            {
                var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_3) - (((/* implicit */int) arr_10 [i_12 + 1] [i_12 + 1])))))));
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 22; i_17 += 3) 
                {
                    for (short i_18 = 4; i_18 < 20; i_18 += 3) 
                    {
                        {
                            arr_71 [i_10] [i_10] = ((/* implicit */unsigned long long int) (((-(min((((/* implicit */long long int) var_2)), (var_1))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [i_18] [i_18 + 1] [i_18] [i_12 + 1])) : (((/* implicit */int) arr_43 [i_12 + 1] [i_12 - 1] [i_10])))))));
                            arr_72 [i_10] [i_17] [i_16] [(unsigned char)4] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(var_1)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((short) (unsigned char)181)))));
                        }
                    } 
                } 
            }
        }
        for (int i_19 = 0; i_19 < 22; i_19 += 1) 
        {
            arr_75 [i_10] [i_10] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))));
            arr_76 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_1)))))) ? (((((/* implicit */unsigned int) 2147483647)) % (1510755388U))) : (((/* implicit */unsigned int) max((arr_54 [i_10] [i_19] [i_19]), (((/* implicit */int) (unsigned short)65535)))))));
            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_19] [i_10])) ? (var_9) : (((/* implicit */int) (short)-20736))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_50 [i_10] [i_19]))))) : (((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_10] [i_19] [i_19] [i_10]))) : (var_0)))));
            var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_9)))))))));
        }
        for (unsigned int i_20 = 1; i_20 < 21; i_20 += 3) 
        {
            var_31 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 14138613549618040118ULL)))))));
            var_32 = ((/* implicit */_Bool) arr_63 [i_10] [i_10] [i_10]);
            arr_81 [i_10] [i_10] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1510755375U)) ? (((/* implicit */long long int) var_3)) : (var_1)))) ? (((/* implicit */int) arr_65 [i_20 + 1] [i_20])) : ((~(((/* implicit */int) var_7))))))));
            arr_82 [i_10] [i_20] = ((/* implicit */signed char) var_7);
        }
    }
    for (unsigned short i_21 = 0; i_21 < 19; i_21 += 4) 
    {
        var_33 = ((/* implicit */int) arr_69 [(unsigned char)2] [i_21] [i_21] [i_21] [i_21]);
        var_34 = ((/* implicit */long long int) (-(min((((/* implicit */int) var_6)), ((+(((/* implicit */int) (short)(-32767 - 1)))))))));
    }
}

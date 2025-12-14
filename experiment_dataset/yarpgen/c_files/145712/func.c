/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145712
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
    var_16 = ((/* implicit */unsigned char) max((479681549U), (479681561U)));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_10))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (-((-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)53674)) : (((/* implicit */int) var_6)))))))))));
            arr_6 [i_0] [i_0] = arr_2 [i_0];
        }
        for (unsigned long long int i_2 = 4; i_2 < 22; i_2 += 4) 
        {
            arr_9 [i_0] = ((min((136339441844224LL), (((/* implicit */long long int) (~(var_8)))))) < (((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_2 - 3])) ? (var_7) : (var_7))))));
            var_19 = arr_7 [i_2 + 2] [i_0];
            arr_10 [i_0] = ((/* implicit */long long int) var_0);
        }
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            arr_14 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) == (((unsigned int) (unsigned short)49500))))))))));
            var_21 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)7595)), (min(((+(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_4 [i_0] [i_0] [i_3]))))));
            arr_15 [i_0] [8ULL] = ((/* implicit */unsigned char) ((unsigned long long int) (_Bool)1));
        }
        /* LoopSeq 1 */
        for (unsigned short i_4 = 4; i_4 < 21; i_4 += 3) 
        {
            var_22 = ((unsigned char) arr_7 [i_0] [(unsigned short)13]);
            arr_20 [i_0] [i_0] [i_0] = (+(((((/* implicit */_Bool) var_13)) ? ((+(16370641589407309486ULL))) : (7742125124236541177ULL))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40275))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)127)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_4 - 1])))))));
        }
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    {
                        arr_30 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((220640049) < (-1)))), (max((((/* implicit */long long int) arr_24 [(unsigned short)4] [i_5])), (var_7)))))) % ((~(((((/* implicit */_Bool) 7742125124236541177ULL)) ? (10744829595064311138ULL) : (((/* implicit */unsigned long long int) var_10))))))));
                        var_24 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_11 [i_0] [i_0])))), ((~(arr_27 [i_0] [i_5] [i_7])))));
                        arr_31 [i_6] [i_6] [2ULL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [i_7]))) : (13504389674852210553ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (4294967295U))))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 4) 
        {
            arr_34 [i_0] = ((/* implicit */long long int) arr_19 [i_8 - 1] [i_8] [i_0]);
            /* LoopNest 2 */
            for (unsigned char i_9 = 1; i_9 < 23; i_9 += 1) 
            {
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    {
                        arr_40 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_5);
                        var_25 = arr_7 [i_9 - 1] [i_0];
                    }
                } 
            } 
        }
        for (unsigned int i_11 = 2; i_11 < 20; i_11 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 1; i_12 < 23; i_12 += 4) 
            {
                arr_46 [(unsigned char)12] &= ((/* implicit */unsigned int) arr_32 [i_11] [i_11 + 1] [i_11]);
                var_26 = 3840070496705453964ULL;
                var_27 = ((/* implicit */long long int) arr_23 [i_0]);
                /* LoopNest 2 */
                for (unsigned char i_13 = 2; i_13 < 23; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 1; i_14 < 22; i_14 += 3) 
                    {
                        {
                            arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
                            arr_53 [i_0] [i_0] [8ULL] [i_11] [i_12] [i_13 + 1] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_18 [i_0] [i_13 + 1] [i_14 + 2])) <= (((/* implicit */int) ((-136339441844225LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))))) | (max(((~(var_1))), (arr_44 [i_0] [i_0]))));
                            arr_54 [i_14 + 2] [i_13] [i_12] [i_0] [i_11 + 3] [i_0] [i_0] = ((/* implicit */long long int) (+(17224193115919878128ULL)));
                            arr_55 [i_0] = ((/* implicit */unsigned long long int) var_7);
                        }
                    } 
                } 
                var_28 = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */int) arr_16 [i_11 + 2] [i_11 - 2] [i_11 - 2])), (((arr_12 [i_0] [(_Bool)1] [i_12 - 1]) ? (((/* implicit */int) (unsigned short)2540)) : (((/* implicit */int) arr_11 [i_0] [i_0])))))));
            }
            arr_56 [i_0] [(unsigned short)22] [i_11] = ((/* implicit */unsigned long long int) ((((max((((/* implicit */int) (signed char)-35)), (arr_27 [i_0] [i_0] [i_0]))) / (((/* implicit */int) (unsigned char)2)))) / ((+(((/* implicit */int) arr_1 [i_11 + 1]))))));
            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (unsigned short)64512)))))))));
        }
    }
    for (int i_15 = 1; i_15 < 24; i_15 += 4) 
    {
        var_30 *= ((/* implicit */int) (!(((/* implicit */_Bool) max((((long long int) var_14)), (((/* implicit */long long int) var_4)))))));
        var_31 = ((/* implicit */signed char) ((2076102484302242148ULL) ^ (18446744073709551615ULL)));
        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_58 [i_15 + 1]))))) ? ((+(((/* implicit */int) arr_58 [i_15 + 1])))) : (((((/* implicit */int) arr_58 [i_15])) - (((/* implicit */int) arr_58 [i_15 - 1])))))))));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 1) 
        {
            arr_66 [i_17] [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_27 [i_17] [i_17] [6ULL])) ^ (min((arr_44 [(unsigned char)8] [i_17]), (arr_35 [(unsigned char)20] [i_17] [i_17])))));
            arr_67 [i_17] [12ULL] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_50 [i_16] [i_17]))))) ? (((((/* implicit */unsigned long long int) arr_61 [i_16])) ^ (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_50 [i_16] [i_17])))))));
            /* LoopSeq 2 */
            for (long long int i_18 = 0; i_18 < 14; i_18 += 4) 
            {
                var_33 = ((((/* implicit */_Bool) max((max((7701914478645240457ULL), (((/* implicit */unsigned long long int) arr_0 [i_17])))), ((-(var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)123), (arr_4 [i_18] [i_18] [i_18]))))) : ((+(max((((/* implicit */long long int) (unsigned char)124)), (-136339441844225LL))))));
                /* LoopNest 2 */
                for (unsigned short i_19 = 1; i_19 < 13; i_19 += 4) 
                {
                    for (unsigned char i_20 = 0; i_20 < 14; i_20 += 3) 
                    {
                        {
                            arr_75 [(unsigned char)12] [i_17] = ((/* implicit */unsigned char) var_0);
                            arr_76 [(_Bool)1] [i_17] [i_18] [i_18] [i_18] [i_17] [i_16] = ((/* implicit */long long int) (+(((((/* implicit */int) arr_43 [i_19 + 1] [i_19 + 1] [i_19 - 1] [i_19 - 1])) * (((/* implicit */int) var_13))))));
                        }
                    } 
                } 
                var_34 = ((((/* implicit */_Bool) ((unsigned long long int) (-9223372036854775807LL - 1LL)))) && ((!(((/* implicit */_Bool) ((unsigned long long int) var_13))))));
            }
            for (unsigned char i_21 = 1; i_21 < 13; i_21 += 4) 
            {
                var_35 = ((/* implicit */unsigned short) (-(12ULL)));
                var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (-((+(var_11))))))));
                var_37 = ((/* implicit */_Bool) ((long long int) arr_25 [i_16] [(unsigned short)0]));
                arr_80 [i_17] [i_17] [i_21 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((136339441844224LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63488)))))) | (var_11)));
                arr_81 [i_16] [i_17] = (signed char)25;
            }
            arr_82 [i_17] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) arr_41 [i_16] [19ULL])) % (((/* implicit */int) arr_41 [(unsigned char)4] [i_17])))) : (((/* implicit */int) min((var_15), (((/* implicit */unsigned short) var_14)))))))), ((+(arr_61 [i_16])))));
        }
        var_38 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (arr_37 [i_16] [(unsigned char)15] [i_16]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)104))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22)))));
    }
    var_39 = ((/* implicit */unsigned short) var_2);
    var_40 = ((/* implicit */unsigned short) var_14);
}

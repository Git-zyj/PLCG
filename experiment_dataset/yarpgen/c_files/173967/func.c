/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173967
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
    var_17 += ((/* implicit */long long int) ((((((var_5) >= (var_5))) && (((var_0) || (((/* implicit */_Bool) 0ULL)))))) ? (min((((/* implicit */int) max((var_7), (var_15)))), (((((/* implicit */int) (short)32767)) - (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) (!(var_4))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (min((18446744073709551594ULL), (((/* implicit */unsigned long long int) 1212641549041104719LL))))));
    var_19 = ((/* implicit */_Bool) max((var_19), (var_15)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((arr_0 [i_0]) - (arr_0 [i_0]))) - ((-(((/* implicit */int) (signed char)31))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (((/* implicit */int) ((_Bool) min((18446744073709551587ULL), (18374686479671623680ULL))))) : (max((((/* implicit */int) var_6)), ((-(((/* implicit */int) var_10))))))));
                        var_21 = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) var_4)), ((~(arr_7 [i_0] [i_1] [i_2]))))), (((((/* implicit */_Bool) arr_13 [i_3] [i_2] [i_3 - 2] [i_3])) ? (((/* implicit */int) arr_11 [i_0] [i_3 + 1] [i_2] [i_2])) : (((/* implicit */int) arr_2 [i_2] [i_3]))))));
                    }
                } 
            } 
            arr_14 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1]))) & (min((((/* implicit */unsigned long long int) arr_8 [i_0])), (0ULL)))));
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 8ULL)))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_6 = 1; i_6 < 9; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_6 [i_5] [i_7]))));
                            var_24 += ((/* implicit */short) (+(((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 0ULL)))) : (0ULL)))));
                            arr_25 [i_0] [i_0] [i_4] [i_5] [i_7] [i_6 + 3] [i_0] = ((/* implicit */unsigned char) max((0ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)27231)))))));
                            var_25 = ((/* implicit */unsigned char) ((unsigned short) arr_10 [i_5]));
                            var_26 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */int) var_13)) ^ (((/* implicit */int) arr_6 [i_0] [i_4])))), (((/* implicit */int) (!(((/* implicit */_Bool) 1032226052U)))))))) ? ((+(var_5))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_15 [i_5])) / (((/* implicit */int) var_16)))) ^ (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) arr_18 [0] [(short)1] [i_5] [i_5]))))))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? ((-(arr_10 [i_4]))) : (((((/* implicit */int) (unsigned char)93)) & (((var_9) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))))))))));
                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (~((+(((/* implicit */int) var_16)))))))));
                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (unsigned short)38304))));
            }
            for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                var_30 = ((((/* implicit */_Bool) var_14)) ? (((((((/* implicit */_Bool) 283726776524341248ULL)) ? (((/* implicit */int) arr_9 [i_8])) : (((/* implicit */int) (unsigned char)93)))) << (((arr_7 [i_0] [i_0] [i_0]) + (2028721548))))) : (((/* implicit */int) arr_4 [i_4])));
                arr_30 [i_0] [i_4] [i_4] [i_4] = arr_12 [i_0];
            }
            /* vectorizable */
            for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                var_31 ^= ((/* implicit */_Bool) ((unsigned char) arr_1 [i_4]));
                arr_35 [i_0] [i_4] [(_Bool)0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_10 [i_0])) - (var_14)))) ? (((/* implicit */int) arr_4 [i_9])) : (((/* implicit */int) (unsigned char)105))));
            }
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
                        {
                            var_32 = ((/* implicit */short) var_14);
                            var_33 += ((/* implicit */_Bool) ((max((((/* implicit */int) (unsigned short)65524)), ((+(((/* implicit */int) (unsigned char)200)))))) ^ (((/* implicit */int) ((unsigned short) arr_41 [(_Bool)1] [i_10] [i_10] [i_10])))));
                        }
                        for (unsigned short i_13 = 1; i_13 < 10; i_13 += 2) 
                        {
                            arr_48 [i_0] [i_4] [i_10] [i_4] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((~(4152940761048387930ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_11]))) : (max((((/* implicit */unsigned long long int) min(((unsigned char)61), ((unsigned char)168)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)194))) * (15238459245269564428ULL)))))));
                            var_34 = ((/* implicit */int) arr_12 [6LL]);
                            var_35 = ((/* implicit */_Bool) ((unsigned char) ((((((/* implicit */_Bool) arr_47 [i_4] [i_4] [i_10] [i_11] [i_13])) ? (((/* implicit */int) arr_28 [i_0] [i_0] [i_10] [i_11])) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) / (arr_41 [i_0] [i_4] [i_10] [i_13]))));
                        }
                        for (short i_14 = 3; i_14 < 10; i_14 += 2) 
                        {
                            var_36 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_12)))) ? ((+((+(((/* implicit */int) (unsigned char)248)))))) : (((/* implicit */int) arr_39 [i_11] [i_14] [i_14] [i_14 - 2]))));
                            arr_51 [i_14] [i_14] [i_4] [i_14] [i_14 - 3] [i_14 - 1] [(unsigned char)11] = ((/* implicit */unsigned long long int) var_15);
                        }
                        var_37 = ((/* implicit */signed char) max((min((8ULL), (((/* implicit */unsigned long long int) (unsigned char)112)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)37)))))));
                        var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) 4294967295U))));
                    }
                } 
            } 
            arr_52 [i_4] [(unsigned char)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 1032192U))) ? (min((((long long int) var_2)), (((/* implicit */long long int) (unsigned char)56)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_36 [i_0] [i_0] [i_4] [i_4]))) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)38314)))))))))));
            /* LoopSeq 1 */
            for (unsigned char i_15 = 3; i_15 < 8; i_15 += 2) 
            {
                arr_55 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((unsigned char) 1571110419183323437ULL));
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_39 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (short i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        arr_60 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)113))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)61))));
                        var_40 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27231))) : (0ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 667520918)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (short)21036)))))));
                        arr_61 [i_4] [i_4] [(unsigned short)3] [i_16] [i_4] = ((/* implicit */_Bool) arr_32 [i_17] [i_15] [i_4] [i_0]);
                        var_41 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2087000805U)) ? (667520918) : (((/* implicit */int) (unsigned char)239)))) - ((-(((/* implicit */int) arr_45 [i_4] [i_17] [i_15 + 2] [i_15 + 4] [2ULL] [i_17] [i_17]))))));
                    }
                    var_42 = ((/* implicit */unsigned char) ((arr_17 [i_4]) <= (((/* implicit */unsigned long long int) (+(arr_58 [i_16] [i_15] [i_15] [i_0] [i_0] [i_0]))))));
                    var_43 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((short) max((var_13), (((/* implicit */unsigned short) (signed char)102)))))), (2087000806U)));
                }
            }
        }
        arr_62 [(unsigned char)6] = (unsigned char)200;
    }
    for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 4) 
    {
        var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) max((((((/* implicit */int) ((short) var_7))) ^ (((/* implicit */int) arr_63 [i_18])))), (((((((/* implicit */_Bool) arr_64 [i_18])) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) arr_63 [i_18])) : ((-(((/* implicit */int) var_6)))))))))));
        var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)52257)) : (((/* implicit */int) min((arr_64 [i_18]), (arr_63 [(signed char)20]))))))) && ((!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)128))))))))))));
    }
}

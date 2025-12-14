/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130784
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) var_5))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26061))) : (arr_0 [i_0] [i_0])));
        var_11 = ((/* implicit */unsigned char) (short)26062);
        arr_3 [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) 72057456598974464LL)) ? (251658240U) : (251658240U)));
        /* LoopSeq 4 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_1 - 1] = min((((/* implicit */long long int) (!(arr_4 [i_1 - 1] [i_1 - 1])))), (max((((/* implicit */long long int) arr_7 [i_0])), (((((/* implicit */_Bool) var_9)) ? (var_0) : (var_0))))));
            arr_9 [i_0] [i_1] [i_1] = ((/* implicit */long long int) var_4);
            var_12 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
            /* LoopNest 3 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 7; i_3 += 4) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_13 -= max((((/* implicit */long long int) max((arr_10 [i_1 - 1] [i_2 - 1] [i_3 + 3] [i_4 - 1]), (arr_10 [i_0] [i_0] [i_2 - 1] [i_4 - 1])))), (var_7));
                            arr_17 [i_0] [i_1] [i_2 - 1] [i_3] [i_4] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 - 1])) >= (((/* implicit */int) arr_14 [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_3 + 2] [i_3] [i_4 - 1])))))));
                            arr_18 [i_0] [i_3] [i_2] = ((/* implicit */short) arr_5 [i_0] [i_0]);
                        }
                    } 
                } 
            } 
            arr_19 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((-(var_9))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1])))))) ? (min((((/* implicit */unsigned long long int) var_9)), (max((((/* implicit */unsigned long long int) 16744448)), (11474843995669390776ULL))))) : (((/* implicit */unsigned long long int) 1637917679))));
        }
        /* vectorizable */
        for (unsigned short i_5 = 1; i_5 < 8; i_5 += 4) 
        {
            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+(((/* implicit */int) (short)-17520)))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                arr_26 [i_0] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) 72057525318451200ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-26057))));
                var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (147649854794705031LL) : (8070450532247928832LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-26061))))));
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_15 [i_5]))))) ? (((/* implicit */int) arr_23 [i_7 - 1])) : (var_8)));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_20 [i_7] [i_5] [i_0]))));
            }
            for (long long int i_8 = 1; i_8 < 9; i_8 += 4) 
            {
                arr_31 [i_0] [i_5 + 2] [i_0] [i_8] = ((/* implicit */short) 1637917685);
                arr_32 [i_0] [i_5] [i_8] = (+(((/* implicit */int) ((3917537262U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)26061)))))));
                arr_33 [i_8 + 1] [i_5] [i_0] [i_0] = ((/* implicit */short) arr_12 [i_8] [i_8 - 1] [i_8]);
            }
            arr_34 [i_0] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5] [i_5] [i_5 - 1])))));
        }
        for (signed char i_9 = 2; i_9 < 8; i_9 += 2) 
        {
            arr_39 [i_0] [i_9] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (short)-6450)) ? (((((/* implicit */_Bool) 896135534U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) min(((short)-26063), (((/* implicit */short) (_Bool)1)))))))));
            arr_40 [i_9] = ((((/* implicit */_Bool) (short)6449)) || (((/* implicit */_Bool) 0ULL)));
            arr_41 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_8) << (((/* implicit */int) arr_1 [i_0]))))) ? (((6971900078040160855ULL) * (18446744073709551590ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) + (var_5)))) ? (arr_24 [i_0] [i_0] [i_0]) : (arr_25 [i_9 - 1] [i_9 + 2]))))));
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (_Bool)1))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                arr_45 [i_0] [i_9] [i_10] [i_10] |= ((((/* implicit */_Bool) arr_11 [i_0] [i_9] [i_9 - 1])) ? (-7558973370599252467LL) : (3916953587057924546LL));
                /* LoopNest 2 */
                for (unsigned char i_11 = 2; i_11 < 8; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 2; i_12 < 7; i_12 += 2) 
                    {
                        {
                            arr_51 [i_12 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) -1278515023)) : (var_1)))) ? (((/* implicit */long long int) arr_16 [i_11 + 1] [i_9 - 1])) : (((var_7) / (30720LL)))));
                            arr_52 [i_12] [i_12] [i_12] [i_12] [i_12] = (~(((((/* implicit */_Bool) arr_5 [i_10] [i_9])) ? (arr_7 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                            var_19 = ((/* implicit */_Bool) ((unsigned short) (short)-6450));
                        }
                    } 
                } 
                arr_53 [i_10] [i_10] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_47 [i_10] [i_10] [i_9 - 2] [i_0]))));
                arr_54 [i_0] [i_9] [i_10] [i_9] = var_2;
            }
            for (unsigned short i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
            {
                arr_57 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_28 [i_0] [i_0] [i_0]);
                arr_58 [i_0] [i_9] [i_9 + 2] [i_13] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) (short)6449)) >> (((251658240U) - (251658231U)))))) == (((((/* implicit */_Bool) var_0)) ? (var_0) : (-3380411409905612120LL)))))), (var_5)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    var_20 ^= ((/* implicit */signed char) arr_10 [i_0] [i_9] [i_13] [i_14]);
                    var_21 &= ((/* implicit */unsigned short) ((36028792723996672ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_9 + 1] [i_14] [i_14] [i_14])))));
                    arr_62 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_30 [i_9] [i_9] [i_9] [i_9 - 1]);
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3)))))));
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((_Bool) 18446744073709551615ULL)))));
                }
            }
            for (unsigned short i_15 = 0; i_15 < 10; i_15 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    var_24 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((signed char) 11474843995669390776ULL))), (max((((/* implicit */unsigned char) var_3)), (var_4)))));
                    arr_71 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_5);
                }
                for (unsigned long long int i_17 = 3; i_17 < 8; i_17 += 3) 
                {
                    arr_75 [i_0] [i_9] [i_17] [i_17] = ((/* implicit */unsigned char) (~(var_7)));
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_4 [i_15] [i_15])), (min((var_5), (((/* implicit */long long int) arr_6 [i_0])))))), (((/* implicit */long long int) var_4)))))));
                    arr_76 [i_17] [i_9] = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_67 [i_0] [i_9 - 1] [i_17] [i_17 + 1] [i_17 + 2]))))), (var_7)));
                    /* LoopSeq 2 */
                    for (int i_18 = 2; i_18 < 6; i_18 += 4) /* same iter space */
                    {
                        var_26 |= ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((((((/* implicit */int) var_2)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)44)) - (39)))))))) / (max((max((var_1), (((/* implicit */long long int) var_9)))), ((-(var_1)))))));
                        var_27 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_18] [i_18 + 1] [i_9 + 2])) ? (arr_61 [i_0] [i_9 + 2] [i_15]) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_12 [i_18] [i_18] [i_18 + 4])), ((short)-6450))))) : (var_7)));
                        var_28 = ((/* implicit */signed char) (((+(min((arr_61 [i_0] [i_9] [i_17]), (((/* implicit */unsigned long long int) (short)-6450)))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((4539628424389459968LL), (((/* implicit */long long int) arr_10 [i_0] [i_9] [i_15] [i_17]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_25 [i_9] [i_18])))))) : (max((((/* implicit */long long int) var_8)), (var_7))))))));
                        arr_79 [i_0] [i_9] [i_15] [i_17] [i_17] = ((/* implicit */signed char) var_8);
                    }
                    for (int i_19 = 2; i_19 < 6; i_19 += 4) /* same iter space */
                    {
                        var_29 -= ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) var_4)), (max((1151795604700004352ULL), (((/* implicit */unsigned long long int) arr_50 [i_0] [i_9])))))));
                        var_30 &= ((/* implicit */unsigned short) max((arr_66 [i_9 - 1] [i_17 - 1] [i_19] [i_19]), (((/* implicit */unsigned char) (_Bool)1))));
                        var_31 = ((/* implicit */_Bool) (-(arr_77 [i_9] [i_9 - 1] [i_9] [i_9] [i_9])));
                        arr_82 [i_19] [i_19] [i_17] [i_17] [i_17] [i_9] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) max(((_Bool)1), (((((/* implicit */_Bool) (signed char)6)) || (((/* implicit */_Bool) var_4)))))))));
                    }
                }
                arr_83 [i_0] = ((/* implicit */unsigned long long int) (short)4302);
            }
        }
        for (long long int i_20 = 1; i_20 < 7; i_20 += 2) 
        {
            arr_86 [i_20] [i_20] [i_20] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_67 [i_20] [i_20] [i_20] [i_20] [i_20]))))));
            arr_87 [i_20] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) 4043309056U)), (var_6))), ((~(var_7)))));
        }
    }
    var_32 = ((/* implicit */unsigned short) (~(3785251744U)));
}

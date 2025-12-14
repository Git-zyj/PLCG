/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106038
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
    for (signed char i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) var_17)) | (max((((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (signed char)123)))), (((/* implicit */int) (unsigned char)25))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_11))))))) ? (((/* implicit */long long int) (-((-(((/* implicit */int) arr_3 [i_0 - 4] [i_1 + 1]))))))) : ((-(-4058848338604246337LL)))));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            arr_10 [i_2] [i_2] [i_2 - 1] [i_0] = ((/* implicit */signed char) arr_7 [(unsigned short)13] [i_1 + 1] [0LL] [i_4]);
                            var_20 &= ((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) (signed char)-76)) ? (arr_6 [(unsigned short)22] [(unsigned short)22] [i_2]) : (arr_5 [i_4] [(unsigned char)8] [i_0 + 1]))))), (((/* implicit */unsigned int) (~(((((/* implicit */int) var_11)) % (((/* implicit */int) var_0)))))))));
                            arr_11 [i_0] [i_1 + 1] [(_Bool)1] [(_Bool)1] [i_1 + 1] [i_0] = ((/* implicit */signed char) var_0);
                        }
                    }
                } 
            } 
        } 
    }
    for (int i_5 = 1; i_5 < 10; i_5 += 2) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~(arr_13 [i_5 - 1]))))));
        /* LoopSeq 2 */
        for (signed char i_6 = 2; i_6 < 10; i_6 += 2) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */int) var_12)) != (((/* implicit */int) ((var_14) == (max((((/* implicit */unsigned long long int) var_3)), (var_1))))))));
            var_23 ^= ((/* implicit */unsigned char) arr_4 [i_6] [i_6 + 1] [i_6 + 1]);
            /* LoopSeq 3 */
            for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_8])) ? ((~(max((var_6), (((/* implicit */unsigned long long int) var_17)))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_8] [i_7 - 1]))))))))));
                    arr_25 [i_6] [i_6] = ((/* implicit */unsigned int) var_10);
                    arr_26 [i_6 + 1] [i_8] = ((/* implicit */unsigned char) arr_18 [i_7]);
                }
                var_25 &= var_3;
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) var_10))));
                arr_27 [i_5] [i_6 + 1] [i_7 - 1] [i_7 - 1] = ((/* implicit */unsigned char) var_9);
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_27 = ((/* implicit */_Bool) arr_7 [i_9] [i_6 + 1] [i_6] [i_5]);
                /* LoopSeq 1 */
                for (unsigned char i_10 = 3; i_10 < 10; i_10 += 3) 
                {
                    arr_34 [i_10] [i_6 + 1] [i_6 + 1] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (((((/* implicit */_Bool) (-(var_14)))) ? (((((/* implicit */_Bool) var_15)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_5))))))));
                    /* LoopSeq 2 */
                    for (long long int i_11 = 0; i_11 < 11; i_11 += 2) /* same iter space */
                    {
                        arr_37 [(signed char)10] [i_10] [i_9] [i_10 - 3] [i_10] [i_11] [i_11] = ((/* implicit */unsigned char) ((((_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((~(var_7))) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_6 + 1])))));
                        var_28 = ((/* implicit */long long int) arr_5 [i_5 + 1] [i_6] [i_10 - 3]);
                    }
                    for (long long int i_12 = 0; i_12 < 11; i_12 += 2) /* same iter space */
                    {
                        var_29 ^= ((/* implicit */_Bool) ((var_6) ^ (((/* implicit */unsigned long long int) (~(min((-4058848338604246318LL), (((/* implicit */long long int) arr_4 [i_6] [i_6] [6ULL])))))))));
                        var_30 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_12] [i_9] [(unsigned char)6] [i_5 - 1]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_4))))) : ((~(arr_8 [i_10] [i_10] [i_9]))))));
                        arr_41 [i_12] [i_10] [i_10] [(signed char)7] [i_6 - 2] [i_10] [i_5] = ((/* implicit */short) ((unsigned int) min((min((((/* implicit */long long int) arr_38 [i_12] [i_9])), (var_15))), (((/* implicit */long long int) min((var_17), (((/* implicit */unsigned short) (_Bool)0))))))));
                        var_31 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_6 - 1]))) == (3638071188U)))) & ((~(((/* implicit */int) ((_Bool) var_2)))))));
                    }
                }
                /* LoopSeq 4 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_14 = 2; i_14 < 10; i_14 += 2) 
                    {
                        arr_48 [i_5 - 1] [0U] = (~((~(((/* implicit */int) (unsigned char)182)))));
                        var_32 *= ((/* implicit */unsigned int) var_1);
                        arr_49 [i_5] [(short)6] [(_Bool)1] [i_13] [i_5] [i_14 - 1] [i_14 - 1] = ((/* implicit */unsigned int) var_16);
                    }
                    for (long long int i_15 = 1; i_15 < 7; i_15 += 3) 
                    {
                        arr_53 [(short)9] [i_5 + 1] [i_5 + 1] [i_9] [i_9] [i_13] [(signed char)8] = ((/* implicit */signed char) (~(((/* implicit */int) max(((unsigned char)182), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) >= (var_3)))))))));
                        var_33 *= ((/* implicit */unsigned int) (~((~(var_1)))));
                    }
                    arr_54 [i_13] [5LL] [(unsigned short)10] [i_6] [i_5 - 1] = ((/* implicit */unsigned char) ((646449196) > (((/* implicit */int) (unsigned char)84))));
                    var_34 = max((var_1), (((/* implicit */unsigned long long int) arr_12 [i_5 - 1] [i_5 - 1])));
                }
                for (signed char i_16 = 0; i_16 < 11; i_16 += 2) 
                {
                    var_35 = ((/* implicit */_Bool) (((_Bool)1) ? (6407174181576022954ULL) : (((/* implicit */unsigned long long int) -1LL))));
                    arr_57 [i_5] [i_5 - 1] [(unsigned short)4] [i_9] [2U] &= ((/* implicit */long long int) max(((~(((var_10) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)3)))))), (((((/* implicit */int) var_12)) ^ ((~(((/* implicit */int) var_13))))))));
                }
                for (int i_17 = 4; i_17 < 8; i_17 += 1) 
                {
                    var_36 += (~(var_3));
                    var_37 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_35 [i_5 - 1] [(unsigned char)0] [i_9] [2ULL] [i_6 - 1]))));
                    var_38 = (((~(6407174181576022950ULL))) > (min((6407174181576022966ULL), (((/* implicit */unsigned long long int) -1LL)))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    arr_62 [(unsigned short)6] [i_9] [i_5] [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) (_Bool)1))))) : ((~(((/* implicit */int) (short)32189)))))) > (((/* implicit */int) arr_42 [i_5 + 1]))));
                    arr_63 [i_9] [(signed char)3] [i_9] [i_18] = ((/* implicit */unsigned int) ((signed char) (short)-73));
                    var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) var_14))));
                    /* LoopSeq 3 */
                    for (short i_19 = 2; i_19 < 9; i_19 += 2) 
                    {
                        arr_67 [i_19] [i_18] [i_18] [i_6 + 1] [i_6 + 1] [(signed char)10] = ((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) var_17))) ^ ((~(var_9))))), (((/* implicit */long long int) (unsigned char)68))));
                        arr_68 [i_6 + 1] [i_19 + 2] = ((/* implicit */long long int) (~((~((~(((/* implicit */int) var_0))))))));
                        var_40 -= ((/* implicit */_Bool) var_4);
                    }
                    for (signed char i_20 = 0; i_20 < 11; i_20 += 3) 
                    {
                        arr_72 [i_5 + 1] [i_6] [i_6] [10U] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_13 [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_6])))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)55))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 24576U)))) : (min((var_15), (var_9)))))));
                        var_41 = ((/* implicit */unsigned int) (unsigned short)65228);
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        arr_76 [i_5 - 1] [(_Bool)1] [i_5 - 1] [i_18] [(_Bool)1] [(unsigned char)6] [i_21] = ((/* implicit */unsigned long long int) var_8);
                        arr_77 [i_21] [i_18] [i_6 - 2] [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_11)))))) <= ((~(var_5)))))), ((~(((/* implicit */int) var_16))))));
                        var_42 += ((/* implicit */_Bool) var_8);
                        arr_78 [i_5] [i_6] [i_9] [i_5] [i_9] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)252), ((unsigned char)5))))))))));
                    }
                }
            }
            for (short i_22 = 1; i_22 < 10; i_22 += 3) 
            {
                arr_81 [i_6] [i_6] [i_6 + 1] = var_16;
                var_43 = ((/* implicit */short) var_14);
                /* LoopSeq 1 */
                for (short i_23 = 0; i_23 < 11; i_23 += 1) 
                {
                    var_44 ^= (~((~(((/* implicit */int) min(((unsigned char)25), (((/* implicit */unsigned char) arr_23 [i_23] [i_23] [(signed char)3] [i_6 - 1] [(unsigned char)1] [5LL]))))))));
                    arr_85 [i_5 + 1] [i_5 - 1] [i_23] = ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10))))))));
                    var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) (~(arr_59 [(unsigned char)10] [i_6 - 1] [i_22 - 1]))))));
                }
            }
            var_46 = ((/* implicit */short) (~((~(((/* implicit */int) (signed char)127))))));
        }
        for (unsigned char i_24 = 0; i_24 < 11; i_24 += 3) 
        {
            arr_89 [i_5 + 1] [i_24] = max((((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))), (var_3));
            /* LoopSeq 2 */
            for (unsigned short i_25 = 0; i_25 < 11; i_25 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_26 = 1; i_26 < 7; i_26 += 1) 
                {
                    for (unsigned long long int i_27 = 0; i_27 < 11; i_27 += 2) 
                    {
                        {
                            arr_98 [i_24] [i_24] [i_24] [i_26] [i_27] = ((/* implicit */short) (~((((_Bool)1) ? (((/* implicit */int) (short)-32198)) : (((/* implicit */int) (_Bool)1))))));
                            var_47 = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
                            arr_99 [i_27] [i_24] [2] [i_24] [i_5 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [(unsigned short)20] [i_27])) < (((/* implicit */int) ((signed char) arr_8 [i_24] [i_5 + 1] [i_26 - 1])))));
                            arr_100 [i_24] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned char) var_2)), ((unsigned char)215))))));
                        }
                    } 
                } 
                var_48 = ((/* implicit */unsigned char) ((long long int) min(((~(((/* implicit */int) (unsigned short)65528)))), (((/* implicit */int) (short)-32189)))));
            }
            for (signed char i_28 = 1; i_28 < 9; i_28 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_29 = 0; i_29 < 11; i_29 += 2) 
                {
                    for (unsigned int i_30 = 1; i_30 < 9; i_30 += 4) 
                    {
                        {
                            var_49 = ((/* implicit */unsigned char) var_10);
                            arr_107 [i_29] [6ULL] [6ULL] [i_29] &= ((/* implicit */_Bool) var_16);
                        }
                    } 
                } 
                var_50 *= ((/* implicit */unsigned long long int) (~((~(var_5)))));
            }
        }
    }
    var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (4220255276968515476ULL))))))) ? (max((((/* implicit */long long int) max((var_8), (var_8)))), (((var_9) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)193))))))) : (max(((~(var_5))), (var_5)))));
}

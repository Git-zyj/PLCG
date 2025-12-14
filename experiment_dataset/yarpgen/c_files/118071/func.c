/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118071
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_14 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_8)), ((~(((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
        var_15 = ((/* implicit */long long int) ((signed char) (((~(((/* implicit */int) (unsigned char)7)))) < (((/* implicit */int) (unsigned char)243)))));
        var_16 |= ((/* implicit */unsigned int) var_9);
        var_17 = ((/* implicit */short) var_1);
        /* LoopSeq 2 */
        for (signed char i_1 = 4; i_1 < 18; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    var_18 = ((/* implicit */short) var_10);
                    /* LoopSeq 3 */
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) max((var_13), (((/* implicit */signed char) ((min((3503958643318817706LL), (((/* implicit */long long int) (signed char)-1)))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_0))))))))))));
                        var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))), (max((var_5), (((/* implicit */unsigned long long int) var_11))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        arr_16 [i_0 - 1] [i_2] [i_0 - 1] [i_0] [7LL] = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                        var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))));
                        var_22 = ((/* implicit */long long int) ((var_7) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        var_23 = ((/* implicit */unsigned long long int) ((unsigned short) var_5));
                        arr_17 [i_2] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_1)) : (var_0)))));
                        arr_22 [i_0 + 1] [i_2] [i_2] = ((/* implicit */unsigned short) var_2);
                    }
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) min((var_3), (var_3)))) ^ ((-(((/* implicit */int) min((((/* implicit */signed char) var_7)), (var_12))))))));
                }
                var_26 |= ((/* implicit */int) ((unsigned long long int) max((((/* implicit */long long int) (signed char)-28)), (-6LL))));
            }
            /* vectorizable */
            for (int i_7 = 2; i_7 < 19; i_7 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_8 = 3; i_8 < 17; i_8 += 2) 
                {
                    var_27 -= ((((/* implicit */int) ((signed char) var_10))) + (((var_8) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))));
                    arr_29 [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_10)))))));
                    var_28 *= ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) var_11)) ^ (var_0)))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */signed char) max((var_29), (((signed char) var_2))));
                        var_30 = ((/* implicit */long long int) ((var_8) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))));
                        var_31 |= ((/* implicit */short) (~(((/* implicit */int) var_6))));
                        var_32 = ((/* implicit */short) ((unsigned int) (~(((/* implicit */int) var_9)))));
                    }
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (_Bool)1))));
                        var_34 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3503958643318817711LL)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned char)95))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (var_5)))));
                        var_35 |= ((/* implicit */signed char) ((int) var_6));
                    }
                    for (unsigned short i_12 = 1; i_12 < 17; i_12 += 1) 
                    {
                        arr_40 [i_9] [(signed char)13] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))));
                        var_36 |= (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))));
                        var_37 &= ((/* implicit */unsigned char) ((short) var_2));
                        var_38 = ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
                    }
                    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))) : ((~(((/* implicit */int) var_13))))));
                    var_40 = ((/* implicit */long long int) var_5);
                    var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) ((var_11) << (((((/* implicit */int) ((signed char) var_2))) - (50))))))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_42 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))));
                    var_43 = ((/* implicit */short) (~(((/* implicit */int) var_2))));
                    var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) ((signed char) var_6)))));
                }
                arr_43 [i_0] [i_1] [i_7 - 2] [i_7 - 1] = ((/* implicit */signed char) var_3);
            }
            var_45 &= ((/* implicit */_Bool) max((min((min((((/* implicit */unsigned int) var_6)), (var_0))), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) ((signed char) ((signed char) var_13))))));
            /* LoopNest 2 */
            for (long long int i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                for (short i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    {
                        var_46 = ((/* implicit */long long int) ((((((/* implicit */int) var_7)) >> (((((/* implicit */int) ((short) var_9))) - (14972))))) >= (((((/* implicit */_Bool) ((var_1) >> (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_5))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))))));
                        var_47 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((var_7) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13)))), (((((/* implicit */int) var_2)) << (((var_1) - (1006374844)))))))), (((((/* implicit */_Bool) ((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_5)))))));
                        var_48 *= ((/* implicit */unsigned int) ((unsigned short) var_5));
                        var_49 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (~(var_11)))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) min((var_13), (var_2))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_16 = 0; i_16 < 20; i_16 += 2) 
                        {
                            var_50 = ((/* implicit */_Bool) (-(((int) 4649089520559000680LL))));
                            var_51 -= ((/* implicit */unsigned char) ((((unsigned long long int) var_0)) >> (((/* implicit */int) ((var_11) <= (((/* implicit */int) var_2)))))));
                        }
                        for (signed char i_17 = 0; i_17 < 20; i_17 += 2) 
                        {
                            arr_53 [i_0] [i_1] [i_14] [i_14] [i_17] [i_17] [i_14] &= (~(((((unsigned int) var_1)) << (((((/* implicit */int) min((var_13), (var_12)))) + (137))))));
                            var_52 |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((int) var_12))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) : (((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_5))))), (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */short) ((signed char) var_2))))))));
                            var_53 |= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (var_1))));
                        }
                        for (signed char i_18 = 0; i_18 < 20; i_18 += 2) /* same iter space */
                        {
                            arr_56 [i_0] [i_0] [i_0] [i_15] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */int) var_12))))) ? (min((((/* implicit */int) var_9)), (((((/* implicit */int) var_13)) / (((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4LL)) ? (4917396393440415450LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((var_11) % (((/* implicit */int) var_6)))) : (((/* implicit */int) ((signed char) 24LL)))))));
                            var_54 &= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) min((var_3), (var_4))))) | (((long long int) var_0)))) - (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        }
                        for (signed char i_19 = 0; i_19 < 20; i_19 += 2) /* same iter space */
                        {
                            var_55 = var_7;
                            var_56 = ((/* implicit */signed char) max((((/* implicit */int) max((max((var_9), (((/* implicit */short) var_6)))), (((/* implicit */short) var_8))))), ((-(((/* implicit */int) ((((/* implicit */int) var_13)) > (var_11))))))));
                        }
                    }
                } 
            } 
            var_57 += ((unsigned int) min((((var_10) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))), (((/* implicit */int) min((var_3), (((/* implicit */unsigned char) var_10)))))));
        }
        for (signed char i_20 = 4; i_20 < 18; i_20 += 2) /* same iter space */
        {
            var_58 = ((/* implicit */unsigned int) ((((unsigned long long int) max((var_5), (((/* implicit */unsigned long long int) var_12))))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))));
            var_59 = ((min((min((var_0), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) var_8)))) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((((/* implicit */unsigned char) var_6)), (var_4)))))));
            /* LoopNest 2 */
            for (signed char i_21 = 0; i_21 < 20; i_21 += 2) 
            {
                for (signed char i_22 = 2; i_22 < 19; i_22 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_23 = 3; i_23 < 16; i_23 += 2) /* same iter space */
                        {
                            var_60 = ((/* implicit */unsigned int) min((var_60), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(var_11)))) + (((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_5))))))));
                            arr_72 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_23] [i_20] [(signed char)2] = ((/* implicit */long long int) ((((((((/* implicit */int) var_6)) | (((/* implicit */int) var_3)))) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((-1) + (7)))))) ? (((((((/* implicit */int) (short)-18184)) + (2147483647))) << (((((/* implicit */int) (unsigned short)20206)) - (20206))))) : (((/* implicit */int) ((short) var_5)))))));
                        }
                        for (int i_24 = 3; i_24 < 16; i_24 += 2) /* same iter space */
                        {
                            var_61 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) var_13))))) ? (min((var_11), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -145019729)) ? (((/* implicit */int) (unsigned short)42201)) : (((/* implicit */int) (short)-32751))))))))));
                            var_62 = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */int) var_6)), ((~(var_11))))));
                            arr_76 [i_24] [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */short) min((max((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)7)), ((unsigned short)11832)))), (((((/* implicit */_Bool) var_1)) ? (var_11) : (var_1))))), (((/* implicit */int) ((unsigned char) var_0)))));
                            var_63 = ((/* implicit */short) max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)224)))), (((((/* implicit */_Bool) max((var_1), (var_1)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)16)), (1532761172)))) : (var_0)))));
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_25 = 0; i_25 < 20; i_25 += 3) 
                        {
                            var_64 &= ((/* implicit */unsigned char) ((unsigned int) ((signed char) var_6)));
                            var_65 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_7)))))));
                            arr_80 [i_0] [13] [i_22] [i_25] [(_Bool)1] = ((/* implicit */signed char) (~((~(8335634453816863019LL)))));
                        }
                        for (unsigned int i_26 = 1; i_26 < 18; i_26 += 2) 
                        {
                            var_66 &= ((/* implicit */int) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13))))))) >= (min((((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_9)))))))));
                            var_67 ^= ((/* implicit */int) var_13);
                            var_68 = ((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */short) var_7)), (var_9)))), (((int) var_7))));
                        }
                        for (int i_27 = 0; i_27 < 20; i_27 += 4) /* same iter space */
                        {
                            var_69 = ((/* implicit */short) ((_Bool) min((((int) var_6)), (((/* implicit */int) min((((/* implicit */signed char) var_8)), (var_2)))))));
                            var_70 = ((/* implicit */unsigned int) max((max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))))), (((/* implicit */int) ((_Bool) var_12)))));
                            var_71 = ((((var_10) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))) >= (((/* implicit */int) ((((((/* implicit */int) var_9)) % (((/* implicit */int) var_4)))) > (((/* implicit */int) ((signed char) var_9)))))));
                            var_72 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32762)) * (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_1)) : (var_5)))));
                        }
                        for (int i_28 = 0; i_28 < 20; i_28 += 4) /* same iter space */
                        {
                            var_73 = ((/* implicit */signed char) var_8);
                            var_74 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (var_11))))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_29 = 0; i_29 < 20; i_29 += 3) 
            {
                for (signed char i_30 = 0; i_30 < 20; i_30 += 2) 
                {
                    {
                        arr_95 [i_0] [i_20] [i_29] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 1939301153)) ? (min((((/* implicit */long long int) (-2147483647 - 1))), (3503958643318817738LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50806))))) + (9223372036854775807LL))) << (((((/* implicit */int) ((short) (unsigned char)189))) - (189)))));
                        var_75 = ((/* implicit */short) max((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13)))), ((~(((/* implicit */int) var_6)))))), (((/* implicit */int) var_8))));
                        var_76 = min(((~(((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */int) var_6)))));
                    }
                } 
            } 
        }
    }
    var_77 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))))) & (((/* implicit */int) var_4))));
    var_78 = ((((/* implicit */_Bool) min((((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_12)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_1)) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (var_9))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149919
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_11))))), (min((var_11), (var_11)))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 1; i_3 < 20; i_3 += 3) 
                {
                    var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)208))));
                    var_14 = ((/* implicit */int) ((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    var_15 = ((/* implicit */unsigned long long int) var_7);
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        var_16 = (-(var_11));
                        var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))));
                    }
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_2))));
                    var_19 = ((/* implicit */long long int) var_2);
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) && ((!(((/* implicit */_Bool) var_7)))))))));
                }
                var_21 -= ((/* implicit */signed char) var_4);
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
                {
                    var_22 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                    var_23 = ((/* implicit */unsigned char) min((var_23), (var_8)));
                }
                for (short i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 1; i_8 < 20; i_8 += 3) 
                    {
                        var_24 = ((/* implicit */short) (~(((/* implicit */int) var_5))));
                        var_25 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned char)48))))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) - (((/* implicit */int) var_9)))) - (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_6)))))));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (var_11)));
                        var_28 = ((/* implicit */_Bool) (+((~(((/* implicit */int) var_0))))));
                    }
                    var_29 = ((/* implicit */unsigned short) var_0);
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_1)))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)31))));
                        var_32 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)48)) < (((/* implicit */int) (_Bool)1))));
                        var_33 |= ((/* implicit */unsigned int) (+(var_4)));
                        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (var_10)))))))));
                    }
                    for (signed char i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) - (var_4))))));
                        var_36 -= ((/* implicit */_Bool) var_3);
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (var_3)));
                        var_38 = (!(((/* implicit */_Bool) var_5)));
                    }
                    for (unsigned int i_12 = 2; i_12 < 20; i_12 += 1) 
                    {
                        var_39 += ((/* implicit */unsigned short) var_4);
                        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_2))));
                        var_41 = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
                    }
                    var_42 ^= ((/* implicit */unsigned short) var_9);
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_14 = 3; i_14 < 21; i_14 += 2) 
                    {
                        var_43 = ((/* implicit */unsigned long long int) ((((var_11) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))))) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                        var_44 |= ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) - (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_7)))))));
                    }
                    var_45 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) var_11)) / (var_10)))));
                }
            }
            for (signed char i_15 = 0; i_15 < 23; i_15 += 2) /* same iter space */
            {
                var_46 ^= (~(((/* implicit */int) var_8)));
                var_47 += ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_2))));
            }
            var_48 = ((/* implicit */long long int) var_11);
            /* LoopNest 2 */
            for (signed char i_16 = 0; i_16 < 23; i_16 += 2) 
            {
                for (int i_17 = 1; i_17 < 20; i_17 += 3) 
                {
                    {
                        var_49 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_5))));
                        var_50 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_11)) < (var_4)));
                    }
                } 
            } 
        }
        for (unsigned int i_18 = 0; i_18 < 23; i_18 += 2) /* same iter space */
        {
            var_51 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
            /* LoopNest 3 */
            for (short i_19 = 1; i_19 < 19; i_19 += 3) 
            {
                for (unsigned char i_20 = 0; i_20 < 23; i_20 += 3) 
                {
                    for (long long int i_21 = 0; i_21 < 23; i_21 += 3) 
                    {
                        {
                            var_52 |= ((/* implicit */int) ((((/* implicit */_Bool) 144115119356379136LL)) && (((/* implicit */_Bool) (unsigned char)144))));
                            var_53 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)15))));
                            var_54 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-12))));
                        }
                    } 
                } 
            } 
            var_55 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)8191))));
        }
        for (int i_22 = 0; i_22 < 23; i_22 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_23 = 0; i_23 < 23; i_23 += 1) 
            {
                var_56 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_8)), (var_11))), (((/* implicit */unsigned int) var_9)))))));
                var_57 = ((/* implicit */unsigned int) max((max(((unsigned char)195), (((/* implicit */unsigned char) (signed char)(-127 - 1))))), (((/* implicit */unsigned char) ((838753949U) < (3456213346U))))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_24 = 2; i_24 < 22; i_24 += 4) 
            {
                for (unsigned int i_25 = 1; i_25 < 21; i_25 += 3) 
                {
                    {
                        var_58 = ((/* implicit */short) var_1);
                        var_59 = ((/* implicit */short) var_2);
                        var_60 = ((/* implicit */unsigned int) (-(((/* implicit */int) min(((unsigned char)69), (((/* implicit */unsigned char) (signed char)-19)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_26 = 0; i_26 < 23; i_26 += 1) 
                        {
                            var_61 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
                            var_62 = ((/* implicit */_Bool) min(((short)8188), ((short)8171)));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_27 = 0; i_27 < 23; i_27 += 2) /* same iter space */
        {
            var_63 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))));
            var_64 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) && (((/* implicit */_Bool) var_3))));
        }
    }
    for (signed char i_28 = 2; i_28 < 12; i_28 += 3) /* same iter space */
    {
        var_65 = ((/* implicit */unsigned long long int) var_8);
        var_66 |= ((/* implicit */unsigned int) var_10);
        /* LoopNest 2 */
        for (short i_29 = 0; i_29 < 14; i_29 += 3) 
        {
            for (unsigned int i_30 = 2; i_30 < 11; i_30 += 3) 
            {
                {
                    var_67 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                    var_68 += ((/* implicit */short) (+(((/* implicit */int) (((~(((/* implicit */int) var_2)))) < (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_4))))))))));
                }
            } 
        } 
        var_69 += ((/* implicit */unsigned char) var_5);
    }
    for (signed char i_31 = 2; i_31 < 12; i_31 += 3) /* same iter space */
    {
        var_70 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-8)) != (((/* implicit */int) (unsigned short)44873)))) && (((/* implicit */_Bool) var_10))));
        /* LoopSeq 3 */
        for (short i_32 = 2; i_32 < 10; i_32 += 1) 
        {
            var_71 = ((((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (signed char)69))))) != (((((/* implicit */int) var_2)) - (((/* implicit */int) (short)-8159)))));
            var_72 = ((/* implicit */unsigned int) var_9);
        }
        for (long long int i_33 = 0; i_33 < 14; i_33 += 4) 
        {
            var_73 = ((/* implicit */unsigned int) var_7);
            var_74 = ((/* implicit */signed char) var_1);
        }
        /* vectorizable */
        for (unsigned char i_34 = 4; i_34 < 13; i_34 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_35 = 0; i_35 < 14; i_35 += 3) 
            {
                var_75 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)8199))));
                var_76 = ((/* implicit */unsigned char) max((var_76), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) != (var_4))))));
                var_77 |= ((/* implicit */unsigned int) (~(var_4)));
            }
            for (long long int i_36 = 2; i_36 < 13; i_36 += 3) 
            {
                var_78 = ((((/* implicit */int) var_8)) < (((/* implicit */int) var_9)));
                var_79 = var_4;
                /* LoopSeq 1 */
                for (long long int i_37 = 1; i_37 < 11; i_37 += 3) 
                {
                    var_80 = (~(var_10));
                    /* LoopSeq 2 */
                    for (signed char i_38 = 1; i_38 < 12; i_38 += 3) 
                    {
                        var_81 = ((/* implicit */int) ((((((/* implicit */int) (short)-8190)) - (((/* implicit */int) (signed char)17)))) != (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_0)))))));
                        var_82 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
                        var_83 = ((/* implicit */signed char) ((((/* implicit */int) (short)-8171)) != (((/* implicit */int) (unsigned char)7))));
                    }
                    for (unsigned char i_39 = 2; i_39 < 10; i_39 += 2) 
                    {
                        var_84 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)21))));
                        var_85 += ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_5))));
                    }
                }
            }
            var_86 |= ((/* implicit */short) (~(((/* implicit */int) var_9))));
        }
        var_87 = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))));
    }
    var_88 = var_2;
    var_89 |= ((/* implicit */int) (+(var_10)));
    var_90 = ((/* implicit */unsigned int) min((var_90), (((/* implicit */unsigned int) var_7))));
}

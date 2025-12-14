/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149567
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_0))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */signed char) (-(var_12)));
            var_15 = ((/* implicit */short) (-(((/* implicit */int) var_7))));
            var_16 = (-(((/* implicit */int) var_0)));
            var_17 &= ((/* implicit */_Bool) ((unsigned char) var_10));
            /* LoopNest 3 */
            for (signed char i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned short i_4 = 1; i_4 < 10; i_4 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) < (var_8)));
                            var_19 = ((/* implicit */signed char) (-(var_8)));
                            var_20 = ((/* implicit */long long int) (-(var_12)));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_5 = 3; i_5 < 8; i_5 += 4) /* same iter space */
        {
            var_21 += ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) var_11)))));
            var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))));
        }
        for (long long int i_6 = 3; i_6 < 8; i_6 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */short) (+(((/* implicit */int) var_0))));
            var_24 ^= ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) var_10)))));
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        var_25 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))));
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((long long int) var_3)))));
                        var_27 = ((/* implicit */unsigned char) ((long long int) var_6));
                    }
                    for (signed char i_10 = 3; i_10 < 10; i_10 += 4) 
                    {
                        var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))));
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5)))))));
                        var_31 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))) : ((~(var_8)))));
                    }
                    var_32 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))));
                }
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) var_10))));
                var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_3)))))));
                var_35 = ((/* implicit */short) (~(((((/* implicit */int) var_10)) | (((/* implicit */int) var_9))))));
                var_36 = ((/* implicit */short) ((((var_8) + (2147483647))) << (((((/* implicit */int) var_1)) - (23)))));
            }
            for (int i_11 = 2; i_11 < 10; i_11 += 4) 
            {
                var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_2)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_4))))))));
                var_38 = ((/* implicit */short) min((var_38), (((short) var_8))));
                var_39 = ((/* implicit */unsigned char) (-(var_8)));
                var_40 = ((/* implicit */short) (+(((/* implicit */int) var_0))));
            }
        }
        var_41 = ((/* implicit */short) var_11);
        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    }
    for (unsigned short i_12 = 3; i_12 < 15; i_12 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 4) 
        {
            var_43 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))));
            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) var_10)))) : ((~(var_2)))));
            var_45 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))));
        }
        /* vectorizable */
        for (unsigned int i_14 = 4; i_14 < 18; i_14 += 4) 
        {
            var_46 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
            var_47 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) (+((-((-(var_4))))))))));
            var_49 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (var_8)))));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_17 = 0; i_17 < 19; i_17 += 1) 
            {
                var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(var_12)))))))));
                var_51 = ((/* implicit */long long int) min(((~(((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */int) var_10)))))), (((((/* implicit */_Bool) ((signed char) var_6))) ? (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_10))))));
                /* LoopSeq 1 */
                for (short i_18 = 0; i_18 < 19; i_18 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_19 = 0; i_19 < 19; i_19 += 1) 
                    {
                        var_52 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))))));
                        var_53 = ((/* implicit */long long int) (-((+(((/* implicit */int) var_9))))));
                    }
                    var_54 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (max((var_12), (((/* implicit */int) var_9)))) : (((/* implicit */int) var_3))))) ? ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))))) : ((+((-(var_12)))))));
                    /* LoopSeq 1 */
                    for (long long int i_20 = 0; i_20 < 19; i_20 += 3) 
                    {
                        var_55 += ((/* implicit */short) min((var_0), (((/* implicit */unsigned char) ((_Bool) var_7)))));
                        var_56 = ((/* implicit */long long int) (-((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_21 = 0; i_21 < 19; i_21 += 4) 
                    {
                        var_57 |= ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_9))))));
                        var_58 = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) var_0)))));
                    }
                }
            }
            for (long long int i_22 = 1; i_22 < 15; i_22 += 1) 
            {
                var_59 &= (-(((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */int) var_1)))));
                /* LoopSeq 3 */
                for (unsigned short i_23 = 1; i_23 < 15; i_23 += 3) 
                {
                    var_60 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(var_12)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (var_12)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */int) var_9))))) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))))))));
                    var_61 -= (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (var_12))))));
                }
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                {
                    var_62 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))))))));
                    var_63 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) ? ((+(var_8))) : ((-(((/* implicit */int) var_3))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_25 = 0; i_25 < 19; i_25 += 4) 
                    {
                        var_64 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                        var_65 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((long long int) var_6))))) ? ((+((-(var_8))))) : ((~((-(((/* implicit */int) var_11))))))));
                        var_66 = ((/* implicit */short) ((((_Bool) var_5)) ? (((long long int) var_7)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_2))))))));
                    }
                    for (signed char i_26 = 0; i_26 < 19; i_26 += 4) 
                    {
                        var_67 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */int) var_7)))))));
                        var_68 = ((/* implicit */short) ((unsigned int) (-((-(((/* implicit */int) var_0)))))));
                        var_69 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */int) var_6)))))))));
                    }
                    for (unsigned char i_27 = 0; i_27 < 19; i_27 += 4) 
                    {
                        var_70 &= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_4))));
                        var_71 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) var_10)))))), (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))), ((~(((/* implicit */int) var_1))))))));
                        var_72 = ((/* implicit */_Bool) min((var_72), (((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_2))))))));
                        var_73 = ((/* implicit */unsigned int) min((var_73), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */int) var_1))))))));
                        var_74 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((_Bool) var_2)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) var_6)))) : (var_2))))));
                    }
                    for (unsigned char i_28 = 3; i_28 < 16; i_28 += 1) 
                    {
                        var_75 |= min((((unsigned long long int) (!(((/* implicit */_Bool) var_1))))), (((/* implicit */unsigned long long int) (((~(var_2))) != (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_7)))))))));
                        var_76 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) max((var_11), (var_1)))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_29 = 0; i_29 < 19; i_29 += 3) 
                    {
                        var_77 = ((/* implicit */_Bool) (-((((+(((/* implicit */int) var_6)))) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))));
                        var_78 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) var_6)))), (min(((-(var_12))), ((-(((/* implicit */int) var_9))))))));
                    }
                }
                /* vectorizable */
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_31 = 0; i_31 < 19; i_31 += 4) 
                    {
                        var_79 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_0)))));
                        var_80 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_4)))) ? (((((/* implicit */int) var_11)) * (((/* implicit */int) var_1)))) : (((/* implicit */int) ((short) var_11)))));
                    }
                    for (short i_32 = 0; i_32 < 19; i_32 += 4) 
                    {
                        var_81 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_6))));
                        var_82 = ((/* implicit */unsigned long long int) max((var_82), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_5)) + (var_2))))))));
                    }
                    for (signed char i_33 = 0; i_33 < 19; i_33 += 3) 
                    {
                        var_83 = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
                        var_84 = ((/* implicit */_Bool) (-(var_4)));
                    }
                    for (short i_34 = 0; i_34 < 19; i_34 += 4) 
                    {
                        var_85 += ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
                        var_86 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */int) var_9))));
                        var_87 = ((/* implicit */_Bool) var_12);
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_35 = 1; i_35 < 1; i_35 += 1) 
                    {
                        var_88 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_4)));
                        var_89 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))));
                        var_90 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                        var_91 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */int) var_1))));
                    }
                    var_92 |= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */int) var_10))))));
                    var_93 = ((/* implicit */long long int) ((var_12) / (((/* implicit */int) var_6))));
                }
                /* LoopSeq 2 */
                for (signed char i_36 = 0; i_36 < 19; i_36 += 4) 
                {
                    var_94 ^= ((/* implicit */int) ((short) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_10)))));
                    var_95 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) (+(var_12)))) : (((unsigned long long int) var_10))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))) : (max((var_2), (((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_7))))))));
                    var_96 |= ((unsigned int) (!(((/* implicit */_Bool) var_4))));
                    var_97 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */int) var_6)) : (var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11)))))))) : (min((var_12), ((-(((/* implicit */int) var_6))))))));
                }
                for (long long int i_37 = 0; i_37 < 19; i_37 += 3) 
                {
                    var_98 = ((/* implicit */short) (((~(((/* implicit */int) var_5)))) * (((/* implicit */int) (!((!(((/* implicit */_Bool) var_8)))))))));
                    var_99 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_4)))) ? ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))))) : ((~(((/* implicit */int) var_9))))));
                }
            }
            var_100 = ((/* implicit */signed char) var_2);
        }
        var_101 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))), (((/* implicit */int) max((var_10), (var_7))))));
    }
    for (unsigned char i_38 = 0; i_38 < 18; i_38 += 3) 
    {
        var_102 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_6)) ? ((~(var_2))) : (((/* implicit */int) var_10))))));
        var_103 = ((/* implicit */unsigned char) min(((-(var_8))), ((-(var_8)))));
    }
    /* vectorizable */
    for (signed char i_39 = 0; i_39 < 21; i_39 += 1) 
    {
        var_104 ^= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_3))))));
        var_105 = (~(((/* implicit */int) var_5)));
    }
    var_106 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_40 = 0; i_40 < 11; i_40 += 1) 
    {
        var_107 = ((/* implicit */_Bool) ((signed char) var_12));
        var_108 *= ((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_1)))));
        var_109 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_2)))) ? (var_8) : (var_2)));
    }
    for (unsigned short i_41 = 0; i_41 < 13; i_41 += 4) 
    {
        var_110 = ((/* implicit */unsigned int) max((var_110), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_5))))) : (var_4))))))));
        var_111 |= (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((short) ((_Bool) var_6)))));
        var_112 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))));
    }
    /* vectorizable */
    for (short i_42 = 0; i_42 < 13; i_42 += 1) 
    {
        var_113 = ((/* implicit */short) (+((+(((/* implicit */int) var_1))))));
        var_114 ^= ((/* implicit */unsigned char) (-(var_8)));
        var_115 = ((/* implicit */long long int) (-(((/* implicit */int) var_9))));
        var_116 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
    }
    var_117 = ((/* implicit */unsigned short) var_11);
}

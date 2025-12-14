/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150897
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
    var_19 = ((/* implicit */signed char) ((var_3) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (min((((/* implicit */long long int) var_17)), (var_9))) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) (short)2324))))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_20 = (~(9223372036854775807LL));
        arr_4 [4U] [i_0] = ((/* implicit */_Bool) ((min(((+(arr_1 [i_0]))), (((9223372036854775807LL) / (9223372036854775807LL))))) / (((/* implicit */long long int) max((((unsigned int) (-9223372036854775807LL - 1LL))), (((/* implicit */unsigned int) ((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)35402)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
            arr_9 [i_0] [i_1] = ((/* implicit */int) ((_Bool) ((1379824151U) / (((/* implicit */unsigned int) ((/* implicit */int) var_17))))));
            var_22 -= ((/* implicit */unsigned short) ((arr_0 [i_1]) & (((/* implicit */long long int) ((/* implicit */int) ((short) var_10))))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_3 = 2; i_3 < 9; i_3 += 2) 
                {
                    arr_15 [i_0] [(signed char)5] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((-9223372036854775807LL - 1LL))));
                    var_23 = ((/* implicit */short) ((_Bool) var_5));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_13)) - (22744)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) arr_10 [0U] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((-9223372036854775807LL - 1LL))))));
                }
                for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    arr_18 [i_0] [(signed char)3] [i_2] [(signed char)8] = var_11;
                    var_25 ^= ((/* implicit */unsigned char) var_0);
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)28)))));
                    var_27 &= ((/* implicit */_Bool) ((523776U) & (((unsigned int) arr_1 [i_2]))));
                    arr_19 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */int) var_9);
                }
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-109)) > (((/* implicit */int) (short)-32747))));
                var_29 -= ((/* implicit */short) ((int) (~(6653095788970011742LL))));
            }
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */short) ((_Bool) arr_13 [i_0] [i_6] [(signed char)3]));
                            arr_26 [i_0] [6ULL] [(signed char)7] [i_6] [i_6] = ((/* implicit */long long int) ((_Bool) var_6));
                            var_31 = ((/* implicit */int) (signed char)96);
                            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) (short)6)) : (((/* implicit */int) (signed char)76))))) > (-3141795962274568555LL)));
                            var_33 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-97))));
                        }
                    } 
                } 
                var_34 -= ((/* implicit */long long int) (+(((/* implicit */int) ((var_9) > (-3141795962274568558LL))))));
                var_35 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_2 [i_1] [i_1]))) ? (arr_17 [4LL] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
            }
            arr_27 [i_0] = ((/* implicit */short) ((unsigned int) ((long long int) var_4)));
        }
        for (signed char i_8 = 2; i_8 < 9; i_8 += 4) 
        {
            arr_32 [i_8 - 2] = ((/* implicit */unsigned int) (+(((((long long int) var_3)) / (((/* implicit */long long int) var_2))))));
            /* LoopNest 2 */
            for (unsigned int i_9 = 3; i_9 < 7; i_9 += 1) 
            {
                for (short i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    {
                        var_36 = ((/* implicit */signed char) ((arr_35 [8LL] [i_9] [i_9 - 2] [3LL]) * (((((/* implicit */_Bool) arr_36 [i_0] [i_9 - 1] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-113))) >= (var_4))))) : (var_11)))));
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_8 + 1])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) > (((/* implicit */long long int) arr_30 [i_8 - 2]))))) * (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-62)), (var_7)))) == (((((/* implicit */_Bool) -532457679)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15)))))))));
                    }
                } 
            } 
        }
        var_38 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_12 [(_Bool)0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) ((unsigned short) 2330926049U)))))) * (((min((((/* implicit */long long int) arr_29 [i_0])), (6653095788970011754LL))) / (arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) 
        {
            var_39 ^= ((/* implicit */short) (+(((/* implicit */int) ((signed char) 28672U)))));
            var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) (((~(((/* implicit */int) (signed char)-68)))) / (((/* implicit */int) (unsigned short)12)))))));
            /* LoopNest 2 */
            for (unsigned int i_12 = 1; i_12 < 9; i_12 += 3) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 1) 
                {
                    {
                        arr_45 [i_13] [i_11] [i_12 - 1] [i_12 - 1] [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) < (((((/* implicit */long long int) ((/* implicit */int) var_6))) * (min((9223372036854775807LL), (((/* implicit */long long int) var_16))))))));
                        var_41 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7588))) / (4988629267690304642ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_8))))) * (((long long int) (signed char)107)))))));
                        var_42 &= ((/* implicit */signed char) ((int) max((var_4), (((/* implicit */long long int) (signed char)(-127 - 1))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_14 = 1; i_14 < 9; i_14 += 4) /* same iter space */
            {
                arr_50 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) > (((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_14)))))))) * (((/* implicit */int) (((~(-824082919158506152LL))) > (((((/* implicit */_Bool) -9223372036854775804LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6653095788970011721LL))))))));
                var_43 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_15)) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)44583))))))));
                arr_51 [i_0] [i_11] = min((((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_9))))))), (((((/* implicit */long long int) ((var_18) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)81)))))) / (((((/* implicit */_Bool) arr_5 [7])) ? (arr_46 [i_0] [i_11] [(_Bool)1]) : (5962858590690704576LL))))));
                var_44 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned short) -358024565709639007LL))) ? (((/* implicit */long long int) ((/* implicit */int) (short)2944))) : (((281474976579584LL) / (7735786961002743834LL))))) & (((/* implicit */long long int) (+(((var_11) << (((var_11) - (620010250U))))))))));
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 10; i_15 += 3) 
                {
                    for (signed char i_16 = 0; i_16 < 10; i_16 += 1) 
                    {
                        {
                            var_45 &= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_56 [i_0] [i_0] [i_14 + 1] [(signed char)4] [i_16]))))));
                            var_46 = min((((/* implicit */long long int) (+(((var_12) >> ((((((-2147483647 - 1)) - (-2147483617))) + (34)))))))), (((long long int) var_0)));
                            arr_57 [i_16] [i_11] [i_16] [i_15] [(unsigned short)8] [i_0] [(signed char)9] = ((/* implicit */signed char) max((max((var_4), ((~(var_9))))), (((/* implicit */long long int) (short)-25701))));
                        }
                    } 
                } 
            }
            for (int i_17 = 1; i_17 < 9; i_17 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned char i_19 = 1; i_19 < 9; i_19 += 1) 
                    {
                        {
                            var_47 = ((/* implicit */short) ((unsigned long long int) (+((+(((/* implicit */int) arr_56 [i_19] [i_11] [i_17 + 1] [(unsigned char)2] [i_19 - 1])))))));
                            var_48 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */int) max((((/* implicit */short) var_8)), (var_0)))) + (2147483647))) << (((((-6653095788970011742LL) + (6653095788970011769LL))) - (27LL))))))));
                            arr_65 [(_Bool)1] [i_11] [i_17 + 1] [i_19] [i_17 + 1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((int) (short)-8710)) == (((/* implicit */int) ((arr_40 [i_11] [i_17 - 1] [9U] [i_19 - 1]) == (((/* implicit */long long int) ((/* implicit */int) (short)8709)))))))))) > (((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            var_49 = (((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-8699))) < (824082919158506151LL)))))) / (((((/* implicit */_Bool) arr_11 [i_17 - 1] [i_19] [(unsigned short)1] [i_19 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_11 [i_17 - 1] [i_19] [(short)5] [i_19 - 1])))));
                        }
                    } 
                } 
                var_50 = ((/* implicit */signed char) (+(((/* implicit */int) min((arr_11 [i_0] [i_0] [i_17 + 1] [i_0]), ((signed char)-55))))));
                arr_66 [i_0] [i_11] [(short)8] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_18) >> (((min((((/* implicit */long long int) 1722258059)), (-824082919158506166LL))) + (824082919158506173LL)))))) * ((+(min((var_3), (((/* implicit */unsigned long long int) arr_42 [i_0] [i_17 - 1] [0LL] [i_0] [0]))))))));
            }
        }
    }
    for (unsigned int i_20 = 0; i_20 < 19; i_20 += 4) 
    {
        arr_69 [i_20] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 875637100)) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) (unsigned short)15382))))), (((523364872U) << (((824082919158506151LL) - (824082919158506148LL))))))) << (((((((/* implicit */_Bool) ((arr_67 [i_20]) / (((/* implicit */long long int) ((/* implicit */int) (short)-6331)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3)))) : (arr_67 [i_20]))) + (59LL)))));
        /* LoopNest 3 */
        for (unsigned short i_21 = 0; i_21 < 19; i_21 += 4) 
        {
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                for (long long int i_23 = 1; i_23 < 18; i_23 += 1) 
                {
                    {
                        var_51 = ((/* implicit */unsigned long long int) ((unsigned char) ((signed char) 1171758201)));
                        var_52 = (~(2808927775U));
                    }
                } 
            } 
        } 
        var_53 &= (~(((/* implicit */int) var_17)));
        var_54 = ((/* implicit */int) (((+((((_Bool)1) ? (770984309U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))) > (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-53))) == (0U)))) << ((((~(((/* implicit */int) (short)-6331)))) - (6324))))))));
        arr_78 [i_20] = ((/* implicit */short) ((unsigned int) ((((/* implicit */unsigned int) max((arr_68 [i_20]), (((/* implicit */int) (signed char)-45))))) > (0U))));
    }
    for (short i_24 = 3; i_24 < 19; i_24 += 1) 
    {
        var_55 ^= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)-23680)) : (((/* implicit */int) (signed char)34))));
        var_56 = ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)-122)), (-832740088)));
    }
}

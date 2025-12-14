/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182628
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] [14ULL] &= ((/* implicit */signed char) (-(min((var_4), (((/* implicit */int) (unsigned short)16595))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((((/* implicit */int) var_0)) > (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_1 + 1])))) ? (((/* implicit */int) max((arr_0 [15U]), ((_Bool)0)))) : ((~(((/* implicit */int) var_9)))))));
            var_10 += ((/* implicit */short) ((unsigned short) (unsigned char)152));
            var_11 ^= ((/* implicit */short) min((min((((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0])), (var_2)))), ((-(((/* implicit */int) (signed char)-9)))))), (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)48920)) : (((/* implicit */int) (unsigned char)86)))) << (((((/* implicit */int) min((var_0), (var_3)))) - (95)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                var_12 = ((/* implicit */signed char) 3798837719U);
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) var_5))));
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    var_14 = ((/* implicit */unsigned char) var_7);
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 1; i_4 < 20; i_4 += 3) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)204))));
                        var_15 = ((/* implicit */_Bool) 3798837698U);
                        var_16 = arr_10 [i_2 + 3] [i_1 - 1];
                        arr_19 [i_4] [i_4 + 4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                        var_17 = ((/* implicit */unsigned short) (signed char)-7);
                    }
                }
            }
            for (unsigned int i_5 = 1; i_5 < 21; i_5 += 1) 
            {
                arr_24 [i_0] [(unsigned char)7] [i_5] = ((/* implicit */signed char) (+(496129577U)));
                arr_25 [i_1 - 1] [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_1 - 1]));
                var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
                var_19 ^= ((/* implicit */signed char) arr_4 [i_0] [(unsigned short)4]);
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_6 = 1; i_6 < 23; i_6 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_7 = 2; i_7 < 22; i_7 += 2) /* same iter space */
                    {
                        var_20 = (i_0 % 2 == zero) ? (((/* implicit */short) (((!(((/* implicit */_Bool) 1578495462U)))) ? ((-(1134348956U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)14222)) << (((((/* implicit */int) arr_15 [i_0] [i_6] [i_0] [i_1 - 1] [i_0])) - (13598))))))))) : (((/* implicit */short) (((!(((/* implicit */_Bool) 1578495462U)))) ? ((-(1134348956U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)14222)) << (((((((((/* implicit */int) arr_15 [i_0] [i_6] [i_0] [i_1 - 1] [i_0])) - (13598))) + (26918))) - (30)))))))));
                        var_21 = ((/* implicit */signed char) var_8);
                    }
                    for (int i_8 = 2; i_8 < 22; i_8 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_4))));
                        arr_34 [i_0] [i_0] [i_5] [i_5] [i_8] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-89))));
                        arr_35 [i_0] [i_0] [i_0] [i_6 - 1] [i_6] [(_Bool)1] = ((/* implicit */short) var_2);
                        arr_36 [i_0] [i_5] [i_6] [i_0] = ((/* implicit */unsigned long long int) 496129577U);
                        var_23 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_8]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 1; i_9 < 23; i_9 += 2) 
                    {
                        var_24 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_6 - 1])) : (((/* implicit */int) var_1)))))));
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (-((-(((/* implicit */int) (_Bool)1)))))))));
                        var_26 = ((/* implicit */signed char) (-((-(((/* implicit */int) (unsigned char)254))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (var_7)));
                        arr_42 [i_0] [i_6] [i_6] [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
                    }
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (+((+(3979255327U))))))));
                    var_29 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
                }
                /* vectorizable */
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    var_30 ^= ((/* implicit */signed char) (-(((unsigned int) arr_23 [i_11] [i_0] [i_0]))));
                    arr_45 [i_0] [i_0] [i_5] [i_11] = ((/* implicit */short) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)18268))))))));
                    /* LoopSeq 1 */
                    for (int i_12 = 2; i_12 < 23; i_12 += 2) 
                    {
                        var_31 -= ((/* implicit */unsigned short) var_1);
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_5 + 2] [i_1 + 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [0ULL] [i_11] [i_5 + 3] [i_1 + 1] [i_0])) ? (((/* implicit */int) arr_11 [i_12] [i_11] [(unsigned short)16])) : (((/* implicit */int) var_5)))))));
                        arr_49 [i_0] [i_0] [i_1] [i_5] [i_11] [i_12] [23U] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_1 - 1] [i_5 + 3] [i_5 + 3] [i_12 - 1]))));
                    }
                }
                for (unsigned short i_13 = 4; i_13 < 21; i_13 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        var_33 += ((/* implicit */long long int) max(((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))), (((/* implicit */int) (signed char)-1))));
                        var_34 = ((/* implicit */short) (_Bool)1);
                        var_35 |= ((/* implicit */unsigned char) max((min((min((var_7), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) max((arr_6 [i_14] [i_0]), (((/* implicit */unsigned int) (signed char)-83))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (96909200U)))) / ((+(-68745348))))))));
                        arr_54 [i_14] [i_13 - 1] [i_0] [i_0] [i_1 + 2] [i_0] = ((/* implicit */short) (unsigned char)196);
                    }
                    for (signed char i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        var_36 = ((/* implicit */signed char) (unsigned char)8);
                        var_37 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_13 - 2] [i_0])) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) arr_9 [i_0] [i_13] [i_0])))), (((((/* implicit */int) var_6)) & (((/* implicit */int) (_Bool)1))))));
                    }
                    var_38 = ((/* implicit */_Bool) (+((((+(((/* implicit */int) var_6)))) << ((((((-(((/* implicit */int) (signed char)72)))) + (91))) - (14)))))));
                    var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                }
                for (signed char i_16 = 1; i_16 < 20; i_16 += 1) 
                {
                    var_40 -= ((((/* implicit */_Bool) max((((/* implicit */int) arr_38 [i_16 + 4] [i_5] [i_1 + 1] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) 4194303U)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) var_6))))))) || (((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)15772)) >= (((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_17 = 3; i_17 < 22; i_17 += 1) 
                    {
                        var_41 = ((/* implicit */signed char) 2374093720U);
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-15773)) ? (3301234699U) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_7 [i_16] [i_5] [i_0])), ((-(((/* implicit */int) (signed char)-73)))))))));
                        arr_64 [i_17] [i_0] [i_1 + 1] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned char)79))))));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        var_43 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-18268))))), ((+(((((/* implicit */_Bool) var_3)) ? (arr_52 [i_0] [i_0] [i_5] [i_16] [i_0] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207)))))))));
                        arr_67 [i_0] [(short)11] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) min((arr_11 [i_0] [i_0] [i_0]), ((signed char)-67)))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_57 [i_0] [(unsigned char)4] [i_16 + 1])))))));
                        var_44 = ((/* implicit */unsigned char) arr_15 [i_0] [i_5] [i_5] [(unsigned char)16] [i_0]);
                        arr_68 [i_18] [i_16 - 1] [i_0] [i_5 + 3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (unsigned char)71);
                    }
                    arr_69 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-((((+(8659475448671389885LL))) / (((/* implicit */long long int) ((((/* implicit */int) var_3)) % (((/* implicit */int) (signed char)-74)))))))));
                }
            }
        }
        /* vectorizable */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            arr_73 [i_0] [i_0] = ((/* implicit */unsigned char) var_4);
            /* LoopSeq 2 */
            for (short i_20 = 0; i_20 < 24; i_20 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_21 = 2; i_21 < 23; i_21 += 3) 
                {
                    var_45 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) & ((~(-8659475448671389885LL)))));
                    var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) arr_46 [i_0] [i_21 + 1] [i_0] [i_21] [i_0])) : (((/* implicit */int) arr_46 [i_0] [i_21 - 1] [i_21 - 1] [i_19] [i_19]))));
                }
                for (unsigned char i_22 = 0; i_22 < 24; i_22 += 2) 
                {
                    var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))));
                    arr_85 [i_0] [i_20] [i_0] [i_0] = ((/* implicit */unsigned int) ((short) arr_75 [i_0] [i_0] [i_0] [i_0]));
                    var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) arr_79 [i_0] [i_0] [i_19] [i_20] [i_0]))));
                }
                for (short i_23 = 4; i_23 < 22; i_23 += 1) 
                {
                    arr_88 [i_0] [i_19] [i_20] [i_0] = ((/* implicit */unsigned char) arr_20 [i_0] [i_19] [i_20]);
                    /* LoopSeq 2 */
                    for (unsigned char i_24 = 0; i_24 < 24; i_24 += 1) 
                    {
                        var_49 = ((/* implicit */unsigned char) (+((-(var_7)))));
                        arr_93 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-15))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-74)) >= (((/* implicit */int) arr_90 [i_20] [i_23]))))) : (((/* implicit */int) (short)-15773))));
                        var_50 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_17 [i_0] [9ULL] [i_19] [i_20] [i_23 + 2] [(_Bool)1] [i_20])))) <= (var_4)));
                    }
                    for (short i_25 = 1; i_25 < 23; i_25 += 1) 
                    {
                        arr_97 [i_0] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)93))))) ^ (((((/* implicit */_Bool) (unsigned short)53531)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4294967269U)))));
                        var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_75 [i_25 + 1] [i_25 + 1] [i_25 + 1] [i_19])) ? (((/* implicit */int) arr_46 [i_25 - 1] [i_25 - 1] [i_20] [i_23 + 1] [i_23 - 4])) : (((/* implicit */int) (signed char)-101))));
                    }
                    arr_98 [i_0] [i_0] [i_0] [i_23] [i_23] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                }
                var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_0] [i_19] [i_20])) : (((/* implicit */int) (signed char)101))));
                arr_99 [i_19] [i_19] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)14)))) ? (((/* implicit */unsigned long long int) 0U)) : (9503494770171916835ULL)));
            }
            for (unsigned short i_26 = 2; i_26 < 21; i_26 += 1) 
            {
                arr_104 [(unsigned char)10] [i_19] [i_0] = ((4092179323U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_19] [i_26 + 3] [i_0] [i_26 - 2]))));
                var_53 = ((/* implicit */unsigned short) var_5);
            }
            var_54 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (!((_Bool)1))))));
        }
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
        {
            var_55 = ((/* implicit */short) max((var_55), (((/* implicit */short) max(((-(17370697922551612354ULL))), (((/* implicit */unsigned long long int) var_0)))))));
            arr_108 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) (short)15772)))))), (max((((/* implicit */unsigned int) var_0)), (min((var_8), (((/* implicit */unsigned int) var_3))))))));
        }
        var_56 = ((/* implicit */unsigned short) max((var_56), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_7), (var_7)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0]))))))) >= (((/* implicit */int) (unsigned char)136)))))));
    }
    var_57 = ((/* implicit */unsigned int) max(((unsigned short)11989), (((/* implicit */unsigned short) var_3))));
}

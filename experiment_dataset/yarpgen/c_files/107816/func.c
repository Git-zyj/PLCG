/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107816
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)27185)) <= (((/* implicit */int) ((short) ((unsigned short) var_4))))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) 2576614852U))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((2191153003U) >> (((((/* implicit */int) var_9)) - (26))))))))) : (((/* implicit */int) (unsigned short)19163))));
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)56335)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_15 = var_11;
            var_16 = ((/* implicit */short) max((min((((/* implicit */unsigned int) arr_2 [i_0] [i_0 + 1])), (min((((/* implicit */unsigned int) (unsigned short)40245)), (0U))))), (((/* implicit */unsigned int) ((unsigned short) ((signed char) 12U))))));
        }
        var_17 = ((/* implicit */int) (+(arr_3 [i_0 - 1])));
        var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1])) / (((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1])))) * (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1]))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                arr_14 [i_2] [i_4] [i_4] [i_2] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (288228177128456192ULL) : (((/* implicit */unsigned long long int) var_10)))) >> (((((/* implicit */int) arr_9 [i_3] [i_3])) % (((/* implicit */int) var_6))))));
                var_19 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) (unsigned short)6873))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_6 [i_4])) : (((/* implicit */int) arr_6 [i_2]))));
                arr_15 [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) 288228177128456185ULL);
                var_21 = ((/* implicit */signed char) var_2);
            }
            for (int i_5 = 1; i_5 < 16; i_5 += 3) 
            {
                var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_5 - 1] [i_2] [i_5 + 1])) & (((/* implicit */int) (unsigned char)101))));
                var_23 = ((/* implicit */unsigned char) (+(arr_17 [i_2] [i_2] [i_3] [i_5 - 1])));
            }
            arr_18 [i_2] = ((/* implicit */int) ((unsigned short) var_7));
        }
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (signed char)-18))));
            arr_21 [i_6] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((short) 11U))) * (((/* implicit */int) arr_16 [(unsigned char)12] [i_2]))));
        }
        for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            arr_24 [i_2] = ((/* implicit */long long int) arr_19 [(unsigned char)10]);
            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
            /* LoopSeq 1 */
            for (signed char i_8 = 1; i_8 < 13; i_8 += 1) 
            {
                arr_27 [i_7] [i_2] [i_7] [i_2] = ((((/* implicit */_Bool) arr_13 [i_8 + 1] [i_8 + 4] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [12U] [i_7] [i_2]))))) : (((/* implicit */int) ((unsigned char) arr_9 [i_2] [i_2]))));
                /* LoopSeq 2 */
                for (unsigned short i_9 = 2; i_9 < 14; i_9 += 4) 
                {
                    arr_31 [i_2] [i_7] [i_7] [i_9] [i_7] = ((((/* implicit */int) arr_10 [i_8] [i_2] [i_9 + 1])) > (((/* implicit */int) var_7)));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2]))));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_9] [i_2] [i_9] [4])) ? (arr_17 [(unsigned char)13] [i_2] [(unsigned char)13] [i_9 - 1]) : (arr_17 [i_9] [i_2] [i_9] [i_9 + 1])));
                    arr_32 [i_9] [i_9] [(unsigned short)6] [i_9] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 288228177128456196ULL)) ? (((/* implicit */int) (unsigned char)110)) : ((+(((/* implicit */int) (unsigned short)34282))))));
                }
                for (unsigned long long int i_10 = 1; i_10 < 16; i_10 += 4) 
                {
                    arr_35 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)36))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))));
                    var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_2]))));
                }
            }
        }
        arr_36 [i_2] = ((/* implicit */long long int) 9665743564323913056ULL);
        var_29 += ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) 1379616648U)) : (8781000509385638549ULL)));
    }
    for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
    {
        var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))));
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((2690345956303201970ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_11]))))) / (((((/* implicit */_Bool) (unsigned short)1024)) ? (8781000509385638559ULL) : (((/* implicit */unsigned long long int) 9U))))))) ? (((((/* implicit */int) arr_9 [(short)12] [i_11])) << (((min((arr_25 [i_11] [i_11]), (((/* implicit */long long int) var_1)))) - (25847LL))))) : (((/* implicit */int) var_11))));
        var_32 *= ((/* implicit */unsigned char) (+(max((arr_17 [i_11] [16] [16] [i_11]), (((/* implicit */long long int) ((((/* implicit */_Bool) -3172866146939179944LL)) ? (((/* implicit */int) arr_6 [i_11])) : (((/* implicit */int) var_6)))))))));
        arr_40 [i_11] [i_11] = ((/* implicit */unsigned char) var_3);
        /* LoopSeq 3 */
        for (signed char i_12 = 0; i_12 < 17; i_12 += 4) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_5) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))) > (((((/* implicit */_Bool) 9665743564323913057ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65523))))) : (((/* implicit */int) arr_19 [i_11]))))));
            var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_7)))) + (2982368986803719427LL))))));
            arr_43 [i_12] [i_12] [i_11] = ((/* implicit */signed char) arr_26 [i_12] [i_12] [i_12]);
            var_35 = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_7)), (arr_30 [i_12] [i_12] [i_11] [i_11])))) || (((/* implicit */_Bool) (unsigned char)172))))), (min((((unsigned char) var_3)), (arr_39 [i_12])))));
        }
        for (signed char i_13 = 0; i_13 < 17; i_13 += 4) /* same iter space */
        {
            arr_48 [i_11] [i_11] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) -425023789)) ? (((/* implicit */int) arr_10 [i_11] [i_13] [i_13])) : (((/* implicit */int) arr_10 [i_11] [i_13] [i_13]))))), ((+(arr_17 [i_11] [i_13] [i_11] [i_11])))));
            /* LoopSeq 3 */
            for (unsigned char i_14 = 3; i_14 < 16; i_14 += 1) /* same iter space */
            {
                var_36 = ((/* implicit */unsigned short) ((long long int) ((((((/* implicit */_Bool) (short)-2868)) ? (((/* implicit */int) arr_46 [i_11] [i_11] [i_11])) : (((/* implicit */int) var_6)))) + (((/* implicit */int) arr_46 [i_11] [i_13] [i_11])))));
                arr_51 [i_14 - 2] [i_13] [(unsigned char)6] = ((/* implicit */signed char) var_6);
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 17; i_15 += 2) 
                {
                    for (unsigned int i_16 = 3; i_16 < 13; i_16 += 2) 
                    {
                        {
                            var_37 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) -777594526)) + (2982368986803719415LL)))) ? (((/* implicit */int) min((arr_23 [i_13] [i_13] [i_14]), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) var_1))))));
                            arr_56 [i_16] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((signed char) -2926021019934854166LL)), (((/* implicit */signed char) ((var_5) != (arr_25 [i_11] [i_11]))))))) && ((!(((/* implicit */_Bool) 9665743564323913056ULL))))));
                            var_38 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */short) min((var_9), (var_11)))), (arr_10 [i_14] [i_16] [i_14])))), (9665743564323913056ULL)));
                            var_39 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_28 [i_16] [i_16] [i_16] [i_16 + 2] [i_16] [i_16]), (((/* implicit */unsigned short) arr_52 [i_16] [(unsigned short)3] [i_16 - 2] [i_16 - 1] [i_16 - 2] [i_16]))))) / (((((/* implicit */_Bool) arr_52 [i_16] [16] [i_16] [i_16 + 3] [i_16] [i_16])) ? (((/* implicit */int) arr_28 [i_16] [i_16] [i_16] [i_16 + 3] [i_16] [i_16])) : (((/* implicit */int) arr_28 [i_16] [i_16 - 1] [i_16] [i_16 - 3] [i_16] [(unsigned char)9]))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_17 = 3; i_17 < 16; i_17 += 1) /* same iter space */
            {
                var_40 = ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_58 [i_17] [i_17 - 2] [i_17 - 3] [i_17])) : (((/* implicit */int) arr_54 [i_17 + 1] [i_17] [i_13] [i_17 - 2] [i_13]))));
                arr_61 [i_17] [i_13] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned short) arr_23 [i_17] [i_11] [i_11])), ((unsigned short)65526))), (((/* implicit */unsigned short) var_1))))) ? ((+(min((9665743564323913049ULL), (((/* implicit */unsigned long long int) (signed char)1)))))) : (((/* implicit */unsigned long long int) 1171064401U))));
            }
            for (unsigned char i_18 = 3; i_18 < 16; i_18 += 1) /* same iter space */
            {
                var_41 += ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65513))) - (288228177128456204ULL))) >> (((max((((/* implicit */unsigned long long int) (unsigned short)3)), (9665743564323913035ULL))) - (9665743564323913021ULL)))));
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 17; i_19 += 3) 
                {
                    for (unsigned short i_20 = 0; i_20 < 17; i_20 += 2) 
                    {
                        {
                            var_42 -= ((/* implicit */unsigned char) ((arr_20 [i_18 - 1]) >> (((min((((var_5) - (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((3632987951702910261LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))))))) - (3632987951702910310LL)))));
                            var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(min((var_10), (arr_66 [i_19] [i_19] [(unsigned char)9] [(unsigned char)9])))))) && (((/* implicit */_Bool) var_1)))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_21 = 0; i_21 < 17; i_21 += 1) 
                {
                    var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_57 [i_21] [i_18] [i_11])) - (((/* implicit */int) arr_49 [i_11])))) + ((+(((/* implicit */int) (signed char)-112)))))))));
                    var_45 *= ((/* implicit */unsigned short) ((unsigned char) ((7770192373812555152LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_11))))));
                    var_46 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3438))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113))) / (8781000509385638540ULL)))));
                }
                for (unsigned int i_22 = 2; i_22 < 16; i_22 += 3) 
                {
                    var_47 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)5))));
                    var_48 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (unsigned short)65535))) <= (max((((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))), (((/* implicit */int) arr_55 [i_13] [i_13]))))));
                    var_49 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)120))) < (481308849U)));
                }
                for (long long int i_23 = 0; i_23 < 17; i_23 += 3) 
                {
                    var_50 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) arr_54 [i_18] [i_18 - 1] [i_18] [i_18 - 1] [i_13])) : (min((((/* implicit */int) var_0)), (arr_37 [i_13]))))), (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned char) var_3)), (arr_44 [i_11])))))));
                    arr_77 [i_23] [i_18] [i_18] [i_13] [i_23] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((_Bool) arr_11 [i_13]))), (max((arr_8 [i_23]), (((/* implicit */short) var_7)))))))) != (max((arr_72 [i_13] [i_23] [i_18 - 3] [i_18 - 1] [i_23]), (arr_72 [(signed char)1] [i_23] [i_18 + 1] [i_18 - 3] [(signed char)16])))));
                    var_51 = ((/* implicit */short) min((((/* implicit */unsigned int) 630290828)), (0U)));
                }
                for (unsigned int i_24 = 1; i_24 < 15; i_24 += 3) 
                {
                    var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (-7380855225411644972LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) & (min((((/* implicit */int) (!(((/* implicit */_Bool) 3632987951702910260LL))))), ((~(((/* implicit */int) (unsigned short)5))))))));
                    arr_81 [i_11] [i_11] [i_24] [i_11] = ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned short)54211))))), (arr_54 [i_18 - 1] [i_24 + 1] [i_24 + 2] [i_18 - 3] [i_18 - 1])))) >= (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned short) arr_9 [i_24] [i_24 + 1])), (arr_49 [i_24])))))));
                    /* LoopSeq 1 */
                    for (signed char i_25 = 2; i_25 < 16; i_25 += 2) 
                    {
                        arr_84 [i_11] [i_24] [i_24] [i_24] [i_11] = max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) -630290828)) & (3632987951702910261LL)))), (min((288228177128456204ULL), (((/* implicit */unsigned long long int) arr_63 [i_18 - 2] [i_18 - 2] [i_25 - 2])))));
                        var_53 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) -1665410127)) && (arr_58 [i_24] [i_25 + 1] [i_25] [i_24])))), (min((arr_63 [i_18 - 2] [11ULL] [i_18 - 2]), (arr_63 [i_18] [i_18 - 2] [i_18 - 2])))));
                        arr_85 [i_11] [i_11] [i_24] [8ULL] [i_11] [i_11] = ((/* implicit */unsigned short) var_3);
                    }
                    var_54 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_68 [i_24] [i_24 - 1] [i_24 + 1] [i_24 + 2] [i_24] [i_24] [i_24 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_66 [11LL] [(_Bool)0] [(_Bool)0] [(_Bool)0])) : (7201146196987057954LL)))) : (max((var_8), (((/* implicit */unsigned long long int) var_10)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_80 [i_24] [i_18] [(unsigned char)13] [(unsigned char)13] [i_11] [i_11]))) < (3048667786705895472ULL)))))))));
                }
                arr_86 [3LL] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)36622)), (27U)))), (3586465282997334104ULL)))) ? (((long long int) (+(((/* implicit */int) (short)106))))) : (((/* implicit */long long int) min((3353778385U), (((/* implicit */unsigned int) (_Bool)1)))))));
            }
            var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) var_0))));
        }
        for (signed char i_26 = 0; i_26 < 17; i_26 += 4) 
        {
            var_56 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (1171064417U))))));
            var_57 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((((/* implicit */int) var_4)) << (((arr_66 [i_26] [i_26] [i_11] [i_11]) - (2483618285U))))))))));
            arr_89 [i_11] [i_26] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)55)) <= (((/* implicit */int) max((((/* implicit */unsigned char) arr_19 [i_26])), (arr_6 [i_26]))))));
        }
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129815
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)48)) ? (-1563346089593521415LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))));
    var_12 *= ((/* implicit */unsigned int) var_9);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (!((!(var_4)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (+(-1563346089593521430LL))));
    }
    var_13 &= ((/* implicit */unsigned int) min((1563346089593521420LL), (((/* implicit */long long int) 1159831030U))));
    /* LoopSeq 3 */
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) min((var_14), (((signed char) ((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */int) arr_4 [i_1])) : (var_1))))));
                    /* LoopSeq 4 */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned char) var_3);
                        arr_17 [i_1] [i_3] [i_2] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1563346089593521414LL)) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) var_4)))))))), (max((((/* implicit */unsigned int) ((((/* implicit */long long int) arr_1 [i_2] [i_2])) > (-1563346089593521420LL)))), (min((((/* implicit */unsigned int) var_7)), (102319536U)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) (unsigned short)22880);
                            arr_23 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_16 [i_6] [i_5] [i_3] [i_2] [i_1]))));
                        }
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)42648)) ? (-1563346089593521396LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32757))))))));
                        arr_24 [i_1] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_2])) ? (((/* implicit */long long int) var_2)) : (((var_8) | (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                        var_18 ^= ((signed char) (unsigned short)31190);
                    }
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
                    {
                        var_19 *= ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4611686018293170176ULL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [(_Bool)1] [17U] [i_3] [i_3] [i_7])))))), (min((arr_9 [i_1] [i_3] [i_7]), (((/* implicit */unsigned long long int) var_1)))))), (((/* implicit */unsigned long long int) arr_20 [i_3] [i_3] [i_3] [i_1] [i_2]))));
                        /* LoopSeq 4 */
                        for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            arr_30 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+((-(102319520U)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30686)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31171))) : (4192647779U)))) ? (max((((/* implicit */unsigned long long int) var_0)), (13835058055416381440ULL))) : (((((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_1] [i_7] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_10)))))));
                            var_20 = max((min((((unsigned long long int) (unsigned short)34850)), (((/* implicit */unsigned long long int) ((int) var_2))))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_18 [i_1] [i_1])) && (((/* implicit */_Bool) 4294934528ULL)))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_22 [i_2] [i_2] [i_9]))));
                            arr_33 [i_1] [i_9] [i_7] [i_2] [i_2] [i_1] = (+(((/* implicit */int) max(((unsigned short)30723), (((/* implicit */unsigned short) (signed char)48))))));
                            arr_34 [i_1] [i_3] [i_3] |= ((/* implicit */unsigned long long int) min((arr_11 [i_1] [i_2] [i_3] [i_3]), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)32768)) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3] [i_2]))))))))));
                        }
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 21; i_10 += 4) 
                        {
                            var_22 = ((/* implicit */short) ((signed char) (unsigned short)32768));
                            arr_38 [i_10] [i_7] [i_1] [i_3] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((arr_12 [i_1] [i_2] [i_2]) ? (((/* implicit */int) ((arr_28 [i_3] [i_2] [i_3] [i_7] [i_10]) && (((/* implicit */_Bool) arr_18 [i_1] [i_2]))))) : (((/* implicit */int) var_6))));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_1))));
                            arr_39 [i_1] [i_1] [i_3] [i_1] [i_10] = ((/* implicit */unsigned int) (signed char)85);
                            var_24 = ((/* implicit */short) arr_21 [i_1] [i_1] [i_1] [i_1]);
                        }
                        for (signed char i_11 = 0; i_11 < 21; i_11 += 4) 
                        {
                            var_25 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) 4192647768U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22878))) : (var_8))), (((/* implicit */long long int) (signed char)31)))) < (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((var_10) - (17274657678290869932ULL))))))));
                            arr_43 [i_1] [(signed char)5] [i_3] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)22880);
                            arr_44 [i_1] [i_7] [i_3] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) var_6)) : (var_2)))) >= (9223372036854775781LL)));
                        }
                        var_26 = ((unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        arr_49 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) var_6))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)21040)))))));
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)42655)), (arr_1 [i_1] [i_2])))))))));
                        var_28 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-528)) ? (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (-565239714)))) : (max((var_0), (((/* implicit */long long int) arr_11 [i_1] [i_1] [i_1] [i_1]))))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_12 [i_1] [i_2] [i_2])), ((unsigned short)13912)))), (max((67108608ULL), (((/* implicit */unsigned long long int) (signed char)21))))))));
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned int) var_3);
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((arr_37 [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */int) max(((unsigned char)250), (((/* implicit */unsigned char) ((signed char) (unsigned short)22880)))))) : (((((/* implicit */_Bool) 4794269770433625764LL)) ? (-565239714) : (-565239742)))));
    }
    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_14 = 0; i_14 < 21; i_14 += 1) 
        {
            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)49697)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_13] [i_14]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (_Bool)1))))))));
            arr_56 [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) ((int) arr_9 [i_14] [i_13] [i_13]));
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)1747)) >> (((-565239734) + (565239734)))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_15 = 0; i_15 < 21; i_15 += 4) 
        {
            arr_59 [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) -9223372036854775782LL)) ? (((/* implicit */int) arr_5 [i_13])) : (((532676608) % (var_1)))));
            arr_60 [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_27 [i_15] [i_15] [i_15] [i_13] [i_13]))))));
            /* LoopSeq 2 */
            for (unsigned int i_16 = 0; i_16 < 21; i_16 += 4) /* same iter space */
            {
                arr_64 [i_13] [i_16] [i_16] = ((((/* implicit */int) (signed char)-36)) & (((/* implicit */int) (unsigned char)6)));
                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)23659)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (unsigned char)253))));
                var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_13])))))));
                var_35 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0)))))));
            }
            for (unsigned int i_17 = 0; i_17 < 21; i_17 += 4) /* same iter space */
            {
                var_36 |= ((/* implicit */unsigned int) (((_Bool)1) ? (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20)))));
                /* LoopSeq 3 */
                for (int i_18 = 0; i_18 < 21; i_18 += 4) 
                {
                    var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_13] [i_13] [i_13] [i_13] [i_13]))))))));
                    arr_72 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_13] [i_15] [i_17] [i_18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_14 [i_13] [i_13] [i_13] [i_13])));
                    var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) (_Bool)1))));
                    var_39 = ((/* implicit */unsigned char) var_2);
                }
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) /* same iter space */
                {
                    arr_76 [i_13] [i_13] [i_17] [i_19] [i_15] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)49552)))) * (((/* implicit */int) arr_54 [i_13] [i_15]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 3) 
                    {
                        arr_80 [i_13] [i_15] [i_13] = ((/* implicit */_Bool) (unsigned short)51517);
                        arr_81 [i_13] [i_15] [i_20] [i_19 - 1] [i_13] [i_17] [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)85)))))));
                    }
                    var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) 2139095040))));
                    var_41 = ((/* implicit */int) ((_Bool) (!(arr_46 [i_13] [i_13]))));
                }
                for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) /* same iter space */
                {
                    arr_84 [i_13] [i_21 - 1] = ((/* implicit */signed char) -880245856);
                    var_42 = ((/* implicit */int) (_Bool)1);
                    arr_85 [i_13] [i_13] [i_13] [i_17] [i_13] [i_13] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_69 [i_17] [i_21 - 1] [i_13] [i_21] [i_21 - 1] [i_21 - 1])) : (var_8));
                }
                var_43 = ((/* implicit */unsigned int) ((long long int) arr_83 [i_13] [i_13]));
                arr_86 [i_13] [i_15] [i_17] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 10417899563289931026ULL)) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) (short)15))));
            }
        }
    }
    /* vectorizable */
    for (unsigned long long int i_22 = 0; i_22 < 21; i_22 += 3) /* same iter space */
    {
        var_44 = (((-(((/* implicit */int) var_3)))) << (((/* implicit */int) (unsigned char)7)));
        arr_91 [i_22] = ((/* implicit */int) (unsigned short)15984);
    }
}

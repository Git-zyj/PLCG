/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117795
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6274))) : (3218628641U)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0 + 1] = ((/* implicit */_Bool) (unsigned char)144);
        var_17 = ((/* implicit */unsigned int) ((long long int) var_1));
    }
    for (short i_1 = 1; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) var_6);
        arr_9 [i_1] [i_1] = ((/* implicit */int) var_2);
        var_19 = ((/* implicit */unsigned short) ((unsigned long long int) min(((unsigned char)127), (((/* implicit */unsigned char) (_Bool)1)))));
        arr_10 [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1]))))) && (((((var_9) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) max(((signed char)-36), (((/* implicit */signed char) var_2)))))))));
    }
    for (int i_2 = 1; i_2 < 15; i_2 += 3) 
    {
        arr_14 [i_2] = ((/* implicit */long long int) var_10);
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
        {
            arr_18 [i_2] = (+(var_14));
            var_20 += ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)3))));
        }
        for (unsigned char i_4 = 2; i_4 < 12; i_4 += 3) 
        {
            /* LoopSeq 4 */
            for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                arr_26 [7U] [i_2] [7U] = ((/* implicit */long long int) 4294967295U);
                var_21 = (-(183621655896273452LL));
                var_22 = ((/* implicit */signed char) ((_Bool) ((signed char) var_4)));
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)120)))))));
            }
            for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                arr_30 [i_2] [i_2] [i_6] [i_6] = ((((/* implicit */_Bool) max((((unsigned long long int) arr_7 [i_6])), (max((var_7), (((/* implicit */unsigned long long int) 4294967283U))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)224))))) ? (max((17821485419644789524ULL), (((/* implicit */unsigned long long int) (unsigned char)17)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (var_14))))))));
                var_24 += ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) var_12))))) && (((/* implicit */_Bool) ((int) 183621655896273452LL))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 14365000494256412638ULL)) ? (((/* implicit */int) (signed char)31)) : (-7411870)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) : (429349956U)))))));
                arr_31 [i_2] [i_2] [i_2] [2ULL] = ((/* implicit */_Bool) ((min((1423453314), (((/* implicit */int) (short)-6273)))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2])))))));
                arr_32 [i_2] [i_6] [i_6] [0ULL] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_23 [i_4 + 2] [i_4 + 1])))) * (((((/* implicit */_Bool) (signed char)126)) ? (arr_23 [i_4 - 2] [i_4 + 4]) : (((/* implicit */long long int) var_8))))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    arr_39 [i_2] [i_2] [i_2] [i_8] [i_2] = ((/* implicit */long long int) min(((_Bool)1), (((((/* implicit */_Bool) -5858947699571624483LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2748496078U)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43))))))))));
                    var_25 |= (~(min((((1175032532U) | (3412760048U))), (min((1175032532U), (((/* implicit */unsigned int) (unsigned short)65520)))))));
                }
                var_26 = ((/* implicit */unsigned int) (signed char)-21);
                arr_40 [i_2] [i_2] [i_4 + 4] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (short)6362)))))) ? (min((17573590548964503842ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((((/* implicit */_Bool) (short)-6362)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6350))) : (2500152662917956066ULL)))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned short)65524)))))))));
                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_33 [i_4] [8ULL])), (((int) ((((var_8) + (2147483647))) >> (((/* implicit */int) arr_33 [i_2 - 1] [(short)2]))))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
                {
                    arr_48 [i_2] [i_2] [i_4] [i_2] [6ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (unsigned char)10))));
                    arr_49 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [i_2 + 1] [i_4 + 3] [i_4 - 2]))))) : (2762467091274902820ULL)));
                }
                for (int i_11 = 0; i_11 < 16; i_11 += 4) /* same iter space */
                {
                    var_29 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((7271704460187199839ULL), (((/* implicit */unsigned long long int) var_0))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_5))))), (((((((/* implicit */_Bool) (unsigned short)4973)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_4))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)253)) - (((/* implicit */int) (signed char)40)))))))));
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((((/* implicit */_Bool) ((unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)6265)) : (((/* implicit */int) var_13)))))) ? (max((arr_11 [i_11]), (((/* implicit */unsigned int) max((var_2), (var_13)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_2] [i_11] [i_9] [i_11]))))))))));
                    arr_52 [i_2] [i_9] [i_4] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (min((((/* implicit */unsigned int) (unsigned short)60562)), (2580355632U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) (unsigned short)60563)) : (((/* implicit */int) arr_2 [i_9] [i_2 + 1])))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 1; i_12 < 13; i_12 += 3) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_3)))) == (((/* implicit */int) max(((_Bool)1), (var_9))))));
                        arr_55 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) 0ULL);
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 13; i_13 += 3) /* same iter space */
                    {
                        arr_58 [i_2] [i_4] [11] [i_9] [i_11] [i_13 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (arr_44 [i_13] [i_13] [i_2])))) ? ((+(-1695066888))) : ((-(((/* implicit */int) (short)29299))))));
                        arr_59 [i_2] [(unsigned char)10] [i_2] [i_2] [i_13] = ((/* implicit */unsigned int) (+(((((/* implicit */int) (_Bool)1)) + ((((_Bool)0) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) (unsigned short)65535))))))));
                    }
                    arr_60 [i_2] [i_4] [i_4] [9ULL] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((((/* implicit */int) (unsigned short)56770)) / (((/* implicit */int) (unsigned short)43034))))))), (((long long int) ((unsigned int) (unsigned short)4973)))));
                }
                for (int i_14 = 0; i_14 < 16; i_14 += 4) /* same iter space */
                {
                    arr_65 [i_2] [i_14] = ((((/* implicit */_Bool) ((arr_51 [i_2] [i_2] [i_4 + 1] [i_4] [i_4]) ? (1446673343380451489LL) : (((((/* implicit */long long int) ((/* implicit */int) var_15))) | (-326679265178033784LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((11177567440321676948ULL), (((/* implicit */unsigned long long int) (_Bool)1)))));
                    var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (unsigned char)109))));
                }
                var_33 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_10)) ? (arr_21 [i_2 - 1] [i_4 - 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146))))));
                /* LoopSeq 3 */
                for (unsigned char i_15 = 0; i_15 < 16; i_15 += 3) 
                {
                    arr_68 [i_2] [i_4] [i_2] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_66 [i_2 - 1] [i_4 - 2] [i_4 + 1] [i_9])) ? (((((/* implicit */_Bool) (unsigned short)22658)) ? (var_7) : (((/* implicit */unsigned long long int) -1971929333)))) : (arr_15 [i_2 - 1] [i_4 + 2] [i_4 + 3]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 3) 
                    {
                        var_34 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65109))));
                        var_35 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [(signed char)10] [1ULL] [i_9]))) : (1073741823LL))) | (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                        arr_72 [i_2] [i_4 - 2] [i_2] [i_15] [(signed char)12] [i_16] [(unsigned char)10] &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)3968)) != (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((unsigned int) 8049043429833169264LL)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_34 [i_16] [i_15] [i_4] [(unsigned char)7])) : (arr_16 [i_4] [i_4] [i_9]))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 1) 
                    {
                        var_37 = ((/* implicit */signed char) (-(arr_22 [i_2 + 1] [i_4 + 4] [i_4 + 4])));
                        var_38 &= ((/* implicit */unsigned long long int) (_Bool)0);
                        var_39 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (signed char)-48))));
                        var_40 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-34))) - (var_4)));
                    }
                    var_41 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-34)))))))) >= (((/* implicit */int) (((+(((/* implicit */int) (signed char)48)))) >= (((((var_8) + (2147483647))) >> (((/* implicit */int) var_2)))))))));
                    arr_75 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((14525458428973199027ULL), (((/* implicit */unsigned long long int) (unsigned short)42877))))))) ? (((unsigned int) (unsigned char)161)) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)77)))));
                    var_42 |= ((/* implicit */long long int) ((var_2) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (7668809259777669977ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL)))))))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    arr_78 [i_2 + 1] [i_2] [i_9] [i_18] [i_4 + 1] [i_18] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) var_0)) + (var_8))))), (var_4)));
                    var_43 = ((/* implicit */unsigned char) (signed char)17);
                    var_44 = ((/* implicit */int) max((((/* implicit */signed char) ((-608254891) >= (((/* implicit */int) (signed char)116))))), (((signed char) 7668809259777669976ULL))));
                    var_45 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (10777934813931881638ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96)))))) ? (((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42876))) : (7668809259777669969ULL))) : (((var_9) ? (9459327985108528045ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
                    var_46 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                }
                for (signed char i_19 = 0; i_19 < 16; i_19 += 3) 
                {
                    arr_83 [i_2] [i_4] [i_2] [i_19] = ((/* implicit */short) max((((unsigned char) ((((/* implicit */int) var_2)) & (((/* implicit */int) (signed char)-1))))), (((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) (signed char)-69)), (12406457129866496883ULL))) < (arr_21 [i_2] [i_4] [i_2]))))));
                    var_47 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((12360547172019819966ULL), (((/* implicit */unsigned long long int) (signed char)-117))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)72))) : (((((/* implicit */_Bool) 10777934813931881631ULL)) ? (371207444U) : (4294967293U)))))) + (((long long int) (signed char)117))));
                    var_48 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) (signed char)-62)), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_4 + 3] [i_2] [i_4])) && (((/* implicit */_Bool) (signed char)-79)))))));
                }
            }
            var_49 = ((/* implicit */long long int) 7668809259777669969ULL);
            var_50 += ((/* implicit */unsigned long long int) (short)8261);
        }
        var_51 &= ((/* implicit */unsigned short) (~(((/* implicit */int) var_3))));
        var_52 *= ((/* implicit */unsigned char) 7668809259777669958ULL);
    }
    var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) var_13))))) : (min((((/* implicit */unsigned long long int) var_15)), (var_1)))))) || (var_2)));
}

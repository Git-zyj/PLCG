/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156273
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
    var_19 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) var_3)) & (((((/* implicit */_Bool) var_18)) ? (14362534930304842097ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
    var_20 = ((/* implicit */_Bool) ((int) 3));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_18)))) > (((((/* implicit */_Bool) 4084209143404709518ULL)) ? (-8838942579649961288LL) : (arr_1 [i_0] [i_0])))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [12LL] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16383U)) ? (((/* implicit */long long int) var_3)) : (arr_1 [i_0] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [i_0])))))));
        var_23 = ((/* implicit */long long int) (~(min(((~(((/* implicit */int) var_4)))), (min((0), (((/* implicit */int) (unsigned char)255))))))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                for (unsigned int i_4 = 1; i_4 < 16; i_4 += 3) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (unsigned short)57344))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            var_25 |= (+(((/* implicit */int) arr_11 [5LL] [5LL] [5LL] [i_4])));
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_7 [i_2] [i_2]))));
                            var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((var_2) + (2147483647))) << (((var_12) - (17862949449038338967ULL)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_14 [i_5] [i_1] [i_3] [i_2] [i_2 - 1] [i_1]) < (arr_14 [i_5] [(unsigned short)10] [i_2] [i_4 - 1] [i_2 + 1] [i_5]))))) : (((((((/* implicit */_Bool) 8838942579649961279LL)) ? (9199926359237227399LL) : (((/* implicit */long long int) 1318219044U)))) >> (((/* implicit */int) (_Bool)1))))));
                            var_28 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) - ((+((-2147483647 - 1))))))) ? (((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) (short)-9312)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4 + 2] [i_2 + 2]))))) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */long long int) 222302475)), (2113929216LL))))))));
                        }
                    }
                } 
            } 
        } 
        var_29 -= ((/* implicit */unsigned short) (((~(arr_3 [i_1]))) ^ (((/* implicit */int) ((_Bool) (unsigned short)51445)))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                {
                    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5)))) < (min((var_12), (((/* implicit */unsigned long long int) var_5)))))))));
                    /* LoopSeq 3 */
                    for (int i_8 = 3; i_8 < 17; i_8 += 3) /* same iter space */
                    {
                        var_31 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)51445)) >> (((-8313030269793388047LL) + (8313030269793388057LL)))))), ((-(-7374130686487554979LL)))));
                        var_32 = (+(-1513952438));
                        var_33 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -1498071469)) ? (-2113929233LL) : (-3880494776452731310LL))) == (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_6] [i_7])))))));
                    }
                    for (int i_9 = 3; i_9 < 17; i_9 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 1; i_10 < 16; i_10 += 4) 
                        {
                            var_34 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((7144815794792866132LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                            arr_31 [i_10 + 1] [i_1] [i_7] [i_7] [i_1] [i_1] = ((/* implicit */_Bool) arr_9 [i_9 - 2] [i_1]);
                        }
                        for (unsigned int i_11 = 2; i_11 < 17; i_11 += 3) 
                        {
                            var_35 = ((long long int) ((arr_7 [i_9 - 3] [i_11 - 2]) ? (var_7) : (var_2)));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_0)) <= (arr_33 [i_1] [i_1] [i_1] [i_11 + 1] [i_11])))) <= (((/* implicit */int) ((arr_32 [i_9 - 3] [i_11] [i_9 - 3] [i_11 + 1] [i_11 + 1] [(signed char)5] [i_11]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)230))))))));
                            arr_35 [i_11] [i_1] [i_7] [i_7] [i_7] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1596547679916393228LL)) || (((/* implicit */_Bool) ((int) (_Bool)1))))))) >= (5742978606198261196LL)));
                        }
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) var_17))));
                            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((int) (+((~(5742978606198261196LL)))))))));
                            var_39 = ((/* implicit */unsigned char) ((unsigned short) ((long long int) (+(var_7)))));
                        }
                        var_40 = ((/* implicit */int) (!(((((/* implicit */int) ((unsigned char) var_2))) >= (((/* implicit */int) var_5))))));
                        arr_39 [i_1] [i_1] [i_6] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) -5742978606198261197LL)) ^ (10900942440221105881ULL))), (((/* implicit */unsigned long long int) (-(min((-3291465236232649185LL), (400384293442827612LL))))))));
                        var_41 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_36 [i_9] [i_9] [i_9] [i_9 + 1] [2ULL] [(signed char)14]) : (arr_36 [i_7] [i_7] [i_9] [i_9 - 3] [16LL] [i_9 - 1])))) == (((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5)))))));
                    }
                    for (int i_13 = 3; i_13 < 17; i_13 += 3) /* same iter space */
                    {
                        var_42 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8838942579649961288LL)))))) / (-4435224444042744406LL)));
                        /* LoopSeq 3 */
                        for (int i_14 = 0; i_14 < 18; i_14 += 4) 
                        {
                            var_43 -= ((/* implicit */_Bool) var_12);
                            var_44 = ((/* implicit */long long int) ((min((((/* implicit */long long int) (signed char)126)), (var_14))) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29201)))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            var_45 ^= ((/* implicit */int) var_13);
                            var_46 = ((/* implicit */long long int) var_1);
                            var_47 = (i_1 % 2 == zero) ? (((/* implicit */long long int) ((unsigned char) ((((/* implicit */long long int) min((1500636880), (413258972)))) * (min((arr_20 [i_1] [i_6] [i_1]), (((/* implicit */long long int) var_7)))))))) : (((/* implicit */long long int) ((unsigned char) ((((/* implicit */long long int) min((1500636880), (413258972)))) / (min((arr_20 [i_1] [i_6] [i_1]), (((/* implicit */long long int) var_7))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                        {
                            var_48 = ((/* implicit */_Bool) (-(320644323U)));
                            var_49 = ((/* implicit */long long int) (((+(5928733553228941767ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) == (-8838942579649961294LL)))))));
                            var_50 = ((/* implicit */long long int) max((var_50), (((/* implicit */long long int) arr_44 [i_13 + 1] [i_6] [i_7] [(short)7] [i_6]))));
                            arr_51 [i_1] [i_6] [i_6] [i_1] [i_1] [i_6] [i_16] = (+(var_3));
                            arr_52 [i_1] [i_13] [i_6] [i_6] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (((((/* implicit */_Bool) -8838942579649961301LL)) ? (var_12) : (((/* implicit */unsigned long long int) var_2))))));
                        }
                        var_51 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_17)))) % (min((((/* implicit */long long int) var_18)), (var_14)))));
                        var_52 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_12 [i_1] [i_13] [i_13] [i_13 + 1] [i_13 + 1])) ? (arr_12 [i_1] [i_13] [i_13] [i_13 + 1] [i_13 + 1]) : (arr_12 [i_1] [i_1] [i_1] [i_13 + 1] [i_13 + 1]))) >= (((/* implicit */long long int) min((var_2), (((/* implicit */int) var_8)))))));
                        arr_53 [i_13] [i_1] [i_7] [i_1] [i_1] = ((/* implicit */long long int) var_4);
                    }
                }
            } 
        } 
        arr_54 [i_1] = ((7168623306202008277LL) % (-8838942579649961265LL));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 18; i_17 += 1) 
        {
            for (long long int i_18 = 0; i_18 < 18; i_18 += 3) 
            {
                {
                    var_53 = ((/* implicit */_Bool) ((min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3291465236232649199LL)) ? (((/* implicit */int) (unsigned short)29962)) : (((/* implicit */int) var_4))))))) >> (((((((/* implicit */_Bool) (short)17126)) ? (((/* implicit */int) arr_18 [i_1] [i_17] [i_18])) : (((/* implicit */int) var_0)))) + (128)))));
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 1; i_19 < 17; i_19 += 3) 
                    {
                        for (unsigned char i_20 = 0; i_20 < 18; i_20 += 3) 
                        {
                            {
                                var_54 -= ((/* implicit */unsigned long long int) var_16);
                                var_55 = ((/* implicit */int) ((_Bool) var_13));
                                var_56 -= (+(min((((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_25 [i_18] [i_20]))))), (((((/* implicit */_Bool) 2487773428194656062ULL)) ? (1293974497) : (var_6))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_57 = ((/* implicit */int) var_16);
}

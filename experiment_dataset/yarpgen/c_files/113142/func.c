/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113142
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) 1693207878)), (1912362691U)));
                            arr_11 [i_2] [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -1693207879)) || (((/* implicit */_Bool) (unsigned short)63146))));
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 3; i_4 < 19; i_4 += 4) 
                            {
                                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2382604598U)), (((unsigned long long int) -1693207879))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_0] [0LL] [i_3] [i_4])))) : (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1693207879)))))) | (max((((/* implicit */long long int) (short)-17485)), (arr_9 [i_0] [i_1] [i_2] [i_4] [6LL] [i_4])))))));
                                arr_15 [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) ? (((/* implicit */unsigned long long int) 531169268U)) : (((((/* implicit */_Bool) 1693207883)) ? (((/* implicit */unsigned long long int) -1693207888)) : ((~(10072071296166937561ULL))))));
                            }
                            /* vectorizable */
                            for (long long int i_5 = 1; i_5 < 18; i_5 += 2) 
                            {
                                arr_19 [i_0] [i_1] [i_1] [i_0] [i_3] [i_5 + 2] [i_3] = ((/* implicit */int) var_12);
                                var_16 ^= ((/* implicit */int) ((unsigned long long int) 2382604591U));
                            }
                            for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)5037)) % (((/* implicit */int) var_4))));
                                arr_24 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) max((((arr_12 [i_0] [i_1] [i_0] [i_3] [i_6]) >> (((((/* implicit */int) var_4)) - (49321))))), ((-(arr_12 [i_6] [i_3] [i_2] [i_1] [i_0])))));
                                var_18 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned long long int) min((var_5), (7286093318500706338LL)))) & (var_8))));
                            }
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12842209791858493738ULL)) ? (((/* implicit */unsigned int) -1693207879)) : (2640205321U)))) != (max((5604534281851057878ULL), (var_8)))))), (((long long int) arr_2 [i_3])))))));
                        }
                    } 
                } 
                var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 581454139U)), (17546078543108090059ULL)))) ? (((/* implicit */int) ((5604534281851057878ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((((/* implicit */int) (short)-9251)) ^ (((/* implicit */int) (unsigned short)62140))))))) ? (min((((arr_8 [17] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) : (var_2))), (((/* implicit */unsigned long long int) (short)-9291)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1912362686U)) ? (var_2) : (((/* implicit */unsigned long long int) 1912362686U))))) ? (min((14831351064728647622ULL), (((/* implicit */unsigned long long int) (unsigned short)4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_7 = 1; i_7 < 18; i_7 += 2) 
                {
                    arr_27 [i_0] [i_0] [i_7 + 1] [i_0] = ((/* implicit */unsigned short) ((_Bool) (unsigned char)61));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) 4398046511103LL)))))));
                                var_22 &= ((/* implicit */unsigned short) (!((_Bool)1)));
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((-7286093318500706338LL) / (((/* implicit */long long int) arr_26 [i_1] [i_8] [i_9])))))));
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 9355039778551733731ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18881))) : (4398046511103LL)))))));
                                arr_32 [i_1] [(short)12] [i_7 + 3] [(unsigned char)2] [i_7] &= ((/* implicit */_Bool) (unsigned short)5842);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) 17333776125229531050ULL)) ? (7286093318500706338LL) : (9223372036854775807LL)));
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        {
                            arr_37 [i_11] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2911570254489874703ULL)) ? (-4398046511098LL) : (((/* implicit */long long int) -1767182515))));
                            var_26 += (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)9286)) : (((/* implicit */int) (unsigned short)65519)))) * (((/* implicit */int) (short)-9287))))));
                            var_27 = ((/* implicit */signed char) ((unsigned long long int) (~((~(((/* implicit */int) (unsigned short)37057)))))));
                            arr_38 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (2389253454767865305LL)))) ? (((/* implicit */int) max(((unsigned short)64395), (((/* implicit */unsigned short) (unsigned char)93))))) : (((/* implicit */int) ((signed char) (short)9280)))))));
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) var_8))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (short)-9310))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)104))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) ^ (0U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2)))))));
                        arr_45 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_12] [i_0] [i_0]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)9278))))) ? (((unsigned long long int) (short)10)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215))))))))))));
                    }
                    arr_46 [i_1] [i_1] [i_1] [i_12] |= ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)106))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_2))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)9286)) ? (((/* implicit */int) (short)9270)) : (((/* implicit */int) (signed char)122)))))))));
                    var_30 += ((/* implicit */long long int) var_7);
                    /* LoopSeq 4 */
                    for (unsigned char i_14 = 2; i_14 < 20; i_14 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned long long int) min((arr_42 [i_1] [i_12]), (((/* implicit */unsigned short) ((short) ((short) (signed char)-118))))));
                        var_32 |= ((/* implicit */unsigned char) ((-1571185280213103582LL) | (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_14] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-118))))), (1571185280213103599LL)))));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)63778)) : (((/* implicit */int) var_3))))), (-8086010170423202564LL)))) ? (1917682388772938945ULL) : (((((_Bool) 17546078543108090059ULL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (16910720864188396932ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_11))))))));
                    }
                    for (unsigned char i_15 = 2; i_15 < 20; i_15 += 4) /* same iter space */
                    {
                        var_34 = ((/* implicit */long long int) (!(((_Bool) ((((/* implicit */_Bool) -1571185280213103582LL)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (unsigned char)163)))))));
                        var_35 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (short)-11319)) != (((/* implicit */int) var_4))))), (max((((/* implicit */long long int) -518371604)), (var_11)))))) || (((/* implicit */_Bool) (short)-9294))));
                    }
                    /* vectorizable */
                    for (unsigned char i_16 = 2; i_16 < 20; i_16 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
                        var_37 = ((/* implicit */signed char) var_6);
                        /* LoopSeq 1 */
                        for (int i_17 = 0; i_17 < 21; i_17 += 2) 
                        {
                            var_38 &= ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [(_Bool)1] [i_16 - 2] [i_16 - 1] [i_16 + 1])) * (((/* implicit */int) var_1))));
                            arr_56 [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)90)) % (((/* implicit */int) var_12))));
                            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) var_11))));
                        }
                        var_40 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_16 - 1])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                        var_41 = ((/* implicit */signed char) ((short) ((unsigned char) 1917682388772938945ULL)));
                    }
                    for (unsigned char i_18 = 2; i_18 < 20; i_18 += 4) /* same iter space */
                    {
                        var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16910720864188396910ULL)) ? (900665530601461555ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234)))))) ? ((~(4247615749157307190ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159))))))));
                        arr_59 [i_18] [i_18] [i_12] [i_1] |= ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) (short)9314))) ^ (-8682900980677603657LL)))));
                    }
                }
            }
        } 
    } 
    var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) > (((/* implicit */int) (unsigned short)5427))))), (min((2043905260U), (((/* implicit */unsigned int) var_6))))))) ? (min((((/* implicit */unsigned long long int) ((long long int) 9223372036854775805LL))), (max((((/* implicit */unsigned long long int) (short)-9324)), (1536023209521154706ULL))))) : ((+(min((((/* implicit */unsigned long long int) var_6)), (17546078543108090072ULL)))))));
}

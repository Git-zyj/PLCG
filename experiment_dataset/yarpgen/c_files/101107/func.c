/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101107
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) arr_9 [i_2 + 2] [i_1] [i_2 - 2] [i_2]);
                    var_19 *= (+(5485628902539543163ULL));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 15; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_15 [i_3] [i_1] [i_3] [i_3 + 1] [i_4] &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max(((short)6144), (((/* implicit */short) var_1))))), (((((/* implicit */_Bool) 298805177U)) ? (1965535287216616228ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) var_5))))))))));
                                var_20 = var_4;
                                arr_16 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */signed char) ((arr_8 [i_2 - 2] [i_2 - 2] [i_2] [i_3 - 4]) < (((/* implicit */long long int) ((/* implicit */int) (signed char)121)))))), (var_1)));
                            }
                        } 
                    } 
                    arr_17 [7ULL] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : ((~(((/* implicit */int) (signed char)99)))))) >= (((/* implicit */int) ((((/* implicit */_Bool) 16481208786492935388ULL)) || (((/* implicit */_Bool) ((9888548227316516853ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16)))))))))));
                    var_21 *= ((/* implicit */short) arr_6 [(short)4] [i_1] [i_2 + 2] [i_2]);
                }
            } 
        } 
        arr_18 [14U] [14U] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_14 [14ULL] [(short)10] [(short)10] [i_0])))) ? (min((arr_14 [i_0] [12U] [i_0] [(signed char)2]), (((/* implicit */unsigned long long int) var_6)))) : (max((((/* implicit */unsigned long long int) var_1)), (arr_14 [i_0] [8] [(short)4] [i_0])))));
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 19; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            {
                var_22 -= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (+(arr_20 [i_6] [i_6])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) : ((~(((((/* implicit */unsigned long long int) arr_22 [i_6] [i_6])) / (var_3)))))));
                var_23 &= ((/* implicit */short) arr_22 [i_5 - 1] [i_6]);
                /* LoopSeq 4 */
                for (unsigned int i_7 = 1; i_7 < 20; i_7 += 2) 
                {
                    arr_25 [i_5] [i_5] [i_5] [(short)14] = (-(((/* implicit */int) (short)64)));
                    arr_26 [i_5] [(signed char)10] [i_5] [i_5] = max((((((/* implicit */_Bool) ((-5200938594670036500LL) | (((/* implicit */long long int) ((/* implicit */int) (short)32763)))))) ? (16481208786492935394ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_24 [i_5] [i_5] [i_7]), (((/* implicit */short) (signed char)-108)))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))));
                    arr_27 [i_5 - 1] [i_6] [i_6] &= ((/* implicit */signed char) ((_Bool) var_9));
                    arr_28 [i_5] [i_5] [i_7] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((-172971244986874353LL), (-5200938594670036500LL)))))) ? ((~(((((/* implicit */_Bool) arr_23 [i_7] [i_5] [i_7] [i_7 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5]))) : (2354858740U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-17774)) ? (((/* implicit */int) (signed char)-123)) : (66060288))))));
                    var_24 *= ((/* implicit */unsigned int) var_4);
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_25 &= ((/* implicit */long long int) (signed char)-86);
                                arr_36 [i_5] = ((/* implicit */unsigned int) arr_32 [i_5 + 1]);
                            }
                        } 
                    } 
                    arr_37 [19ULL] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_34 [i_5] [i_5] [i_5] [i_8] [i_8])) : (((/* implicit */int) arr_21 [i_5])))))));
                }
                for (unsigned int i_11 = 2; i_11 < 19; i_11 += 3) 
                {
                    var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) arr_32 [16])))));
                    var_27 = ((/* implicit */short) ((arr_20 [i_5] [i_11 - 2]) - (arr_20 [i_5] [i_11 - 1])));
                }
                for (unsigned int i_12 = 2; i_12 < 20; i_12 += 4) 
                {
                    var_28 = ((/* implicit */short) max((((((/* implicit */_Bool) min((var_7), (arr_30 [i_5] [i_12 - 1] [i_12] [i_6])))) ? (133811451038418652LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_24 [i_6] [i_6] [i_6])) : (((/* implicit */int) var_6))))))), (((/* implicit */long long int) var_8))));
                    var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))));
                    arr_44 [i_5] [i_6] [i_12] [i_6] = ((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) (signed char)-86))))))));
                }
                var_30 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_30 [i_5] [i_5] [3U] [i_5]) + (((/* implicit */unsigned long long int) arr_19 [i_5 + 2] [i_6]))))) || ((_Bool)1)))), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-8242))))) ? (min((((/* implicit */unsigned long long int) var_16)), (16481208786492935363ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14)))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_13 = 0; i_13 < 19; i_13 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_14 = 2; i_14 < 17; i_14 += 2) 
        {
            for (signed char i_15 = 1; i_15 < 18; i_15 += 2) 
            {
                for (long long int i_16 = 0; i_16 < 19; i_16 += 3) 
                {
                    {
                        var_31 &= ((/* implicit */long long int) (((-(((((/* implicit */unsigned long long int) -246053307548202759LL)) - (6238150644322035976ULL))))) & ((~(5700312244991599496ULL)))));
                        var_32 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_47 [i_13])) && (((/* implicit */_Bool) arr_47 [i_13])))) ? (((((/* implicit */_Bool) (short)24631)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) arr_47 [i_15 + 1])))) : (((/* implicit */unsigned long long int) arr_47 [i_13]))));
                        var_33 = ((/* implicit */unsigned int) arr_40 [i_14] [i_15 + 1] [i_16]);
                    }
                } 
            } 
        } 
        arr_55 [i_13] = ((/* implicit */long long int) ((short) 12208593429387515642ULL));
        /* LoopNest 2 */
        for (long long int i_17 = 0; i_17 < 19; i_17 += 3) 
        {
            for (unsigned long long int i_18 = 1; i_18 < 18; i_18 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                    {
                        for (long long int i_20 = 1; i_20 < 17; i_20 += 1) 
                        {
                            {
                                var_34 *= ((/* implicit */signed char) var_6);
                                var_35 = ((((/* implicit */unsigned long long int) 246053307548202758LL)) <= (1965535287216616228ULL));
                            }
                        } 
                    } 
                    var_36 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 12014483625035932678ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)43))))) ? (((((/* implicit */_Bool) var_1)) ? (var_13) : (var_7))) : ((+(var_3))))), (((/* implicit */unsigned long long int) ((unsigned int) 16481208786492935406ULL))));
                    arr_67 [i_13] [i_13] [i_13] = ((/* implicit */long long int) ((int) (-(arr_52 [i_17] [i_18 + 1] [i_18]))));
                    var_37 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) var_17)), (((((/* implicit */_Bool) arr_56 [i_18] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_13]))) : (var_5)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_21 = 0; i_21 < 19; i_21 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_22 = 0; i_22 < 19; i_22 += 3) 
        {
            for (short i_23 = 4; i_23 < 17; i_23 += 2) 
            {
                for (long long int i_24 = 0; i_24 < 19; i_24 += 2) 
                {
                    {
                        arr_80 [i_21] [i_21] = ((/* implicit */unsigned int) arr_74 [5] [i_23] [i_22] [i_21]);
                        var_38 = ((/* implicit */long long int) (+(((/* implicit */int) arr_35 [i_23] [i_23] [i_23 + 1] [i_23 + 1]))));
                        var_39 = var_12;
                        var_40 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))));
                    }
                } 
            } 
        } 
        var_41 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_70 [i_21])) || (((/* implicit */_Bool) arr_22 [i_21] [i_21]))));
    }
    for (unsigned int i_25 = 0; i_25 < 19; i_25 += 2) /* same iter space */
    {
        arr_83 [i_25] [i_25] = min((((((/* implicit */long long int) arr_66 [i_25] [i_25] [i_25] [i_25] [i_25])) / (arr_76 [i_25] [i_25] [i_25]))), (((/* implicit */long long int) ((arr_40 [i_25] [i_25] [i_25]) > (((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_7)))))));
        var_42 = ((unsigned long long int) -246053307548202758LL);
    }
    var_43 = var_10;
}

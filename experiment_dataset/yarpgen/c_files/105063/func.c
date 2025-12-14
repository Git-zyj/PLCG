/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105063
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0 + 1])))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) (((+((-(((/* implicit */int) arr_1 [i_3])))))) - (((/* implicit */int) (unsigned short)40890))));
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_12))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            for (short i_6 = 3; i_6 < 14; i_6 += 3) 
            {
                {
                    arr_17 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_6 - 2])) > (((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) var_14))))));
                    arr_18 [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65213)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))) : (1554431058930158329ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4]))) / (16892313014779393287ULL))) : (((9569981176583700610ULL) << (((((/* implicit */int) (short)-10351)) + (10410))))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((arr_19 [i_4] [i_4] [i_4] [i_7]) + (arr_19 [i_4] [i_4] [i_6] [i_7])))));
                                var_20 = (+(((((/* implicit */_Bool) arr_16 [i_4] [(unsigned short)0] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_4]))) : (-2389020625047258863LL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        for (int i_10 = 0; i_10 < 15; i_10 += 2) 
                        {
                            {
                                arr_27 [i_10] [(unsigned short)5] [(unsigned short)5] [i_5] [i_4] = ((/* implicit */unsigned long long int) (+(6614798835179418912LL)));
                                var_21 = ((((/* implicit */_Bool) arr_21 [8ULL] [i_5] [i_5] [i_9] [i_9] [4ULL])) ? (arr_25 [i_6 - 2] [i_6] [i_6 + 1] [i_6 + 1] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5]))));
                                arr_28 [i_4] [i_4] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_4] [i_4] [i_6 - 1] [i_9] [i_10]))) & (arr_25 [i_10] [i_9] [i_6 - 1] [i_5] [13ULL])))) && (((/* implicit */_Bool) (short)-32533))));
                                var_22 = ((/* implicit */long long int) 1869569600229587640ULL);
                                arr_29 [i_4] [i_10] = ((/* implicit */unsigned short) ((int) arr_12 [i_10]));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_11 = 0; i_11 < 15; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 3; i_12 < 11; i_12 += 4) 
            {
                for (signed char i_13 = 0; i_13 < 15; i_13 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_14 = 2; i_14 < 14; i_14 += 3) 
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7223388832435839916ULL)) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) (!(((/* implicit */_Bool) -1646604073)))))));
                            arr_39 [i_14 + 1] [11ULL] [i_12] [i_11] [i_4] = ((/* implicit */long long int) (short)10350);
                        }
                        /* LoopSeq 1 */
                        for (short i_15 = 1; i_15 < 14; i_15 += 1) 
                        {
                            arr_43 [i_15] [i_11] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [(short)12] [(short)12] [(short)12] [i_15 - 1]))));
                            arr_44 [i_15] [i_11] [i_11] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))) : (4767679537622454620ULL))) << (((((((/* implicit */_Bool) 824906307582299348ULL)) ? (2869448398099682747LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47950))))) - (2869448398099682719LL)))));
                            arr_45 [i_4] [i_4] [i_4] [9ULL] [i_4] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_4] [i_4] [i_15] [14ULL] [i_4] [i_4])) ? (arr_33 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) arr_42 [i_15 + 1] [10] [i_12 + 4] [i_11] [i_4]))))) ? (((/* implicit */int) arr_21 [i_4] [i_4] [0LL] [i_15] [i_15 + 1] [i_15])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)43470)) && (((/* implicit */_Bool) (unsigned short)22086)))))));
                            var_24 |= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_4] [i_4] [i_4] [i_12 + 1] [i_13] [i_15 - 1])) || (((/* implicit */_Bool) var_5)))))));
                        }
                        arr_46 [5ULL] [i_11] [13ULL] [i_11] [i_11] [i_11] &= ((((/* implicit */_Bool) arr_34 [i_11] [i_12 + 2] [i_12 + 2] [i_12 + 1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
                        arr_47 [i_13] [i_11] [i_11] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) 16892313014779393287ULL)) || (((/* implicit */_Bool) 8409918755209486055ULL)))));
                        var_25 = ((/* implicit */unsigned long long int) ((((8409918755209486055ULL) < (16892313014779393302ULL))) ? (((((/* implicit */int) arr_20 [i_13] [i_11] [i_13])) & (((/* implicit */int) arr_24 [(unsigned short)7] [i_11] [(signed char)7] [i_11])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_12)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_16 = 0; i_16 < 10; i_16 += 4) 
    {
        var_26 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43446))) : (17494509677192245093ULL)));
        arr_50 [i_16] = ((((unsigned long long int) 16709271808031047774ULL)) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)17593)) && (((/* implicit */_Bool) 12977443180917613771ULL)))))));
        var_27 -= ((/* implicit */unsigned long long int) -979546885);
    }
    var_28 = ((/* implicit */int) var_5);
}

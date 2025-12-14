/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10185
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [17LL] [i_2] = ((/* implicit */short) var_14);
                    arr_11 [i_1] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_1 + 1] [i_1 - 1] [i_2 + 2] [i_2 - 1])) > (967104854)))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (-2300436941103706531LL)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((long long int) (unsigned short)16776));
                                var_20 &= ((max((((/* implicit */unsigned int) (unsigned short)25205)), (((((/* implicit */_Bool) 965469860017374184ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)216))) : (2360671704U))))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_16 [i_4] [i_4] [i_4] [i_4] [i_1 - 2] [i_1])) : (((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_2] [i_1 - 2] [i_0]))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [(_Bool)1] = ((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_2] [16] [i_2 - 2])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40)))))) != (((((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)1] [i_1 + 1] [(signed char)4])) ? (2136956795092982739ULL) : (((/* implicit */unsigned long long int) 1695592951U)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((long long int) 2U));
    var_22 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((short) 6789890234303468538LL))), ((~(12297609626012556703ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12U)) ? (((/* implicit */int) (short)1016)) : (-1))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        var_23 = ((/* implicit */unsigned int) var_2);
        arr_21 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) 654847709)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_20 [i_5])) : (arr_19 [i_5]))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (4098549482693908029ULL)))));
        arr_22 [i_5] [16ULL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        var_24 = ((/* implicit */unsigned long long int) ((short) arr_24 [i_6]));
        var_25 *= ((/* implicit */unsigned short) ((12793339381296629905ULL) << (((/* implicit */int) (_Bool)1))));
    }
    for (int i_7 = 0; i_7 < 21; i_7 += 3) 
    {
        var_26 |= max(((~(max((arr_19 [i_7]), (((/* implicit */unsigned long long int) arr_27 [i_7])))))), (((unsigned long long int) (short)-24617)));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [i_7] [i_7]))))) - (((((/* implicit */unsigned long long int) 654847709)) / (5653404692412921721ULL)))));
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)122))))))) ? ((~(((((/* implicit */int) var_4)) / (((/* implicit */int) arr_25 [i_7])))))) : (((((/* implicit */int) arr_26 [i_7] [i_7])) & (((/* implicit */int) arr_26 [i_7] [i_7]))))));
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (((-(max((((/* implicit */unsigned long long int) var_3)), (arr_24 [i_7]))))) + (((/* implicit */unsigned long long int) ((2599374364U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))))))));
    }
    for (unsigned short i_8 = 1; i_8 < 21; i_8 += 4) 
    {
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)7589)) + (var_13)))) / (5653404692412921707ULL)));
        arr_31 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_24 [i_8 + 1])))) ? (((((/* implicit */int) (unsigned short)25200)) - (((/* implicit */int) (short)5080)))) : (((/* implicit */int) var_6))));
        /* LoopSeq 4 */
        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            arr_35 [i_8] [i_8] = (~(((/* implicit */int) (unsigned char)213)));
            arr_36 [i_8] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (short)-7590))))))) ? (1695592963U) : (arr_23 [i_8])));
        }
        for (unsigned long long int i_10 = 2; i_10 < 23; i_10 += 4) 
        {
            arr_39 [i_8] = ((/* implicit */int) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) 1106018286U)) || (((/* implicit */_Bool) (short)-26729))))), (var_8))), (((/* implicit */long long int) ((min((12480615601451410339ULL), (((/* implicit */unsigned long long int) (signed char)111)))) != (((/* implicit */unsigned long long int) 1755843948U)))))));
            var_31 = ((/* implicit */long long int) -413978538);
        }
        for (short i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                arr_46 [i_8] [i_11] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)496)) ? (528482304U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2342)))));
                var_32 = (~(min((((/* implicit */int) (_Bool)1)), (-1252048662))));
                arr_47 [i_8] [i_8 - 1] [i_11] [i_12] = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_29 [i_8 - 1] [i_8])) / (var_10)))));
            }
            var_33 = ((arr_24 [i_8]) ^ (min((((/* implicit */unsigned long long int) (short)-16384)), (3499213607868929085ULL))));
            var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) 9003106319129897761LL))));
        }
        for (unsigned short i_13 = 2; i_13 < 21; i_13 += 1) 
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 24; i_14 += 1) 
            {
                for (long long int i_15 = 0; i_15 < 24; i_15 += 4) 
                {
                    {
                        var_35 = ((/* implicit */long long int) ((int) (~(2147483644))));
                        arr_55 [i_8] [11LL] [i_14] [i_15] [i_8] [i_8] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) -413978522)), (18446744073709551615ULL)));
                        arr_56 [i_8] [i_13 - 1] [i_15] [i_15] = ((/* implicit */unsigned char) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)61342))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 4) 
                        {
                            var_36 += ((/* implicit */unsigned short) var_9);
                            var_37 = ((/* implicit */unsigned long long int) max((max((-413978526), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((arr_57 [i_8]), (arr_57 [i_8]))))));
                            arr_59 [i_16] [i_8] [i_14] [i_13] [i_8] [i_8] = ((/* implicit */unsigned short) max((-2147483640), (((/* implicit */int) (_Bool)1))));
                            var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) arr_49 [i_14] [i_15]))));
                            arr_60 [i_8] [i_16] [i_14] [i_15] [i_16] |= ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) arr_44 [i_8] [i_15] [i_15] [i_8])), (arr_23 [18])))));
                        }
                    }
                } 
            } 
            var_39 = ((/* implicit */short) (!((!((_Bool)1)))));
        }
    }
}

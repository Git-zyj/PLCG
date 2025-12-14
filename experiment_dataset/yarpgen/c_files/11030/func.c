/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11030
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_16 *= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)208))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (unsigned short i_3 = 2; i_3 < 13; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_4] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 1078309617)))))) == (((/* implicit */int) arr_12 [i_3 - 2] [i_1] [i_3 - 2] [i_3] [i_1 + 2]))));
                            arr_15 [i_1] [i_4] [i_1] [i_1] [i_4] [0] = ((/* implicit */long long int) (unsigned char)32);
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_1] [7] = ((/* implicit */short) min(((+(((((/* implicit */int) (unsigned char)208)) * (((/* implicit */int) var_15)))))), (((/* implicit */int) ((18446744073709551600ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (1624997798U) : (var_2)))))))));
                            arr_17 [i_0] [i_1] [i_2] [i_3] = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (short)0)) ? (5892233902542782051LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) ? (((unsigned int) (unsigned char)218)) : (((/* implicit */unsigned int) (+(((((/* implicit */int) var_4)) | (((/* implicit */int) var_9))))))));
                        }
                    } 
                } 
            } 
            var_17 += ((/* implicit */short) ((min((3905800815U), (1624997798U))) != (max((1624997798U), (((/* implicit */unsigned int) (short)13614))))));
        }
        for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            var_18 = ((/* implicit */int) var_6);
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        {
                            arr_30 [i_0] [i_7] = (~(max((((/* implicit */unsigned long long int) (signed char)-76)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (0ULL))))));
                            var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0 + 2] [i_5] [i_0 + 2] [(signed char)13] [i_8]))) * (3827767596U)))) ? ((-(((/* implicit */int) (unsigned char)228)))) : (((((/* implicit */int) var_4)) / (((/* implicit */int) (unsigned char)231))))));
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min((((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)163))) ^ (749038705U))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 - 2])) - (((/* implicit */int) arr_0 [i_0 + 2]))))))))));
                        }
                    } 
                } 
                arr_31 [i_0] [i_5] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_8 [i_6] [i_5] [(short)13] [i_6])))) ? (max((((/* implicit */unsigned long long int) var_4)), (arr_8 [i_0] [i_5] [(short)1] [(short)1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12936)))))) ? (((/* implicit */long long int) max((min((((/* implicit */unsigned int) arr_26 [i_0] [i_5] [i_5] [i_6] [i_0] [i_5] [i_5])), (var_2))), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) max((9619181843935440713ULL), (((/* implicit */unsigned long long int) 2101933166))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-28))) : (((((/* implicit */_Bool) 3545928568U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)40))) : (9172264508279426110LL)))))));
            }
            /* LoopSeq 2 */
            for (int i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                var_21 = ((/* implicit */long long int) var_4);
                arr_35 [i_0] [i_5] = min((((((((/* implicit */int) (short)0)) > (((/* implicit */int) (short)29909)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)58)) >= (((/* implicit */int) var_1)))))) : (0U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)148))) | (arr_24 [i_5] [i_0]))))))));
            }
            for (signed char i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 16; i_11 += 4) 
                {
                    for (unsigned int i_12 = 3; i_12 < 13; i_12 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(arr_4 [i_0] [i_5] [3])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [13ULL] [i_5]))) : (max((2923405649U), (((/* implicit */unsigned int) (!(arr_42 [7LL]))))))));
                            var_23 = ((/* implicit */unsigned char) min((max((((((var_0) + (9223372036854775807LL))) >> (((((/* implicit */int) var_5)) - (30572))))), (((/* implicit */long long int) (unsigned short)65456)))), (((/* implicit */long long int) ((short) (((_Bool)1) ? (((/* implicit */int) (signed char)0)) : (var_10)))))));
                            arr_45 [i_0] [i_5] = ((/* implicit */unsigned int) ((int) max((max((var_2), (((/* implicit */unsigned int) (short)16384)))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))))));
                            var_24 = 0U;
                        }
                    } 
                } 
                var_25 -= min((((long long int) 2893413011654235329LL)), (((/* implicit */long long int) max((2147483647), ((+(var_10)))))));
                arr_46 [i_0 - 1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44146)) ? (arr_5 [i_0 - 1]) : (var_0)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_2))))));
                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)221))) - (0ULL))))));
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 16; i_13 += 2) 
        {
            for (unsigned int i_14 = 0; i_14 < 16; i_14 += 4) 
            {
                {
                    var_27 -= 0U;
                    arr_54 [12U] [10U] [i_0] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) 5523644154230866939LL)) ? (arr_44 [i_0 + 2] [i_0] [i_0] [(short)9] [i_14]) : (((/* implicit */long long int) arr_4 [i_0] [i_13] [i_0 - 2])))));
                    arr_55 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((-1900289570) - (min((-1319596784), (((/* implicit */int) (signed char)-21))))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (int i_15 = 0; i_15 < 22; i_15 += 2) 
    {
        var_28 = ((/* implicit */unsigned int) (~(max((var_3), (((/* implicit */unsigned long long int) var_13))))));
        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_57 [i_15] [i_15]) + (((/* implicit */int) max(((unsigned short)1568), (((/* implicit */unsigned short) (unsigned char)200)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1319596784)))))) : (min((((/* implicit */unsigned long long int) 2669969497U)), (15102917737405865107ULL))))))));
    }
    for (unsigned short i_16 = 0; i_16 < 24; i_16 += 4) 
    {
        var_30 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56))) <= (2324995086U)));
        var_31 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1624997792U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1421166916U))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)100))) >= (arr_60 [i_16])))))) == (((((((/* implicit */_Bool) var_10)) ? (1879048192) : (1956772673))) & ((+(((/* implicit */int) (_Bool)0))))))));
    }
    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (var_3))))))))))));
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 12; i_17 += 2) 
    {
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            {
                var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */long long int) (((+(((/* implicit */int) arr_65 [6ULL])))) & (1016240862)))) ^ (((((/* implicit */_Bool) var_12)) ? (arr_5 [i_18]) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))))));
                arr_67 [i_18] [i_18] [i_18] = ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned short)33866)) : (((/* implicit */int) (unsigned short)40377)));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186461
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
    var_19 = (~((-(min((15783497588747560404ULL), (2663246484961991212ULL))))));
    var_20 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_21 += ((/* implicit */_Bool) arr_2 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] = ((/* implicit */unsigned long long int) ((min(((-(-1881946820945195195LL))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))) & (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) < (var_0)))))))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(min((arr_12 [i_0] [i_0] [i_1] [i_3] [i_4]), (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2] [i_1]))))))) > (((((/* implicit */_Bool) 2663246484961991202ULL)) ? (15783497588747560416ULL) : (((unsigned long long int) 15783497588747560374ULL))))));
                                var_23 = ((/* implicit */unsigned long long int) 8796093022207LL);
                                var_24 = ((/* implicit */short) (-((-(((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1] [i_3] [i_3 + 1] [i_3] [i_3 + 1]))))));
                                var_25 = ((/* implicit */unsigned long long int) ((min(((-(arr_5 [i_0] [i_0] [i_0] [i_1]))), (((/* implicit */unsigned int) var_5)))) - (((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */signed char) var_9)), (var_11)))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)62)), ((short)3846)))), ((-(17601115775037017838ULL)))));
                }
            } 
        } 
        var_27 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 3105523606U))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 3105523587U)))))) : (((unsigned int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
        var_28 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */int) (short)2068)) - (((/* implicit */int) arr_1 [i_0])))) << (((/* implicit */int) ((arr_4 [i_0] [i_0] [i_0]) > (15783497588747560344ULL))))))) != (((long long int) ((unsigned long long int) arr_4 [i_0] [i_0] [i_0])))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (-(min((arr_7 [(short)20] [i_5] [i_5 - 1] [i_5 - 1]), (10030798384286772675ULL))))))));
        arr_18 [i_5 - 1] [i_5] = ((((/* implicit */_Bool) (((+(17727914943738973377ULL))) * (18446744073709551614ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((min((265110565U), (((/* implicit */unsigned int) (short)13498)))) != (((/* implicit */unsigned int) min((arr_15 [i_5]), (((/* implicit */int) arr_2 [i_5]))))))))) : (arr_12 [i_5] [i_5] [8U] [i_5] [i_5]));
        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_8 [i_5] [i_5] [i_5] [i_5])), ((+(var_0)))))))))));
        arr_19 [i_5 - 1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) | (((/* implicit */unsigned long long int) arr_12 [i_5 - 1] [i_5] [(unsigned short)4] [i_5] [i_5]))))) ? (((((/* implicit */_Bool) arr_12 [i_5] [i_5] [(_Bool)1] [i_5] [i_5])) ? (2663246484961991243ULL) : (var_13))) : (((unsigned long long int) var_5))))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            for (long long int i_7 = 1; i_7 < 18; i_7 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_5))) - (var_7)));
                        arr_28 [i_5 - 1] [i_6] [i_6] [i_6] [i_7 + 4] [i_8] = ((/* implicit */_Bool) (~(9ULL)));
                    }
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        var_32 += ((/* implicit */unsigned int) ((((((/* implicit */int) arr_26 [i_5 - 1] [21LL] [i_7] [14LL] [14LL])) - (((/* implicit */int) var_6)))) != (((((/* implicit */int) arr_8 [i_5] [i_5] [i_7 - 1] [i_5])) / (((/* implicit */int) arr_26 [i_5] [i_6] [i_7] [(unsigned short)2] [i_9]))))));
                        arr_31 [i_5] [(short)5] [i_7 + 4] [i_7] [i_9] = (+(((/* implicit */int) ((((/* implicit */int) (signed char)105)) == (((/* implicit */int) arr_13 [8]))))));
                    }
                    for (unsigned int i_10 = 2; i_10 < 21; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            arr_36 [i_5] [i_5] [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_5] = ((/* implicit */unsigned long long int) arr_15 [i_10]);
                            arr_37 [i_7] [i_10] [i_7] [i_6] [i_5] = ((((15906372117416836296ULL) * (((/* implicit */unsigned long long int) arr_5 [(unsigned short)8] [i_11] [(unsigned short)8] [i_11])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_5 [i_5] [i_5] [12U] [i_11])))));
                            arr_38 [i_5] [i_6] [i_7 + 3] [i_10 - 2] [i_5 - 1] [i_11] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (arr_30 [i_5] [i_5 - 1] [i_7 - 1] [i_10 - 2])))) ? (2433041041564524802ULL) : (((/* implicit */unsigned long long int) min((6322191407963550271LL), (((/* implicit */long long int) arr_30 [i_5] [i_5 - 1] [i_7 + 1] [i_10 - 2])))))));
                        }
                        var_33 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_0 [i_5 - 1] [i_7 + 3])))) != ((~(((/* implicit */int) arr_0 [i_5 - 1] [i_7 + 4]))))));
                    }
                    var_34 = ((/* implicit */long long int) min(((~(arr_32 [i_5] [i_7 + 2] [i_7 + 4] [i_7]))), ((-(arr_32 [i_6] [i_7 + 2] [i_6] [i_6])))));
                    arr_39 [i_5] [i_5] [i_7] = ((/* implicit */long long int) min((((/* implicit */int) (short)7671)), ((-2147483647 - 1))));
                }
            } 
        } 
    }
    var_35 = ((/* implicit */short) var_13);
}

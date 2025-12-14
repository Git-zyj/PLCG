/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154440
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 693143455))) ? (((((/* implicit */int) arr_1 [i_2])) / (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */int) arr_0 [i_0] [i_0])) / (((/* implicit */int) arr_6 [i_0] [i_0] [i_1]))))));
                    arr_8 [10LL] [i_2] = ((/* implicit */long long int) ((short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) < (var_18)))) & (((/* implicit */int) arr_0 [i_0] [(short)4])))));
                    arr_9 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((signed char) (((!(((/* implicit */_Bool) (-2147483647 - 1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)0))))) : (min((var_16), (var_16))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) max((3928348455U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-8621988797670968652LL)))) ? (((/* implicit */int) (unsigned short)65504)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)25441)) != (-1024827521)))))))));
                                var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((signed char) arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) 3928348455U)) && (((/* implicit */_Bool) arr_10 [i_0] [9])))))))) : (arr_5 [i_3] [i_1] [i_2])));
                                var_23 *= ((/* implicit */unsigned int) max((((arr_7 [i_0] [16LL] [i_2] [16ULL]) | (arr_7 [i_0] [i_0] [0] [6LL]))), (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) arr_1 [i_4 + 3])))))));
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) min((max((arr_11 [i_4 - 2]), (var_7))), (max((arr_11 [i_4 + 4]), (arr_11 [i_4 + 1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_8))));
    /* LoopSeq 2 */
    for (unsigned short i_5 = 4; i_5 < 9; i_5 += 3) 
    {
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) var_18))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_6 = 1; i_6 < 11; i_6 += 2) 
        {
            var_27 = (~((~(arr_5 [(short)19] [(signed char)10] [(unsigned char)17]))));
            var_28 = ((/* implicit */long long int) (~(245159599U)));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_25 [i_5] [i_5] = ((/* implicit */int) ((_Bool) ((short) -2147483641)));
            arr_26 [i_5] = ((/* implicit */unsigned char) (~((((!(((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_7] [(short)19] [i_5] [(signed char)20])))) ? (((((/* implicit */_Bool) var_6)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))))));
        }
        var_29 = ((/* implicit */unsigned int) 8621988797670968651LL);
    }
    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
    {
        arr_30 [10LL] [(unsigned short)4] |= ((/* implicit */unsigned long long int) arr_19 [2] [i_8]);
        arr_31 [6ULL] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((7215902579645653909LL), (((/* implicit */long long int) var_3))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [20] [i_8] [12ULL] [i_8] [20]))) / (var_9))) : ((~(13514041671428523126ULL))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_8] [0] [(unsigned char)6])) ? (var_9) : (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_16 [(_Bool)1])))));
        var_30 = ((/* implicit */unsigned long long int) ((short) arr_3 [(signed char)7] [0]));
    }
}

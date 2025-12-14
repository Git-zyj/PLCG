/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107626
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */int) max((var_17), ((~((+(arr_2 [i_0 - 1] [i_0 + 1])))))));
                var_18 = ((((/* implicit */_Bool) (+((+(-31438663)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (130023424) : (-176263991))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) arr_5 [i_4] [i_2])) : (((/* implicit */int) arr_5 [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) (-(-310519898)))) : (((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (14499823848801832946ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [0])))))))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2011344026)) ? (4170173886833825588ULL) : (((/* implicit */unsigned long long int) var_2))))) ? ((+(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1295900461)) ? (arr_7 [i_4] [i_4]) : (((/* implicit */unsigned long long int) 5058918089545285537LL))))) ? ((-(-596706966))) : (var_0))))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_21 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */unsigned long long int) (+(1326531085152098406LL)))) : (((((/* implicit */_Bool) 17194893067079206718ULL)) ? (var_16) : (((/* implicit */unsigned long long int) arr_12 [i_3] [i_3]))))));
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7666037724002371504LL)) ? ((-(694064297))) : (-712927863)));
                                arr_20 [i_2] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_6))))));
                                arr_21 [i_2] [i_3] [i_4] [i_3] [6U] [i_4] [i_6] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_3 [i_2] [i_3] [i_4])))) ? (((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_4] [i_6])) ? (((/* implicit */unsigned long long int) var_2)) : (arr_15 [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_15 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6] [i_5] [i_5] [i_5] [i_3] [i_3] [i_2]))) : (1320584393U))) : (((/* implicit */unsigned int) -83928532)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_0 [i_2])) ? (14802441105504916251ULL) : (((/* implicit */unsigned long long int) arr_0 [i_2])))))))));
    }
    var_24 = var_12;
    /* LoopSeq 1 */
    for (long long int i_7 = 1; i_7 < 13; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 12; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 2) 
            {
                {
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_13)) ? (arr_29 [12U]) : (arr_0 [i_7])))))) ? (((/* implicit */unsigned long long int) (+(913357313U)))) : ((~((+(var_1))))))))));
                    arr_30 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (536870908) : (1868395112)))) ? ((~(6201546876863788359LL))) : ((~(arr_26 [i_7 + 1] [i_8 + 1])))));
                }
            } 
        } 
        var_26 = (~(((((/* implicit */_Bool) var_15)) ? (-736393729) : (arr_2 [i_7 - 1] [i_7 + 1]))));
        var_27 = ((/* implicit */int) (+((+(((((/* implicit */_Bool) arr_3 [i_7] [i_7] [i_7])) ? (-2937974515133012680LL) : (((/* implicit */long long int) 3945590242U))))))));
        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2467139559U)) ? (((/* implicit */int) arr_27 [i_7 + 1] [8LL])) : (var_8)))) ? ((~(-2072207277))) : ((-(((/* implicit */int) (signed char)-1)))))))));
    }
}

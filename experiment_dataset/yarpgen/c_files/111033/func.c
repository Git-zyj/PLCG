/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111033
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_14 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0)))))))));
            var_15 = ((/* implicit */unsigned int) max((var_15), (3135317035U)));
            var_16 = ((min((var_6), (((/* implicit */long long int) arr_1 [i_1])))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) arr_1 [i_1])) : (arr_0 [i_0] [i_1])))));
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_1 [i_1]))));
        }
        var_18 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
    }
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        var_19 *= ((/* implicit */unsigned int) arr_4 [i_2]);
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 14; i_3 += 1) 
        {
            for (unsigned int i_4 = 1; i_4 < 13; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) arr_7 [i_4] [i_3] [i_2]);
                    arr_10 [i_2] = arr_8 [i_2] [i_3] [i_2];
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? ((+(((-1563102762570564870LL) - (((/* implicit */long long int) arr_16 [i_2] [i_3] [i_4] [i_5] [i_6])))))) : (((((((/* implicit */_Bool) arr_5 [i_2] [i_3 - 1])) && (((/* implicit */_Bool) 125867644)))) ? (min((1563102762570564870LL), (((/* implicit */long long int) (unsigned short)24213)))) : (((/* implicit */long long int) 1048874295U))))));
                                var_22 = max((arr_16 [i_2] [i_2] [i_2] [i_5] [i_6]), (((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
                            }
                        } 
                    } 
                    var_23 *= ((/* implicit */unsigned int) var_6);
                    arr_17 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_15 [i_3 - 1] [i_3] [i_3] [i_3] [i_3 - 1] [i_3] [i_3 - 1]);
                }
            } 
        } 
    }
    for (unsigned int i_7 = 1; i_7 < 19; i_7 += 2) 
    {
        arr_20 [i_7] = ((/* implicit */int) min(((+(arr_19 [i_7] [i_7]))), (((/* implicit */long long int) (+(262143U))))));
        var_24 = ((/* implicit */long long int) max((var_24), (((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), ((~(5401530114193124288LL)))))) ? (var_7) : (var_7)))));
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) arr_18 [10LL] [10LL]))));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7158467338809471357LL)) ? (-5669034798955155984LL) : (((/* implicit */long long int) 3524254798U))));
    }
    var_27 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))), (((((/* implicit */_Bool) 1099338368083062377LL)) ? (((/* implicit */long long int) 0U)) : ((~(256LL)))))));
    var_28 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)52418))));
}

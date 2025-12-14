/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136120
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_1 [i_0])))))))), (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0])))))))));
        var_17 = ((/* implicit */signed char) (-(((unsigned int) arr_1 [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (unsigned int i_3 = 1; i_3 < 11; i_3 += 1) 
            {
                {
                    arr_10 [i_1] [i_1] [4LL] [i_2] &= ((/* implicit */unsigned short) (_Bool)1);
                    arr_11 [i_1] [i_2] [i_1] [i_3] = (!((_Bool)1));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_19 [i_1] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) ((var_10) | (min((-4287801011432126198LL), (((/* implicit */long long int) (unsigned short)65516))))));
                                var_18 += ((/* implicit */_Bool) var_5);
                                arr_20 [i_1] [i_1] [i_1] [i_1] = arr_13 [i_4] [(_Bool)1] [i_3] [i_4] [i_1];
                            }
                        } 
                    } 
                    arr_21 [i_1] = ((/* implicit */unsigned short) var_6);
                }
            } 
        } 
        arr_22 [i_1] = ((/* implicit */int) (((((+(1466615248))) != (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) -4287801011432126198LL)) ? (((/* implicit */int) var_7)) : (var_15))), (((/* implicit */int) (_Bool)1))))) : (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (-2147483647 - 1)))))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            for (long long int i_7 = 2; i_7 < 11; i_7 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) arr_14 [i_1] [i_1] [(_Bool)1] [i_1] [i_1]);
                    arr_30 [12LL] [i_6] [i_7] |= ((/* implicit */unsigned short) min((((_Bool) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))), (arr_6 [i_1] [i_6] [i_1])));
                    arr_31 [i_1] [i_7 + 1] [i_6] [i_1] = ((/* implicit */unsigned short) (((!(arr_6 [i_7 + 1] [i_7 - 2] [i_7 - 2]))) ? (4287801011432126190LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_8 [i_6] [i_6] [i_1] [i_1]))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) 9223372036854775807LL))));
    var_21 -= ((/* implicit */unsigned int) var_4);
}

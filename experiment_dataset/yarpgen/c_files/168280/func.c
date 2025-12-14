/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168280
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (arr_2 [i_0] [5U]) : (arr_1 [i_0 - 1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7))))));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((arr_1 [i_0 + 2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))))));
    }
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (var_3));
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1]))))) || (((/* implicit */_Bool) (((_Bool)1) ? (6000652001724435680ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))))));
        var_16 = (-(((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_1]))));
        arr_6 [i_1] = ((/* implicit */short) var_7);
    }
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    arr_17 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2]))) + (var_3)))) && ((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_2] [i_2])))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_2] [i_3] [(short)7])) >= (((/* implicit */int) ((_Bool) arr_4 [i_2])))));
                        arr_20 [4LL] [4LL] [4LL] [i_4] [4LL] [i_4] &= ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)1))));
                        arr_21 [i_2] [i_3] [i_4] [i_3] [i_4] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) (short)6714)) : (((/* implicit */int) arr_11 [i_4]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_11 [i_4])))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-2)) <= ((-2147483647 - 1)))))));
                        var_18 = var_10;
                    }
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            {
                                var_19 |= 15555624162092259762ULL;
                                arr_27 [(_Bool)1] [i_3] [i_4] [(_Bool)1] [i_7] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-733229916)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_8))));
        var_21 = ((/* implicit */_Bool) var_4);
        arr_28 [i_2] = ((/* implicit */unsigned short) ((((var_1) ? (((/* implicit */unsigned long long int) arr_8 [i_2])) : (var_12))) << (((arr_14 [i_2] [i_2] [i_2] [i_2]) + (245836448)))));
    }
}

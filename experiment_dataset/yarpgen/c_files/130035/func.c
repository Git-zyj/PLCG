/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130035
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) arr_2 [i_0] [4LL]);
        var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0] [(signed char)17]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)13]))))))));
        arr_3 [i_0] [(signed char)14] = ((/* implicit */signed char) var_3);
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) % (((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_22 = ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (var_3));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 14; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) arr_2 [i_1] [i_1]);
        var_23 = ((/* implicit */short) ((long long int) (unsigned short)3583));
    }
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    arr_13 [i_3] [i_2] [10LL] [i_4] = ((/* implicit */long long int) arr_4 [i_4]);
                    var_24 = ((((/* implicit */_Bool) ((var_11) << (((((-2752177273227821819LL) + (2752177273227821872LL))) - (53LL)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) min((arr_5 [i_2]), (arr_11 [i_2] [i_4] [i_2] [i_4]))))))) : (arr_0 [i_2] [(unsigned short)21]));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (long long int i_6 = 2; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_18 [i_2] [i_3] [i_4] [i_5] [i_2] = ((/* implicit */_Bool) (unsigned short)9843);
                                arr_19 [i_2] [i_5] [i_4] [i_3] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2] [i_2 - 1]))));
                                var_25 ^= ((/* implicit */signed char) (+(var_16)));
                                var_26 ^= ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_3]))) * (min((arr_10 [i_2]), (((/* implicit */unsigned int) max((arr_4 [i_3]), ((unsigned short)3591))))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148950
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_20 |= max((((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(signed char)0]))) < ((-9223372036854775807LL - 1LL))))), (((((/* implicit */int) arr_0 [i_0])) << (((var_11) - (1067936731U)))))))), (max((((/* implicit */long long int) min((arr_1 [i_1] [(_Bool)1]), (((/* implicit */unsigned short) var_9))))), (((arr_2 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_0] [9U] [i_3] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_8 [11LL] [i_2 + 1] [11LL] [i_3]))) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 2063751834)))) : (min((arr_6 [i_0] [i_2 + 1] [i_2 + 1]), (((/* implicit */long long int) arr_7 [i_0] [i_2 - 1] [i_2 - 1] [2U]))))));
                            var_21 -= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [(signed char)11] [(unsigned short)5] [i_3]))) >= (arr_6 [i_0] [i_2 + 1] [i_2 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 |= ((/* implicit */unsigned short) (_Bool)1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        var_23 = ((/* implicit */signed char) -2063751850);
        var_24 *= ((/* implicit */signed char) ((3739275900911902849LL) & (((/* implicit */long long int) arr_11 [i_4]))));
    }
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        var_25 -= ((/* implicit */unsigned char) min((1887613619U), (((/* implicit */unsigned int) max((-2063751835), (((/* implicit */int) var_5)))))));
        var_26 |= ((/* implicit */_Bool) min(((~(min((arr_15 [i_5]), (((/* implicit */long long int) arr_7 [i_5] [i_5] [i_5] [i_5])))))), (((/* implicit */long long int) arr_3 [i_5]))));
        var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((((/* implicit */int) arr_10 [i_5])), (2118202851)))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) var_18))))), (arr_13 [i_5] [i_5]))))));
        var_28 -= ((/* implicit */unsigned char) ((max((arr_12 [i_5]), (arr_12 [i_5]))) >> (((((int) arr_7 [i_5] [i_5] [i_5] [i_5])) - (1815)))));
        var_29 = ((/* implicit */unsigned int) arr_3 [i_5]);
    }
    for (int i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_7 = 1; i_7 < 14; i_7 += 4) 
        {
            for (short i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            {
                                var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_22 [i_7] [i_7 + 4] [i_7 + 3]))) ? ((-(arr_23 [i_6] [i_7] [i_7 + 1] [0U]))) : (((/* implicit */long long int) ((int) min((((/* implicit */long long int) (_Bool)1)), (1011438893849206089LL)))))));
                                arr_31 [i_6] [i_7] [i_6] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned int) arr_11 [i_6])), (var_1))))) ? (((unsigned long long int) ((unsigned long long int) arr_20 [i_6]))) : (((/* implicit */unsigned long long int) arr_27 [i_10] [i_8] [i_7] [(_Bool)1]))));
                                arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] |= ((/* implicit */_Bool) ((short) ((long long int) arr_28 [i_7 + 3] [i_10] [i_10] [i_10])));
                            }
                        } 
                    } 
                    var_31 ^= ((/* implicit */long long int) (-((-((~(((/* implicit */int) arr_17 [i_6] [i_7 - 1]))))))));
                }
            } 
        } 
        var_32 *= ((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_17 [i_6] [i_6])), (arr_24 [i_6] [i_6] [i_6]))), (((/* implicit */long long int) arr_25 [i_6] [i_6] [2LL] [i_6] [i_6] [i_6]))));
    }
}

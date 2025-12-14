/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139521
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
    for (int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned short) 1822633988U);
        var_18 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-17)) : (arr_1 [i_0])))) ? ((+(1822634007U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [(unsigned short)1])) ? (((/* implicit */int) (short)-28750)) : (arr_1 [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_1]))))), (arr_4 [i_1]))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */signed char) (-(18446744073709551615ULL)));
            arr_10 [i_1] [14ULL] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_5 [i_1]))));
        }
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
        {
            var_21 *= ((/* implicit */unsigned char) (+(((arr_11 [i_3] [i_1]) / ((+(2472333333U)))))));
            arr_14 [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 1822633968U)) ? (arr_9 [i_1]) : (arr_9 [i_1])))));
        }
    }
    var_22 = ((/* implicit */int) var_8);
    /* LoopSeq 2 */
    for (short i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) 4294901760LL);
        var_24 |= ((/* implicit */unsigned int) arr_12 [i_4] [i_4]);
    }
    for (short i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        var_25 = ((/* implicit */int) 1822633963U);
        var_26 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_12 [i_5] [i_5])) ? (((/* implicit */long long int) min(((-2147483647 - 1)), (((/* implicit */int) arr_7 [i_5] [i_5] [i_5]))))) : (((arr_4 [(signed char)10]) | (((/* implicit */long long int) 2472333327U))))))));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                {
                    var_27 = ((/* implicit */int) (short)28757);
                    var_28 = ((/* implicit */unsigned int) max(((!((!(((/* implicit */_Bool) arr_11 [i_6] [i_5])))))), ((!(((/* implicit */_Bool) (short)-20724))))));
                    var_29 = ((/* implicit */signed char) max((((/* implicit */int) (unsigned char)16)), (-785808890)));
                }
            } 
        } 
    }
}

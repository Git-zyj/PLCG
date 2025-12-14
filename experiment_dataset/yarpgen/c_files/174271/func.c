/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174271
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
    for (int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */long long int) arr_0 [i_0 + 1] [i_0 - 1]);
                /* LoopSeq 3 */
                for (int i_2 = 1; i_2 < 20; i_2 += 1) /* same iter space */
                {
                    var_12 -= ((/* implicit */unsigned int) ((unsigned short) var_0));
                    var_13 = ((/* implicit */short) min((((/* implicit */long long int) arr_3 [i_0 + 1] [i_0 - 1])), (((((/* implicit */_Bool) (short)20838)) ? (((/* implicit */long long int) ((/* implicit */int) (short)13))) : ((-9223372036854775807LL - 1LL))))));
                }
                for (int i_3 = 1; i_3 < 20; i_3 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */int) 9223372036854775807LL);
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */signed char) ((int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3] [i_3])) || (((/* implicit */_Bool) (unsigned short)34165))))) & (((((/* implicit */int) arr_0 [i_0] [15U])) * (((/* implicit */int) var_5)))))));
                        var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) % (max((((/* implicit */long long int) var_6)), (arr_6 [i_1])))));
                        var_17 = ((/* implicit */unsigned char) ((((unsigned int) ((((/* implicit */_Bool) arr_10 [i_4] [i_3] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_3 + 1] [i_3]))) : (0U)))) & (var_3)));
                    }
                }
                for (int i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
                {
                    var_18 = (+(((int) ((((/* implicit */_Bool) arr_3 [(short)14] [i_5 + 2])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_5])) : (((/* implicit */int) var_7))))));
                    var_19 = ((/* implicit */short) arr_7 [i_5] [i_5]);
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)34165)) ? (((/* implicit */int) (unsigned short)31357)) : (((/* implicit */int) (unsigned short)31355))));
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        for (int i_7 = 2; i_7 < 9; i_7 += 3) 
        {
            {
                var_21 |= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)32640))));
                var_22 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))))));
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (1680363720) : (var_10)));
            }
        } 
    } 
    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
}

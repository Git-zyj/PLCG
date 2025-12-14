/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106325
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_10 += (+(((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 + 4] [i_4 + 4]))))));
                                arr_11 [i_0] [i_0] [i_2] [i_3] [(short)15] = ((/* implicit */_Bool) var_2);
                            }
                        } 
                    } 
                } 
                var_11 |= ((/* implicit */long long int) ((((/* implicit */_Bool) -1063528935)) || ((!(arr_8 [i_0] [i_1] [i_1] [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 3; i_5 < 9; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_7 = 1; i_7 < 7; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        {
                            var_12 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (min((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) (+(1063528936)))))));
                            arr_26 [i_5 + 1] [i_5] [i_7 + 3] [i_7 - 1] [i_8] [9LL] = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */int) arr_5 [(unsigned char)5] [i_7 - 1] [i_5])), (arr_7 [i_7]))));
                            var_13 -= ((/* implicit */unsigned short) arr_16 [i_5] [i_7 + 3]);
                        }
                    } 
                } 
                var_14 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_5 + 1])))))));
                var_15 -= ((/* implicit */_Bool) arr_7 [i_6]);
                var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5 - 3])) ? (1961317214U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5 - 1])))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_5] [i_6] [i_6] [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((~(var_4))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1183620169U))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_3);
}

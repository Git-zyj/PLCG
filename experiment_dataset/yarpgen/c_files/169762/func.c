/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169762
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
    var_18 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 &= ((/* implicit */long long int) var_14);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) var_6);
                            arr_11 [i_0] [i_3 - 1] = ((/* implicit */unsigned char) min((arr_10 [17LL] [i_1] [i_3 - 1] [i_3 - 1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(18U)))))))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)21)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)238)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)236)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)238)))))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 2; i_5 < 19; i_5 += 2) 
                    {
                        {
                            arr_18 [(_Bool)1] [i_1] [i_0] [i_5] = ((/* implicit */signed char) min((arr_0 [i_1] [i_4]), (((/* implicit */unsigned long long int) var_16))));
                            arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) arr_9 [i_1] [(short)4] [i_1])))) & (((/* implicit */int) var_15)))), (((/* implicit */int) var_16))));
                            var_21 |= ((/* implicit */unsigned int) var_17);
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_16 [12LL] [i_5] [i_4] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_13 [i_0] [12U] [i_0]))))) ? (var_14) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16))))))) << (((((max((arr_16 [i_0] [i_1] [i_1] [i_4] [(short)2] [i_1]), (arr_7 [i_0] [(signed char)3] [i_4] [(short)3]))) ? (-5627812724444499147LL) : (((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */long long int) var_6)) : (var_1))))) - (216407244LL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) var_17);
}

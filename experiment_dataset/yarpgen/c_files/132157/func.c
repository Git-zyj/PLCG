/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132157
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_12)) : (var_7))), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_11))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) 4179903072U)))));
                            var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) (short)9181))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (arr_5 [i_3] [i_2] [i_1]))), (((/* implicit */unsigned int) ((int) arr_9 [i_3] [i_1] [i_1])))));
                            var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)9158))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) < (((/* implicit */int) (short)9158))))))))) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) (short)9158))));
                            var_21 = ((/* implicit */unsigned short) (_Bool)1);
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)0)), ((~(var_14))))))));
                arr_13 [i_0] [i_1] = ((/* implicit */int) var_12);
                arr_14 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) (signed char)83)))) ? (max((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0]))) & (var_7))), (((/* implicit */long long int) arr_4 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0])) ? (arr_9 [i_0] [i_1] [i_1]) : (arr_9 [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))), (((/* implicit */int) var_2))));
}

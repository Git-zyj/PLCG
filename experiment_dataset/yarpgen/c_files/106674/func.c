/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106674
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
    var_18 = var_4;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) arr_0 [i_0] [11LL]);
        var_20 -= ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) var_10)), (arr_1 [i_0])))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) max((arr_0 [i_1] [12]), (arr_2 [i_1]))))));
        var_22 = (_Bool)1;
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((long long int) ((max(((_Bool)1), (arr_4 [i_3] [i_2]))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)63))))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 20; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            {
                                arr_14 [i_1] [i_2] [i_3] [i_2] [(signed char)11] [i_5] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) ((arr_9 [i_4 + 1] [i_3] [i_1]) < (((arr_2 [i_5]) ? (((/* implicit */int) var_1)) : (116340223)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_9))))))));
                                var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned char)127)))))))) || ((!(((/* implicit */_Bool) -2009659192))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_15 [i_1] [i_1] = ((((((((/* implicit */_Bool) (signed char)127)) ? (arr_11 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */int) (_Bool)0)))) + (2147483647))) >> (((/* implicit */int) ((arr_4 [i_1] [i_1]) || (arr_0 [i_1] [i_1])))));
    }
}

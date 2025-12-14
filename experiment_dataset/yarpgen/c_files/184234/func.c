/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184234
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
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) var_16)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)68))))) << (((/* implicit */int) arr_1 [i_0] [i_2 - 2]))))) == (arr_8 [i_2] [(short)15])));
                    arr_10 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) ? (max(((+(((/* implicit */int) (unsigned char)228)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) : (((/* implicit */int) var_0))));
                    var_20 = ((/* implicit */int) arr_5 [i_0] [i_1] [(short)16]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_21 = var_14;
                                var_22 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) (+(1369046984U)))) / (((-2106845557308037768LL) / (((/* implicit */long long int) arr_6 [(_Bool)1] [i_0])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) var_3);
    var_24 = ((/* implicit */unsigned int) max((((/* implicit */signed char) ((((/* implicit */int) var_14)) == (((/* implicit */int) var_15))))), (((signed char) var_7))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188394
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
    var_13 = var_12;
    var_14 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-((~(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (var_9)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_9 [i_2 + 2] [i_2 + 2] [i_3] [i_2 + 2])) >= (var_6))))) * (max((((/* implicit */unsigned long long int) (~(var_10)))), (arr_7 [i_2 + 2] [i_3] [i_2 + 2] [i_2])))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_4 = 1; i_4 < 11; i_4 += 1) /* same iter space */
                            {
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (((+(arr_13 [i_0] [i_3]))) + (((/* implicit */long long int) ((-5) & (((/* implicit */int) (signed char)43))))))))));
                                arr_15 [i_4] [i_4] [i_4] [i_3] [i_2 + 1] [i_0] [i_0] = ((/* implicit */short) var_5);
                                arr_16 [i_3] = var_3;
                            }
                            /* vectorizable */
                            for (long long int i_5 = 1; i_5 < 11; i_5 += 1) /* same iter space */
                            {
                                var_16 ^= ((/* implicit */int) ((((arr_5 [i_5] [i_3]) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)117)))))) : ((+(18446744073709551602ULL)))));
                                var_17 = ((/* implicit */unsigned short) (+(1131136175U)));
                            }
                            var_18 *= (((~(((((arr_8 [i_2 - 1] [i_2 - 1] [i_1]) + (9223372036854775807LL))) << (((4ULL) - (4ULL))))))) >= (arr_13 [i_1] [i_0]));
                            arr_20 [i_1] &= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) arr_19 [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_20 += ((/* implicit */unsigned char) (+((((+(var_11))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35371))) > (var_9)))))))));
}

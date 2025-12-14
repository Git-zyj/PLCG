/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119914
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_10 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_0] [i_2] [i_1] [i_0]))))) >= (((arr_7 [i_0] [i_0]) / (12LL))))))));
                        var_11 = ((/* implicit */_Bool) ((((/* implicit */int) (((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((1023U) - (992U))))) == (4775301267597942387LL)))) & (((/* implicit */int) ((((/* implicit */_Bool) ((9223372036854775807LL) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775806LL))) + (44LL)))))) || (((/* implicit */_Bool) (~(1727625305U)))))))));
                        var_12 = ((/* implicit */unsigned char) ((((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))) | (arr_7 [i_0] [i_1 - 1]))) ^ (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)34674)) >> (((-682132724) + (682132730)))))))) >> (((((((((/* implicit */long long int) 682132724)) ^ (9223372036854775803LL))) ^ (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_0] [i_0]))))))) + (9223372036172643107LL)))));
                        arr_13 [i_0] [i_1 + 1] [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)156)) + (((/* implicit */int) arr_5 [12U] [i_1 - 1] [i_1]))))))) <= (((((/* implicit */long long int) (~(arr_1 [10LL] [i_1])))) | ((~(-9223372036854775799LL)))))));
                    }
                    var_13 = ((/* implicit */short) ((((/* implicit */int) (((~(((/* implicit */int) (unsigned short)23)))) == (((/* implicit */int) ((arr_7 [i_1 + 1] [i_0]) > (((/* implicit */long long int) 12U)))))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)23))))))))));
                }
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    arr_16 [11U] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) != (((/* implicit */int) ((((/* implicit */_Bool) 4209485130U)) || (((/* implicit */_Bool) (unsigned short)65500)))))))) - (((/* implicit */int) ((((((/* implicit */long long int) var_7)) ^ (17944029765304320LL))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))));
                    arr_17 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (((((+(((/* implicit */int) var_9)))) + (2147483647))) >> ((((+(var_6))) + (1867222475)))))) | ((~((~((-9223372036854775807LL - 1LL))))))));
                }
                arr_18 [i_0] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_14 [6ULL] [i_0] [17LL])))))))));
                arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((((-(((/* implicit */int) var_1)))) >> (((9223372036854775807LL) / (arr_7 [i_0] [(unsigned short)13]))))) ^ (((/* implicit */int) ((((6071689687996783198LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34674))))) != (((var_5) * (((/* implicit */long long int) 1)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))))))) | ((+(((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
    var_15 |= ((/* implicit */_Bool) (~((~((~(((/* implicit */int) var_0))))))));
}

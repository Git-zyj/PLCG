/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169328
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
    var_11 = ((/* implicit */_Bool) (~(-2858404265697830729LL)));
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((_Bool) max((var_8), ((short)28591)))))));
    var_13 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (2858404265697830728LL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1])) ? (var_5) : (arr_3 [i_0 - 1] [i_1])));
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (short)28579)) ? (521806559338402829ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28595)))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    arr_11 [i_1] = ((/* implicit */_Bool) arr_6 [i_0 + 1]);
                    arr_12 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0 - 2] [i_1]);
                }
                var_15 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4277245482U)) || (((/* implicit */_Bool) -892337542)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))) : (4294967232U)));
                arr_13 [i_1] = ((int) (!(((/* implicit */_Bool) var_2))));
            }
        } 
    } 
}

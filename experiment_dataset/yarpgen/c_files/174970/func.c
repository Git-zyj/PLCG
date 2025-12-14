/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174970
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_1);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_9 [(short)9] [i_1] [i_1] [i_0] = ((/* implicit */int) ((24LL) % (((/* implicit */long long int) (-(4294967276U))))));
                    arr_10 [i_1] = var_1;
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
    {
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967276U)) ? (var_5) : (arr_11 [i_3] [i_3])))) == (((var_10) / (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
        arr_15 [i_3] [(unsigned char)13] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) arr_12 [i_3])) != (((/* implicit */int) arr_12 [i_3])))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
    {
        arr_18 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (var_8))))))) >> (((((/* implicit */int) var_1)) - (158)))));
        var_15 = ((/* implicit */signed char) max((var_1), (((/* implicit */unsigned char) arr_16 [(signed char)13] [(signed char)6]))));
    }
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_2)), (var_12))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_5)) == (var_0)))))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    var_17 = var_2;
}

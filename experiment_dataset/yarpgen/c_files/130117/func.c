/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130117
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 181971424)) - (3420945766U)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0ULL))));
        var_12 = 2594248348U;
        var_13 = ((/* implicit */unsigned char) var_7);
    }
    for (signed char i_1 = 2; i_1 < 9; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
        {
            var_14 = ((((/* implicit */_Bool) 2594248348U)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2 + 1]))));
            arr_8 [i_1] [i_2 + 3] [i_1] = (~(((((/* implicit */_Bool) 0)) ? (1335784782U) : (2959182524U))));
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 3456799702U)) ? (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned int) arr_0 [i_1] [i_1])))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)3815)))))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 2; i_3 < 10; i_3 += 1) 
            {
                arr_11 [i_3] [i_3] = ((/* implicit */unsigned int) ((short) (unsigned short)38759));
                var_16 = (~(((/* implicit */int) arr_6 [i_3 - 2] [i_3])));
                var_17 = ((((/* implicit */_Bool) (unsigned short)61704)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))));
            }
        }
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_4))));
    }
}

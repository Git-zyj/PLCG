/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1218
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) (unsigned char)253))))))) : ((~(((/* implicit */int) ((((/* implicit */int) (short)4095)) >= (((/* implicit */int) var_5)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_10))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
        var_20 |= ((/* implicit */unsigned char) var_13);
        var_21 ^= arr_1 [i_0] [i_0];
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min(((~(((((/* implicit */_Bool) (short)4095)) ? (((/* implicit */int) arr_2 [i_1] [(short)4])) : (((/* implicit */int) var_13)))))), (((/* implicit */int) var_11)))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            var_23 = var_9;
            arr_11 [i_1] = ((/* implicit */unsigned char) arr_10 [(short)15] [i_1]);
        }
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_1 [(unsigned char)10] [i_3]))))));
        arr_15 [i_3] [i_3] = arr_0 [i_3] [i_3];
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)101))));
                var_25 = var_15;
            }
            arr_23 [i_3] [i_3] [i_3] = ((/* implicit */short) (~(((/* implicit */int) arr_21 [i_3] [i_4] [i_4]))));
        }
    }
    var_26 = ((/* implicit */short) var_9);
    var_27 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_1)))), (((/* implicit */int) (unsigned char)253))));
}

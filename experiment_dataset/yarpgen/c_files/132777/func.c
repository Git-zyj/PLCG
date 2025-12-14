/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132777
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
    var_19 = var_17;
    var_20 = ((unsigned int) min((((/* implicit */unsigned short) var_18)), (min(((unsigned short)20), (((/* implicit */unsigned short) var_0))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)65515)))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)20)))))));
                    arr_8 [i_0] [i_0] [i_0] [i_2 - 1] = ((arr_0 [i_0 - 1]) >> (((/* implicit */int) var_3)));
                }
            } 
        } 
        var_23 = arr_2 [i_0] [i_0] [i_0];
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            var_24 *= ((/* implicit */unsigned int) (unsigned char)254);
            arr_12 [i_0 - 1] [i_0] [i_0] = ((((/* implicit */_Bool) var_5)) ? (var_14) : (var_1));
            var_25 = ((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [(signed char)13]))) : (var_2));
        }
    }
    for (signed char i_4 = 1; i_4 < 19; i_4 += 3) /* same iter space */
    {
        var_26 |= ((/* implicit */unsigned short) var_8);
        var_27 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65516))) & (var_1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3002330419U)) ? (11U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))), ((-((~(419295010U))))));
    }
}

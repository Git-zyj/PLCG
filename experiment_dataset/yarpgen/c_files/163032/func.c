/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163032
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) (short)12);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_13 |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65524)) <= (max((((/* implicit */int) (short)-12)), (436827545)))));
                        var_14 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_7 [i_2] [i_2] [i_0] [i_2] [i_2]) : ((~(3270953739604258189LL)))))) ? (((arr_3 [i_3 + 1] [i_3 + 1] [i_3]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-30265))))) : (((/* implicit */unsigned int) arr_5 [(short)18]))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */short) ((int) arr_2 [(unsigned char)13]));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        var_16 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_4]))));
        var_17 += ((/* implicit */int) (!(((/* implicit */_Bool) (short)0))));
    }
    var_18 = ((/* implicit */unsigned char) (unsigned short)65524);
}

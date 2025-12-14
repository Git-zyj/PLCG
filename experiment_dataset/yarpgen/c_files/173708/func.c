/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173708
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
    var_10 *= ((/* implicit */unsigned char) (~(var_3)));
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (~(var_7))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (~((+(var_4)))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */_Bool) (+((-(((/* implicit */int) var_0))))));
                            var_13 -= ((/* implicit */unsigned short) (+(((/* implicit */int) var_1))));
                        }
                        arr_13 [i_3] [i_3] [i_1] [i_1] [(short)15] [i_0] = ((/* implicit */unsigned short) var_8);
                    }
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        var_14 = ((/* implicit */short) var_2);
                        arr_16 [i_0] [5U] [i_1] [i_5] = ((/* implicit */unsigned long long int) var_4);
                        var_15 = ((/* implicit */short) (+(((/* implicit */int) var_1))));
                        arr_17 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) var_8);
                    }
                    for (signed char i_6 = 3; i_6 < 22; i_6 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (~((+(var_2))))))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            arr_24 [i_6] [19ULL] [(unsigned short)11] [i_1] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            arr_25 [i_0] [(_Bool)0] [i_2] [i_1] [i_7] = ((/* implicit */short) (+(var_7)));
                        }
                    }
                    var_17 = ((/* implicit */unsigned short) var_9);
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
        var_19 = ((/* implicit */short) var_4);
    }
    var_20 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_4))))));
}

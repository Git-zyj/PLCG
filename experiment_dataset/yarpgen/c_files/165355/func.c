/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165355
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
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)48073))));
        arr_3 [i_0] = ((/* implicit */signed char) (((~(((/* implicit */int) var_1)))) > (((var_4) << (((var_4) - (286222690)))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) var_1);
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_4))) ? ((~(((/* implicit */int) var_1)))) : ((-(var_9)))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_11))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(var_1))))));
        var_15 = ((/* implicit */unsigned char) var_4);
    }
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_16 *= ((/* implicit */unsigned char) var_9);
        var_17 -= ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                for (unsigned short i_5 = 1; i_5 < 17; i_5 += 1) 
                {
                    {
                        var_18 = ((/* implicit */int) max((var_18), ((-((-(((/* implicit */int) var_0))))))));
                        arr_16 [i_2] [(unsigned char)4] [i_4] [i_4] [i_2] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_4)) : (var_8)))));
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_10)))))))));
    var_20 = var_12;
    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2)))) < ((-(var_10))))) ? (((unsigned int) (-(var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) var_2)) > (var_11)))))))));
    var_22 = ((/* implicit */signed char) var_4);
}

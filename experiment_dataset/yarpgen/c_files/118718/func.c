/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118718
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (short)-23128))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)(-32767 - 1)))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned int) var_6);
                        arr_12 [i_2] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) ((short) ((unsigned char) var_0))))));
                        arr_13 [i_1] [i_2] = ((/* implicit */signed char) var_9);
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-127)) & (((/* implicit */int) (short)-7980)))))));
    }
    /* vectorizable */
    for (short i_4 = 1; i_4 < 10; i_4 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */short) arr_7 [i_4] [0] [i_4 - 1]);
        var_15 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)51554)) / (((/* implicit */int) (short)13560))));
        arr_17 [i_4] |= ((/* implicit */unsigned short) ((((unsigned long long int) (unsigned short)49350)) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)13568))))));
    }
    var_16 = ((/* implicit */short) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))))), (var_7)));
    var_17 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-1))))))));
}

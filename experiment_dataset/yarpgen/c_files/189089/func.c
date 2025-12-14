/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189089
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_8))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_13 *= ((/* implicit */_Bool) 1030381179083094085LL);
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (signed char)-100))));
                        var_15 = ((/* implicit */signed char) (_Bool)1);
                        arr_13 [(_Bool)1] [i_1] [i_2] [i_3] = ((/* implicit */short) (_Bool)1);
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */long long int) (short)24396);
        var_16 *= ((/* implicit */_Bool) 8466828220684775248LL);
    }
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), ((_Bool)0)));
        arr_18 [i_4] = ((/* implicit */_Bool) (signed char)29);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */signed char) (_Bool)1);
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (signed char)102))));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (signed char)127))));
                }
            } 
        } 
        arr_27 [i_5] |= ((/* implicit */signed char) (_Bool)1);
    }
    for (short i_8 = 0; i_8 < 15; i_8 += 1) 
    {
        var_20 = ((/* implicit */_Bool) (short)32687);
        var_21 = ((/* implicit */long long int) min((var_21), (8466828220684775248LL)));
        arr_31 [i_8] = ((/* implicit */short) (signed char)117);
    }
}

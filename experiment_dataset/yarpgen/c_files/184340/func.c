/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184340
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_10 = arr_1 [i_0];
        arr_2 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */int) (!(((/* implicit */_Bool) 3094825368U))))) / (((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) var_8))))))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) 1610110990U);
        var_11 = -63716333;
    }
    for (short i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            for (unsigned int i_4 = 1; i_4 < 20; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    {
                        var_12 = ((/* implicit */long long int) 1610110990U);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            arr_21 [i_6] [i_5] [i_3] [i_3] [i_2] = 1610110990U;
                            arr_22 [i_2] [i_3] [i_3] [i_3] [i_3] [i_6] = ((/* implicit */short) (~(1312621564)));
                            arr_23 [i_2] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)11006)) ? (((/* implicit */int) var_0)) : (((var_2) - (((/* implicit */int) arr_17 [19] [19] [19] [i_5] [i_6] [i_6]))))));
                            arr_24 [i_2] [i_5] [i_2] [i_3] [i_6] = (+(((/* implicit */int) (short)3584)));
                            arr_25 [i_2] [i_2] [i_3] = ((/* implicit */short) var_0);
                        }
                    }
                } 
            } 
        } 
        arr_26 [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_15 [i_2])) + (2147483647))) >> (((var_7) - (3194516073463050488LL)))));
    }
    var_13 = ((/* implicit */unsigned long long int) var_6);
    var_14 = ((/* implicit */unsigned long long int) -927453595);
    var_15 = ((/* implicit */_Bool) var_8);
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */long long int) (-(((/* implicit */int) (short)12702)))))))));
}

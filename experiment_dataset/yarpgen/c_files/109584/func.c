/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109584
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
    for (int i_0 = 2; i_0 < 24; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_5 [i_1] [i_0] = var_14;
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) -4527740205378246685LL)) ? (((/* implicit */long long int) ((int) (unsigned short)47401))) : ((~(var_15)))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [12U] = ((/* implicit */int) arr_1 [i_0 - 1]);
            var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (((/* implicit */long long int) arr_6 [i_2])) : (arr_7 [i_0])));
            arr_9 [i_0 - 1] [i_0] [i_2] = ((/* implicit */long long int) ((signed char) arr_3 [i_2] [i_0 + 1]));
            var_19 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_0 - 1]))));
            arr_10 [i_2] [i_2] = ((/* implicit */long long int) (~(arr_2 [i_0 - 2])));
        }
        arr_11 [i_0 - 2] [i_0] = ((/* implicit */unsigned short) arr_6 [i_0]);
        arr_12 [i_0] = ((/* implicit */long long int) ((signed char) max((((/* implicit */unsigned int) (short)-12171)), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) 67108863)) : (21U))))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 1; i_3 < 24; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    {
                        var_20 += ((/* implicit */long long int) ((int) (~(((/* implicit */int) arr_19 [i_0 - 2] [i_0 - 2])))));
                        var_21 = ((/* implicit */unsigned char) arr_13 [i_3 - 1] [i_3 - 1]);
                        var_22 &= ((/* implicit */long long int) arr_18 [i_3 + 1]);
                    }
                } 
            } 
        } 
    }
    for (int i_6 = 2; i_6 < 24; i_6 += 2) /* same iter space */
    {
        var_23 = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) - (min((((/* implicit */unsigned long long int) arr_14 [i_6 + 1] [i_6 + 1] [i_6 + 1])), (var_16))));
        arr_23 [i_6] = ((/* implicit */signed char) arr_13 [i_6 + 1] [i_6 - 2]);
    }
    for (unsigned int i_7 = 3; i_7 < 21; i_7 += 2) 
    {
        arr_28 [i_7 + 4] [i_7] = ((/* implicit */unsigned long long int) arr_18 [i_7]);
        var_24 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) - ((+(arr_20 [i_7 - 1])))));
    }
    var_25 = (+(((/* implicit */int) var_11)));
}

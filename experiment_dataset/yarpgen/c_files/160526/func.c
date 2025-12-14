/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160526
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
    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_12)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_21 -= ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) var_16)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1]))));
                    arr_8 [i_0] [i_0] [i_1] [(short)3] = ((/* implicit */short) arr_0 [i_2] [i_2]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */signed char) arr_1 [i_3]);
        var_23 = ((/* implicit */signed char) ((unsigned int) arr_3 [i_3] [i_3] [(signed char)8]));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 1) 
        {
            for (unsigned char i_5 = 4; i_5 < 8; i_5 += 1) 
            {
                {
                    arr_19 [i_3] = ((short) ((long long int) var_5));
                    var_24 = ((/* implicit */short) (-(((/* implicit */int) arr_18 [i_5 - 2] [i_3] [i_3]))));
                    var_25 -= ((/* implicit */short) (+((+(arr_15 [i_4])))));
                }
            } 
        } 
    }
    for (long long int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) var_15);
        var_27 ^= ((/* implicit */unsigned char) var_0);
        var_28 = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) arr_2 [i_6])))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) arr_22 [i_7]))));
        arr_24 [(_Bool)1] = ((/* implicit */_Bool) arr_22 [i_7]);
    }
    var_30 = ((/* implicit */signed char) var_14);
    var_31 = ((/* implicit */long long int) ((short) min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (var_13)))), (min((((/* implicit */long long int) var_14)), (var_11))))));
    var_32 = ((/* implicit */signed char) var_4);
}

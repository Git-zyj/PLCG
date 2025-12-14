/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164270
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
    var_10 &= ((/* implicit */_Bool) (unsigned char)112);
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-(3266814629U)))))) ? ((~(((((/* implicit */int) var_5)) - (var_9))))) : (var_0)));
    var_12 -= ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */int) (unsigned char)92)) / (((/* implicit */int) (unsigned char)89)))) : ((+(-1647802106)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) arr_0 [i_0]));
        arr_3 [i_0] = ((/* implicit */signed char) (~(min((((/* implicit */int) max(((unsigned char)77), (((/* implicit */unsigned char) var_5))))), (var_7)))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_2 = 3; i_2 < 20; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                {
                    arr_11 [i_1] [(short)3] &= ((/* implicit */_Bool) ((int) var_3));
                    arr_12 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned long long int) (+((+(var_7)))));
    }
}

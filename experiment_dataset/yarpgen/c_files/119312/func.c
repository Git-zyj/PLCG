/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119312
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
    var_20 = ((/* implicit */_Bool) min((var_20), (var_10)));
    var_21 = min(((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (33554431))))), (((/* implicit */int) var_15)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((int) arr_1 [i_0 + 2]);
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 24; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        arr_10 [i_2] &= ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_2] [i_2 - 2] [i_2] [i_2])) ^ (((/* implicit */int) arr_7 [i_2] [i_2 - 2] [i_2] [(_Bool)1]))));
                        var_22 = ((((/* implicit */int) var_1)) - (((/* implicit */int) (unsigned char)0)));
                        var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) << (((((((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_2 + 1])) + (16611))) - (16)))));
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 1; i_4 < 22; i_4 += 4) /* same iter space */
    {
        arr_14 [i_4] &= ((/* implicit */signed char) ((((/* implicit */long long int) 3632342803U)) % (8855383193093869617LL)));
        var_24 &= ((/* implicit */unsigned int) (unsigned short)19875);
    }
}

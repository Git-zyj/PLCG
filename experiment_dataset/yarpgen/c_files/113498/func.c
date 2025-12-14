/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113498
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (-(((/* implicit */int) var_14)))))));
    var_21 = ((/* implicit */unsigned char) (~(13892668349184129624ULL)));
    var_22 = ((/* implicit */unsigned int) var_6);
    var_23 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_9 [19ULL] [13LL] [(short)2] = ((/* implicit */signed char) (-(((/* implicit */int) arr_5 [i_2 + 1] [i_2] [i_2 + 1]))));
                    var_24 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)181)) <= (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) ((arr_2 [i_1]) - (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (max((((/* implicit */unsigned long long int) var_10)), (var_11))) : (((unsigned long long int) (_Bool)0))))));
                }
            } 
        } 
    } 
}

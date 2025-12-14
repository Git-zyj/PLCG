/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118340
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
    var_14 ^= ((/* implicit */_Bool) 1727932740285453341LL);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1 + 1] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(-1727932740285453341LL)))))))));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [12LL]))) | (((min((((/* implicit */unsigned long long int) arr_4 [(unsigned char)16] [i_2])), (arr_6 [i_2] [i_2] [i_2]))) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_6 [i_2] [i_1 + 1] [i_0]))))))))));
                }
            } 
        } 
    } 
}

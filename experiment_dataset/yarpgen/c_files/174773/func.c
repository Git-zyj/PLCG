/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174773
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
    var_10 = ((/* implicit */long long int) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
        var_12 = ((/* implicit */short) (~(arr_0 [i_0])));
        arr_3 [i_0] = var_8;
        arr_4 [4ULL] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 6356145627956887448ULL)))))));
                    var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
                }
            } 
        } 
    }
    var_15 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(-1316498104)))), (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) ((733046670572445657LL) <= (((/* implicit */long long int) 2147483647)))))) : ((-(((long long int) (short)22068))))));
}

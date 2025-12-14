/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148637
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_10 [21LL] [i_2] [i_1] [i_0] = (~(((arr_0 [(signed char)11] [i_2]) ? (-434953268) : (((/* implicit */int) (_Bool)1)))));
                    var_11 = ((((/* implicit */_Bool) (unsigned short)15425)) ? (((/* implicit */int) (unsigned short)32353)) : (434953288));
                    var_12 = ((/* implicit */int) 1295367777U);
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) 434953268)))));
    }
    var_14 = ((/* implicit */signed char) var_3);
}

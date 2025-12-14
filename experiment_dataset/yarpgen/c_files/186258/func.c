/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186258
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
    var_15 += ((/* implicit */unsigned int) (unsigned short)30923);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_1] [i_2 - 2] [i_2 + 2])) > (((/* implicit */int) (_Bool)0))));
                    arr_9 [4LL] [i_1] [i_1] [i_2 - 2] = (!(arr_7 [i_1] [i_0]));
                }
            } 
        } 
        var_17 &= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)34613))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)170)))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)58815)) > (((((/* implicit */_Bool) (unsigned short)37228)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (unsigned short)47024))))));
    }
}

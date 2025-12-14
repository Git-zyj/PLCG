/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153534
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((_Bool) -370809156309345690LL));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 801298967U)) && (((/* implicit */_Bool) var_5)))))) : (((((/* implicit */_Bool) 801298967U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-1496626150632883774LL)))));
                    var_11 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_0] [i_2 - 4] [i_2 - 4])) >= (((/* implicit */int) (unsigned short)7))));
                    arr_10 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_4 [i_0] [i_1]) : (arr_1 [i_0])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)64790))))) : (arr_7 [13LL] [i_1] [i_1])));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)745)), (arr_8 [i_3] [5])));
        var_12 = ((/* implicit */unsigned char) var_9);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [i_4] = min((max((((/* implicit */long long int) (-2147483647 - 1))), (((((/* implicit */_Bool) 3493668329U)) ? (var_8) : (((/* implicit */long long int) var_7)))))), (((/* implicit */long long int) max((var_1), (((/* implicit */int) ((((/* implicit */unsigned int) arr_12 [2U])) != (var_9))))))));
        var_13 = ((/* implicit */int) arr_7 [i_4] [i_4] [i_4]);
        var_14 = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) arr_11 [i_4] [i_4])))));
        var_15 = ((/* implicit */_Bool) arr_0 [i_4]);
    }
    var_16 |= ((/* implicit */int) var_10);
    var_17 = ((/* implicit */int) ((unsigned int) (_Bool)1));
}

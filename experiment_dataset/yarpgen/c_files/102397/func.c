/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102397
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_15 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
        var_16 = ((((/* implicit */long long int) arr_0 [i_0])) % (((9180151275999783709LL) / (((/* implicit */long long int) ((/* implicit */int) var_14))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] = ((/* implicit */_Bool) -799045001);
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)63)) ? (922170276) : (((/* implicit */int) (unsigned char)0))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_18 &= ((/* implicit */unsigned short) ((arr_5 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53931)))));
            arr_10 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + ((-2147483647 - 1))))) || (((/* implicit */_Bool) (unsigned short)17898)));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned int) arr_11 [i_0]);
            var_20 |= ((/* implicit */unsigned short) -1137538621);
            var_21 = ((arr_0 [i_0]) - (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (arr_0 [i_0]))));
            var_22 ^= ((((/* implicit */_Bool) ((var_10) | (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_3])))))) ? (((/* implicit */int) (_Bool)0)) : ((~(((/* implicit */int) (unsigned short)18281)))));
        }
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -988732967)) ? (-992639336) : (((/* implicit */int) var_5))))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_2)))) : (((/* implicit */int) (_Bool)0))));
        var_24 -= ((/* implicit */_Bool) 693409423322077524LL);
    }
    var_25 = ((/* implicit */long long int) var_9);
}

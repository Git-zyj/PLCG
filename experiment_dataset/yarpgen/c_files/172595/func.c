/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172595
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
    var_16 = ((/* implicit */unsigned long long int) min((min((var_1), (((/* implicit */long long int) max((4294967295U), (((/* implicit */unsigned int) (unsigned char)255))))))), (var_1)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) % (10245745123295770788ULL));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_17 += var_14;
                    arr_10 [20U] [i_1] [i_1] [i_0] |= ((/* implicit */long long int) (~((~(var_9)))));
                }
            } 
        } 
        var_18 = ((/* implicit */short) 20U);
    }
    for (unsigned short i_3 = 1; i_3 < 23; i_3 += 3) /* same iter space */
    {
        arr_13 [i_3] [i_3 - 1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((-5374596028099832734LL), (((/* implicit */long long int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_5)))))) : ((+(var_15)))))));
        arr_14 [i_3] [i_3] = max((((/* implicit */long long int) ((signed char) arr_0 [22U]))), (((((/* implicit */_Bool) (~(4294967295U)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))));
    }
    var_19 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))))), ((+(2693287799583482202ULL))))), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (short)(-32767 - 1))))))))));
}

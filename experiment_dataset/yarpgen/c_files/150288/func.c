/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150288
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_5))));
        arr_3 [2U] |= ((/* implicit */signed char) max((((/* implicit */long long int) var_5)), (var_4)));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            arr_11 [i_1] = ((/* implicit */long long int) arr_7 [i_1]);
            var_10 = (-(((15727170227704455312ULL) << (((-806580633048958328LL) + (806580633048958357LL))))));
            arr_12 [i_1] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_6))) - (var_4))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) != (-806580633048958326LL))))))))) : (-806580633048958328LL));
        }
        arr_13 [i_1] = ((/* implicit */unsigned short) arr_8 [i_1] [i_1]);
        var_11 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_2)) | (((/* implicit */int) (signed char)-123))))));
    }
    var_12 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_1))) & (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65535)))))))) < (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (unsigned short)65520)))))))));
}

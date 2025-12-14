/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123287
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
    var_16 = ((/* implicit */unsigned long long int) (~(var_7)));
    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)101))))) / (var_14))) >> (((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_19 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) var_1)))));
            var_20 = ((/* implicit */unsigned char) arr_3 [i_1] [i_0]);
        }
        for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((5919093382390103476ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30596))))) ? (-1327088324687576524LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) (unsigned short)46748))))))))));
            arr_10 [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_2 [i_2] [i_0]);
            var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_0))));
        }
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172755
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
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) var_14))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_4 [i_0 - 1] = ((signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))));
            var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) (signed char)-40)))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10))))))))));
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) ((unsigned short) (signed char)-53))) : (((/* implicit */int) ((2507614940210436048LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-17)))))))))));
            var_19 = ((/* implicit */unsigned short) ((signed char) (unsigned char)96));
        }
        for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_6 [i_0 + 3] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)41))))));
            var_21 -= ((/* implicit */unsigned int) var_8);
            var_22 = ((/* implicit */_Bool) var_14);
        }
        var_23 = ((/* implicit */unsigned char) ((unsigned short) arr_2 [i_0 + 1] [i_0 - 1]));
    }
    var_24 -= ((/* implicit */short) (_Bool)1);
    var_25 ^= ((/* implicit */unsigned char) var_9);
}

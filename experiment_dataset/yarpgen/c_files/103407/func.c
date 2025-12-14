/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103407
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
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 5896895121152051648ULL))));
    var_16 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6337284613083561386LL)))))) ? (min((((/* implicit */int) var_14)), (var_2))) : (min((max((((/* implicit */int) (unsigned char)114)), (var_10))), (((/* implicit */int) var_5))))));
    var_17 = var_8;
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) arr_2 [i_0]);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_19 ^= ((/* implicit */short) 8468781029182201202ULL);
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_2)) : ((~(8445165419598765704LL)))));
                var_21 = (signed char)102;
                arr_9 [i_2] = ((/* implicit */long long int) (short)-3748);
                arr_10 [i_2] = ((/* implicit */signed char) ((unsigned short) 5896895121152051629ULL));
                var_22 = ((/* implicit */signed char) var_5);
            }
        }
        for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            var_23 = ((/* implicit */short) var_10);
            var_24 = ((/* implicit */short) 18308013175383711728ULL);
        }
        arr_14 [i_0] = ((/* implicit */short) ((_Bool) arr_13 [i_0] [i_0]));
        var_25 = ((/* implicit */unsigned int) -633601047);
    }
    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (signed char)102))));
}

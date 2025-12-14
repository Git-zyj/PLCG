/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172191
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
    var_18 += ((/* implicit */unsigned short) var_4);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) var_12);
        var_19 -= ((/* implicit */unsigned char) var_16);
        var_20 = ((/* implicit */unsigned char) var_5);
        arr_5 [i_0] = ((/* implicit */_Bool) var_3);
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) var_10);
        var_22 &= ((/* implicit */_Bool) var_4);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 3; i_2 < 10; i_2 += 4) 
        {
            var_23 *= ((/* implicit */unsigned long long int) var_10);
            var_24 += ((/* implicit */unsigned short) var_16);
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_13))));
            /* LoopSeq 1 */
            for (short i_3 = 3; i_3 < 13; i_3 += 4) 
            {
                arr_12 [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_7);
                var_26 -= ((/* implicit */unsigned char) var_8);
            }
        }
        var_27 = ((/* implicit */unsigned char) min((var_27), (var_11)));
        var_28 = var_12;
    }
    for (int i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned short) var_9);
        var_30 *= ((/* implicit */unsigned char) var_2);
        var_31 -= ((/* implicit */unsigned int) var_5);
    }
    var_32 = ((/* implicit */unsigned char) var_2);
    var_33 = var_12;
}

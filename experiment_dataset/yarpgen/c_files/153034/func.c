/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153034
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [11LL] = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned short)14034)) >> ((((~(var_2))) + (1276821291)))))));
        arr_3 [(unsigned short)3] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (((/* implicit */long long int) arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_19 += ((unsigned char) arr_5 [i_1]);
        var_20 ^= ((/* implicit */int) ((unsigned char) (-(arr_4 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) (unsigned short)48203)))));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) var_0)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_18)))))))) : ((-(((((/* implicit */_Bool) arr_12 [i_3] [i_2] [5LL])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))))))));
            var_22 -= ((/* implicit */unsigned short) min((max((var_4), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) var_15))));
            arr_13 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) min(((+(var_1))), (((/* implicit */long long int) var_8))));
        }
    }
    var_23 = ((/* implicit */short) var_9);
    var_24 = var_15;
}

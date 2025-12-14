/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156724
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) 1097209385U)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (8750422800858680262LL)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_16 = arr_1 [i_0];
        var_17 = ((/* implicit */unsigned char) (short)-28773);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
        {
            var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (-8750422800858680263LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60271)))));
            var_19 = ((/* implicit */short) arr_0 [i_0]);
            var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0]))));
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (unsigned char)92);
        }
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_6)))) && (((_Bool) var_13))));
            arr_10 [(short)1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_5))))) >> (((/* implicit */int) var_14))));
            arr_11 [i_0] [9ULL] = ((/* implicit */_Bool) ((unsigned short) arr_3 [i_0] [i_0]));
        }
    }
}

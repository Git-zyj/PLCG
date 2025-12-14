/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168595
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = var_11;
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? ((-(((/* implicit */int) (short)0)))) : (((/* implicit */int) min(((short)0), (((/* implicit */short) var_7)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_7 [i_1] = min((((((((/* implicit */_Bool) (signed char)4)) ? (var_1) : (arr_6 [i_1]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))))), (((/* implicit */unsigned long long int) var_6)));
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */_Bool) -762892402)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (arr_4 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)81))))));
        var_15 -= ((/* implicit */unsigned long long int) (short)0);
        var_16 = ((/* implicit */int) ((long long int) (~(var_2))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) ((unsigned long long int) (-(((/* implicit */int) (short)-24154)))));
            arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)5)) ? (-141432636) : (-1)));
            var_18 = ((int) var_13);
            arr_15 [i_3] = ((/* implicit */int) var_5);
        }
        var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_9 [i_2]))));
        var_20 *= ((/* implicit */short) (~(((/* implicit */int) var_3))));
        var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6)) ? (var_6) : (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) arr_13 [(unsigned short)10] [(unsigned short)10]))))));
    }
    var_22 = ((/* implicit */short) var_5);
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-3)) ? (min((((/* implicit */unsigned long long int) var_2)), (var_10))) : (min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) var_2)))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184364
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((+(3291263164U)))));
        var_15 += ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_9)), (arr_1 [i_0] [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_16 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)116))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_17 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_4 [i_2] [i_1])))) * ((-(((/* implicit */int) arr_5 [i_2] [i_1]))))));
            arr_11 [i_1] = ((/* implicit */signed char) var_5);
            var_18 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_1)) ? ((+(var_4))) : (((/* implicit */int) ((((/* implicit */int) arr_9 [15] [15] [i_1])) >= (((/* implicit */int) var_3)))))))));
            var_19 += ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_2]))))) : (var_14))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2]))))))));
        }
        var_20 = ((/* implicit */int) min((var_20), (max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)113))))), ((~(((/* implicit */int) arr_4 [i_1] [8U]))))))));
        arr_12 [i_1] = ((/* implicit */unsigned short) var_11);
    }
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 20; i_3 += 3) 
    {
        arr_17 [i_3] [18U] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_6))))));
        arr_18 [(unsigned short)2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_3 - 1])) ? (arr_14 [i_3 + 3]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_14 [i_3 - 1]) <= (((/* implicit */long long int) var_7))))))));
        var_21 = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (signed char)111))));
    var_23 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : ((~(var_7))))))));
    var_24 = ((/* implicit */unsigned long long int) var_6);
}

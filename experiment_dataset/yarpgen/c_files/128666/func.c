/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128666
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_18 += ((/* implicit */unsigned int) var_15);
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 797736410)), (var_0)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 371640724U)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_6)))) ? (((long long int) arr_2 [i_0])) : (((/* implicit */long long int) ((((/* implicit */_Bool) 5458557289327106893LL)) ? (((/* implicit */int) (unsigned short)57692)) : (((/* implicit */int) (unsigned short)3))))))) : (min((((/* implicit */long long int) arr_0 [i_0])), (min((((/* implicit */long long int) (unsigned short)5)), (2LL)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)16383)) <= ((-(((/* implicit */int) var_8))))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_19 += ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) 6346476894101158875LL)) && (((/* implicit */_Bool) arr_6 [i_1] [i_1])))));
        var_20 -= ((/* implicit */signed char) (~(((unsigned int) max((arr_0 [i_1]), (((/* implicit */short) var_9)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)92)) ? (arr_1 [i_2] [i_2]) : (arr_1 [i_2] [i_2])));
        var_22 = ((/* implicit */unsigned short) var_4);
    }
    var_23 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)57675))));
}

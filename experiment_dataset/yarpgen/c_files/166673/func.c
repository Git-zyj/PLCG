/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166673
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : ((-(var_6)))))))))));
    var_18 += ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-5634)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        arr_2 [(unsigned char)11] [(unsigned char)11] = ((/* implicit */short) (~(((/* implicit */int) ((signed char) (short)5627)))));
        var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)47)) & (((/* implicit */int) (unsigned char)97))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((long long int) (unsigned short)65515))));
        arr_3 [i_0 + 3] [i_0 - 2] = ((/* implicit */unsigned short) ((unsigned long long int) arr_1 [i_0 - 2]));
        arr_4 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) arr_6 [i_1]))))));
        var_21 = ((((/* implicit */int) arr_6 [i_1])) ^ (((/* implicit */int) arr_5 [i_1] [i_1])));
    }
    for (long long int i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
    {
        var_22 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)5633)) || (((/* implicit */_Bool) (unsigned char)74)))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_9 [i_2] [i_2]), (((/* implicit */unsigned short) arr_8 [i_2] [i_2]))))))))));
        var_24 = ((/* implicit */unsigned short) var_8);
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
    {
        var_25 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3]))) : (arr_10 [i_3])))));
        var_26 = ((/* implicit */short) ((signed char) var_10));
    }
    var_27 = var_4;
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) var_3))))) - (((var_15) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_11))));
}

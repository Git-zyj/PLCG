/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141177
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
    var_13 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? ((~(var_0))) : (((/* implicit */long long int) (+(var_4)))))));
        var_15 = ((/* implicit */int) max((((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)234))))) : (max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_1 [i_0]))))), (((/* implicit */unsigned long long int) ((int) var_2)))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_16 = ((/* implicit */int) arr_4 [i_1] [i_1]);
        var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) 1811507845U)) && (((/* implicit */_Bool) 2085338667U))));
        arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_1]))) : ((~(((/* implicit */int) (short)21092))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 17; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) (signed char)-11);
        var_19 = ((/* implicit */unsigned long long int) ((long long int) var_12));
        var_20 = ((/* implicit */signed char) (unsigned char)250);
    }
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15390839555989941282ULL)) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) (unsigned short)32768))));
        var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */unsigned long long int) -6LL)) : (arr_1 [(short)20])))));
        var_23 *= ((/* implicit */short) (~(((unsigned int) (+(((/* implicit */int) var_9)))))));
    }
    var_24 = ((/* implicit */unsigned char) var_4);
}

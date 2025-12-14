/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173944
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) var_19);
        arr_4 [i_0 + 1] = ((_Bool) (unsigned char)31);
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -1440902778)))))));
        arr_6 [i_0] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))));
    }
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_8))));
    var_21 &= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 2128841637)))) - (((long long int) (unsigned short)0)))));
    var_22 = ((/* implicit */short) ((int) var_2));
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_10 [i_1] = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) arr_2 [i_1])))), ((!(((/* implicit */_Bool) var_1))))));
        arr_11 [(short)0] = ((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_12)))))) | (max(((+(((/* implicit */int) var_2)))), (((/* implicit */int) var_9)))));
        var_23 = ((/* implicit */long long int) (unsigned short)65519);
        arr_12 [i_1] = ((/* implicit */short) var_15);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_24 -= ((/* implicit */_Bool) var_5);
            arr_17 [i_2] [(_Bool)1] [i_1] = ((/* implicit */int) ((unsigned int) (signed char)48));
            arr_18 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 30720)) ? (-945064901) : (((/* implicit */int) arr_7 [i_1]))));
            arr_19 [i_1] [i_2] = ((/* implicit */signed char) var_3);
        }
    }
}

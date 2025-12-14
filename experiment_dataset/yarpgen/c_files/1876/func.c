/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1876
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_0])))), (max(((-(((/* implicit */int) arr_1 [i_0])))), ((+(((/* implicit */int) var_5))))))));
                var_13 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_2 [i_2])))) ? (((/* implicit */unsigned long long int) var_9)) : (min((((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_7))), (((/* implicit */unsigned long long int) (+(arr_2 [i_2]))))))));
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) arr_4 [i_2] [i_2])))))) : (arr_2 [i_2])))) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2]))))));
        arr_6 [(signed char)9] = ((/* implicit */signed char) (~(((/* implicit */int) max((arr_1 [i_2]), (((/* implicit */unsigned short) arr_3 [i_2])))))));
        var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_5 [i_2])), ((-(((/* implicit */int) arr_5 [i_2]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
    {
        var_17 -= (!(((/* implicit */_Bool) (unsigned char)128)));
        arr_10 [i_3] [i_3] = ((/* implicit */int) arr_2 [12U]);
        arr_11 [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_3])) && (((/* implicit */_Bool) var_10))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_4] [i_4])) - (((/* implicit */int) arr_3 [i_4]))));
        var_18 *= ((/* implicit */short) (-(((/* implicit */int) (_Bool)0))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_13 [i_4] [i_4]))));
        arr_16 [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_14 [i_4] [(unsigned short)8]))));
    }
    var_20 |= ((/* implicit */signed char) (_Bool)1);
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (unsigned short)59616))));
}

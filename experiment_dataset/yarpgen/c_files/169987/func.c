/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169987
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_11 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (short)-5996)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0])))))) ? ((-(arr_2 [i_0] [i_1] [i_1]))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)158)) ? (-1339803952) : (((/* implicit */int) arr_3 [i_0]))))) / ((~(arr_2 [(short)8] [(signed char)3] [(signed char)3])))))));
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) <= ((-(min((((/* implicit */int) var_5)), (-1682177415)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) (+(var_3)));
    var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) var_10)))) : (((/* implicit */int) var_6))));
    var_15 -= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)181)) << (((((/* implicit */int) var_5)) - (27433)))))) && (((/* implicit */_Bool) ((unsigned long long int) var_3)))))) << (((((/* implicit */int) ((short) var_0))) + (17933)))));
}

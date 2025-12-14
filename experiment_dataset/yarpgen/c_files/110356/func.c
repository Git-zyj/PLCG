/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110356
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (var_12)));
    var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (-(5096087424475514563LL)))) ? (((/* implicit */int) (unsigned short)60530)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)92)) == (((/* implicit */int) var_10)))))))));
    var_18 = ((/* implicit */unsigned int) ((int) var_5));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    var_19 &= (-((((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned long long int) ((((var_11) + (2147483647))) >> (((arr_6 [0LL] [i_1 + 2] [0LL]) - (3125248316164544477ULL)))))) : (max((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_3)))))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */_Bool) (unsigned char)164)) || (((/* implicit */_Bool) -16777216))))));
                }
            } 
        } 
    } 
}

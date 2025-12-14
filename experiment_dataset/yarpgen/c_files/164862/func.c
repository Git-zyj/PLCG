/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164862
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
    var_14 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_15 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)5619)) : (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 - 2])))))));
        arr_2 [12ULL] = ((/* implicit */unsigned char) ((unsigned int) var_12));
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_12))));
                    arr_10 [i_1] [i_2 - 1] [i_3] = ((/* implicit */unsigned long long int) ((((_Bool) 2941021399U)) ? (((/* implicit */int) var_0)) : (((((((/* implicit */int) ((signed char) var_7))) + (2147483647))) >> (((((/* implicit */int) var_11)) >> (((2941021401U) - (2941021399U)))))))));
                    var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned char) var_4))), ((((-(2941021399U))) - (((((/* implicit */unsigned int) var_12)) - (510556899U)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) ((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_11))))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)7777)) ^ (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)57759))))))) ? (((/* implicit */int) ((signed char) (unsigned short)57755))) : (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (_Bool)1))))))));
}

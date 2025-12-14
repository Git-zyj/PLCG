/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16281
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
    var_19 += ((/* implicit */signed char) min((((((/* implicit */_Bool) max(((signed char)-116), ((signed char)119)))) ? (var_16) : (min((((/* implicit */unsigned long long int) var_15)), (18446744073709551602ULL))))), (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned char) (signed char)127)))))));
    var_20 += ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(unsigned short)10] [i_0] = ((/* implicit */signed char) var_2);
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) / (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_5 [i_0] [i_0] [i_1])))))))) ? (130944LL) : (((/* implicit */long long int) (-(((int) var_1)))))));
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)102)) >= (((/* implicit */int) (signed char)119))))) < (arr_4 [i_0]))));
                arr_8 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_10)) >= (arr_0 [i_0])))) >= (((/* implicit */int) arr_2 [i_0]))))) * ((-(min((arr_0 [i_0]), (((/* implicit */int) var_18))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_13);
}

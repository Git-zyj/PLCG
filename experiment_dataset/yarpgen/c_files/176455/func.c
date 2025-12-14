/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176455
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_5 [(unsigned short)10] [i_0] [i_2] [i_0]))))))) | (((min((((/* implicit */unsigned int) var_15)), (var_13))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)4)) ^ (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) ^ (var_7))) : (arr_2 [i_2] [(_Bool)0] [(unsigned short)6])))) ? (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_11)))))) : (((/* implicit */int) ((_Bool) ((unsigned long long int) var_17)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)99)) | (min((((((/* implicit */int) (signed char)-96)) ^ (((/* implicit */int) (signed char)77)))), (((/* implicit */int) (signed char)77))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166599
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)8)), (((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_9)))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_1))))))));
    var_11 = ((/* implicit */short) min((var_7), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) (unsigned char)67)) ? (var_6) : (((/* implicit */long long int) var_8)))) : (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */long long int) var_1)) : (var_6))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_12 = (+(((((/* implicit */unsigned int) -2082701732)) % (((arr_2 [i_0] [i_1]) >> (((((/* implicit */int) arr_1 [i_2])) - (4957))))))));
                    var_13 -= ((/* implicit */short) ((unsigned long long int) ((_Bool) var_4)));
                    arr_7 [i_0] [i_0] [i_0] = ((((((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)8]))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)239)) && ((_Bool)1))))))) == (((/* implicit */unsigned int) ((var_8) & (((/* implicit */int) max(((unsigned char)157), (arr_5 [i_0]))))))));
                }
            } 
        } 
    } 
}

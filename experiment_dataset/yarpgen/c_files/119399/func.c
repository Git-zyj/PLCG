/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119399
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
    for (int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (-195291953) : (232709467)))), (max((((/* implicit */unsigned long long int) var_8)), (arr_3 [i_2 + 1] [i_1] [i_0]))))) < ((-(((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned long long int) var_4))))))));
                    arr_8 [i_0] [i_2] [i_2] [(signed char)6] = ((/* implicit */signed char) arr_0 [4ULL] [i_1]);
                }
            } 
        } 
    } 
    var_13 &= var_10;
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((-(17068893724696455870ULL)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) -1683240055)))))))) : ((-(var_5)))));
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((unsigned long long int) var_3)))));
    var_16 = ((/* implicit */unsigned char) (signed char)120);
}

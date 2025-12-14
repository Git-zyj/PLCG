/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17406
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
    var_11 = ((/* implicit */_Bool) var_0);
    var_12 = ((/* implicit */unsigned short) (+(max((min((((/* implicit */int) var_7)), (-2081222813))), ((-(((/* implicit */int) var_6))))))));
    var_13 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((2027749630), (2081222825)))) ? (63U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [6ULL] [i_2] [i_2] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_1]))))) >= (((/* implicit */int) ((_Bool) var_9))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (~(((1158149545U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_1)))))))) ^ (var_10)));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123743
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
    var_16 = ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_5)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_1])) ? (-83756785865723483LL) : (((/* implicit */long long int) 3559611393U)))), (((/* implicit */long long int) arr_2 [0U] [i_1 - 1]))))) ? (((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */int) arr_1 [i_0])) : ((-(((/* implicit */int) var_5)))))) : (((/* implicit */int) ((((((/* implicit */int) (unsigned char)149)) + (((/* implicit */int) (unsigned char)106)))) > ((-(((/* implicit */int) arr_2 [12LL] [i_1 - 1])))))))));
                var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1891588015420821303LL)) ? (((/* implicit */long long int) 761412237U)) : (-1891588015420821281LL)))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_2 [14LL] [14LL]))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_10);
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))))));
    var_21 = ((/* implicit */_Bool) var_1);
}

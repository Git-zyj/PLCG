/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130366
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
    var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((((/* implicit */int) (short)-27261)) + (27290))) - (20))))))));
    var_16 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_13)))))) ^ (var_10)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) (short)-13605));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) var_2);
                var_17 = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) min((((((/* implicit */int) (short)12649)) >> (((((/* implicit */int) arr_3 [i_1])) - (13030))))), ((~(((/* implicit */int) arr_3 [i_1]))))))) : (((/* implicit */unsigned short) min((((((/* implicit */int) (short)12649)) >> (((((((/* implicit */int) arr_3 [i_1])) - (13030))) - (36120))))), ((~(((/* implicit */int) arr_3 [i_1])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_9))));
    var_19 = ((/* implicit */unsigned long long int) ((524287) << (((415118081U) - (415118074U)))));
}

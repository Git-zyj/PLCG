/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164014
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
    var_20 = ((/* implicit */unsigned short) var_1);
    var_21 -= ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_18))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(unsigned short)12] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 794034218))))) >= (((/* implicit */int) arr_1 [i_1]))));
                var_22 = ((((/* implicit */int) ((short) (+(arr_2 [i_0] [(short)5] [i_0]))))) + (794034218));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) var_17);
    var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) (short)-32205))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (((var_16) + (var_14))))) | (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-32214)) ? (364810924) : (-1337628912))) ^ (((/* implicit */int) var_15)))))));
}

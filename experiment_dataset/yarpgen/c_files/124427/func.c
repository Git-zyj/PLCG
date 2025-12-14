/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124427
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
    var_13 += ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((unsigned short) min((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (unsigned char)88))))), (((((/* implicit */_Bool) (short)3584)) ? (((/* implicit */int) (unsigned char)28)) : (var_12)))))))));
                    arr_6 [19LL] [i_1] [(unsigned char)19] [(short)9] = ((/* implicit */_Bool) -5050118209257661931LL);
                    var_15 = (-(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (var_4) : (5050118209257661930LL))))));
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+(min((var_7), (((/* implicit */int) arr_4 [(signed char)16] [19LL])))))))));
                    arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)24576)), (260046848)))) ? (((/* implicit */unsigned int) var_1)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24576)) ? (((/* implicit */long long int) 260046848)) : (-3587858817757204872LL)))) ? (((((/* implicit */_Bool) (short)-189)) ? (var_10) : (2536012480U))) : (((/* implicit */unsigned int) (-(-367885755))))))));
                }
            } 
        } 
    } 
}

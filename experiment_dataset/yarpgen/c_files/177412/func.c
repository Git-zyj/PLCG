/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177412
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
    var_12 = ((/* implicit */int) var_5);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)133)) * (((/* implicit */int) var_10))));
                    var_13 -= ((/* implicit */short) ((((/* implicit */long long int) 0U)) != ((((_Bool)0) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */int) (short)1665)) / (var_9))))))));
                    var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_0]))))), (var_0))))));
                    var_15 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-1666)) : (var_2))) + (((/* implicit */int) (unsigned short)4032))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (unsigned short)10491);
}

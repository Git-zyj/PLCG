/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108065
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    var_17 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_1]))));
                    arr_8 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0])))))) >= (arr_6 [i_2]))))));
                    var_18 = ((/* implicit */unsigned short) ((signed char) ((((unsigned long long int) arr_4 [i_0] [i_1] [i_0])) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))))))));
                    var_19 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_1] [i_0])))))));
                    var_20 = ((/* implicit */unsigned long long int) ((unsigned short) (-(((/* implicit */int) ((signed char) arr_2 [i_2] [i_2] [i_2]))))));
                }
            } 
        } 
    } 
    var_21 &= ((/* implicit */int) ((unsigned char) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_14)))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_0))))))));
    var_22 = var_11;
    var_23 = ((/* implicit */unsigned short) (~(((long long int) ((var_13) + (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
}

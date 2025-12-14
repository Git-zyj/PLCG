/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169231
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
    var_19 = ((/* implicit */signed char) (~(var_9)));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((unsigned long long int) var_8)) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (signed char)-10))))))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? ((+(var_7))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) % (((/* implicit */int) ((var_9) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [10LL] [i_2] [(signed char)17] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) (unsigned char)198)) * (((/* implicit */int) arr_2 [i_0] [i_2])))));
                    arr_8 [i_2] [i_2] [i_2] [i_2] = 5945725578449762881ULL;
                }
            } 
        } 
    } 
}

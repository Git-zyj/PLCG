/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177482
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
    var_20 = ((/* implicit */unsigned int) var_8);
    var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-7722069180345310593LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (var_15))) < (((/* implicit */long long int) ((/* implicit */int) var_13)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (_Bool)1)), (14865610822811572344ULL))))));
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) (unsigned short)30411))))))))));
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) min((((/* implicit */long long int) (_Bool)1)), (-209702276336857755LL))))));
                    var_24 = ((/* implicit */signed char) (~(min((209702276336857754LL), ((+(var_15)))))));
                }
            } 
        } 
    } 
}

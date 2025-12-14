/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150085
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
    var_14 = min((2016303681U), (2278663632U));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    arr_6 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) -1438921002);
                    var_15 = ((/* implicit */short) arr_1 [i_2] [i_0]);
                }
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2510015)) ? (2016303667U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((_Bool) ((int) arr_2 [i_0] [i_0])))) : ((-(((/* implicit */int) (_Bool)0)))))))));
                var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) min(((signed char)-109), (min((((/* implicit */signed char) (_Bool)0)), ((signed char)108)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) (unsigned short)26734)))));
                var_18 -= ((/* implicit */int) ((unsigned long long int) ((signed char) ((int) arr_1 [i_0] [i_0]))));
            }
        } 
    } 
    var_19 ^= ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned long long int) (~(var_4)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 5U)) : (16840257559612765800ULL))))));
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((unsigned long long int) (+((+(2016303681U)))))))));
}

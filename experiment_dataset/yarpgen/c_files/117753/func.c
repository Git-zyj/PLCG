/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117753
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) var_3))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)121)) ? (var_4) : (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))));
                    arr_7 [i_0] [i_0] [(_Bool)1] [i_2] = ((/* implicit */short) (+(var_4)));
                    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */signed char) (_Bool)1))))) : ((~(((/* implicit */int) var_0))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_6);
}

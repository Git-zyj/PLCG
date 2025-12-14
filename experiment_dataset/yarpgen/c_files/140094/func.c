/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140094
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
    for (int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1 + 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 2]))) - (arr_6 [i_0])));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 ^= ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) var_9)) ? (var_1) : (var_18)))))));
                                var_20 = ((int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_3] [i_4])) ? (((((/* implicit */_Bool) (short)31135)) ? (((/* implicit */int) arr_5 [i_0] [(_Bool)1] [(unsigned short)0] [i_0])) : (arr_9 [i_0] [i_1 + 1] [i_0] [i_4]))) : (((/* implicit */int) ((unsigned short) (short)31135)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_1)));
    var_22 = min((((/* implicit */unsigned long long int) var_0)), (var_2));
    var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) var_1)))))) ^ (var_17)));
}

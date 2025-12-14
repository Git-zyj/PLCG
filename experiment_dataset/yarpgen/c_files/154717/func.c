/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154717
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) var_8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 7; i_3 += 1) 
                    {
                        var_12 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_2)))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : ((((-(((/* implicit */int) (unsigned char)85)))) * (((/* implicit */int) (unsigned char)85))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_13 = ((((/* implicit */int) ((_Bool) var_9))) != (((int) var_7)));
                            var_14 = ((/* implicit */short) max((((signed char) var_10)), (((/* implicit */signed char) ((_Bool) (signed char)-35)))));
                        }
                    }
                    arr_11 [i_0] [i_0] [i_0] [9LL] = (-(((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_7)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((((/* implicit */long long int) var_6)), (var_5)))))) >= (var_8)));
}

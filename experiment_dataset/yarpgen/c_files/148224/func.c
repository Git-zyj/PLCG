/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148224
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
    var_20 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) (-((((+(arr_8 [i_3] [i_1] [22LL]))) - (((/* implicit */unsigned int) (+(((/* implicit */int) var_19)))))))));
                        arr_12 [i_3] = (+(((/* implicit */int) ((((/* implicit */_Bool) (+(var_17)))) || (((/* implicit */_Bool) arr_0 [i_0] [i_3 - 2]))))));
                        var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) var_8)))));
                    }
                    var_23 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) (signed char)124)), (arr_9 [i_0 - 2] [i_1] [i_1] [i_2 - 1]))) / (((/* implicit */unsigned int) (~(var_5))))));
                }
                arr_13 [(_Bool)1] = ((/* implicit */short) arr_6 [i_1]);
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))), (var_9))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    var_25 = ((/* implicit */short) var_10);
}

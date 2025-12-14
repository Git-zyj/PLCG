/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165199
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
    var_20 = ((/* implicit */signed char) var_15);
    var_21 += ((/* implicit */_Bool) var_8);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_6 [i_0 - 1] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) (~((-(arr_3 [i_0 + 2])))));
                    arr_7 [i_0] [(unsigned char)7] [i_2] [i_0] = ((/* implicit */unsigned short) ((unsigned int) arr_2 [i_0 + 1] [i_0 + 3]));
                    var_22 *= ((/* implicit */unsigned int) (+(arr_0 [i_0])));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) | (((var_19) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_16)) != (((/* implicit */int) var_11))))))))))));
}

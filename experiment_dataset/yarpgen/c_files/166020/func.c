/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166020
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) (unsigned char)106);
                var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) ((((((/* implicit */int) (unsigned char)106)) / (-1092146623))) != (((((/* implicit */_Bool) arr_5 [i_0])) ? (-1) : (var_15))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (int i_3 = 2; i_3 < 9; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) (+(var_15)));
                    var_21 = ((/* implicit */int) arr_8 [i_2]);
                    var_22 = ((/* implicit */unsigned char) var_8);
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_15))));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105697
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_6)))))));
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (unsigned short)39360)) << (((((/* implicit */int) (unsigned char)74)) - (74))))) < (((/* implicit */int) (unsigned short)26185)))))) <= (arr_1 [(unsigned short)4]))))));
                }
            } 
        } 
    } 
    var_15 = (unsigned char)157;
    var_16 |= ((/* implicit */unsigned char) ((((((((/* implicit */int) var_12)) & (((/* implicit */int) var_5)))) & (((((/* implicit */int) var_9)) + (((/* implicit */int) var_2)))))) != (max((((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_9))))), ((-(((/* implicit */int) var_9))))))));
    var_17 = ((/* implicit */unsigned int) var_0);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155643
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_20 = (unsigned short)10;
                    var_21 = (unsigned short)51070;
                    var_22 = ((unsigned short) ((((/* implicit */int) (unsigned short)51073)) * (((/* implicit */int) min((var_7), ((unsigned short)20))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_6))) * (min((((/* implicit */int) ((((/* implicit */int) arr_1 [i_3] [i_5])) == (((/* implicit */int) arr_12 [i_4]))))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_17))))))));
                    var_24 -= (unsigned short)58786;
                }
            } 
        } 
    } 
    var_25 *= var_10;
    var_26 = (unsigned short)4858;
}

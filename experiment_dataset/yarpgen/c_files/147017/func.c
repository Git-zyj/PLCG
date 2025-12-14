/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147017
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
    var_10 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) var_7)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        arr_12 [i_3 + 2] [i_1] [i_1] [i_0] = ((/* implicit */short) ((unsigned int) (~((~(var_7))))));
                        arr_13 [i_1] = ((/* implicit */short) (~((+(min((var_9), (((/* implicit */unsigned long long int) var_0))))))));
                        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (-((-(var_7))))))));
                        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((unsigned char) (+(var_9)))))));
                        var_13 += ((/* implicit */short) (~((~(((unsigned int) 2761038017U))))));
                    }
                    var_14 += ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_9))))), (var_6))))));
                    arr_14 [i_0] [i_1] = ((/* implicit */unsigned int) var_4);
                    var_15 -= ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) var_5)))));
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */signed char) ((long long int) ((signed char) ((((/* implicit */_Bool) (short)28196)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-28195))) : (1648788897476602710LL)))));
    var_17 = ((/* implicit */unsigned int) var_0);
}

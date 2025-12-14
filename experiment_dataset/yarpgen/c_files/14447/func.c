/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14447
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) var_4)) != (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) var_5)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_10 -= ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */short) arr_3 [i_0] [i_0])), (((short) 2)))))));
                            arr_11 [i_2] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) arr_9 [i_3] [i_2 + 1] [i_1] [(unsigned short)3])), (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_3])) & (((/* implicit */int) var_9))))) ? (var_2) : (((/* implicit */int) min((var_8), ((unsigned char)64))))))));
                            arr_12 [i_0] [i_0] [i_0] [(unsigned char)6] [i_0] [(unsigned short)10] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_3])) : (var_6))) - (((/* implicit */int) var_9)))), (min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) (unsigned char)154)) : (-1370062818)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_11 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned short) (short)-32753)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118671
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
    var_15 = var_10;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) var_2);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned char)116))))));
                            arr_11 [i_2] [i_1] [(unsigned short)2] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)107)) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60424))) % (var_2))))))), (min((var_2), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_9 [i_3])) - (51))))))))));
                            var_17 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5107)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60429))) : (arr_1 [i_2])))) ? ((+(var_4))) : ((-(((/* implicit */int) var_5))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149110
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
    var_17 = ((/* implicit */short) (-(((/* implicit */int) ((short) (short)7)))));
    var_18 = ((/* implicit */short) (+(((/* implicit */int) (signed char)-48))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (short)26824)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (short)26824))))));
                            arr_10 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1] = (short)-1;
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)107)) <= (((/* implicit */int) (short)-10321))))) | (((/* implicit */int) (short)31093))));
                        }
                    } 
                } 
                arr_11 [i_1] = ((_Bool) var_16);
            }
        } 
    } 
}

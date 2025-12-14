/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14758
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
    var_16 = ((/* implicit */short) -1745595937);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) (-((~(-1745595937)))));
                var_17 = ((/* implicit */signed char) -1745595955);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            {
                var_18 = ((/* implicit */short) arr_10 [i_2] [i_2] [i_2]);
                arr_11 [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_4)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((unsigned long long int) 1745595936))) ? (-1745595919) : (((/* implicit */int) ((short) (short)16384)))))));
}

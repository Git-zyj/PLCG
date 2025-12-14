/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174241
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_13 -= ((/* implicit */unsigned char) var_5);
        var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_1 [i_0])))))));
        var_15 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (short)10846))));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                {
                    var_16 = ((((/* implicit */_Bool) max((max((8574692133116797862ULL), (((/* implicit */unsigned long long int) (unsigned char)200)))), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) var_9)))))))) ? (((/* implicit */unsigned int) arr_2 [10LL] [i_2])) : ((-(arr_6 [i_3] [i_1]))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (signed char)-70)))))) + (((/* implicit */int) var_12))));
                    arr_10 [i_2] [i_1] [i_3] = ((/* implicit */int) var_1);
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) min((arr_2 [i_1] [i_1]), ((~(arr_2 [i_1] [i_1])))));
        var_19 = ((/* implicit */unsigned int) var_12);
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) var_7);
                    var_21 = ((/* implicit */long long int) (signed char)1);
                    var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((int) (unsigned char)89))), (max((arr_11 [i_1] [i_4] [i_5]), (arr_11 [i_1] [i_4] [i_1])))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */signed char) (+((~(((/* implicit */int) (short)-10847))))));
    var_24 = ((/* implicit */long long int) var_12);
}

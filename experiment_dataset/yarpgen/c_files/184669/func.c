/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184669
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) ((unsigned char) var_8))) : (((((/* implicit */int) (unsigned short)23663)) + (((/* implicit */int) (signed char)-109)))))), (((/* implicit */int) (unsigned char)160))));
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        var_16 -= ((/* implicit */unsigned int) arr_5 [i_0]);
                        var_17 |= ((/* implicit */signed char) max((((/* implicit */int) var_4)), ((((!(((/* implicit */_Bool) 0ULL)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned char) var_2)))))));
                    }
                    arr_10 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (3149974636U))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) (signed char)96)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */int) var_0)), (((int) (-(((/* implicit */int) var_9)))))));
    var_19 |= ((((/* implicit */_Bool) (-(((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_4))))))) ? (max((((/* implicit */int) (short)-7972)), (((((/* implicit */int) (signed char)67)) % (((/* implicit */int) (unsigned short)27562)))))) : (((/* implicit */int) var_1)));
}

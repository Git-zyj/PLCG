/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146233
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
    var_10 = ((/* implicit */unsigned short) var_3);
    var_11 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = var_1;
                        var_13 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [(unsigned char)18] [(_Bool)1] [i_3])) ? ((-(((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_1 - 1] [i_1] [i_1 - 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32438)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-23))))))))));
                    }
                    for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        var_14 ^= ((/* implicit */_Bool) arr_3 [i_2]);
                        var_15 = ((/* implicit */unsigned int) (unsigned short)19571);
                    }
                    var_16 ^= ((/* implicit */unsigned char) var_1);
                    var_17 = ((/* implicit */short) arr_12 [i_0] [i_0] [i_0] [i_1 - 2] [i_1 + 1] [13LL]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_6))));
    var_19 ^= ((/* implicit */short) (+(((/* implicit */int) var_3))));
}

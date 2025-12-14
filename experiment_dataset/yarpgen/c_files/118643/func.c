/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118643
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 8; i_1 += 1) 
        {
            {
                var_18 ^= ((/* implicit */unsigned long long int) (short)32761);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) (-(((((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                            var_20 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((_Bool) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
        var_23 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_4])) - (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_11)))))));
    }
    var_24 = ((/* implicit */short) (-(((/* implicit */int) ((signed char) max((var_16), (((/* implicit */unsigned int) var_3))))))));
}

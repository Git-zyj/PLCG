/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125994
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_12 = (!(((/* implicit */_Bool) var_4)));
                    var_13 = ((/* implicit */_Bool) var_8);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_14 &= ((/* implicit */unsigned char) ((((arr_12 [i_3]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_12 [i_3])))) | (((/* implicit */int) ((_Bool) var_0)))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_2 [i_3])), (var_6)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))) ? ((-((-(((/* implicit */int) arr_10 [i_3])))))) : (((/* implicit */int) arr_13 [i_3] [i_3]))));
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) arr_2 [i_3]))));
        }
        var_17 = ((/* implicit */unsigned char) ((((_Bool) var_5)) ? ((~(((((/* implicit */int) arr_3 [(_Bool)1])) ^ (((/* implicit */int) var_5)))))) : (((/* implicit */int) var_1))));
    }
}

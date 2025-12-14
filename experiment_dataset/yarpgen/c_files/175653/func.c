/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175653
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_18 &= ((/* implicit */unsigned int) ((short) 9LL));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((unsigned int) var_2));
                    arr_9 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((10LL), (4717004062204529502LL))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */int) ((((/* implicit */int) ((((9LL) % (((/* implicit */long long int) ((/* implicit */int) var_14))))) < (((/* implicit */long long int) var_16))))) != ((-(((((/* implicit */_Bool) var_13)) ? (var_8) : (var_16)))))));
    var_20 += ((/* implicit */long long int) ((int) 0U));
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (unsigned char)255))));
}

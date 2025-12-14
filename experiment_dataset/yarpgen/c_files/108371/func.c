/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108371
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
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((short) (short)-6))))) ? (((/* implicit */int) (unsigned short)20187)) : (((/* implicit */int) (!(((/* implicit */_Bool) min((5215174874388669389ULL), (((/* implicit */unsigned long long int) arr_5 [i_0]))))))))));
                    arr_10 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) arr_2 [i_0 + 3])))) ? ((-2147483647 - 1)) : (((/* implicit */int) max((arr_4 [i_1] [i_1]), ((unsigned char)43)))))) - (((/* implicit */int) arr_3 [i_0]))));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) == (((/* implicit */int) (!((_Bool)1))))))) + (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 + 3])) == (((/* implicit */int) arr_9 [i_1] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
    var_15 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)214)), (var_4)))))) || (((((/* implicit */_Bool) (unsigned char)52)) && ((!(((/* implicit */_Bool) (unsigned char)43))))))));
}

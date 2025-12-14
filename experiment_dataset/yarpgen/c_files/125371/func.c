/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125371
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (36020000925941760LL))), (((/* implicit */long long int) ((unsigned int) -36020000925941774LL))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((unsigned int) ((unsigned long long int) (_Bool)1))) : (((/* implicit */unsigned int) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)2)))))));
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((36020000925941774LL), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)243)) / (1033499893))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (arr_0 [i_0 - 1]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) var_3);
}

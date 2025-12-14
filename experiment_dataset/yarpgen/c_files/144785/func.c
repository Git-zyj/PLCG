/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144785
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
    var_10 = ((/* implicit */unsigned long long int) min(((+(var_5))), (((/* implicit */unsigned int) var_6))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (signed char)115))) != (((((/* implicit */_Bool) -1758301073)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_0 [i_0 - 1]))))));
                    arr_8 [i_1] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_0 [i_2 - 1])))), (max((((arr_4 [i_1]) + (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) arr_0 [i_0]))))));
                    var_11 = ((/* implicit */signed char) arr_6 [i_0]);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)148))) > (8547575856423408946LL))))))));
}

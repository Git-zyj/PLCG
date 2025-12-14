/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181651
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) max(((+(2797419409U))), ((~(4U)))));
                var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (4U) : (4294967292U)))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */short) (~(((((/* implicit */int) min((var_13), (arr_3 [i_1] [i_1])))) | (((((/* implicit */int) (short)16368)) ^ (((/* implicit */int) (unsigned char)211))))))));
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (~(4294967274U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)24)), (var_8))))) : ((+((~(4U)))))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */int) var_3);
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) 1014956720))))) != (((/* implicit */int) var_10))));
    var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
    var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
}

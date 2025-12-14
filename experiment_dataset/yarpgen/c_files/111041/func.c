/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111041
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
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned char) min(((+((~(((/* implicit */int) (short)32763)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((-216496473) % (((/* implicit */int) (unsigned char)188))))) || (((/* implicit */_Bool) 216496476)))))));
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_13)), (arr_3 [i_0 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 5)) ? (((/* implicit */int) (unsigned char)167)) : (var_15)))) == (var_5))))) : (((((arr_3 [i_0]) - (((/* implicit */unsigned int) -216496478)))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90)))))));
                }
            } 
        } 
    } 
    var_20 = (unsigned char)90;
    var_21 ^= ((/* implicit */unsigned short) 1858047173);
}

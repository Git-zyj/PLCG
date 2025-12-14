/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146232
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
    var_14 = ((/* implicit */short) min(((~(((/* implicit */int) var_6)))), (max(((-(((/* implicit */int) var_11)))), (((/* implicit */int) var_11))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [(unsigned short)19] [(signed char)13] = ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) 2097088U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12620))) : (2097072U))))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_5)))))))));
                var_15 = ((/* implicit */signed char) (-(18446744073709551591ULL)));
            }
        } 
    } 
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_8))));
    var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) max((var_7), ((short)12611)))) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_6)) : ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-12620)) : (((/* implicit */int) var_3))))))));
}

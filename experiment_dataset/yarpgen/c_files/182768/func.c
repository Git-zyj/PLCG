/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182768
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) ((signed char) (unsigned char)209))), (((((/* implicit */int) var_2)) * (((/* implicit */int) var_14))))))) ? (max((arr_5 [i_1 + 1] [i_2 - 1] [i_2]), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) var_9))));
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)4449)) : (((/* implicit */int) (unsigned char)246))))) && (((/* implicit */_Bool) (((+(((/* implicit */int) arr_1 [i_0])))) | (((/* implicit */int) var_11))))))))));
                    var_17 = ((/* implicit */unsigned char) (~(12805610468502359893ULL)));
                    var_18 = ((/* implicit */short) (~((-(((/* implicit */int) (unsigned char)56))))));
                    arr_8 [i_0] = max(((~(((/* implicit */int) (signed char)-6)))), (((((/* implicit */_Bool) arr_6 [14LL] [i_1 + 2] [i_2] [i_2 - 1])) ? (788676051) : (((/* implicit */int) (unsigned short)63210)))));
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (((((/* implicit */unsigned long long int) var_7)) * (18446744073709551615ULL)))))));
    var_20 = (((~((~(var_13))))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7562))));
}

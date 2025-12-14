/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101091
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (-((+(((((/* implicit */_Bool) 622872339)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_1))))))))));
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 622872339)) ? (((/* implicit */int) (unsigned short)39963)) : (((/* implicit */int) (signed char)7))))) ? ((~(((/* implicit */int) (signed char)92)))) : (568209815)))) ? ((-(((/* implicit */int) ((short) var_12))))) : (((/* implicit */int) ((unsigned short) (short)12392))));
    var_16 = ((/* implicit */_Bool) var_11);
    var_17 *= ((/* implicit */signed char) ((unsigned long long int) (+((~(var_3))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_18 *= ((/* implicit */short) ((((min((arr_5 [(_Bool)1] [(unsigned short)5] [i_0]), (-622872339))) | ((~(((/* implicit */int) var_4)))))) >= (((((/* implicit */_Bool) (~(-622872317)))) ? (((((/* implicit */_Bool) arr_6 [(unsigned short)22] [i_0] [i_0] [i_2 + 2])) ? (arr_5 [i_0] [8U] [22U]) : (arr_2 [i_0] [i_1]))) : (((/* implicit */int) (signed char)-7))))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 + 2])) ? (((/* implicit */int) max(((signed char)6), ((signed char)-7)))) : (((/* implicit */int) ((arr_8 [i_2 + 1] [i_2 + 2]) == (arr_8 [i_2 + 1] [i_2 + 1]))))));
                    var_20 ^= ((/* implicit */unsigned short) (signed char)92);
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 568209815)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (signed char)7))));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166617
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            {
                arr_6 [i_0] [(_Bool)1] [i_0] |= (+(((/* implicit */int) arr_3 [i_0])));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) (~(arr_5 [i_0 + 1] [i_1] [i_1 + 2])));
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)63910)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (signed char)(-127 - 1)))))) / (((((/* implicit */_Bool) 8796092891136LL)) ? (1062918726U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65280))))))))));
                arr_8 [i_0] [i_1 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551609ULL) == (288230376151187456ULL))))) * ((-(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (13ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (+(var_6)));
    var_19 = ((/* implicit */_Bool) (short)0);
    var_20 = ((/* implicit */_Bool) ((signed char) max(((!(((/* implicit */_Bool) (unsigned char)128)))), (((_Bool) var_12)))));
}

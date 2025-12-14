/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103974
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
    var_16 -= ((/* implicit */unsigned short) (+(((/* implicit */int) max(((unsigned short)51458), (((/* implicit */unsigned short) min((var_3), (((/* implicit */short) (unsigned char)56))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_17 -= ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)65523)), (arr_1 [i_1] [i_2])));
                    arr_7 [i_1] [i_0] [i_1] = ((/* implicit */int) (+(var_8)));
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) (+(arr_5 [i_0] [i_1] [i_2])));
                    arr_9 [i_1] [i_1] = ((/* implicit */signed char) (+((~(((/* implicit */int) ((var_6) >= (((/* implicit */long long int) -1)))))))));
                }
            } 
        } 
    } 
    var_18 = ((((/* implicit */_Bool) ((1042456153) / (var_13)))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_7))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65510)) ? (var_8) : (((/* implicit */unsigned long long int) -7449102617676321557LL)))))))));
    var_19 += ((/* implicit */unsigned long long int) var_14);
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_6))));
}

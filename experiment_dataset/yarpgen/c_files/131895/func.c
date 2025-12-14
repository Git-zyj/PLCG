/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131895
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
    var_20 = (_Bool)1;
    var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_17))))), (3812100228U)));
    var_22 -= ((/* implicit */signed char) (((-(((((/* implicit */_Bool) (signed char)-14)) ? (482867068U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))) < (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 1530186648U)) ? (var_0) : (var_13))), (var_0))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_23 &= ((/* implicit */_Bool) min((((/* implicit */long long int) ((max((((/* implicit */int) (short)-23523)), (arr_2 [i_0] [11U]))) >> (((((var_18) ^ (16777215U))) - (2493289914U)))))), (var_14)));
        var_24 = ((/* implicit */unsigned int) (_Bool)1);
        var_25 -= ((/* implicit */unsigned int) (+((+(arr_1 [i_0 + 4])))));
        arr_3 [i_0] [i_0 - 1] &= ((/* implicit */_Bool) (+(((long long int) ((((/* implicit */int) var_5)) >= (arr_1 [i_0 + 1]))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_26 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((short) arr_0 [i_1]))), (((arr_7 [i_0 + 1]) | (((/* implicit */unsigned long long int) 16777200U))))));
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (-((((-(-1547858897))) / (268435448))))))));
                    var_28 = ((/* implicit */_Bool) max((min(((~(16777215U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0]))) != (arr_4 [i_0])))))), (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_7)))))))));
                }
            } 
        } 
    }
    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        var_29 = ((/* implicit */unsigned long long int) (+((((+(-214877113709203751LL))) / (max((((/* implicit */long long int) arr_5 [i_3] [i_3])), (1124800395214848LL)))))));
        arr_12 [i_3] [i_3] = ((/* implicit */signed char) var_11);
    }
}

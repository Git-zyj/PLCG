/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155412
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) var_5)))) : (min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6)))), (max((var_1), (((/* implicit */int) var_13))))))));
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((max(((~(var_1))), (((/* implicit */int) (unsigned char)227)))) >= (((min((22), (((/* implicit */int) var_10)))) ^ (((/* implicit */int) ((-22) >= (-32)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((max((-1861925978), (-35))) == (arr_6 [i_0]))) ? (max((min((((/* implicit */unsigned long long int) var_11)), (arr_2 [i_0]))), (((/* implicit */unsigned long long int) (-(3094990886629091460LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_14)))) ? (((8418950017259260693LL) - (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (max((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) var_5)) ? (8418950017259260693LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))))))))));
                arr_7 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */int) (short)-4334)) : (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (short)17996)))), (((/* implicit */int) arr_3 [i_1] [i_0]))))) : (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) min((arr_3 [i_0] [i_1]), (var_8))))))));
                arr_8 [i_1] = ((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (short)31909))));
            }
        } 
    } 
}

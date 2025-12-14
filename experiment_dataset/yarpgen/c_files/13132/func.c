/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13132
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [18] [i_2] [i_0] = ((/* implicit */_Bool) var_7);
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */int) ((unsigned char) 12092393230344803199ULL))) : (((((/* implicit */_Bool) 18373555409769302351ULL)) ? (1044892706) : (((/* implicit */int) arr_5 [i_0] [i_0]))))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 4294967295U))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) var_14)) : (-4486325581383345870LL)))))));
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_6 [i_0]))) && (((/* implicit */_Bool) min((((/* implicit */short) arr_6 [i_2])), (var_4))))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (_Bool)1)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 553059978))))))))) + (((((/* implicit */int) min(((unsigned char)251), (var_3)))) >> (((((var_11) % (((/* implicit */int) var_3)))) + (47)))))));
                    var_17 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) > ((+(7514385819492674627ULL)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */int) (signed char)-86))))) && (((/* implicit */_Bool) ((189552286U) >> (((var_1) - (3222746153965583084LL)))))))))));
}

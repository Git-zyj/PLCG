/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136919
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
    var_15 &= ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)0)), (4205653444610805788ULL))))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_14)) ? (4205653444610805791ULL) : (var_4))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (1679345294))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))))) : (((/* implicit */int) ((((/* implicit */_Bool) min(((short)6510), ((short)-6501)))) && (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_14)))))))));
    var_17 = ((/* implicit */_Bool) var_7);
    var_18 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(5313834160984524703ULL)))) ? (4205653444610805816ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-67)))))))) | (var_4)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_5 [i_0] [i_0]) <= (arr_5 [i_1] [i_2])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1])))))));
                    arr_8 [i_2] [(_Bool)1] [i_1] [i_2] = ((/* implicit */long long int) arr_5 [i_2] [i_1]);
                }
            } 
        } 
    } 
}

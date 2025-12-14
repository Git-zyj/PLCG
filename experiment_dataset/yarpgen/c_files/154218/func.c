/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154218
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
    var_10 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (_Bool)1))))) == (((/* implicit */int) var_2)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_11 += ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) >= (((13117168989505145150ULL) >> (((1023U) - (990U))))));
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) max((((max((arr_8 [9ULL] [i_1] [i_0] [i_0]), (((/* implicit */unsigned int) var_4)))) <= (((((/* implicit */_Bool) 6321005386053511014ULL)) ? (var_7) : (527886427U))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 13812327703232822539ULL)) ? (18446744073709551593ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [(signed char)0])))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 30341696U)), (5424658959741698328ULL))))))));
                    var_12 = ((1923758009415687675ULL) >> ((((~(5112616303477818640ULL))) - (13334127770231732940ULL))));
                    arr_11 [i_0] [i_1] |= (!(((/* implicit */_Bool) (~(18446744073709551565ULL)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) max((((unsigned char) var_1)), (((/* implicit */unsigned char) var_8))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 12087431877285645643ULL)) || (((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((/* implicit */int) var_4)))))));
}

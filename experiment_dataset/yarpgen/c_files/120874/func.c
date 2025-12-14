/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120874
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned char)0)))))));
                arr_8 [i_0] [(signed char)14] [10ULL] &= ((/* implicit */unsigned long long int) var_2);
                arr_9 [i_0] [7ULL] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_11))))) | (max((var_5), (((/* implicit */unsigned long long int) var_11)))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249))) : (16726468512448595801ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            {
                arr_14 [i_3] = ((/* implicit */int) max((max((((var_4) % (var_15))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0))))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) <= (var_3)))), (((((/* implicit */int) var_11)) >> (((var_6) - (2007497740U))))))))));
                arr_15 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */long long int) ((/* implicit */int) var_13))) % (var_12))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13)))))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)0)), (0ULL))) : ((~(((var_9) & (var_5))))));
                var_16 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (var_1)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0))))))), (((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned short) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_6)) : (var_12)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_12)) : (var_5)))))));
            }
        } 
    } 
}

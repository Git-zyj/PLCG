/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118478
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
    var_15 = ((/* implicit */unsigned char) ((unsigned long long int) min((min((17905182393311417806ULL), (11301393452600393900ULL))), (max((14379759478529124723ULL), (((/* implicit */unsigned long long int) (signed char)-95)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_2 [i_0] [10U])))), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_0])) <= (((/* implicit */int) arr_2 [i_0] [i_1])))))));
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (var_14) : (((/* implicit */int) arr_2 [i_1] [i_0])))));
                var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned char) arr_0 [i_0])), (((unsigned char) ((unsigned long long int) arr_3 [i_0])))));
                var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [17] [i_1])) ? (((/* implicit */int) arr_0 [20U])) : (((/* implicit */int) var_12)))) % (((/* implicit */int) ((_Bool) var_10)))))) != (min((((/* implicit */unsigned long long int) ((short) (signed char)-86))), (arr_3 [i_0])))));
            }
        } 
    } 
    var_18 = (_Bool)1;
    var_19 += ((/* implicit */unsigned int) ((signed char) ((((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30))))) * (((/* implicit */unsigned long long int) -134217728)))));
}

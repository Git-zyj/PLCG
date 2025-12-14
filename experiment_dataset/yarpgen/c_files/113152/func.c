/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113152
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
    var_12 *= ((/* implicit */short) 10313779805951357700ULL);
    var_13 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)20)) ? (784384873) : (-848769905)))) : (((((/* implicit */_Bool) 5345797591684555333ULL)) ? (((/* implicit */unsigned long long int) 1251444277)) : (0ULL))))) / (min((13777964420084105306ULL), (min((var_1), (((/* implicit */unsigned long long int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_14 &= ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_4 [i_0]) : (arr_1 [i_1]))), (((/* implicit */unsigned int) ((unsigned char) max((arr_3 [i_1] [i_0] [i_0]), (((/* implicit */long long int) arr_4 [i_0]))))))));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_11))));
            }
        } 
    } 
}

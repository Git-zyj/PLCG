/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165162
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
    var_17 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((max((-7079277655844579306LL), (var_13))), (min((var_13), (((/* implicit */long long int) var_6))))))), (max((max((((/* implicit */unsigned long long int) var_5)), (var_8))), (min((var_14), (((/* implicit */unsigned long long int) var_16))))))));
    var_18 = ((/* implicit */_Bool) max((max((max((((/* implicit */unsigned long long int) (unsigned char)156)), (0ULL))), (((/* implicit */unsigned long long int) min((var_1), (var_1)))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (-2016205218)))), (min((((/* implicit */unsigned long long int) var_7)), (var_2)))))));
    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((max((var_12), (((/* implicit */unsigned int) (unsigned char)180)))), (((/* implicit */unsigned int) max((1152782439), (((/* implicit */int) (signed char)-79)))))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_3)), (var_6)))), (min((((/* implicit */unsigned long long int) var_16)), (var_8)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0] |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((min(((unsigned char)163), (arr_1 [i_0]))), (max((arr_0 [i_0]), (((/* implicit */unsigned char) var_9))))))), (min((((/* implicit */unsigned long long int) max((arr_2 [i_0] [i_0]), (((/* implicit */int) arr_1 [i_0]))))), (max((((/* implicit */unsigned long long int) -5926209072345676079LL)), (var_14)))))));
                var_20 &= ((/* implicit */int) min((max((min((var_14), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned int) var_3))))))), (max((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (15197224525381395495ULL))), (((/* implicit */unsigned long long int) max((-1152782440), (((/* implicit */int) var_15)))))))));
            }
        } 
    } 
}

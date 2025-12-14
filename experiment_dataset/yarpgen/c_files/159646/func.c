/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159646
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) var_3);
                arr_4 [i_0] = ((/* implicit */_Bool) ((((9223372036854775807LL) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) 33554432U)) ? (((((/* implicit */_Bool) 19ULL)) ? (9223372036854775807LL) : (9223372036854775804LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-10969))))))) : (((/* implicit */long long int) min((min((((/* implicit */unsigned int) var_5)), (268751311U))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)50))))))))));
                var_21 = ((/* implicit */unsigned short) 1370101106239414872LL);
                var_22 = ((/* implicit */short) max((((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) - (18446744073709551596ULL))))), (((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0] [i_1])), (-2106570911)))) ? ((-(arr_2 [i_0]))) : (((/* implicit */int) (short)9065))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_0);
    var_24 = ((/* implicit */int) var_6);
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_13), (var_17))))) : (max((((/* implicit */unsigned int) var_7)), (33554432U)))))) ? ((((+(((/* implicit */int) var_7)))) * (((/* implicit */int) (signed char)9)))) : (((/* implicit */int) ((((((/* implicit */_Bool) 4261412855U)) ? (var_15) : (((/* implicit */unsigned long long int) -1836189890)))) < (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (13ULL))))))));
}

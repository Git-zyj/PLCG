/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110712
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
    var_17 |= ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (8519509276549276908ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_14))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */_Bool) var_9);
                    arr_10 [i_0] [5ULL] [i_1] [i_0] = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2])) ? (((((/* implicit */int) (!(((/* implicit */_Bool) 9927234797160274718ULL))))) << (((arr_9 [(unsigned char)1] [i_1] [i_2]) - (1858085670))))) : (((/* implicit */int) min((min((var_6), (var_2))), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)105)) != (((/* implicit */int) var_3))))))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2])) ? (((((/* implicit */int) (!(((/* implicit */_Bool) 9927234797160274718ULL))))) << (((((arr_9 [(unsigned char)1] [i_1] [i_2]) + (1858085670))) - (207520883))))) : (((/* implicit */int) min((min((var_6), (var_2))), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)105)) != (((/* implicit */int) var_3)))))))))));
                    var_19 = ((((/* implicit */int) ((unsigned short) ((int) var_14)))) - (((/* implicit */int) var_13)));
                    arr_11 [i_1] [i_1 - 2] [i_1 - 2] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1 + 1] [i_1]))) * (arr_3 [i_0])))), (max((((/* implicit */long long int) arr_6 [i_1] [i_1 - 3] [i_1 + 1] [i_1 - 2])), (((((/* implicit */_Bool) var_3)) ? (-338456055465746311LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) max((var_5), (var_5)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))));
}

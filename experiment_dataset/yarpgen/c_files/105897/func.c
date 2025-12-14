/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105897
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
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [i_0 + 1] [i_0] [i_1] [i_2] = (+(((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (short)22150)))) ? (((/* implicit */int) arr_3 [9LL] [i_1])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (var_6))))));
                    arr_10 [i_2] [i_1] [i_1 + 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)22162)) ? (var_7) : (3)))), (((((/* implicit */_Bool) 731751516)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) <= (-5358770939335859117LL)));
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)13831)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) == (((/* implicit */long long int) (-(((/* implicit */int) var_13)))))))))))));
                    var_16 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) (short)-22152)) ? (((((/* implicit */int) (unsigned char)178)) >> (((8706612249599270248LL) - (8706612249599270228LL))))) : (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) (unsigned char)168)))))), (max((((/* implicit */int) (signed char)-103)), ((~(((/* implicit */int) (unsigned char)247))))))));
                    var_17 = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_1] [i_2])))), (min((var_7), (-857880908))))), (((((/* implicit */int) (signed char)-120)) * (((((/* implicit */int) (short)30231)) / (1263760682)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-106)), (-26709239368907991LL)))) ? (((var_2) >> (((var_1) + (8124099585783581134LL))))) : (((/* implicit */long long int) 594735858))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (var_6)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)6)))) : (((/* implicit */int) ((var_10) > (((/* implicit */long long int) var_6)))))))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112730
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_11 = ((/* implicit */_Bool) var_10);
        var_12 ^= ((/* implicit */signed char) var_8);
        arr_3 [(signed char)5] [i_0 + 1] = ((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) (unsigned short)39629)));
    }
    for (unsigned int i_1 = 3; i_1 < 11; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 268150417)))) ? (((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 5692501079235077333LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)25907)) : (((/* implicit */int) (signed char)68))))) : (min((var_9), (((/* implicit */long long int) var_1)))))) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)209)), (((((/* implicit */_Bool) -2123851207635371184LL)) ? (((/* implicit */int) (unsigned short)39634)) : (((/* implicit */int) var_3)))))))));
        arr_6 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) (unsigned char)143))))), (((((/* implicit */_Bool) 2261568028U)) ? (13496758392120165377ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
    }
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)143)) ? (4968564111808879704ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8586)))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)64))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 9916432439478710774ULL)) && (((/* implicit */_Bool) (unsigned char)200))))) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_2)), (var_8))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_1) == (((/* implicit */int) (signed char)-27)))))) : (((((/* implicit */_Bool) var_2)) ? (4108922256873181982LL) : (((/* implicit */long long int) ((/* implicit */int) (short)476)))))))));
    var_16 = ((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) 268419072)) ? (((/* implicit */long long int) 268419072)) : (-5294819817769855508LL)))))) ? (((/* implicit */unsigned long long int) var_9)) : (max((((/* implicit */unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) (unsigned char)55)), (0ULL))))));
}

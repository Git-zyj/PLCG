/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112245
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((3955158440U), (var_1)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (short)8184))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (var_2))))))) && (min((var_2), (((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 288230376151678976ULL))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1 - 1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) << (((var_1) - (1428708659U)))))) ? (((/* implicit */long long int) var_3)) : ((+((-9223372036854775807LL - 1LL)))))))));
                    var_11 = ((/* implicit */short) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)44)) ? (arr_3 [i_0] [i_1 + 3] [i_1 - 1]) : (((/* implicit */int) (signed char)-63)))), ((-2147483647 - 1))))) * (((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_7 [11] [i_1 + 3])))) ? (0U) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])), (-1))))))));
                    arr_9 [i_1] [i_1] = ((/* implicit */signed char) var_1);
                    arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (((((+(288230376151678976ULL))) - (((((/* implicit */unsigned long long int) arr_1 [0ULL] [i_1 + 1])) - (var_5))))) >> (((max((((/* implicit */unsigned long long int) (_Bool)0)), (((((/* implicit */_Bool) arr_6 [i_0] [9U] [i_1] [i_2])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))))))) - (2138574921544385934ULL)))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2578515742802342179LL)) ? (-59737593) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((unsigned int) (signed char)98)) != (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))))));
}

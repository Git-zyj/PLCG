/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124134
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
    var_13 = ((/* implicit */int) min((4338630281132809659LL), (min((max((((/* implicit */long long int) (unsigned char)221)), (4338630281132809653LL))), (min((4338630281132809653LL), (((/* implicit */long long int) (short)-24977))))))));
    var_14 = ((/* implicit */unsigned char) ((((((-4338630281132809650LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)118))))) << (((((11U) << (((2383142484U) - (2383142475U))))) - (5622U))))) != (((/* implicit */long long int) 1615449906))));
    var_15 = ((((/* implicit */_Bool) max((min((((/* implicit */long long int) (signed char)118)), (1766012361534049057LL))), (((/* implicit */long long int) ((2971959150U) << (((((/* implicit */int) (unsigned short)56448)) - (56419))))))))) ? (min((((((/* implicit */int) (unsigned short)56458)) | (((/* implicit */int) (short)-3919)))), (((/* implicit */int) (short)3918)))) : (max((((/* implicit */int) (signed char)14)), (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (short)0)))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = (_Bool)0;
                var_16 = ((/* implicit */unsigned short) 0ULL);
                arr_5 [i_0] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) 1323008146U)), (1ULL))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) | (2767548373120398007LL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)11521))) * (2ULL))) : (((/* implicit */unsigned long long int) ((595151088) ^ (((/* implicit */int) (signed char)-43)))))))));
            }
        } 
    } 
}

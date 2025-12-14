/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109959
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
    var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (unsigned short)49161))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)121)) < (((/* implicit */int) (unsigned short)4466))))) : (((/* implicit */int) (unsigned char)199))))) ? (((((((/* implicit */int) (unsigned short)61070)) < (((/* implicit */int) (unsigned short)8691)))) ? (9223372036854775802LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_14)))))))) : (((/* implicit */long long int) ((/* implicit */int) (short)2048)))))));
    var_18 = var_7;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) max((((max((1025365878), (arr_7 [i_0] [i_0]))) / (((/* implicit */int) (unsigned short)4461)))), (max((((/* implicit */int) (!(((/* implicit */_Bool) 14333344427836353577ULL))))), (-87712955)))));
                                arr_13 [i_0] [i_0] [i_1] [22LL] [i_2] [i_1] [i_4] = (short)2048;
                                var_20 += 90024432U;
                            }
                        } 
                    } 
                    arr_14 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) max((-9223372036854775802LL), (((/* implicit */long long int) (unsigned char)221))))) >= (max((((/* implicit */unsigned long long int) arr_10 [i_0] [18] [i_0] [i_1])), (9183944755535070479ULL)))))) % (((/* implicit */int) (unsigned short)8671))));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112600
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
    var_10 = ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_4))))), (var_0)));
    var_11 = ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)79)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) var_2))))))) < (3828507212U));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)186), (((/* implicit */unsigned char) (signed char)(-127 - 1))))))) | (var_8)));
                                var_12 = ((_Bool) 2147483647LL);
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1282767888U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)93)), (arr_7 [i_0])))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-28056)))))))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] [i_1] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) -4887807818531781091LL)) / (3805022247925574577ULL))), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_6)))), (((((/* implicit */int) var_2)) & (((/* implicit */int) (unsigned short)27248)))))))));
                var_14 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (short)31812)) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) var_5)))) < (((/* implicit */int) ((var_8) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)93)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_0] [i_1] [i_0])) ? (2147483647LL) : (2017612633061982208LL)))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned short) var_9)))))) : (((var_4) >> (((min((((/* implicit */unsigned long long int) var_2)), (var_4))) - (91ULL)))))));
                arr_15 [i_0] = min((((arr_6 [i_1 + 1] [i_1] [i_1 + 2] [i_1] [i_1] [i_1 + 1]) / (arr_6 [i_1 + 2] [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_1]))), (((arr_6 [i_1 + 2] [i_1] [i_1 - 1] [i_1] [i_1] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) == (((((/* implicit */_Bool) ((3968367087398443572LL) - (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) (short)831)) ? (-849228479) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((var_9), (((/* implicit */short) var_6)))))))));
}

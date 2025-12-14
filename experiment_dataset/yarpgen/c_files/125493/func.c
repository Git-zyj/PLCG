/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125493
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
    var_10 |= ((/* implicit */int) max((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-92))))), (((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (var_3) : (var_1)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [i_2] = ((/* implicit */short) ((max((((/* implicit */long long int) (short)15)), (var_1))) & (((/* implicit */long long int) (+(-1763221676))))));
                    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)0), (((/* implicit */short) (unsigned char)255))))) ? (((((/* implicit */_Bool) 137438953472LL)) ? (((/* implicit */unsigned long long int) -47487268)) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)57)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */short) arr_5 [i_2] [i_1] [i_2]))))))))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_4] [i_0])), (((((/* implicit */int) var_6)) | (((/* implicit */int) arr_1 [i_3 + 2] [i_4 + 2]))))))) ? (min(((-(arr_9 [i_1]))), (((/* implicit */long long int) min((((/* implicit */int) arr_5 [i_0] [i_2] [i_2])), (-819655816)))))) : (max((((/* implicit */long long int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])), (arr_2 [i_0] [(_Bool)1] [i_0 + 1])))));
                                var_13 += ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)22999)), (1755034588204309212LL)))) ? (min((arr_7 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_3])) ? (((/* implicit */int) (unsigned short)17776)) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)35)), ((unsigned short)17791)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) (~(((/* implicit */int) var_9))));
    var_15 *= ((/* implicit */_Bool) (-(min((((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (var_7)))));
    var_16 = ((/* implicit */long long int) min((var_16), (((((((/* implicit */long long int) -1356781723)) / (((var_1) | (((/* implicit */long long int) var_4)))))) << (((var_7) + (2424673836371194834LL)))))));
}

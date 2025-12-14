/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185340
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
    var_20 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) max((4294967289U), (((/* implicit */unsigned int) (-2147483647 - 1)))))) && (((/* implicit */_Bool) ((((var_0) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)0)))))))), (var_18)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */signed char) min((min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))), ((+(arr_1 [i_0 + 2])))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) min((((int) arr_2 [i_0] [i_1] [i_1])), (((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) var_13)), (arr_2 [i_0] [i_1] [i_1])))))));
                arr_6 [i_1] = (!(((/* implicit */_Bool) (unsigned char)186)));
                arr_7 [i_0 + 2] [i_1] [i_1] = ((/* implicit */long long int) arr_1 [i_0]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_13 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) 4294967283U)) && (((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1] [i_0 + 1])))))));
                            var_21 = ((/* implicit */int) (-(max((0ULL), (18446744073709551607ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
}

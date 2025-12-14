/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152687
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
    for (short i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 24; i_3 += 3) 
                    {
                        {
                            arr_13 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_0 - 1] [i_1 + 1])) ? (arr_2 [i_0 + 1] [i_0 - 2] [i_1 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_3] [10])))))) ? (((min(((_Bool)1), (arr_3 [i_2] [i_0 + 1] [i_2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [5LL] [i_1] [5LL] [5LL]))))))) : ((+(var_5))))) : (var_5)));
                            var_13 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_0] [(_Bool)1]))) ^ (var_12)))) ? (((/* implicit */int) arr_11 [i_1 + 1] [i_1] [i_2] [i_3 - 2])) : (((/* implicit */int) var_3))))));
                            var_14 = var_1;
                            var_15 = ((/* implicit */signed char) (unsigned char)0);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_19 [i_4] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_10 [i_0 + 1] [i_4] [i_1 + 2] [i_4])), ((~(arr_2 [i_1 + 1] [i_1 - 3] [i_1 + 2])))));
                            var_16 = (+(((((/* implicit */_Bool) arr_14 [i_0] [i_0] [(_Bool)1] [21ULL])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
                        }
                    } 
                } 
                var_17 = arr_2 [(signed char)23] [i_0 + 1] [i_1];
            }
        } 
    } 
    var_18 -= ((/* implicit */_Bool) min((min((12175258386581047500ULL), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) var_2))));
}

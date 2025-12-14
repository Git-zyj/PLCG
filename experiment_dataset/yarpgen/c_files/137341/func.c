/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137341
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0]))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) var_1);
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62207))) % (((((/* implicit */_Bool) 1217251457240588300ULL)) ? (arr_11 [(_Bool)1] [(unsigned char)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [10ULL] [i_1] [i_3] [7ULL])))))))) ? (arr_8 [i_1] [i_2] [i_1] [i_4]) : (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [(unsigned char)4])))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] = ((/* implicit */long long int) ((((arr_11 [0ULL] [i_0 + 1]) * (arr_11 [10ULL] [i_0 + 1]))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)127)))))));
                arr_15 [(signed char)2] [i_0] [(signed char)2] |= ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 2])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) -9223372036854775796LL)) != (arr_11 [(_Bool)1] [(_Bool)1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)179))));
    var_20 = ((/* implicit */signed char) var_11);
}

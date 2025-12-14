/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143023
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) 14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)87)))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((arr_0 [i_2]), (arr_0 [i_0]))) ^ (((/* implicit */long long int) ((((/* implicit */int) (signed char)33)) / (var_1))))))) ? (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 15)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [(signed char)12]))) : (var_2))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((2147483647) - (max((((/* implicit */int) min(((short)4), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */_Bool) -235473922)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))));
                                arr_14 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_4 - 1] [i_4])) || (((/* implicit */_Bool) arr_1 [i_4 + 1] [i_4])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4] [i_3] [8] [i_2] [i_1] [i_0])) ? (var_0) : (816323622054572757ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (var_6))))));
                                var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -3378857671722999056LL)) ? (-3378857671722999068LL) : (((/* implicit */long long int) 9)))) / (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)11859))))) - (((((/* implicit */unsigned long long int) 2147483647)) | (var_3)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */int) var_8)) : (var_1))))));
}

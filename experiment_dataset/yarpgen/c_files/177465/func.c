/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177465
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_1] [i_3 + 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (min((((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                            var_11 = ((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3]);
                            var_12 = ((/* implicit */long long int) min((var_12), ((~(((((/* implicit */long long int) ((/* implicit */int) var_9))) & (856856081454743979LL)))))));
                            arr_11 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)101))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */signed char) min((var_13), ((signed char)124)));
                arr_12 [i_0] [i_0] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(5680847722566762259LL)))), (((((/* implicit */_Bool) max(((short)5259), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0] [(short)17] [i_1]))))) : (var_3)))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (short i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        {
                            arr_18 [i_0] [i_0] [i_1] [(short)9] = ((/* implicit */_Bool) min(((((_Bool)0) ? (min((var_3), (((/* implicit */unsigned long long int) 5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)96)) & (((/* implicit */int) (signed char)16))))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((arr_9 [i_0] [i_1] [i_4] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61)))))), (((((((/* implicit */int) arr_16 [i_0] [i_1] [i_4] [i_4] [i_5])) + (2147483647))) << (((((/* implicit */int) arr_6 [i_5 + 1] [(short)6] [i_0])) - (92))))))))));
                            arr_19 [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */signed char) (-(((/* implicit */int) ((((arr_3 [i_1] [i_1]) << (((arr_3 [i_1] [i_1]) - (1403275865240082646LL))))) == (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-1), (arr_7 [i_0] [i_0] [i_0] [i_0]))))))))))) : (((/* implicit */signed char) (-(((/* implicit */int) ((((((arr_3 [i_1] [i_1]) + (9223372036854775807LL))) << (((((((arr_3 [i_1] [i_1]) - (1403275865240082646LL))) + (5132061264799272170LL))) - (41LL))))) == (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-1), (arr_7 [i_0] [i_0] [i_0] [i_0])))))))))));
                            var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-119)), ((unsigned short)24576)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 &= ((/* implicit */signed char) ((14881862164120794301ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    var_16 = ((/* implicit */long long int) var_4);
}

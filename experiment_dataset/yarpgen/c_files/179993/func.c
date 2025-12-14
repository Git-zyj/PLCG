/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179993
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
    for (int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [0ULL] [(signed char)6] [(short)8] [i_0] [(signed char)0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)14)), ((unsigned short)5203))))) - (arr_10 [i_4] [i_3] [(_Bool)0] [i_1] [i_0 + 2])));
                                var_16 = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14021))) | (arr_2 [i_4] [i_4]))))) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
                                arr_13 [7LL] [7LL] [(short)0] [i_3] [i_0] [(unsigned char)3] = ((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_2] [i_0]);
                                arr_14 [i_4] [0LL] [(signed char)0] [0ULL] [0LL] [4] |= ((/* implicit */unsigned short) max((arr_1 [i_4]), (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [(signed char)0] [6LL] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_3 [i_0])), (((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((arr_2 [(unsigned short)3] [i_1]) + (((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [(_Bool)1] [i_0]))))))));
                    var_17 += ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_2 [(_Bool)0] [i_0 - 1]), (arr_2 [i_1] [i_0 - 1]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_5])) ? (arr_16 [0ULL]) : (((/* implicit */long long int) (-2147483647 - 1)))));
        var_19 = ((/* implicit */unsigned long long int) -2729569840168581233LL);
        arr_19 [(unsigned char)19] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
        var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) 5707073195276751624LL)), (2251799679467520ULL)));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176037
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
    var_12 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) min((-2237068020200586327LL), (((/* implicit */long long int) (+(((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (short)-1))))))))));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [2ULL])))))) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_4]))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_3])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_1 [(signed char)16])))))));
                                arr_16 [i_0 - 2] [i_0 - 2] [11LL] [i_3] [i_4] [i_1] [i_1] = ((/* implicit */unsigned int) arr_9 [i_1] [i_1] [i_2]);
                                arr_17 [i_0] [i_1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-107))) : (arr_4 [i_1] [i_3])))) ? (arr_0 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 2] [i_0 + 2])))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (var_10))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1))) % (arr_7 [i_0])))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) <= (2133052196U))) && ((!(((/* implicit */_Bool) var_7))))))) / (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (signed char)-4)))))) != (var_0))))));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1209
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
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 7; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) > (((/* implicit */int) (short)0))));
                            var_11 = ((/* implicit */unsigned long long int) ((signed char) max((min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)145))), (((/* implicit */unsigned char) min((var_6), (arr_3 [(_Bool)1])))))));
                            arr_12 [i_0] [1U] [i_1] [i_3] = ((((/* implicit */_Bool) min((((/* implicit */long long int) max((var_10), (arr_4 [(_Bool)1] [(_Bool)1])))), (var_8)))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_3 + 1] [i_0 + 2] [i_2] [i_1 + 1] [i_1 + 1])) ? (max((var_8), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) arr_3 [i_2]))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [5ULL] [i_1]))))))))));
                            var_12 = ((/* implicit */unsigned long long int) min(((-(arr_10 [i_0] [i_3 + 2] [i_2] [i_3] [i_1 + 1] [i_3 + 2]))), ((+((-(arr_10 [i_0] [i_1] [i_1] [i_3] [i_3] [i_2])))))));
                        }
                    } 
                } 
                arr_13 [i_1] [i_1] = min(((~(((/* implicit */int) (unsigned short)38009)))), (max((((((/* implicit */int) arr_3 [i_1])) | (arr_10 [i_0] [i_0 - 1] [i_0 - 2] [i_1 + 1] [i_1] [i_1]))), (arr_10 [i_0 + 2] [i_1 + 1] [i_0 - 1] [i_1 + 1] [i_0] [0U]))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) var_5))));
}

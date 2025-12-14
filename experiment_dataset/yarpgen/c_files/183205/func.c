/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183205
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 7; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2 - 1] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((1949244653645858213ULL) <= (arr_3 [i_0] [i_1 + 1])))), (max((((/* implicit */unsigned long long int) var_3)), (arr_3 [i_1] [i_0])))));
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_2 - 3] [(unsigned char)4])) ? (arr_4 [i_1 + 1] [i_2 + 1] [(_Bool)1]) : (arr_4 [i_1 + 1] [i_2 - 3] [(unsigned short)0]))), (((arr_4 [i_1 - 1] [i_2 + 1] [4LL]) / (arr_4 [i_1 + 1] [i_2 + 1] [6ULL]))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_1]);
            }
        } 
    } 
    var_21 ^= ((/* implicit */unsigned int) 8452225948555703528LL);
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */long long int) var_4)), ((+(-951397747288821686LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
}

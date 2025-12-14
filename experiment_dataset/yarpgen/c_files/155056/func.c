/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155056
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
    var_16 = ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) ((signed char) (signed char)(-127 - 1)))) : (var_3));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_1])))) ? (((/* implicit */int) max(((signed char)(-127 - 1)), (var_0)))) : ((~(arr_0 [i_1])))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_0]), (arr_9 [i_3] [i_0])))) ? (((((/* implicit */int) var_11)) - (((/* implicit */int) (signed char)119)))) : (((int) (signed char)(-127 - 1)))));
                            arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (short)24993))) ? (((/* implicit */int) ((signed char) (unsigned char)16))) : ((+(((/* implicit */int) (unsigned char)240))))));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_7))));
                            arr_12 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5261977741867124963LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_8 [i_2] [i_2] [i_2]))))) ? (((int) (unsigned char)248)) : (((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */int) (unsigned char)15))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_3 [i_2] [i_1] [i_0]) : (((/* implicit */long long int) arr_0 [i_0]))))), (((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (7630644658126576032ULL)))))));
                            var_20 = ((/* implicit */int) (~(min((arr_3 [i_0] [i_2] [i_2]), (((/* implicit */long long int) (signed char)-44))))));
                        }
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_1]);
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 16; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~((~(((/* implicit */int) arr_17 [i_0] [i_0])))))))));
                            arr_21 [i_4] [i_4] [i_1] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) ((_Bool) arr_18 [i_4 + 2] [i_4 + 2] [i_4 + 1]))), (((((/* implicit */_Bool) arr_18 [i_4 + 2] [i_4 - 2] [i_4 - 1])) ? (((/* implicit */int) arr_18 [i_4 - 1] [i_4 + 2] [i_4 - 2])) : (((/* implicit */int) arr_18 [i_4 - 1] [i_4 - 1] [i_4 - 1]))))));
                            var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((int) ((short) (unsigned char)245)))), (min((arr_20 [i_4] [i_4 - 1] [i_4] [i_4] [i_5]), (arr_20 [i_1] [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_1])))));
                        }
                    } 
                } 
            }
        } 
    } 
}

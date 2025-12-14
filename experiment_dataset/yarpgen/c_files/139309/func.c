/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139309
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
    var_11 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_4)) : (2486842940631644006LL))), (((/* implicit */long long int) -1534082803)))) % ((((~(var_8))) | (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) 1249177180U);
                            var_13 = ((/* implicit */unsigned char) 2242530853254492840LL);
                            var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 2242530853254492826LL)) ? (((/* implicit */unsigned long long int) 4167303546U)) : (15437299214882963373ULL))) + (min((((/* implicit */unsigned long long int) (unsigned char)34)), (arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [5])))));
                            var_15 = var_4;
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? ((-(arr_8 [i_0 - 1] [1] [i_2] [i_3]))) : (var_0)));
                        }
                    } 
                } 
                var_17 = ((/* implicit */_Bool) ((1987634045419247278ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186003
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
    var_16 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_17 ^= max((((/* implicit */long long int) max(((unsigned char)100), (((/* implicit */unsigned char) ((_Bool) (signed char)-117)))))), (max((min((281474976702464LL), (((/* implicit */long long int) var_11)))), (min((var_0), (arr_2 [i_0] [i_0]))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_13 [i_4] [i_3] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (short)28))))), (((((/* implicit */int) min((((/* implicit */short) (unsigned char)33)), (var_2)))) % (((/* implicit */int) ((short) var_10)))))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_3]))) * (((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_1 - 1] [i_2] [i_3] [i_3] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_1] [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-35))))))) : (max((var_1), (258048LL)))))));
                                arr_14 [i_3] [i_3] [i_2] = ((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1]);
                                var_19 += ((-274877906944LL) / (-258049LL));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

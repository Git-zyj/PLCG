/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129388
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
    var_18 = ((/* implicit */_Bool) var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_19 &= ((/* implicit */short) (unsigned short)40139);
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [15ULL] [i_1] [i_3] [0ULL] [i_1] [i_0] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [(_Bool)1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)110))) : (arr_4 [i_3])))) ? ((-(((/* implicit */int) arr_5 [i_0] [15LL])))) : ((~(var_17))))));
                            var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((_Bool) arr_8 [i_1] [i_1] [i_1] [(unsigned short)15]))), (max((((/* implicit */unsigned long long int) var_4)), (arr_8 [(unsigned short)20] [2] [i_2] [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((unsigned long long int) var_11));
    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)25399))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)40139)) : (((/* implicit */int) (unsigned char)2)))) : (((/* implicit */int) var_3)))))));
}

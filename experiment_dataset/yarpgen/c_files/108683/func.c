/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108683
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
    var_12 = ((/* implicit */signed char) ((int) 738106756));
    var_13 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) var_6)))) : ((~(((/* implicit */int) var_6))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 -= ((/* implicit */signed char) arr_5 [i_0 - 1] [i_0] [2LL] [(_Bool)1]);
                    var_15 = ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-25251)));
                    var_16 = ((((/* implicit */_Bool) 32767)) ? (-1) : (((/* implicit */int) (_Bool)1)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_17 -= ((/* implicit */signed char) (_Bool)1);
                                var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) -613703917449400163LL)) ? (((((/* implicit */_Bool) (+(arr_2 [i_0] [i_1] [i_4])))) ? (((((/* implicit */_Bool) arr_5 [i_0] [(signed char)0] [i_0] [i_0])) ? (-613703917449400164LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1))))) : (((((/* implicit */_Bool) 3132256979074686749LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-3784558467735144926LL))))) : (-613703917449400163LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_2))));
}

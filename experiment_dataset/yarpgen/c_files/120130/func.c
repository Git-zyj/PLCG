/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120130
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
    for (signed char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((4262743221U) - (((/* implicit */unsigned int) -1)))))));
                            arr_10 [i_2] [i_1] [20U] [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) var_15);
                            var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) % ((-2147483647 - 1))))))))) == (var_6)));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-108)) ? (((((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (signed char)99)))) ? (((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */int) (short)-32761)) : (((/* implicit */int) (short)-31645)))) : (((/* implicit */int) (signed char)-98)))) : (((((/* implicit */_Bool) 7U)) ? ((~(((/* implicit */int) (signed char)99)))) : (-1268419607)))));
                var_20 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(var_10))))) | ((+(var_6)))))), (var_3)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_0);
}

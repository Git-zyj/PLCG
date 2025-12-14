/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165527
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) ((((/* implicit */_Bool) (-(((var_4) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65511))) : (var_6)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-29785)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) arr_7 [(_Bool)1] [i_1] [i_2] [i_2]);
                            var_12 ^= 4135097447973317874ULL;
                            var_13 = ((/* implicit */int) (short)23204);
                            var_14 = ((_Bool) 453064659U);
                            var_15 *= ((/* implicit */unsigned char) arr_4 [1LL]);
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) -8318889042186979823LL);
                var_17 = ((/* implicit */_Bool) arr_6 [i_1] [i_0 - 2] [i_0 + 3]);
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124007
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
    for (unsigned long long int i_0 = 4; i_0 < 7; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */short) ((signed char) ((arr_1 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((long long int) var_5)))));
                var_13 = ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) var_8)))));
            }
        } 
    } 
    var_14 *= ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) 18151470407946184389ULL)))));
    var_15 = ((_Bool) min(((+(var_5))), (((/* implicit */unsigned int) ((var_6) < (var_9))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 3) 
    {
        for (short i_3 = 2; i_3 < 11; i_3 += 2) 
        {
            {
                var_16 ^= (!(((/* implicit */_Bool) var_0)));
                var_17 = ((/* implicit */unsigned long long int) ((_Bool) var_10));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) 8160U))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((_Bool) var_3)))) ? (min((((((/* implicit */_Bool) arr_7 [(_Bool)1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_2] [7LL] [i_2])) ? (var_3) : (var_6)))))) : (((/* implicit */unsigned long long int) var_3))));
                        }
                    } 
                } 
            }
        } 
    } 
}

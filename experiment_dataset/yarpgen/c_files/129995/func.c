/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129995
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
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */int) (short)16384)) / (((/* implicit */int) (signed char)-2))));
                var_19 = ((/* implicit */short) (!(var_4)));
                var_20 = ((/* implicit */signed char) 2147483630);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 7; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 207630755U)))) & (((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])) ^ (((/* implicit */int) var_4))))) ? ((~(arr_3 [i_0] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                            arr_14 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */signed char) 2637529844U);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) (~(4133497622U)));
    var_23 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) ((((/* implicit */_Bool) -3361728023198770755LL)) || (((/* implicit */_Bool) -1140353377359679488LL))))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    var_24 = 2147483630;
    var_25 = ((/* implicit */unsigned char) var_1);
}

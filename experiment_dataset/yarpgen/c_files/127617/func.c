/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127617
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (9223372036854775807LL))), ((!(var_3)))))))))));
    var_12 = ((/* implicit */int) ((signed char) var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775800LL)) ? (((/* implicit */unsigned int) 2147483627)) : (1526840876U)));
                            arr_9 [i_1] = ((/* implicit */long long int) arr_2 [i_0]);
                        }
                    } 
                } 
                arr_10 [i_1] [i_0] [19] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) (~(var_9)))) != (min((arr_6 [i_0] [i_0] [i_1 + 3]), (((/* implicit */long long int) var_8))))))) << (((/* implicit */int) ((-919813570) != ((-2147483647 - 1)))))));
                var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_5 [i_0] [i_1])))))));
                var_15 -= ((/* implicit */int) var_3);
                var_16 = ((arr_1 [i_0] [i_0]) << ((((((~(((((/* implicit */int) arr_5 [i_1] [i_1])) + (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_0])))))) + (17))) - (13))));
            }
        } 
    } 
    var_17 = ((_Bool) var_3);
    var_18 -= ((/* implicit */unsigned char) ((unsigned short) var_4));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139780
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
    var_20 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) / (var_8));
    var_21 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) (unsigned char)213)), (677489909U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) == (var_5)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_0] = min(((unsigned char)3), (((/* implicit */unsigned char) (_Bool)0)));
                                var_22 ^= ((/* implicit */signed char) (-(((/* implicit */int) (!(arr_0 [i_4]))))));
                                arr_16 [i_1] = ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) min((((min((arr_5 [4U]), (arr_0 [i_0]))) ? (((/* implicit */int) (signed char)127)) : (((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_1])))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) arr_4 [i_1] [(unsigned char)13])) + (var_19)))))));
                }
            } 
        } 
    } 
}

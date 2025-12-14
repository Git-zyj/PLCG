/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122159
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
    var_12 = ((/* implicit */short) ((int) (unsigned short)14629));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                arr_4 [(unsigned char)8] [8] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)141))))) ? (max((var_6), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 1] [i_0 - 1]))))), (((/* implicit */long long int) var_9))));
                var_13 = ((/* implicit */unsigned short) ((unsigned char) var_9));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_3] = ((/* implicit */short) (-((~(((/* implicit */int) (unsigned short)18291))))));
                            arr_11 [7LL] [7LL] [i_2] [5LL] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 - 1] [i_0 - 1])) > (((/* implicit */int) arr_2 [i_1 - 1] [i_0 - 1]))))), ((~(((/* implicit */int) var_2))))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)227)) == (((/* implicit */int) ((unsigned char) var_9)))));
                var_14 = ((/* implicit */unsigned short) ((max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) (unsigned short)47253)) ? (((/* implicit */int) (unsigned char)68)) : (1539922600))))) + (((((/* implicit */_Bool) (unsigned short)55249)) ? (((/* implicit */int) ((unsigned char) (unsigned char)71))) : (((/* implicit */int) (unsigned short)47251))))));
            }
        } 
    } 
}

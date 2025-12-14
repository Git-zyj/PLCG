/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113838
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
    var_13 = ((/* implicit */signed char) var_3);
    var_14 = ((/* implicit */unsigned long long int) ((signed char) 7ULL));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) ((unsigned short) var_10));
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_8 [i_3 - 1] [i_3] [i_0] [i_3 - 1]), (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) arr_1 [12U]))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_3 + 1] [i_3]))) | (1171538008U))))))));
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((arr_3 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [20U] [i_2])) ? (((/* implicit */int) arr_6 [i_3] [2ULL] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)65534))))))))))))));
                            var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0]))) : (var_2)))))) || (((((unsigned long long int) var_3)) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_0])))))))));
                        }
                    } 
                } 
                arr_13 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) << (((/* implicit */int) ((unsigned short) (unsigned short)0)))))) : (((/* implicit */unsigned int) ((((((((/* implicit */int) arr_2 [i_0])) - (2147483647))) + (2147483647))) << (((/* implicit */int) ((unsigned short) (unsigned short)0))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3123429280U))))), (var_6)))) ^ (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_1))))))));
    var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_1)), (((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)17729))) + (1171538024U))))));
}

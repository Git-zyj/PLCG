/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165457
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
    var_16 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */int) min((((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)187)), (arr_2 [3] [3] [3])))) ? (max((1990747969U), (arr_1 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) arr_1 [i_0]))))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) min((519228038), (((/* implicit */int) (signed char)118)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) (((((((((_Bool)0) || (((/* implicit */_Bool) (signed char)20)))) ? (((/* implicit */long long int) arr_2 [i_0] [i_1 + 1] [i_0])) : (((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */long long int) arr_0 [i_1])) : (7625848167730090951LL))))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */int) ((_Bool) (short)16706))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
                            var_19 &= ((/* implicit */unsigned short) min(((-((+(((/* implicit */int) (signed char)-20)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                            var_20 &= ((/* implicit */long long int) (unsigned short)8980);
                        }
                    } 
                } 
                var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_0] [4U] [i_1 + 1]))) ? ((~(var_2))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)20)))));
            }
        } 
    } 
}

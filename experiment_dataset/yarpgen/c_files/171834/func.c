/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171834
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
    var_17 ^= ((/* implicit */long long int) var_6);
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) min((((/* implicit */unsigned char) (_Bool)0)), (var_2)))), ((short)-17547))))) != (-8510768715542509956LL))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (short)-17518))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_7)))) : (((((/* implicit */_Bool) var_3)) ? (arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_2 [i_0 + 1] [i_0 - 1] [i_0 - 1])))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned short) ((unsigned int) 4387908825596423241LL));
                    var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_2] [i_2] [i_2])) ? (((/* implicit */int) ((arr_7 [i_1] [i_2] [i_1] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) : (((/* implicit */int) (unsigned short)21576))));
                }
                for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)25020)), (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)20920))))))) * ((~(var_5)))));
                    arr_12 [i_0] [i_0] [i_1] = ((/* implicit */short) arr_6 [i_1] [i_0] [i_3]);
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_0] [14U] [i_3]);
                }
                var_22 = ((/* implicit */long long int) min((min((((/* implicit */int) ((signed char) 4312549878867969698ULL))), (((((/* implicit */int) (unsigned short)12)) + (((/* implicit */int) (_Bool)0)))))), (((((((/* implicit */int) min((var_11), (((/* implicit */short) arr_8 [i_0] [i_1] [i_0] [14ULL]))))) + (2147483647))) >> ((((+(-1886256325))) + (1886256341)))))));
            }
        } 
    } 
}

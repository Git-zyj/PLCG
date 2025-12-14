/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17309
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (283071615))))));
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)24770)) ? (((/* implicit */int) (unsigned char)0)) : (((int) ((((/* implicit */_Bool) 960917517901497619LL)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_3 [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_2 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (short)-24786)) : (((/* implicit */int) (unsigned short)10))))) : ((-(arr_8 [i_0] [i_0] [i_0]))))) + (9223372036854775807LL))) >> ((((-(arr_10 [i_2 + 2] [i_2 + 3] [i_2 - 1]))) + (4078314295101870034LL)))));
                            var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)24785))))) : (((((/* implicit */_Bool) (short)-24771)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_6 [i_0] [i_2 - 1] [i_2 + 3])))))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) (short)7590)))));
            }
        } 
    } 
    var_14 |= ((/* implicit */short) ((long long int) var_6));
}

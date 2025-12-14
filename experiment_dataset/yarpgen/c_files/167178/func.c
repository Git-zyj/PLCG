/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167178
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (10886640556115415905ULL)))) : ((((_Bool)1) ? (var_7) : (((/* implicit */int) var_0))))))) && (((/* implicit */_Bool) var_6))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    var_20 &= ((/* implicit */long long int) ((((/* implicit */int) (!(arr_4 [i_1 - 1] [i_2] [i_2])))) != (((/* implicit */int) (short)1915))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_1] [(signed char)20] [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) (-(min((arr_12 [i_0]), (((/* implicit */unsigned long long int) (short)1915))))));
                                var_21 -= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_1 + 4] [i_3 - 1])) ? (arr_5 [i_4] [i_1 + 4] [i_3 + 1]) : (arr_5 [i_0] [i_1 + 1] [i_3 + 1]))));
                                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [(signed char)0] [19ULL] [i_2])))))))));
                            }
                        } 
                    } 
                }
                var_23 = (-((-((+(var_10))))));
                var_24 = (((((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1 - 1]))))))) + (2147483647))) >> (((((/* implicit */int) max((arr_10 [i_1 + 4] [i_1] [i_1 - 1]), (arr_10 [i_1 - 1] [i_1 + 1] [i_1 + 2])))) + (9))));
            }
        } 
    } 
}

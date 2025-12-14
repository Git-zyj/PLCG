/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141021
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) arr_1 [i_0] [i_1 - 1]);
                var_15 = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (1763374201) : (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (long long int i_2 = 3; i_2 < 17; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min((arr_1 [i_2] [i_3]), (((/* implicit */short) var_9))))))) + (3653720592U)));
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 18; i_4 += 3) 
                {
                    for (signed char i_5 = 1; i_5 < 16; i_5 += 3) 
                    {
                        {
                            var_18 ^= ((((/* implicit */_Bool) (+(arr_2 [i_4 + 1])))) ? (((((/* implicit */_Bool) arr_14 [i_2 + 3] [i_2] [i_3] [i_3] [i_5 + 2])) ? (((/* implicit */unsigned int) ((int) (short)24057))) : (((((/* implicit */_Bool) -1079466519893595246LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3] [(_Bool)1] [i_4 - 1] [i_4 + 1])) && (((/* implicit */_Bool) (((_Bool)1) ? (4292036401U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21951)))))))))));
                            arr_17 [i_4] [i_2] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)65508)))), (((/* implicit */int) ((signed char) arr_7 [i_2] [2])))))) ? (arr_2 [i_2]) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), (var_7)))), (arr_7 [i_2] [i_2 + 2]))))));
                            var_19 = ((/* implicit */short) arr_14 [(short)18] [i_3] [i_4] [i_5] [i_5]);
                        }
                    } 
                } 
            }
        } 
    } 
}

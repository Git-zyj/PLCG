/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114022
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_2 [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)56865)) ? (362817078034022019LL) : (((/* implicit */long long int) 1596859510U)))))))) ? (((/* implicit */int) (unsigned short)2094)) : (((/* implicit */int) (unsigned short)2120))));
                    var_12 = max((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_2] [i_1] [i_0])));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (long long int i_4 = 3; i_4 < 8; i_4 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_2 [i_4 - 3])) ? (arr_2 [i_4 - 1]) : (((/* implicit */unsigned long long int) arr_12 [i_4 - 1])))), (arr_8 [i_4] [i_4])));
                var_14 = ((/* implicit */unsigned long long int) min((var_14), ((+(((((/* implicit */_Bool) arr_8 [i_4 - 3] [i_4])) ? (arr_8 [i_4 + 2] [i_4 + 1]) : (((/* implicit */unsigned long long int) 754721341U))))))));
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3])) ? (((((/* implicit */_Bool) (unsigned short)63443)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_15 [i_3] [i_4] [i_5] [i_5])))) : (((/* implicit */int) var_2))))))));
                    var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_8 [i_3] [i_3]), (((/* implicit */unsigned long long int) (unsigned short)63899))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_3] [i_3]))) : (-8233749781899675163LL)))), (arr_8 [i_3] [i_4])));
                }
            }
        } 
    } 
    var_17 ^= ((/* implicit */unsigned int) -6939508219006915230LL);
    var_18 &= ((/* implicit */unsigned long long int) max((((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_2)))))))));
}

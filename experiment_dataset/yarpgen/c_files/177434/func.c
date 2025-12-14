/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177434
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((unsigned int) var_4)))) ? (((((((/* implicit */int) var_7)) < (((/* implicit */int) var_6)))) ? (((((/* implicit */_Bool) var_10)) ? (17ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (min((18219266917163555258ULL), (17ULL)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (arr_3 [i_1] [i_1])));
                    var_18 = ((/* implicit */unsigned short) (+(((arr_6 [i_0] [i_0] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_1]), (((/* implicit */short) (_Bool)0))))))))));
                    arr_9 [17U] [i_2] [i_1] [i_0] = ((/* implicit */long long int) arr_8 [i_2] [i_1] [1LL]);
                    arr_10 [i_0] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) != (18446744073709551613ULL))))) : (max((18446744073709551604ULL), (((/* implicit */unsigned long long int) (unsigned short)14033)))))))));
                    var_19 -= max((((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_2 [i_0] [i_0])))), ((~(((/* implicit */int) ((signed char) arr_6 [i_0] [(short)15] [i_2]))))));
                }
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((arr_6 [(short)0] [(short)0] [i_1]) - (970575488U)))))), (((/* implicit */unsigned long long int) (+((-2147483647 - 1)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                arr_24 [i_3] [i_4] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_17 [i_3] [i_3] [i_5] [i_6]);
                                var_20 = ((/* implicit */unsigned int) max((((unsigned short) min((arr_20 [i_5] [(_Bool)1] [i_5] [i_4] [i_3]), (((/* implicit */long long int) arr_16 [i_3] [i_6] [i_7]))))), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_4)))) || ((!(((/* implicit */_Bool) arr_23 [(short)10] [i_6] [(unsigned short)5] [i_4] [i_3])))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(((/* implicit */int) ((short) (short)-32765))))))));
            }
        } 
    } 
}

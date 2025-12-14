/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115898
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [(unsigned char)7] [i_4] [i_3] = (+(((((/* implicit */_Bool) 0ULL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                                arr_16 [i_3] [i_3 + 1] [i_2 + 1] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2 + 1] [i_2])) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) 1173353711U))));
                                var_13 = ((/* implicit */unsigned int) arr_1 [i_3 + 2] [i_3 + 2]);
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1 - 1] [i_1 - 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) >> (((arr_13 [i_0] [i_1] [i_2] [i_1] [i_2] [i_0]) - (8470634825234863270LL)))));
                    var_14 ^= ((/* implicit */_Bool) var_0);
                    arr_18 [i_2] [i_1 - 2] [i_0] = ((/* implicit */int) ((11ULL) + (var_2)));
                }
                var_15 = ((/* implicit */unsigned int) var_11);
            }
        } 
    } 
    var_16 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (unsigned char)251)))))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (var_2))))));
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)66))) ? (((((/* implicit */int) var_5)) & (1042740832))) : (((/* implicit */int) var_10)))))));
    var_18 -= ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) (unsigned short)12321)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) max(((short)5105), (((/* implicit */short) (_Bool)0)))))))));
}

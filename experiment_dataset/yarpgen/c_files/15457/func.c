/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15457
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
    var_18 += ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_11 [i_0 + 2] [i_0 - 2] [i_0] [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) var_14))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) var_9);
                            arr_17 [i_1] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)512))) : (arr_8 [i_0] [i_1] [i_2])))));
                        }
                    }
                    arr_18 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((signed char) var_6)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        arr_21 [i_0] = (((_Bool)1) ? (((/* implicit */unsigned long long int) -1)) : (18446744073709551615ULL));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (_Bool)1))));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)47181))))) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [(unsigned short)4] [i_2] [(unsigned short)4] [i_5])) ? (0ULL) : (arr_8 [i_0] [10] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))));
                        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42472)) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) (unsigned short)1)))))));
                    }
                    var_23 = ((/* implicit */unsigned long long int) max(((signed char)126), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -17)), (arr_1 [i_1])))) && (((/* implicit */_Bool) (unsigned short)2)))))));
                    arr_22 [i_0] [i_0] [(_Bool)1] = ((/* implicit */long long int) ((unsigned char) (((_Bool)0) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
}

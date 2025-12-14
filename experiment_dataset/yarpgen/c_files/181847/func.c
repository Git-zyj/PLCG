/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181847
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (var_2)))) ? (min((((/* implicit */unsigned int) arr_3 [i_0] [i_1 - 1] [20LL])), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_11)), (var_2)))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)58938))))) : (((long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)5523)) : (((/* implicit */int) (unsigned short)60035))))));
                arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) max(((unsigned short)60035), (var_12)))) : (((/* implicit */int) (unsigned char)30))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60011)) ? (((/* implicit */int) (_Bool)0)) : (-412756163)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)63201)) > (((/* implicit */int) (short)15559))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (-1475158043))))) << (((max(((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)165)))), (((/* implicit */int) arr_8 [i_4])))) - (52254)))));
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_13 [i_2])))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 12582912U)))))) : (((((/* implicit */_Bool) -1797469606)) ? (((/* implicit */unsigned int) 313894289)) : (2229285022U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) 4282384383U))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_0)) : (412756163))) : (((((/* implicit */int) (unsigned char)165)) | (((/* implicit */int) (unsigned char)152)))))))));
                        arr_18 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((2615140102U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60018)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)103))))) : (arr_11 [i_2] [i_2] [i_2]))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        arr_21 [i_6] [i_2] [i_6] = ((/* implicit */long long int) arr_15 [(_Bool)1] [i_2] [i_2]);
                        arr_22 [i_2] = ((/* implicit */unsigned int) ((((((((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_2] [i_3] [i_3]))))) ? (min((-8903364684375309942LL), ((-9223372036854775807LL - 1LL)))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)5518))) | ((-9223372036854775807LL - 1LL)))))) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2] [i_6])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))) : (arr_0 [i_2] [i_2]))) - (4294914936U)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 3; i_7 < 17; i_7 += 4) 
                    {
                        arr_25 [13LL] [i_3] [i_2] [i_7 + 1] = ((/* implicit */unsigned short) ((unsigned char) arr_24 [i_7 - 2] [i_2] [i_7 - 3] [10U]));
                        arr_26 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) + (9223372036854775807LL)));
                        var_17 = ((/* implicit */unsigned int) var_3);
                        arr_27 [i_2] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)5511)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_13))))) : (var_6)));
                    }
                    for (int i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        var_18 = ((/* implicit */int) ((unsigned char) 4282384384U));
                        var_19 = ((/* implicit */signed char) arr_5 [i_8] [i_8]);
                    }
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17419
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
    var_15 = ((/* implicit */short) ((((/* implicit */unsigned int) max((((/* implicit */int) var_10)), (var_9)))) % (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 0U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-17))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 8; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (3876358072U) : (arr_0 [i_3 - 3])))) ? (((unsigned int) arr_0 [i_3 - 3])) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)16)), (arr_9 [i_0] [(short)2] [0ULL] [i_3]))))) != (((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4] [i_1] [i_2]))))))))) < (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_1 [i_3] [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))) : (arr_0 [i_2]))))))));
                                var_18 = ((/* implicit */unsigned int) max((((((/* implicit */int) var_0)) / (var_14))), ((~((((_Bool)1) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) var_12))))))));
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) min((-3018567466226156483LL), (((/* implicit */long long int) arr_5 [i_0 - 2]))))) ? (var_14) : (((/* implicit */int) arr_12 [i_2] [i_1] [i_2] [i_2] [i_2 - 1] [i_4]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 9; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 9; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) arr_18 [i_0] [9LL] [i_0] [(unsigned short)7])), (3957944364U)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5] [i_5] [i_2 + 2]))) : (arr_17 [i_1 - 2] [1ULL]))) : (((((/* implicit */_Bool) 556429832U)) ? (((long long int) (signed char)41)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 556429832U))))))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_11 [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1]))));
                                var_22 -= ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5] [i_5 - 3] [i_6 + 1] [i_6])) && (((/* implicit */_Bool) arr_9 [i_0 + 1] [(unsigned char)4] [i_5 - 1] [i_6 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min(((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8694))) : (-1839602966353703706LL))), (((long long int) arr_32 [i_7] [i_7] [i_8] [i_9] [i_8] [i_7]))))), (((((((/* implicit */_Bool) arr_31 [i_11] [i_8] [i_9] [i_11] [i_11])) ? (arr_24 [i_7] [1U] [i_11]) : (((/* implicit */unsigned long long int) 337022931U)))) * (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) (short)-22353)) : (((/* implicit */int) var_0)))))))));
                                var_24 += ((/* implicit */long long int) (-(var_3)));
                                var_25 += ((/* implicit */signed char) (~((~(((/* implicit */int) (unsigned short)47551))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)47551)) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_7] [i_8] [i_9] [i_7] [i_9] [i_9]))) : (2813264911487420633LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)17984)) * (((((/* implicit */int) (unsigned char)242)) + (((/* implicit */int) (unsigned short)17985)))))))));
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((signed char) ((unsigned long long int) min((((/* implicit */short) arr_25 [i_8])), ((short)(-32767 - 1)))))))));
                }
            } 
        } 
    } 
}

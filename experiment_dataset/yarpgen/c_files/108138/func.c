/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108138
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) max((((/* implicit */unsigned int) ((short) 0))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_1 + 1])) & (((/* implicit */int) (unsigned short)58353))))) ? (((unsigned int) arr_4 [i_2] [i_1] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 7; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */int) ((unsigned int) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_2)))) * (((/* implicit */int) var_15)))));
                                var_22 = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0] [(unsigned char)8] [i_1 + 1] [i_3] [i_3 - 1]))))));
                                var_23 = ((unsigned char) ((((/* implicit */int) arr_14 [10LL] [i_1 + 1] [7U] [i_3 + 3] [i_4])) <= (((/* implicit */int) arr_14 [i_0] [i_1 + 1] [i_2] [i_3 + 3] [i_4]))));
                                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_3] [i_3 + 4] [i_1] [i_1] [i_1 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_19))))))) : (((/* implicit */int) ((unsigned short) arr_3 [i_1 + 1] [i_3 + 3]))))))));
                            }
                        } 
                    } 
                    var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7837931180417481990ULL)) ? (3U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_7)))))))) ? ((-(var_6))) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_8)) + (var_9))), (((/* implicit */int) ((_Bool) (unsigned short)59630))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58353)) ? (arr_11 [i_0] [i_1 + 1] [9U] [1] [i_6] [1]) : (arr_11 [6U] [i_1 - 1] [i_2] [6U] [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (short)2506))))) : (arr_11 [9ULL] [i_1 + 1] [i_1 + 1] [i_5] [i_6] [9ULL])));
                                var_27 = ((/* implicit */unsigned int) var_16);
                                var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2898355194U)) ? (((/* implicit */int) (unsigned short)58362)) : ((-(arr_18 [i_0] [i_0] [i_1] [1ULL] [i_0] [i_0] [i_1]))))) <= (((/* implicit */int) (unsigned short)53974))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */signed char) var_0);
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
    {
        for (int i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                {
                    arr_29 [i_9] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) + ((+(((/* implicit */int) arr_28 [i_8] [2LL]))))))) ^ ((+(arr_27 [i_8] [i_8])))));
                    arr_30 [i_7] [i_8] [i_8] = ((/* implicit */_Bool) (signed char)19);
                    var_30 = ((/* implicit */unsigned long long int) var_8);
                    var_31 = ((/* implicit */_Bool) max((((/* implicit */int) (signed char)-19)), (((((/* implicit */int) arr_20 [i_8] [i_9])) | (((/* implicit */int) arr_20 [i_7] [18U]))))));
                }
            } 
        } 
    } 
}

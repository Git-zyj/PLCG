/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128902
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                var_10 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    arr_7 [i_1] [i_1] [(unsigned char)14] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)42)) ^ (((/* implicit */int) (short)15824))));
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)29)) == (((/* implicit */int) var_7)))))) / (var_0)));
                }
            }
        } 
    } 
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((((((/* implicit */long long int) ((/* implicit */int) var_1))) == (var_6))) ? (((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))) : ((+(((/* implicit */int) var_8)))))) != (min((((/* implicit */int) ((unsigned char) var_5))), (((((/* implicit */int) (unsigned char)238)) | (((/* implicit */int) (signed char)-29)))))))))));
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                {
                    var_12 ^= ((((((/* implicit */_Bool) arr_1 [i_3])) || (((/* implicit */_Bool) (unsigned char)0)))) || (((/* implicit */_Bool) ((unsigned char) var_2))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            var_13 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_13 [i_6] [i_4] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) arr_1 [i_6])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) <= (((long long int) arr_9 [i_3]))));
                            arr_22 [(unsigned char)1] [0U] [i_5] [i_5] [i_4] [i_5] [(unsigned char)1] = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (((((/* implicit */_Bool) arr_2 [i_3] [i_5] [i_6])) ? (var_0) : (var_6))))), (((/* implicit */long long int) (-(2141080602))))));
                            arr_23 [i_5] [i_4] = ((/* implicit */unsigned int) var_1);
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */int) min((var_14), ((+(((/* implicit */int) (unsigned char)255))))));
                            var_15 |= ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) var_2))))) & (var_0)));
                        }
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_28 [i_3] [i_4] [i_5] = (!(((/* implicit */_Bool) var_2)));
                            arr_29 [i_3] [i_4] [i_5] [i_5] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_27 [(unsigned char)8] [i_9 - 1] [14ULL] [i_9] [i_9 - 1]) ? (((/* implicit */int) arr_19 [9ULL] [i_9 - 1] [i_9] [i_9] [3] [i_9 - 1])) : (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */int) arr_19 [i_5] [i_9 - 1] [i_9] [i_9] [i_9 - 1] [i_9 - 1])) | (((/* implicit */int) arr_27 [i_4] [i_9 - 1] [i_9] [i_9] [i_9])))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (arr_20 [i_5] [i_9 - 1] [i_9] [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 1]))))));
                            var_16 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned char)234), (((/* implicit */unsigned char) var_3))))) && (((/* implicit */_Bool) (+(409153027U))))));
                        }
                        /* vectorizable */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)15)))))));
                            var_18 |= ((var_8) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [6U] [i_4] [i_5] [(unsigned char)10] [i_6] [i_10] [i_10]))) : (var_6))) : (((var_0) / (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_3] [i_4] [i_5] [i_6] [(_Bool)1] [i_10]))))));
                        }
                        arr_32 [i_3] [i_3] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)251))) ? (803152629U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3] [i_3])))))) ? (max(((+(1363703862U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_3])) + (((/* implicit */int) (unsigned char)237))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7))))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_11 = 1; i_11 < 6; i_11 += 2) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            {
                var_19 |= (((_Bool)1) ? (((/* implicit */int) ((0ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)28)))))) : (((/* implicit */int) (signed char)-28)));
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (signed char)-28))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((var_8) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned char)0)))), (var_8)))) : (((/* implicit */int) var_3))));
}

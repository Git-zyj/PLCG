/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132527
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
    var_16 = var_5;
    var_17 = (+(((((((/* implicit */int) var_12)) < (((/* implicit */int) var_5)))) ? (max((((/* implicit */unsigned long long int) 593723746U)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) arr_2 [i_0]);
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_8 [i_1] [i_0] [i_2] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_4)))));
                var_19 = min((arr_5 [i_0]), (((/* implicit */int) var_7)));
            }
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                var_20 ^= ((/* implicit */unsigned long long int) max((1109901898U), (((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) ^ ((~(1989323561U)))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+(max((var_8), (((/* implicit */unsigned int) arr_6 [i_0] [i_0])))))))));
            }
            for (int i_4 = 1; i_4 < 16; i_4 += 4) 
            {
                arr_16 [i_4] = ((((/* implicit */_Bool) (+(((var_6) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2)))))))) ? ((+(var_8))) : (((/* implicit */unsigned int) (-((+(arr_14 [i_0] [i_4])))))));
                var_22 = ((/* implicit */unsigned long long int) ((_Bool) ((arr_1 [i_4 - 1]) % (arr_1 [i_4 - 1]))));
                arr_17 [i_4] [i_1] [i_4 + 1] = ((/* implicit */unsigned char) min((((unsigned long long int) arr_4 [i_4 + 1] [i_4 - 1] [i_4 - 1])), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_13)), (arr_4 [i_4 + 1] [i_4 + 1] [i_4 + 1]))))));
                var_23 = ((/* implicit */_Bool) arr_13 [i_0] [i_1]);
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        {
                            arr_22 [i_4] [i_1] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) (~(max((arr_6 [i_0] [i_1]), ((+(((/* implicit */int) var_12))))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_4] [i_4 + 1] [i_4] [i_4] [i_4]))))) ? (((/* implicit */int) max((arr_21 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4]), (arr_21 [i_4] [i_4 + 1] [i_4] [i_4] [i_4])))) : ((~(((/* implicit */int) arr_9 [i_4] [i_4 + 1] [(_Bool)1]))))));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) || (((/* implicit */_Bool) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((/* implicit */int) var_7)))))))))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_7 = 2; i_7 < 16; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_8 = 2; i_8 < 13; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 854660820U)) ? (max((arr_24 [i_7 + 1] [i_1] [i_7]), (min((var_11), (((/* implicit */unsigned long long int) arr_29 [i_9])))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_7 - 2] [i_7 - 2] [i_8] [i_8])))))));
                            var_27 &= max((((/* implicit */unsigned long long int) ((short) var_2))), ((+(arr_19 [i_8 + 3] [i_8 + 3] [i_8 + 2] [i_8] [i_8]))));
                            var_28 = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) arr_25 [i_8 + 3] [i_0])))));
                        }
                    } 
                } 
                arr_32 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((_Bool) arr_15 [i_0] [i_7 - 2] [i_7]))), ((+(arr_15 [i_1] [i_7 - 2] [i_7])))));
            }
            arr_33 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(var_1)))) ? ((~(3572565260U))) : ((~(var_2)))))));
            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (+((~((~(((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_1] [i_1])))))))))));
        }
        for (signed char i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
        {
            var_30 += ((unsigned char) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_2)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) 
            {
                arr_39 [i_0] = ((/* implicit */unsigned int) min(((~(min((0ULL), (((/* implicit */unsigned long long int) (short)-6495)))))), ((~((~(var_9)))))));
                arr_40 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_28 [i_10] [i_10] [i_11] [i_11] [i_11] [9ULL]))))), (2319994968U)))), (((long long int) var_15))));
            }
        }
    }
}

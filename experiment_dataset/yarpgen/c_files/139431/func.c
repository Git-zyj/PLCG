/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139431
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
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) var_10))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */long long int) min(((-(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)33)))))), (((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)6)) : (var_5))) : (((/* implicit */int) var_4))))));
                        arr_13 [i_0] [8U] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))));
                        arr_14 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (signed char)50);
                    }
                    for (unsigned int i_4 = 1; i_4 < 13; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 2; i_5 < 13; i_5 += 4) 
                        {
                            var_14 ^= ((/* implicit */long long int) (-(min((2418606619U), (((/* implicit */unsigned int) (_Bool)1))))));
                            var_15 *= (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-29)));
                        }
                        for (unsigned char i_6 = 3; i_6 < 14; i_6 += 3) 
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (short)32767)) - (32764)))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)1))))))) : (max((((/* implicit */unsigned int) (signed char)3)), (1536108757U)))));
                            var_16 = ((/* implicit */int) (-(((((unsigned int) (unsigned char)180)) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_0] [i_4 + 2])))))))));
                        }
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (var_5)));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_23 [i_4 + 1] [i_1] [i_1] [(signed char)1] [(signed char)1]))));
                    }
                    var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) (((-(((/* implicit */int) arr_18 [i_0] [i_1 + 4] [(signed char)5] [i_0] [(signed char)5] [4U])))) != (((/* implicit */int) var_3))))), (min(((~(((/* implicit */int) (unsigned char)255)))), (min(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
    {
        var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)28797))));
        /* LoopSeq 1 */
        for (unsigned char i_8 = 4; i_8 < 9; i_8 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                var_21 *= ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_8 - 2]))));
                var_22 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) var_2)))));
                var_23 = ((/* implicit */signed char) (-((((_Bool)1) ? (var_5) : (((/* implicit */int) var_9))))));
            }
            var_24 = (-((-(((/* implicit */int) (_Bool)1)))));
        }
        var_25 -= ((/* implicit */unsigned char) (-(((((/* implicit */int) (short)28797)) << (((/* implicit */int) (_Bool)1))))));
        var_26 = ((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned char)0)))) + (((/* implicit */int) var_1))));
    }
    var_27 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)21136))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)20), (((/* implicit */unsigned char) (_Bool)1)))))) : (var_11))) | (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) var_10))));
}

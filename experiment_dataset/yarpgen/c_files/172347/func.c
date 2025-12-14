/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172347
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_13 [i_3] [(unsigned short)7] [i_1] [i_0] = ((/* implicit */signed char) arr_4 [i_0] [i_1] [17ULL]);
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_7 [i_3] [(short)8] [i_0] [i_0])) < (((14118182176826803515ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)54566)) ? (((/* implicit */int) arr_2 [i_0])) : (var_6))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */_Bool) arr_7 [(_Bool)1] [(short)14] [i_0] [(_Bool)1]);
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_14 [i_0] [i_1] [i_3] [i_4 + 1]))));
                            var_23 = ((/* implicit */short) arr_6 [i_4 - 1] [i_1 - 3]);
                        }
                        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            arr_19 [i_0] [(unsigned short)13] [i_2] [i_2] [i_3] [i_5] = ((/* implicit */_Bool) arr_0 [i_1 + 2]);
                            var_24 &= ((/* implicit */_Bool) min(((~(arr_7 [i_1 + 2] [i_2] [i_2] [i_2]))), (((/* implicit */unsigned int) (signed char)-101))));
                        }
                        for (unsigned int i_6 = 4; i_6 < 17; i_6 += 4) 
                        {
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [(signed char)6] [i_3] [i_3] [(signed char)6] [i_6 + 2] [i_3] [i_6]))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_20 [i_0] [i_1] [(short)17] [10U] [i_1]))))) ? (((/* implicit */int) arr_11 [i_6] [i_6 + 1] [i_6] [i_6 - 4] [i_6] [i_6 - 3])) : (((((/* implicit */int) var_7)) << (((/* implicit */int) (_Bool)0)))))))))));
                            arr_24 [i_0] [0LL] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_11 [i_6] [(short)6] [i_2] [(short)6] [(short)6] [i_0]);
                            var_26 -= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_1])) ^ (((/* implicit */int) arr_5 [i_1 - 1] [i_6 - 3]))))) | (arr_0 [i_0]))) << ((((-(((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */int) arr_21 [i_2] [i_1] [i_3] [i_2] [i_1] [i_1] [i_0])) : (-1948059674))))) + (70)))));
                        }
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) 145272318180144579ULL)))) && (((var_18) || (((/* implicit */_Bool) arr_6 [i_0] [i_0])))))));
        arr_25 [(unsigned short)3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (8191U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [(signed char)17])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 145272318180144579ULL)))))) : (arr_7 [i_0] [(_Bool)1] [i_0] [i_0])))) ? (min(((+(arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_18))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) ((_Bool) (short)-1))), (arr_3 [i_0])))))));
    }
    /* LoopNest 2 */
    for (long long int i_7 = 1; i_7 < 9; i_7 += 4) 
    {
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            {
                arr_31 [i_7] [i_8] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) arr_2 [i_7 + 1])))) : (((((/* implicit */_Bool) arr_20 [i_7] [i_7 + 2] [i_7 + 2] [i_8] [i_8])) ? (arr_30 [i_7] [i_8 - 1]) : (min((arr_9 [i_7 + 1]), (((/* implicit */int) (signed char)3))))))));
                var_28 = ((/* implicit */short) var_18);
                arr_32 [(unsigned char)8] [i_7] = ((/* implicit */unsigned long long int) (signed char)113);
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)10975)) ? (((((/* implicit */_Bool) 8220U)) ? (((/* implicit */int) arr_21 [i_7 + 1] [(unsigned char)17] [i_7 + 1] [i_8] [i_8 - 1] [(unsigned char)17] [i_8])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_17 [i_7 + 2] [i_7] [1LL] [1LL] [i_8] [i_8] [i_8]) ? (((/* implicit */int) arr_12 [i_8] [(signed char)13] [i_7 + 2] [i_7])) : (((/* implicit */int) arr_11 [i_7] [i_7] [15ULL] [i_8] [i_8] [i_7])))) - (var_6)))) ? (((((/* implicit */int) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7] [i_7] [i_7] [i_7 + 2] [i_7] [i_8 - 1] [i_7])))))) >> (((((/* implicit */int) arr_20 [i_7] [i_7 + 1] [i_8] [i_8 - 1] [(_Bool)1])) + (76))))) : (((/* implicit */int) (signed char)(-127 - 1)))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) (((((((((_Bool)1) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)26133)))) | (((/* implicit */int) max((var_17), (((/* implicit */signed char) var_18))))))) + (2147483647))) << (((((((/* implicit */int) var_9)) + (77))) - (27)))));
}

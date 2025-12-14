/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117543
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
    var_13 = (unsigned short)51179;
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_3 = 1; i_3 < 11; i_3 += 3) 
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)51156)) ? (((/* implicit */long long int) ((/* implicit */int) (short)28672))) : (var_0))) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1])))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))));
                    var_15 *= ((/* implicit */unsigned int) var_6);
                }
                arr_10 [i_1] [(unsigned short)7] [i_1] = ((/* implicit */_Bool) ((unsigned char) -206295364));
            }
            /* LoopNest 2 */
            for (unsigned short i_4 = 1; i_4 < 9; i_4 += 1) 
            {
                for (unsigned short i_5 = 1; i_5 < 11; i_5 += 2) 
                {
                    {
                        var_16 = ((/* implicit */short) arr_15 [i_4 + 2]);
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            var_17 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60710)) ? (8778913153024ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51179)))))) ? (((/* implicit */int) arr_0 [i_4 - 1])) : (arr_1 [(_Bool)1] [i_0 + 1]))))));
                            arr_20 [i_0] [i_1] [i_4 + 2] [(unsigned short)11] [i_1] [i_6] [i_1 + 3] = ((/* implicit */unsigned short) arr_18 [i_4 + 3] [i_1 + 2]);
                            var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) min((arr_12 [(unsigned short)8] [i_4] [7] [i_0]), (var_2))))) ? (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 206295356)) : (var_0))), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_4 [i_0])), (206295363)))) ? ((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))) : (((var_4) ? (((/* implicit */int) (unsigned short)48359)) : (((/* implicit */int) var_8)))))))));
                            var_19 = ((/* implicit */short) var_8);
                        }
                        for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 1) 
                        {
                            var_20 = arr_8 [i_5 + 1] [8ULL] [6LL] [i_5 + 1] [i_5 - 1] [i_5 - 1];
                            arr_23 [i_0] |= ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)39053)))) == (((((/* implicit */int) arr_18 [i_0 - 1] [i_1 + 4])) % (((/* implicit */int) (unsigned short)33632))))));
                            arr_24 [i_0] [i_5] [i_7] &= ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) arr_18 [i_0 - 2] [i_1 - 1])))));
                            var_21 ^= arr_22 [(_Bool)1];
                            arr_25 [i_1] = ((/* implicit */unsigned int) min(((-(arr_21 [i_5 + 1] [i_1] [i_4]))), ((+(arr_21 [i_4] [i_1] [i_4 - 1])))));
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 3; i_8 < 10; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (206295371) : (arr_27 [i_0 + 1] [i_1 + 3] [i_1 + 3] [i_5 + 1] [(unsigned short)9] [i_8]))) - (((/* implicit */int) (short)28672)))))));
                            var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8944710677982501932LL)) ? (((/* implicit */int) var_8)) : (arr_27 [i_0 - 1] [i_4 - 1] [(unsigned short)1] [i_5 + 1] [i_4 - 1] [9ULL])));
                            arr_29 [i_0 + 1] [i_1] [i_1] [i_1] [i_1] [i_5] [4LL] = ((/* implicit */int) ((signed char) arr_27 [i_8] [i_8] [i_8] [i_8 + 2] [i_8 - 1] [i_8 - 3]));
                        }
                    }
                } 
            } 
            var_24 = ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (arr_28 [i_0] [i_0] [i_0 + 1] [(unsigned short)6] [i_0] [i_0])))) == (((var_6) ? (-206295364) : (((/* implicit */int) arr_28 [i_1] [i_1 + 3] [i_0 - 1] [(unsigned short)3] [i_0 - 2] [i_0]))))));
            arr_30 [i_1] [(unsigned char)4] [i_1] = ((/* implicit */unsigned short) (short)16325);
            var_25 |= ((/* implicit */unsigned long long int) 206295381);
        }
        var_26 = ((/* implicit */int) (_Bool)1);
    }
}

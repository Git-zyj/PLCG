/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160038
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
    var_12 ^= ((/* implicit */int) var_4);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) ((min((((/* implicit */long long int) (-2147483647 - 1))), (arr_3 [i_0] [15LL]))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (1057517288U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))))), (((((min((((/* implicit */long long int) (unsigned char)255)), (arr_3 [i_0] [i_0]))) + (9223372036854775807LL))) >> (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_0] [8U] [i_0]))))) ^ (((((/* implicit */_Bool) (+(3237450008U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (4331228220979614381ULL))))))));
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) arr_6 [(signed char)8] [i_1]))));
            var_15 *= ((/* implicit */unsigned char) arr_8 [i_1] [i_1]);
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_3 = 1; i_3 < 14; i_3 += 2) 
                {
                    for (unsigned int i_4 = 3; i_4 < 15; i_4 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) max((var_16), (arr_8 [i_3] [i_1])));
                            var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_4 - 3]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (short i_6 = 3; i_6 < 13; i_6 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) max((((/* implicit */short) (signed char)-8)), ((short)32742)));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_9))));
                        }
                    } 
                } 
            }
            var_20 = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((arr_3 [i_1] [i_1]) ^ (var_3))) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_13 [6U] [6U] [i_1] [14U] [i_1] [i_1] [i_1])) >> (((1057517312U) - (1057517294U)))))))))))) : (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((arr_3 [i_1] [i_1]) ^ (var_3))) ^ (((/* implicit */long long int) ((((((/* implicit */int) arr_13 [6U] [6U] [i_1] [14U] [i_1] [i_1] [i_1])) + (2147483647))) >> (((1057517312U) - (1057517294U))))))))))));
        }
        var_21 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) 7340032U)) ? (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0])) : (arr_14 [(unsigned short)8] [i_0] [i_0] [(unsigned short)8] [i_0]))), (((((/* implicit */_Bool) var_4)) ? (arr_14 [2U] [i_0] [i_0] [i_0] [2U]) : (6720726789127162085LL))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_10) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) >= (((/* implicit */long long int) arr_0 [i_0] [i_0])))))) : (arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            for (long long int i_9 = 4; i_9 < 9; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    {
                        arr_31 [i_7] [i_7] [i_9 - 2] [i_10] = ((/* implicit */short) arr_6 [i_10] [i_8]);
                        var_22 = ((/* implicit */signed char) ((unsigned char) var_10));
                        var_23 -= ((/* implicit */long long int) ((int) (~(arr_29 [i_7] [i_7] [i_9] [i_10]))));
                        var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_7] [1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_7] [i_8] [i_9] [i_10] [i_8] [i_8])) > (((/* implicit */int) var_1)))))) : (arr_3 [i_9 + 1] [i_9 + 2])));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_11 = 0; i_11 < 11; i_11 += 4) 
        {
            for (int i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                for (short i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_10 [i_7] [(unsigned char)0] [i_12] [i_13]))));
                        var_26 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_7] [i_7] [10] [i_12] [i_11]))) : (arr_22 [i_7]))));
                        var_27 &= ((/* implicit */signed char) var_11);
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */short) ((((/* implicit */long long int) (-(var_0)))) / ((-(var_2)))));
}

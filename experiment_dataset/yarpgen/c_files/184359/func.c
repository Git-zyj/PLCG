/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184359
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_10 += ((/* implicit */_Bool) ((arr_0 [i_0] [14U]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)2] [(short)2]))) : (((var_0) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [18U] [12LL]))))) : (((((/* implicit */_Bool) 3612270598169747593LL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)1792)))))))));
        var_11 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 10891128984590163520ULL)) ? (((/* implicit */int) (short)-21540)) : (((/* implicit */int) (short)-14637))))) == (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (10891128984590163520ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)21516))))) : (((arr_2 [6LL]) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (!(min((arr_0 [i_0] [i_0]), (arr_2 [i_0])))));
    }
    for (unsigned short i_1 = 4; i_1 < 10; i_1 += 4) 
    {
        var_12 = ((/* implicit */long long int) max((var_12), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_1] [4])) ? (9223372036854775807LL) : (var_1))) << (((arr_5 [i_1 - 4] [i_1]) - (2053401398)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_0 [i_1 - 1] [i_1])), (arr_4 [i_1 - 2] [i_1 - 1]))))) : (max((var_9), (((/* implicit */long long int) arr_4 [i_1] [i_1 - 1]))))))));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_13 = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_6 [i_1 - 3] [i_2])), (((((/* implicit */_Bool) ((2426601895U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned char)10] [i_2])))))) ? (max((((/* implicit */long long int) var_7)), (-6639382970060165022LL))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))))));
            var_14 = ((/* implicit */signed char) var_6);
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (unsigned char i_5 = 2; i_5 < 10; i_5 += 2) 
                    {
                        {
                            var_15 -= ((/* implicit */_Bool) max(((~(((/* implicit */int) (short)31)))), (((/* implicit */int) min((arr_14 [i_5] [i_4] [i_4 + 1] [i_1 - 1] [i_1]), (arr_14 [i_5] [i_5] [i_4 + 1] [i_1 - 3] [9LL]))))));
                            arr_17 [i_5] [i_5] |= ((/* implicit */signed char) ((arr_11 [i_2]) ? (arr_1 [20LL] [i_1]) : (min((((/* implicit */unsigned int) arr_16 [i_5] [i_4 + 1] [i_2] [i_5 + 1] [i_5])), ((+(8U)))))));
                            var_16 = ((/* implicit */unsigned long long int) (~(min((3612270598169747593LL), (((/* implicit */long long int) arr_8 [i_1 - 1] [i_1 - 2] [i_1]))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_1] [i_1])))))));
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_8 = 1; i_8 < 9; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 3; i_9 < 9; i_9 += 4) 
                    {
                        {
                            var_18 = var_2;
                            var_19 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_1 - 3] [i_1 + 1]))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_1 - 3] [i_1] [i_1] [5ULL] [i_1])) ? (arr_27 [i_1 - 1] [(unsigned char)6] [i_7] [(unsigned char)6] [i_9 - 1]) : (arr_27 [(_Bool)1] [i_6] [i_7] [i_8 + 2] [i_9])));
                            var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_8 - 1] [i_8 - 1])) > (((/* implicit */int) arr_21 [i_8 + 1] [i_8 + 1]))));
                        }
                    } 
                } 
                arr_29 [i_1] [i_1] [i_1] = ((/* implicit */short) (~(16403170142127251576ULL)));
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 8; i_10 += 2) 
                {
                    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) arr_7 [i_1 - 3]);
                            var_23 += ((/* implicit */int) ((short) arr_9 [i_1] [i_10 - 3] [i_1] [i_1 - 1]));
                            var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)21542)) | (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_14 [i_1] [i_6] [i_7] [i_10] [i_11])) : (((/* implicit */int) arr_4 [i_1 - 2] [i_10 + 3]))));
                            arr_35 [i_10] [i_6] [(short)8] [(short)8] [i_11] = ((/* implicit */unsigned char) ((unsigned int) (+(8U))));
                        }
                    } 
                } 
            }
            var_25 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_6] [(unsigned char)6] [(unsigned char)4] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_26 [i_6] [i_6] [i_6] [i_6] [i_1] [i_1])) : (((/* implicit */int) (short)9424))));
        }
    }
    var_27 = ((/* implicit */long long int) var_2);
}

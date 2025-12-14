/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103401
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
    var_17 = ((((/* implicit */_Bool) max((max((var_16), (var_6))), (max((var_1), (((/* implicit */unsigned int) (short)62))))))) ? ((~(((((/* implicit */_Bool) 14679198317177599091ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (short)9314))))) > (max((var_9), (((/* implicit */unsigned int) var_5)))))))));
    var_18 *= ((/* implicit */unsigned int) max((((/* implicit */int) max((((short) (short)-44)), (((/* implicit */short) (signed char)11))))), ((+(((/* implicit */int) ((unsigned char) (unsigned char)250)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((unsigned long long int) arr_4 [(short)14]))) ? ((-(((/* implicit */int) arr_5 [i_0 - 1] [i_2])))) : ((-(((/* implicit */int) (short)-64))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        var_20 = (+((+(arr_4 [i_3]))));
                        var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3]))) * ((+(arr_4 [i_0])))));
                        arr_11 [i_0] [i_1 - 2] [16U] [i_0] |= ((/* implicit */short) (-(((/* implicit */int) (short)-46))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (short)0))))));
                        arr_14 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (+((-(((/* implicit */int) (short)-26862))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        arr_19 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) max((((/* implicit */short) ((max((arr_3 [i_2] [i_0]), (((/* implicit */long long int) arr_15 [i_0])))) <= (((/* implicit */long long int) ((unsigned int) arr_13 [i_0])))))), (arr_7 [i_0] [i_1 + 1] [i_1 + 1] [(short)18])));
                        var_23 = arr_6 [i_0] [i_1] [i_0];
                    }
                    arr_20 [i_0] [i_1 + 2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((arr_10 [i_2] [i_1 + 1] [i_0] [i_0] [i_2] [i_1]), (arr_10 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-19))))) : (max((18446744073709551613ULL), (((/* implicit */unsigned long long int) arr_2 [i_0])))))) >= (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (short)-1)))))))));
                    var_24 = ((/* implicit */long long int) (+(max((((/* implicit */int) arr_15 [i_0 - 1])), ((-(((/* implicit */int) (unsigned char)249))))))));
                    var_25 -= max((((/* implicit */short) (unsigned char)152)), ((short)-22508));
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) max(((-(((/* implicit */int) arr_13 [(_Bool)1])))), (((/* implicit */int) (((-(22U))) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
        arr_21 [i_0] = ((/* implicit */unsigned int) (-(max(((+(arr_17 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0])) & (((/* implicit */int) (unsigned char)13)))))))));
        var_27 = ((/* implicit */unsigned char) ((short) max((((/* implicit */unsigned int) arr_12 [i_0])), (max((2097151U), (((/* implicit */unsigned int) (_Bool)0)))))));
        arr_22 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) (short)-64)), (max(((~(((/* implicit */int) arr_7 [0U] [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_10 [(signed char)7] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0]))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_25 [i_6] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */int) ((arr_6 [i_6] [i_6] [(short)0]) || (((/* implicit */_Bool) arr_2 [8U]))))), ((-(((/* implicit */int) arr_0 [(_Bool)1]))))))), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [10U]))))), ((+(arr_18 [i_6] [(short)18] [i_6] [(short)18])))))));
        arr_26 [i_6] [i_6] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_8 [0ULL] [i_6] [(short)12] [(unsigned char)12] [i_6])), (((long long int) arr_18 [i_6] [(unsigned char)12] [i_6] [i_6]))))), (max((max((arr_1 [2ULL]), (((/* implicit */unsigned long long int) arr_3 [(unsigned char)8] [(unsigned char)8])))), (((/* implicit */unsigned long long int) max(((unsigned char)254), ((unsigned char)164))))))));
        arr_27 [i_6] = ((/* implicit */signed char) min((max((((/* implicit */unsigned int) (_Bool)1)), (23U))), (((((((/* implicit */_Bool) (signed char)-110)) ? (36771061U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-91))))) & (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)161)))))))));
    }
    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((13469022365140297505ULL) >> (((((/* implicit */int) (signed char)-11)) + (34))))))));
        arr_30 [i_7] [i_7] &= ((/* implicit */short) arr_18 [i_7] [i_7] [14U] [i_7]);
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 4; i_9 < 13; i_9 += 4) 
            {
                {
                    var_29 ^= ((/* implicit */_Bool) (~(max((arr_9 [i_7] [(short)17] [i_7]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-108)))))))));
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-20049)))))));
                }
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) max((min((min((((/* implicit */long long int) var_9)), (var_0))), (((/* implicit */long long int) min((var_13), (((/* implicit */short) var_2))))))), (((/* implicit */long long int) (-(255543044U)))))))));
}

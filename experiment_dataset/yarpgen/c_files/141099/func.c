/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141099
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                arr_8 [i_0] [(_Bool)1] [i_1] &= arr_4 [(unsigned char)20] [i_0];
                arr_9 [i_0] = ((/* implicit */long long int) var_11);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_22 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (short)32767);
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) 129655975804959616LL)) || (((/* implicit */_Bool) (unsigned char)6))))), (arr_19 [(unsigned char)8] [(unsigned char)8] [i_3] [i_4] [2U] [i_6]))))) < (var_12)));
                                var_16 = ((/* implicit */unsigned short) arr_18 [i_4] [10LL] [i_4] [i_5]);
                            }
                        } 
                    } 
                } 
                arr_23 [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_14 [i_2] [i_3])) << (((/* implicit */int) arr_14 [i_2] [i_2])))), (((/* implicit */int) (unsigned short)57892))));
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_2))));
                arr_24 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) arr_21 [i_2] [i_3] [i_3] [i_2]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_7 = 3; i_7 < 19; i_7 += 3) 
    {
        var_18 |= ((/* implicit */short) (((-(arr_13 [i_7 - 1] [i_7 + 1]))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_8))) - (arr_13 [i_7 - 1] [i_7 + 1])))));
        arr_28 [i_7] = ((/* implicit */unsigned char) ((min((var_0), (((/* implicit */long long int) arr_11 [12ULL])))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_7 + 1] [i_7])) ? (((/* implicit */int) (short)-14878)) : (((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                {
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */int) ((min((((/* implicit */long long int) (short)32760)), (var_10))) > (((/* implicit */long long int) ((((/* implicit */_Bool) (short)25655)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(short)0] [(unsigned char)0]))))))))) == (((/* implicit */int) (unsigned short)0)))))));
                    arr_36 [i_8] [i_8] = ((unsigned int) min((var_13), (max(((short)-17290), ((short)9485)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_11 = 2; i_11 < 9; i_11 += 2) 
        {
            for (unsigned char i_12 = 2; i_12 < 8; i_12 += 2) 
            {
                {
                    arr_43 [i_12] [(_Bool)1] [i_12] [i_12] &= ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-25673)) ? (-4625711229364776265LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62885)))))) / (min((var_3), (((/* implicit */unsigned long long int) var_8)))))), (var_5)));
                    arr_44 [i_8] [(short)10] [i_8] [i_12] = ((/* implicit */unsigned int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) | (((arr_30 [8LL] [8U]) ^ (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
                }
            } 
        } 
        arr_45 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned char)56)) / (((/* implicit */int) (short)-14902)))) > (((/* implicit */int) ((unsigned char) -129655975804959599LL))))))) == (min((((/* implicit */long long int) ((unsigned int) 2734373550U))), (min((8686834692161974251LL), (7035768925674917600LL)))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)28205))))) - (1851368619U))))));
    }
}

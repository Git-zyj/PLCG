/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118115
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) (signed char)110)) : (2120847629)))), (min((((/* implicit */long long int) ((((/* implicit */int) (signed char)-78)) / (arr_7 [i_1 - 1] [i_1 - 1] [i_0])))), (min((((/* implicit */long long int) var_2)), (902951882298754856LL)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_1 + 1] [i_1] [i_3 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) min((arr_5 [i_1 - 1] [i_3 + 2] [i_3 + 1]), (arr_5 [i_1 - 1] [i_3 - 1] [i_3 + 2])))) : (((arr_3 [i_0]) / (((((/* implicit */_Bool) (signed char)-110)) ? (2120847623) : (((/* implicit */int) (unsigned char)229))))))));
                            arr_14 [i_0] [i_1 - 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [i_1 - 1] [i_0] [i_3 - 1])), (0ULL)))) ? (16512573982304675123ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_3 + 1])) ^ (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 2; i_4 < 18; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */int) var_6)) == (((((/* implicit */int) var_6)) + (((/* implicit */int) ((short) 17136364206982318024ULL)))))));
                            arr_21 [i_1] [i_4 + 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_5 + 1] [i_4 - 2])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_1 + 2] [i_5 + 1]))))) ? (((/* implicit */int) ((short) (unsigned short)1706))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) && (((/* implicit */_Bool) var_13))))))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((min((8878580922534364086LL), (((/* implicit */long long int) (unsigned short)65535)))) >> (((((/* implicit */int) (short)16382)) - (16380))))) / (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65522), ((unsigned short)32942))))))))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */long long int) ((/* implicit */int) min((((((/* implicit */int) (unsigned short)919)) < (((/* implicit */int) (unsigned short)64605)))), (((2376861884U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52575))))))))) : (arr_18 [i_0] [i_1 + 3] [i_4 + 2] [i_5 + 1])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */long long int) 1421617030)) : (9223372036854775807LL)));
    var_24 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) 0)) : (4168672669U))));
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_8 = 1; i_8 < 22; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        for (int i_10 = 3; i_10 < 23; i_10 += 2) 
                        {
                            {
                                var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_9] [i_6]))))) ? (((((/* implicit */_Bool) arr_25 [i_7] [i_6])) ? (((/* implicit */int) arr_25 [i_7] [i_6])) : (((/* implicit */int) (short)-11559)))) : (((/* implicit */int) ((short) arr_25 [i_9] [i_7])))));
                                var_26 ^= ((/* implicit */unsigned long long int) 4294967270U);
                            }
                        } 
                    } 
                } 
                arr_32 [i_6] = ((/* implicit */signed char) arr_22 [i_6] [i_6]);
            }
        } 
    } 
    var_27 = (~(((/* implicit */int) var_6)));
}

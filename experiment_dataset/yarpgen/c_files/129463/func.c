/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129463
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) min((min((((/* implicit */short) arr_0 [i_0])), (arr_1 [i_0]))), (min((arr_1 [i_0]), (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((arr_1 [i_2]), (arr_1 [i_0])))), (min((((/* implicit */long long int) arr_3 [i_2] [i_0])), (arr_4 [i_2] [(unsigned char)1])))));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (+((-(((/* implicit */int) min(((short)-15833), ((short)-15849))))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) 521483899133145836LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-15833)))), ((+(((/* implicit */int) (signed char)-19))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_3] = ((/* implicit */_Bool) min(((-(((((/* implicit */int) (short)25651)) + (((/* implicit */int) (signed char)-57)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)3632))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_12 [i_1] [i_1] [i_1] [i_2])))) : (((((/* implicit */int) (unsigned short)40067)) * (((/* implicit */int) arr_2 [i_0] [i_1]))))))));
                                var_18 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)24)) ? ((+(-7489836946409103935LL))) : (((7489836946409103935LL) << (((((/* implicit */int) (unsigned char)25)) - (25))))))), (((/* implicit */long long int) (short)15833))));
                                arr_16 [i_0] [i_3] [(signed char)18] [i_0] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)43778))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_17 [(short)2] [i_0] = ((/* implicit */signed char) (-(min((((/* implicit */long long int) ((-975195014) < (((/* implicit */int) (_Bool)1))))), (min((arr_4 [1] [i_0]), (((/* implicit */long long int) (unsigned char)25))))))));
        arr_18 [i_0] [i_0] = var_14;
    }
    /* vectorizable */
    for (short i_5 = 1; i_5 < 23; i_5 += 2) 
    {
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(7966712820172834210ULL)))) ? (arr_19 [i_5 + 2] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229)))));
        var_19 -= ((((/* implicit */_Bool) arr_20 [i_5 - 1] [i_5 + 2])) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-6462))))) : (arr_19 [i_5] [i_5]));
        var_20 -= ((((/* implicit */_Bool) arr_19 [i_5 + 1] [i_5 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5] [i_5 - 1]))) : (-7489836946409103946LL));
    }
    for (short i_6 = 2; i_6 < 18; i_6 += 1) 
    {
        arr_25 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)21775)) * (min(((-(((/* implicit */int) arr_20 [(short)21] [(short)21])))), ((-(((/* implicit */int) (short)25651))))))));
        arr_26 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6]))) : (14520702987404600032ULL)))) ? (((/* implicit */int) ((((/* implicit */int) arr_22 [i_6])) <= (((/* implicit */int) arr_22 [i_6]))))) : (((/* implicit */int) min((arr_22 [i_6]), (arr_22 [i_6]))))));
    }
    var_21 = ((/* implicit */short) ((unsigned char) var_5));
    var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_7))))), (((unsigned long long int) min(((short)-5084), ((short)-15835))))));
}

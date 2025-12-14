/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149432
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 3; i_4 < 17; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) max((((((/* implicit */_Bool) (unsigned short)15883)) ? (max((6655144479652861124ULL), (((/* implicit */unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)15861)) != (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3])))))))), (max((arr_11 [i_2] [(unsigned char)8] [i_2] [i_0] [(unsigned char)8] [i_2] [i_0]), (arr_11 [i_4 - 3] [i_4 - 3] [i_0] [i_3] [i_3] [i_2] [i_3]))))))));
                            var_19 ^= ((/* implicit */short) max((((14703936025184654378ULL) << (((-15LL) + (78LL))))), (((/* implicit */unsigned long long int) -207427620))));
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (((~(-1017227129))) <= (((/* implicit */int) (signed char)-56)))))));
                        }
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            arr_17 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((short) max((arr_3 [i_0] [i_1]), (((/* implicit */unsigned int) var_11)))));
                            arr_18 [i_0] [i_1] [i_0] [i_1] [i_5] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_14)), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [(short)5] [i_1])) ? (-7617835869393203525LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))), (5785124897567681449ULL)))));
                        }
                        for (short i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_6] [i_1])) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -1275567817)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)99))))))) : (var_2)));
                            arr_21 [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */short) (+(((/* implicit */int) (short)-32760))));
                        }
                        var_21 ^= ((/* implicit */_Bool) (~((((~(2121276906))) | (((/* implicit */int) ((short) arr_19 [i_0] [i_0] [i_2] [i_2] [i_0])))))));
                    }
                    arr_22 [i_0] [i_1] [i_1] = max((((/* implicit */long long int) 4294967288U)), (((((/* implicit */_Bool) (signed char)-84)) ? (arr_5 [i_2] [i_1] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))))));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)66))))) : (2147483647))) : (((/* implicit */int) arr_15 [i_1] [i_0] [i_1] [i_0]))));
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        arr_27 [i_1] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [(signed char)10])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)73)) > (((/* implicit */int) (signed char)-95))))) : (((/* implicit */int) ((short) 1017227144))))));
                        var_23 = ((/* implicit */int) min((var_23), (((((((/* implicit */_Bool) (signed char)49)) ? ((-(((/* implicit */int) arr_16 [i_0] [i_2] [i_0])))) : (arr_19 [i_0] [i_1] [i_2] [i_1] [i_1]))) * (max((arr_2 [i_1] [i_1] [i_1]), ((-(((/* implicit */int) (signed char)88))))))))));
                    }
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */short) arr_10 [i_0]);
                        var_25 = (_Bool)1;
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) var_1);
}

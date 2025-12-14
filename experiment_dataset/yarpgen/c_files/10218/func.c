/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10218
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
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? ((-9223372036854775807LL - 1LL)) : (9223372036854775807LL))) * (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1] [i_0])) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775778LL))) + (51LL)))))))) >> (((/* implicit */int) (((((_Bool)1) ? (536805376LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1 - 1]))))) == (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_0] [i_1 - 1]), (arr_1 [i_1 + 1] [i_0 + 2]))))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_12 &= (-((-(((/* implicit */int) ((signed char) arr_3 [i_0 - 2]))))));
                            arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) -710666326))))), ((~(((((/* implicit */int) (_Bool)1)) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775793LL))) + (34LL)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        for (long long int i_5 = 2; i_5 < 14; i_5 += 2) 
        {
            for (unsigned char i_6 = 3; i_6 < 14; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            {
                                arr_27 [i_4] [i_5 + 2] = ((/* implicit */unsigned char) (+(max((((/* implicit */int) arr_15 [i_6 + 1])), ((+(1291972392)))))));
                                var_14 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_6 + 2] [i_7] [i_6 + 2] [i_5] [i_4]))))) ? (((((/* implicit */_Bool) (unsigned short)34371)) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) arr_13 [i_7] [i_8])))) : (((/* implicit */int) arr_14 [i_4])))));
                                arr_28 [i_4] = ((/* implicit */unsigned char) max((max((((/* implicit */int) arr_23 [i_6 - 2] [i_4] [i_6] [i_7] [i_8])), (-119747474))), (((/* implicit */int) (!(((/* implicit */_Bool) -1291972411)))))));
                                arr_29 [i_8] [i_4] [i_6] [i_6] [i_4] [i_4] = ((/* implicit */short) ((unsigned int) (-(((/* implicit */int) (unsigned char)128)))));
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_20 [i_4] [i_4])))))) ? (((/* implicit */long long int) ((/* implicit */int) (((+(1291972397))) >= ((+(((/* implicit */int) arr_24 [i_4] [i_5 + 2] [i_6 - 1] [i_7] [i_4])))))))) : (max((max((((/* implicit */long long int) (unsigned char)180)), (arr_19 [i_8] [i_7] [i_5 + 2] [i_4]))), (((/* implicit */long long int) ((((/* implicit */_Bool) -17)) ? (var_2) : (1291972397))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((unsigned char) ((((/* implicit */int) (signed char)60)) * (((/* implicit */int) arr_21 [i_6 - 1] [i_6 + 1] [i_6 - 1])))))));
                    arr_30 [i_4] [i_6] = ((/* implicit */unsigned long long int) arr_23 [i_4] [i_4] [i_6] [i_4] [i_6]);
                    arr_31 [i_6] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (~(((((((/* implicit */long long int) arr_18 [i_4] [i_4])) >= (arr_17 [i_4] [i_4] [i_6]))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) >= (((/* implicit */int) arr_23 [i_4] [i_4] [i_4] [i_4] [i_4]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) -9223372036854775807LL)) > (0ULL))))))));
                    arr_32 [i_4] [i_5 - 2] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_4])) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) var_7))))) ? (((((/* implicit */int) (short)-13550)) | (((/* implicit */int) arr_15 [i_4])))) : (min((((/* implicit */int) (unsigned char)255)), (arr_22 [i_4]))))) & (2)));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_9 = 0; i_9 < 17; i_9 += 2) 
    {
        var_17 = (~(((((arr_33 [i_9]) + (2147483647))) << (((((((/* implicit */int) var_5)) << (((((/* implicit */int) (short)4193)) - (4176))))) - (15335424))))));
        var_18 = ((/* implicit */int) min(((((+(var_3))) / (((/* implicit */long long int) ((((/* implicit */int) (short)-1)) * (((/* implicit */int) (unsigned char)188))))))), (((/* implicit */long long int) arr_35 [i_9]))));
    }
}

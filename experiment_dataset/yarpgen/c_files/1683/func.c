/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1683
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
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_20 = max((((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) / (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (var_1))))), (((((/* implicit */_Bool) (+(1969084100U)))) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_3))))))));
                var_21 += min(((signed char)(-127 - 1)), (((/* implicit */signed char) arr_5 [i_1])));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) : (arr_3 [i_0] [i_0])))) * (min((((/* implicit */unsigned long long int) min((arr_3 [i_1] [i_0]), (((/* implicit */unsigned int) var_14))))), (min((((/* implicit */unsigned long long int) (unsigned short)43155)), (18446744073709551615ULL)))))));
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_1]);
                    var_23 = ((/* implicit */short) (~(((/* implicit */int) arr_5 [i_1]))));
                }
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_24 += ((/* implicit */unsigned long long int) (unsigned short)65508);
                    var_25 += arr_7 [i_3] [i_1] [i_1] [i_0];
                    var_26 = ((/* implicit */_Bool) (~(min((arr_12 [i_3] [i_3] [i_3] [i_3]), (min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) var_4))))))));
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_3]))));
                }
                var_28 = ((/* implicit */signed char) ((var_14) ? (min((7240463444358327613ULL), (11199365048325384916ULL))) : (((/* implicit */unsigned long long int) arr_1 [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 3; i_4 < 12; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    var_29 = ((/* implicit */_Bool) max((var_29), (arr_5 [i_4 - 3])));
                    arr_19 [i_4] [i_4 - 1] [i_5] [i_4] = ((/* implicit */unsigned long long int) var_3);
                    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_6]))) ^ (((((/* implicit */_Bool) 6ULL)) ? (2376522911U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65519))))))))));
                    var_31 = ((/* implicit */unsigned short) ((arr_6 [i_6]) ? (arr_17 [i_6] [i_5 + 1] [i_5 - 2] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5 - 1] [i_4 - 2])))));
                }
                /* LoopSeq 2 */
                for (long long int i_7 = 1; i_7 < 12; i_7 += 2) 
                {
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)47008)) ? (((((/* implicit */_Bool) min((6574774177038637157ULL), (((/* implicit */unsigned long long int) arr_0 [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1152))) : (min((2987899214U), (((/* implicit */unsigned int) (unsigned short)0)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))))))));
                    var_33 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_21 [i_4] [i_7 + 1] [i_7] [i_7 + 1])), (((((/* implicit */int) arr_6 [i_7])) | (((/* implicit */int) arr_13 [i_7 - 1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5 + 1] [i_5 - 2]))) : (((((/* implicit */_Bool) min((arr_4 [i_7 + 1] [i_5 + 1]), (((/* implicit */unsigned int) arr_6 [i_4 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6705241731761771763ULL)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) : (((arr_7 [i_4 - 2] [i_5 - 2] [i_5 - 2] [i_7 - 1]) ^ (7247379025384166676ULL)))))));
                }
                for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    arr_25 [i_5] [i_5] [i_5] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) arr_17 [i_4] [i_4] [i_4 - 1] [i_5 - 2])) | (arr_7 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_5 - 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8760783051476478535ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)9630)))))));
                    var_34 += ((/* implicit */long long int) max((4294967295U), (((/* implicit */unsigned int) (short)-1))));
                    var_35 = arr_4 [i_4 + 1] [i_4 - 3];
                }
                arr_26 [i_4 + 1] [i_5] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -8200216319560542059LL)) ? (max((((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_4]))), (((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */unsigned long long int) -1LL)) : (11199365048325384929ULL))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4173706975U)) ? (((/* implicit */int) (unsigned short)30704)) : (((/* implicit */int) (unsigned char)253)))) << (((9620574092945578617ULL) - (9620574092945578610ULL))))))));
                arr_27 [i_5] [i_5 - 1] [i_5] = ((/* implicit */_Bool) ((arr_18 [i_5]) - (4ULL)));
            }
        } 
    } 
}

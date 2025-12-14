/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143999
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((((/* implicit */_Bool) (unsigned short)42694)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1] [i_2])) % (((/* implicit */int) var_3))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159))) | (7547466478537875930ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [(signed char)3] [i_2] [i_3] [i_4] [i_4])) ? (var_10) : (((/* implicit */int) var_12)))))))));
                                var_16 -= ((/* implicit */long long int) max((((((/* implicit */int) (unsigned short)42694)) * (((/* implicit */int) (signed char)73)))), (((/* implicit */int) (unsigned char)76))));
                                var_17 = ((int) ((((/* implicit */int) (signed char)50)) - (((/* implicit */int) (unsigned short)22842))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_18 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_6 [i_6] [i_1] [i_1]))))))) : (((arr_12 [i_0] [i_1] [i_2] [i_5] [i_6]) + (arr_12 [i_0] [i_0] [10] [i_5] [i_6])))));
                                var_19 = ((/* implicit */long long int) var_9);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        for (int i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) var_1);
                                var_21 = (-(((int) arr_14 [i_0] [i_1] [i_2] [i_8] [i_8] [i_0])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 3; i_9 < 10; i_9 += 3) 
    {
        for (unsigned char i_10 = 3; i_10 < 12; i_10 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_11 = 2; i_11 < 11; i_11 += 2) 
                {
                    for (int i_12 = 0; i_12 < 13; i_12 += 3) 
                    {
                        for (long long int i_13 = 0; i_13 < 13; i_13 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 14940730747303270271ULL)) ? (616282884U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))));
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned char)76)), (18415073989274339040ULL))))));
                                var_24 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) 192556851U)))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)97)), (192556851U)))) : (var_13))) <= (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) -919150300)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_13])) ? (var_6) : (((/* implicit */int) var_7)))))))))));
                                var_25 = ((/* implicit */long long int) arr_5 [i_10]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 1) 
                            {
                                var_27 -= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_26 [i_15] [i_14] [i_10 - 1]))));
                                var_28 = ((/* implicit */unsigned int) ((long long int) ((478652099) >> (((arr_12 [i_16] [i_15] [i_14] [i_10 + 1] [i_9]) - (1233879228U))))));
                            }
                            var_29 |= ((/* implicit */signed char) (-(((/* implicit */int) (!(((-1087960694444313862LL) != (((/* implicit */long long int) ((/* implicit */int) arr_30 [7] [(signed char)5] [i_15]))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (unsigned short i_18 = 0; i_18 < 13; i_18 += 4) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */long long int) ((short) min(((unsigned short)22842), (((/* implicit */unsigned short) (unsigned char)87)))));
                                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (signed char)90))));
                                var_32 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) 3418961226281277010LL)) ? (14940730747303270295ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
                var_33 = ((/* implicit */long long int) arr_1 [i_9] [i_10]);
            }
        } 
    } 
    var_34 -= ((/* implicit */int) 1087960694444313864LL);
}

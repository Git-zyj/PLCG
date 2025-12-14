/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118908
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
    for (signed char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551603ULL)) ? (12ULL) : (((/* implicit */unsigned long long int) 1072304388))))) ? (((/* implicit */int) min((((/* implicit */short) arr_0 [i_0])), (arr_2 [i_0] [i_1] [i_1])))) : ((-(-1395509037))))) & (((((/* implicit */int) (unsigned char)223)) | (((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (arr_4 [i_0] [i_0])))))));
                arr_6 [i_0] [i_0] [(unsigned char)2] &= ((((/* implicit */int) (!(((/* implicit */_Bool) max((1739221330), (((/* implicit */int) (_Bool)1)))))))) <= (((((/* implicit */int) (signed char)1)) + (15))));
                /* LoopSeq 3 */
                for (int i_2 = 3; i_2 < 15; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_2] = ((/* implicit */unsigned long long int) min((((signed char) 6)), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_3))))))))));
                                var_10 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) max((((/* implicit */int) var_2)), (1395509030)))) : (max((((/* implicit */long long int) arr_13 [i_2] [i_3])), (arr_12 [i_0] [i_3] [i_0]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 + 2])) - (((/* implicit */int) arr_3 [i_0 + 2])))))));
                                var_11 = ((/* implicit */unsigned char) arr_2 [i_0] [i_3] [i_4]);
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 3ULL)) ? (10U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))))) << (((((((/* implicit */_Bool) (signed char)28)) ? (1395509030) : (0))) - (1395509006)))));
                    var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)1))));
                }
                for (int i_5 = 3; i_5 < 14; i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 3; i_6 < 15; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            {
                                arr_24 [i_6] [i_0] = ((/* implicit */int) arr_3 [i_6 - 2]);
                                arr_25 [i_1] [i_0] = ((/* implicit */unsigned short) arr_18 [i_1] [i_5 - 2] [i_6] [i_7]);
                            }
                        } 
                    } 
                    var_14 &= ((/* implicit */unsigned short) arr_7 [i_0 - 3]);
                }
                for (int i_8 = 3; i_8 < 14; i_8 += 1) /* same iter space */
                {
                    arr_29 [i_0] [i_8 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -4670060435624674594LL)) ? (((/* implicit */unsigned long long int) 3628693720U)) : (18446744073709551577ULL)));
                    arr_30 [(signed char)6] [i_1] [i_1] [i_8] &= ((/* implicit */unsigned long long int) arr_26 [i_0] [i_1] [i_0] [i_8 - 2]);
                    arr_31 [i_0 + 1] [i_0] [i_8 + 2] = ((/* implicit */long long int) -1395509027);
                }
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) var_0);
}

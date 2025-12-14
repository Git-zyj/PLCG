/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187631
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned short) arr_4 [6ULL]);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (long long int i_3 = 3; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) (!(((_Bool) ((((/* implicit */_Bool) arr_3 [13ULL] [i_0] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)246)))))));
                            arr_10 [i_1] [i_2] [i_0] = ((/* implicit */short) min((((int) (~(arr_5 [i_0] [i_2] [i_3])))), (((((/* implicit */int) var_2)) | (((/* implicit */int) (signed char)126))))));
                            var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) arr_2 [i_2] [i_3])) : (((/* implicit */int) (signed char)-32))))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((signed char) var_6))) : (((((/* implicit */_Bool) -5644217925960854126LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))) : (((/* implicit */int) arr_8 [i_2])))))));
                            var_12 |= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (unsigned short)3410)) : (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) ((arr_7 [i_0 + 1] [i_1] [i_2] [20] [i_2] [i_3]) / (arr_5 [i_2] [i_2] [18ULL]))))))) | (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) ((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_8 [i_2]))))))))));
                            var_13 = ((/* implicit */unsigned short) var_1);
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max(((~(min((((/* implicit */int) var_7)), (arr_5 [i_0] [i_1] [i_1]))))), (var_1)));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) min((var_3), (((/* implicit */signed char) ((_Bool) ((arr_2 [i_1] [i_4]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0] [i_4]))))))));
                            /* LoopSeq 3 */
                            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                            {
                                var_15 = ((/* implicit */short) ((((arr_2 [i_0] [i_6]) ? (((unsigned long long int) -3674795769464342435LL)) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), (arr_7 [i_0] [(short)15] [19] [i_4] [i_0] [i_6])))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_20 [i_0 + 1] [i_6 + 1] [i_0] [(_Bool)1] [i_6] [i_6 + 1] [i_6 + 1]), (((/* implicit */unsigned char) var_2))))))));
                                arr_22 [(unsigned short)6] [i_1] [i_4] [i_5] [20U] |= ((/* implicit */unsigned char) (+((-(((((/* implicit */int) (unsigned char)1)) + (((/* implicit */int) var_3))))))));
                                var_16 *= ((/* implicit */unsigned long long int) arr_8 [i_5]);
                                var_17 *= ((((/* implicit */_Bool) ((arr_15 [i_0] [i_0 - 1] [i_6] [i_4] [i_6 + 1]) ? (((/* implicit */int) arr_15 [i_0] [i_0 + 1] [(unsigned char)10] [i_5] [i_6])) : (((/* implicit */int) var_7))))) ? (((unsigned long long int) arr_12 [i_5])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54893))));
                            }
                            for (long long int i_7 = 1; i_7 < 21; i_7 += 3) 
                            {
                                arr_27 [i_0] [i_0] [9LL] = ((/* implicit */int) ((((/* implicit */int) arr_13 [i_0 + 1] [i_7] [i_7 + 3] [i_0])) <= ((+(((/* implicit */int) arr_13 [i_0 + 1] [i_5] [i_7 + 3] [i_0]))))));
                                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                                var_19 = ((/* implicit */unsigned char) arr_7 [i_0] [2LL] [i_1] [i_4] [i_0] [i_7]);
                                arr_28 [i_0 + 1] [i_1] [i_0] [i_1] [i_7 + 3] [(signed char)10] = ((/* implicit */signed char) max((((/* implicit */int) var_8)), (var_5)));
                            }
                            for (int i_8 = 3; i_8 < 20; i_8 += 3) 
                            {
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)8)) ? ((~(((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_8 - 3])))) : (((/* implicit */int) max((var_7), (((/* implicit */signed char) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_3))))))))));
                                arr_31 [i_0] [i_4] [i_5] = ((/* implicit */unsigned int) arr_29 [i_0]);
                                var_21 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned char) max((arr_2 [i_4] [i_8]), (((((/* implicit */_Bool) arr_25 [18LL] [(unsigned char)16] [11ULL] [(unsigned char)23] [i_8])) || (((/* implicit */_Bool) var_3))))))), (arr_1 [i_4] [i_1])));
                            }
                            arr_32 [(unsigned char)14] [i_0 + 1] [i_0] [(signed char)18] [(signed char)15] [i_5] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((signed char) arr_26 [i_4] [i_5]))) ? (((/* implicit */int) arr_3 [i_0 + 2] [i_0] [i_0 + 2])) : (((var_2) ? (var_5) : (((/* implicit */int) var_7))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)54892))))) ? (((((/* implicit */_Bool) var_0)) ? (var_1) : (var_5))) : (((/* implicit */int) arr_1 [i_0] [i_1])))));
            }
        } 
    } 
    var_23 |= ((/* implicit */_Bool) var_3);
}

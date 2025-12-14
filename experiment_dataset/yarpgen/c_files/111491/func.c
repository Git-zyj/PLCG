/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111491
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (~(((/* implicit */int) min(((unsigned char)162), (((/* implicit */unsigned char) ((((/* implicit */int) var_12)) <= (-947549680))))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */int) var_0);
                var_16 = ((/* implicit */int) arr_1 [i_1]);
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    var_17 = ((/* implicit */unsigned char) arr_2 [(unsigned char)8]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 7; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 6; i_4 += 3) 
                        {
                            {
                                arr_11 [i_3] [i_3] [i_2] [i_3] [i_4 + 1] = (~(((long long int) arr_7 [i_2] [i_3 - 1] [i_4 + 2] [i_4] [(unsigned short)1] [i_4 + 3])));
                                arr_12 [i_0] [i_1] [i_3] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) var_9)))))))));
                                arr_13 [i_3] = (+(max((max((arr_7 [i_0] [i_1] [i_1] [i_2] [i_3] [(unsigned char)5]), (((/* implicit */int) var_13)))), (((/* implicit */int) arr_1 [i_0])))));
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_0] |= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_1]))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [6] [i_1])) ? ((~(((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */int) var_0))))))) ? (min((((/* implicit */int) var_12)), (-488839429))) : (((int) (~(-1655869127))))));
                }
                for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            {
                                arr_23 [(unsigned char)0] [i_0] [i_0] [i_0] [i_0] [6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) max((2020641831), (arr_0 [i_6] [i_5])))) : (var_7))) : (max((var_3), (min((((/* implicit */long long int) 488839417)), (var_3)))))));
                                arr_24 [i_0] [3LL] [i_0] [(unsigned short)8] [2LL] = ((/* implicit */int) ((((/* implicit */_Bool) max((((long long int) var_5)), (((/* implicit */long long int) var_13))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_6))))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_16 [i_7]))))));
                                arr_25 [(unsigned char)2] [(unsigned char)2] [i_5] [i_6] [i_7] |= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_1] [i_1])) ? (arr_18 [i_0] [i_1] [i_5] [i_5]) : (((/* implicit */int) var_10)))));
                                arr_26 [i_7] [0] [i_5] [i_1] [i_0] |= (-(((((/* implicit */_Bool) arr_18 [i_1] [i_5] [i_1] [i_0])) ? (var_1) : (arr_18 [i_0] [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        for (long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (-(arr_4 [i_0] [i_1] [i_8]))))));
                                arr_32 [i_0] [i_1] [i_5] = arr_27 [i_0] [i_1] [i_1] [(unsigned char)0] [i_9] [5];
                                arr_33 [i_0] [i_1] [(unsigned char)0] [i_1] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)7]))))), (min((var_3), (((/* implicit */long long int) 947549674))))))) ? (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) arr_27 [i_0] [i_1] [i_1] [i_0] [7LL] [(unsigned short)0]))))) ? ((~(arr_29 [i_1] [6] [7]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_6))))))) : ((+(((long long int) var_5))))));
                                arr_34 [i_5] [i_0] [i_8] [i_1] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
                                var_20 *= ((/* implicit */unsigned short) max((var_3), (((/* implicit */long long int) (unsigned short)33442))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_31 [i_1] [i_1] [3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)85)), (var_10)))))))));
                }
                arr_35 [i_0] |= ((/* implicit */unsigned short) arr_20 [i_0]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_10 = 1; i_10 < 19; i_10 += 4) 
    {
        for (unsigned short i_11 = 2; i_11 < 19; i_11 += 4) 
        {
            for (unsigned short i_12 = 1; i_12 < 20; i_12 += 1) 
            {
                {
                    var_22 = ((/* implicit */long long int) (+((+((~(((/* implicit */int) var_6))))))));
                    arr_43 [i_10] [(unsigned char)10] [i_10] [(unsigned short)6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_10])) ? (((/* implicit */long long int) ((((/* implicit */int) var_13)) | (((/* implicit */int) var_13))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_10 + 2] [i_12])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_39 [i_10]))))), ((-(var_7)))))));
                }
            } 
        } 
    } 
    var_23 ^= ((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned char)25))))));
}

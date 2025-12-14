/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151435
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_12 = ((((/* implicit */_Bool) -1224414498376004896LL)) ? (0LL) : (5212396316781009260LL));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) var_6);
                                var_14 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_4] [i_2] [17LL] [i_0])) ? (arr_14 [i_3 + 1] [i_1] [i_0]) : (((/* implicit */int) max((((/* implicit */short) var_11)), ((short)12090))))))), (((((/* implicit */_Bool) (unsigned short)40590)) ? ((+(-5212396316781009260LL))) : (5212396316781009260LL)))));
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [17U] [i_4])))) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16))) : (var_10)))))))))));
                            }
                        } 
                    } 
                    arr_16 [5LL] [5LL] &= ((/* implicit */signed char) max((((int) min((((/* implicit */long long int) var_5)), (var_6)))), (((/* implicit */int) ((_Bool) min((3773190382U), (((/* implicit */unsigned int) var_11))))))));
                    arr_17 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [2ULL] [i_0] [(signed char)9])) ? ((+(5212396316781009260LL))) : (((/* implicit */long long int) arr_5 [2U] [i_1] [i_0] [i_2]))));
                }
                /* vectorizable */
                for (signed char i_5 = 2; i_5 < 21; i_5 += 2) 
                {
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((_Bool) arr_4 [i_5 - 1] [i_1] [(signed char)14])))));
                    var_17 = ((/* implicit */short) (+(var_10)));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 16272880724774494110ULL)) ? (-5212396316781009260LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-16)))))));
                        arr_22 [i_6] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_11))));
                    }
                }
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    arr_25 [i_7] [(unsigned char)20] [i_0] = ((/* implicit */unsigned short) arr_18 [i_0] [i_0]);
                    var_19 = ((/* implicit */unsigned long long int) 268435455U);
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        var_20 += min((((/* implicit */long long int) ((signed char) min((((/* implicit */unsigned int) (_Bool)1)), (arr_26 [i_7] [i_0]))))), (max((((/* implicit */long long int) (+(((/* implicit */int) (short)-32762))))), (var_6))));
                        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_21 [(unsigned char)8] [i_1] [i_8] [i_1]))))));
                        var_22 = ((/* implicit */int) max((((/* implicit */long long int) (_Bool)1)), (-5212396316781009272LL)));
                        arr_28 [i_8] [13LL] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) min((arr_10 [i_8] [i_8] [i_7] [i_1] [i_8]), (((/* implicit */unsigned short) arr_20 [i_1] [i_1] [i_1] [i_1])))))))));
                    }
                }
                arr_29 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) 3627287948555564516LL);
                var_23 |= ((/* implicit */unsigned int) (unsigned char)94);
                /* LoopNest 3 */
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) ((((_Bool) (-(3861370215U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((((/* implicit */long long int) 4294967287U)), (-5212396316781009260LL)))))) : (((unsigned long long int) min((((/* implicit */unsigned int) (signed char)-1)), (1518535379U))))));
                                var_25 = ((/* implicit */unsigned char) (+(((long long int) arr_5 [i_11] [i_10] [i_1] [i_1]))));
                                var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) arr_10 [i_11] [i_1] [i_1] [i_1] [i_1])))), ((+(((/* implicit */int) arr_31 [i_11] [i_11] [i_11])))))))));
                                var_27 = ((/* implicit */short) var_4);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_28 = var_6;
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16644
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)49))))) : (((/* implicit */int) (unsigned char)29))));
    var_13 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)252)) + (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)63477))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((short) var_7)))))));
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (~((-2147483647 - 1)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0 - 2] [i_1] [i_0 - 2] = ((/* implicit */_Bool) (+(((long long int) (signed char)106))));
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) 10887010731565629690ULL)) ? (arr_1 [i_0 - 1]) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)30163)))))));
                var_16 = ((/* implicit */long long int) 0U);
                arr_7 [i_0 + 2] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 926212134665163023ULL)) ? (2451518786U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30163)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    arr_15 [i_4] [i_3] [16U] = ((/* implicit */unsigned char) ((10887010731565629690ULL) - (((/* implicit */unsigned long long int) 2147483647))));
                    arr_16 [i_2] = ((/* implicit */unsigned char) ((2012515468U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            {
                                arr_23 [i_5] [(unsigned short)14] [(signed char)10] [i_5] = ((/* implicit */unsigned char) (~(arr_8 [i_3])));
                                arr_24 [i_5] = (-(((/* implicit */int) arr_14 [i_2] [20ULL])));
                                arr_25 [i_5] [i_3] [i_3] = ((/* implicit */unsigned char) (~(((int) (signed char)55))));
                                arr_26 [i_5] [i_6] [2ULL] [i_4 - 1] [i_3] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)65535))));
                                arr_27 [i_6] [i_5] [i_5] [i_3 + 2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) 7789314758220742913LL)) ? (10887010731565629684ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1957)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) min((var_17), (arr_11 [i_2] [i_3])));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_18 += ((/* implicit */unsigned char) arr_12 [i_4 - 1] [i_4] [i_7]);
                        arr_31 [i_2] [i_2] [i_3] [i_4] [4] = ((/* implicit */unsigned char) (unsigned short)3072);
                    }
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 2; i_9 < 19; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 1; i_10 < 18; i_10 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-72)) ? (274874760U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-61)))))))) ? (((/* implicit */unsigned int) arr_36 [i_2])) : (var_7)));
                                arr_40 [i_2] [i_3] [i_8 - 1] [i_9 - 1] [i_10 + 1] = ((/* implicit */int) (_Bool)1);
                            }
                        } 
                    } 
                    arr_41 [i_3] [i_8] [i_8 - 1] = ((/* implicit */unsigned char) 1609142953U);
                }
                /* LoopNest 3 */
                for (unsigned int i_11 = 1; i_11 < 18; i_11 += 3) 
                {
                    for (short i_12 = 2; i_12 < 19; i_12 += 1) 
                    {
                        for (signed char i_13 = 0; i_13 < 21; i_13 += 3) 
                        {
                            {
                                arr_49 [i_2] [i_3] [i_11 + 2] [i_11] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5721116410479873447LL)) ? ((+(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_9)), (arr_42 [i_11] [i_3 - 1] [i_3] [i_11])))))));
                                arr_50 [i_2] [i_11 + 3] [i_12] [i_11] = ((/* implicit */unsigned int) arr_22 [i_2] [i_11]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

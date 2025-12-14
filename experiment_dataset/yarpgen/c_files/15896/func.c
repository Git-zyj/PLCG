/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15896
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned short) var_8)))))));
                                var_17 = ((/* implicit */_Bool) arr_2 [i_0]);
                                arr_12 [i_3] [i_1] = var_8;
                                arr_13 [i_0] [i_0] [i_2] [5ULL] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
                                arr_14 [i_2] [10ULL] [i_3] [i_2] [i_4] = ((/* implicit */unsigned char) var_6);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    arr_17 [(_Bool)1] [i_1] [i_1] [i_5] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) (unsigned char)19))));
                    arr_18 [i_0] [i_0] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [(short)9]))) : (6590785105108505908ULL)));
                    arr_19 [i_1] [i_1] = ((/* implicit */unsigned char) ((((unsigned long long int) var_5)) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_5])))));
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            {
                                var_18 += ((/* implicit */_Bool) (unsigned char)12);
                                var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_27 [i_0] [i_1] [i_1] [i_6] [i_1] [(unsigned short)7] [i_8])) : (((/* implicit */int) var_0))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) (((~(((/* implicit */int) var_13)))) ^ (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (unsigned short)2379)))))));
                    var_21 = ((/* implicit */signed char) arr_10 [i_6] [i_6] [i_1] [i_6] [i_6] [i_0]);
                }
                var_22 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))) < ((~(((/* implicit */int) (unsigned char)236)))))));
                arr_29 [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)10)) % (((/* implicit */int) var_13)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)21874)))))));
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) 
                            {
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7919353825781258283LL))))));
                                arr_38 [i_0] [i_10] [(_Bool)1] [i_10] [i_10] [i_11] = ((/* implicit */_Bool) (~(max((6550102406007630155ULL), (((/* implicit */unsigned long long int) (unsigned char)237))))));
                                arr_39 [i_0] [i_10] [9ULL] [i_0] = ((/* implicit */_Bool) max(((unsigned short)65531), (((/* implicit */unsigned short) (_Bool)1))));
                                arr_40 [i_10] [i_10] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_30 [i_0])) & (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) arr_30 [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_30 [i_0]))))));
                            }
                            arr_41 [i_0] [i_1] [i_10] [i_9] [i_10] [i_10] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) (~(((((/* implicit */int) min((var_14), (((/* implicit */short) var_5))))) | ((~(((/* implicit */int) (unsigned short)44152))))))));
}

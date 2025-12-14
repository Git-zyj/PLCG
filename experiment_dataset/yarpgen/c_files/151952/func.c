/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151952
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
    var_10 |= ((/* implicit */unsigned short) ((2621406292U) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_1)) : (0))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    arr_8 [i_0] = ((/* implicit */unsigned char) (+(var_7)));
                    arr_9 [i_2] [(unsigned short)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (0) : (((/* implicit */int) arr_3 [i_0 - 1]))));
                }
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0 - 1] [i_1] [i_3] = ((/* implicit */unsigned char) arr_0 [i_1]);
                    arr_14 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        for (signed char i_5 = 1; i_5 < 16; i_5 += 3) 
                        {
                            {
                                arr_22 [i_4] [i_1] [i_1] [i_1] [i_5 - 1] [i_5] [i_3] = ((/* implicit */signed char) (((!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_3] [i_3] [i_3]))) < (arr_19 [i_0] [i_1] [i_3] [i_4] [i_3]))))) ? (((/* implicit */unsigned long long int) -1478990181)) : (((((/* implicit */_Bool) arr_19 [i_5 + 1] [i_4] [i_3] [i_1] [i_0])) ? (arr_19 [i_0 - 2] [i_1] [i_3] [i_1] [i_5 + 1]) : (((/* implicit */unsigned long long int) 0))))));
                                arr_23 [i_0] [i_0] [(signed char)8] [i_3] [i_5 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 389912376)) || (((/* implicit */_Bool) 1129582278)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3]))) : (arr_0 [i_5 - 1])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_10 [i_3])) >= (1))))))) : ((~(((((/* implicit */_Bool) 1288719236)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_3] [i_3] [i_0 - 1])) ? (1811652055U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_3] [i_3 + 1] [i_1]))))));
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                {
                    arr_28 [i_6] [i_1] [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
                    arr_29 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2] = ((/* implicit */_Bool) ((int) (~(-1))));
                    arr_30 [i_0] [7ULL] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) arr_15 [i_6 + 1] [i_6 + 1] [i_0] [i_6 + 1])))));
                    arr_31 [i_0 - 2] [i_0 - 2] [(short)5] [(signed char)4] = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) var_4)), (var_9)))))));
                }
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (long long int i_8 = 4; i_8 < 15; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 4; i_9 < 15; i_9 += 4) 
                        {
                            {
                                arr_39 [i_7] [(signed char)0] [i_1] = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)27)), ((short)-2579))))) + (arr_18 [i_0] [i_7] [i_0 - 2] [i_0 + 1] [i_8])))));
                                arr_40 [i_0] [i_0] [i_1] [i_0] [i_7] [i_0] [i_1] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) arr_6 [i_0 + 1] [i_8 - 3] [i_9] [i_9 - 4])), (arr_12 [i_0 + 1] [i_1] [i_8 + 1] [i_0]))), (max((var_6), (((/* implicit */unsigned long long int) 570178354794553699LL))))));
                                arr_41 [i_7] [i_8] [i_0] [i_0] [i_0] [i_0] [i_7] = max((((signed char) arr_21 [i_9 - 4] [i_7] [i_8 - 2] [i_7] [i_0])), (((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) 335153576U)), (var_6))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116)))))));
                                arr_42 [i_0] [i_0] [i_1] [i_7] [i_7] [i_1] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((int) (short)-18485))) ? (max((((/* implicit */long long int) var_2)), (728333405275735026LL))) : (((/* implicit */long long int) var_7)))));
                                arr_43 [i_0] [i_0] [i_7] [(short)5] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [i_0] [i_7] [i_7] [i_9]), (((/* implicit */unsigned char) var_2)))))) / (((((/* implicit */_Bool) 11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0)))) : (var_0)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        {
                            arr_51 [i_0] [i_0 - 2] [i_0] [i_0] = ((/* implicit */unsigned int) (+(-8864825851103843729LL)));
                            arr_52 [i_0 + 1] [i_0 + 1] [i_10] [i_10] = ((/* implicit */unsigned int) (~(((5576792392480767972ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_0 + 1] [i_0] [i_0 - 2] [i_10])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_11 = ((/* implicit */long long int) var_6);
    /* LoopNest 2 */
    for (signed char i_12 = 0; i_12 < 17; i_12 += 4) 
    {
        for (long long int i_13 = 0; i_13 < 17; i_13 += 3) 
        {
            {
                arr_58 [i_12] [14LL] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */int) (short)18359)), (0))))) ? (((arr_27 [i_12] [i_12] [i_12] [i_12]) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_12] [i_13] [i_12] [i_13]))) : (-6674291032468401116LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) -389912379))))));
                arr_59 [i_12] = ((/* implicit */unsigned char) ((short) max((((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)-3419))))), (((/* implicit */long long int) (+(((/* implicit */int) (short)26988))))))));
            }
        } 
    } 
}

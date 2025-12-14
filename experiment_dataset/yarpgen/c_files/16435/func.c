/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16435
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_6 [i_0] [i_1 - 1] [(unsigned char)1] [i_2])))) ? (((/* implicit */int) (!(arr_5 [i_0] [i_1])))) : (((/* implicit */int) max((arr_5 [i_0] [i_0]), (((((/* implicit */_Bool) arr_4 [i_1])) || (arr_5 [i_0] [i_1 + 1]))))))));
                    var_20 ^= ((/* implicit */_Bool) var_14);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) (~(((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 13; i_5 += 3) 
                {
                    for (long long int i_6 = 1; i_6 < 12; i_6 += 2) 
                    {
                        {
                            arr_19 [i_4] = ((/* implicit */unsigned short) 977262128);
                            arr_20 [i_3] [i_4] [i_5 + 2] [i_6] = ((/* implicit */long long int) (-((-(((((/* implicit */_Bool) arr_18 [i_3] [i_4] [i_3] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3]))) : (arr_17 [i_3])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned char i_8 = 2; i_8 < 15; i_8 += 3) 
                    {
                        for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            {
                                arr_29 [i_3] [i_4] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_3 + 1] [i_3 + 4]))))) << (((min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_13 [i_7] [i_7])) : (arr_18 [i_3] [i_4] [i_7] [i_8 - 2]))))) - (94)))));
                                arr_30 [i_7] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_22 [i_3 + 4] [i_4])))) > ((+(arr_28 [i_3] [i_3] [i_7] [i_4] [i_4] [i_4] [i_3]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1141247640)) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) (unsigned char)76))))) ? (((/* implicit */unsigned long long int) max((636021789192669129LL), (((/* implicit */long long int) (unsigned char)112))))) : ((~(1880876720064606445ULL))))) : (((/* implicit */unsigned long long int) arr_17 [i_9]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    for (signed char i_11 = 3; i_11 < 13; i_11 += 2) 
                    {
                        {
                            arr_37 [i_3] [i_3 + 3] [i_11] [i_3] [i_3 + 3] [i_11] = ((/* implicit */unsigned char) arr_26 [i_10]);
                            var_22 -= ((/* implicit */long long int) (-(((((/* implicit */int) arr_16 [i_3 + 4])) * (((/* implicit */int) arr_31 [i_11 - 1] [i_3 + 1] [i_11 - 3] [i_3 + 1]))))));
                            arr_38 [i_3] [i_3] [i_11] [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_25 [i_3] [i_4] [i_10] [i_10] [i_11])) ? (((/* implicit */int) arr_27 [i_3 + 2] [i_4] [i_4] [i_10] [i_11 + 1] [i_10])) : (((/* implicit */int) arr_31 [i_3] [i_4] [i_10] [i_11])))))))));
                            arr_39 [i_11] [i_4] [i_11] = ((/* implicit */signed char) ((unsigned char) (-(((((/* implicit */_Bool) arr_32 [i_11] [i_10] [i_4] [i_3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_34 [i_3] [i_10] [i_11 - 2])))))));
                            var_23 = (+((-(arr_21 [i_3 + 1] [i_4] [i_10] [i_11]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_12 = 1; i_12 < 15; i_12 += 4) 
    {
        for (signed char i_13 = 0; i_13 < 17; i_13 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 17; i_14 += 2) 
                {
                    for (signed char i_15 = 0; i_15 < 17; i_15 += 4) 
                    {
                        {
                            arr_48 [i_12] [(signed char)12] [i_12 - 1] [i_12] = ((/* implicit */short) (+(max((((/* implicit */int) arr_40 [i_12])), (((int) arr_43 [i_12 + 2] [i_15]))))));
                            var_24 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_46 [i_15] [i_12] [i_12])) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_41 [i_14]))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_41 [i_14]))))) ? (((((/* implicit */_Bool) (unsigned short)39005)) ? (((/* implicit */int) (short)-10807)) : (((/* implicit */int) arr_40 [i_14])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_45 [i_14] [i_13] [i_14] [i_15])), (arr_47 [i_12] [i_14] [i_15] [i_15])))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_13] [(unsigned char)6] [i_14] [i_15]))) : (1891686939U)))) || (((/* implicit */_Bool) arr_41 [i_12 + 2])))))));
                            arr_49 [i_12] [i_13] [i_13] [i_12 + 1] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_42 [i_12] [i_14] [i_15]))));
                        }
                    } 
                } 
                arr_50 [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_12 + 2] [i_12 + 2] [(unsigned short)6] [i_12]))) | (4294967285U))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_12 + 2] [i_12 + 2] [i_12 + 1] [i_12 + 2])))))) ? (((((/* implicit */_Bool) arr_41 [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_45 [i_12] [i_12] [i_12] [15ULL])))) : (((((/* implicit */_Bool) 2305124408U)) ? (arr_43 [6U] [i_12 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_12] [i_12] [i_12] [i_12]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_40 [i_12 + 1])) : (((/* implicit */int) arr_41 [i_12 + 1])))))));
            }
        } 
    } 
}

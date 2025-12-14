/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188188
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) var_7))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1 - 2] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                    arr_9 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-1LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) var_5))), ((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_0]))))))) : (arr_6 [i_2] [i_1] [i_0])));
                    var_12 = ((/* implicit */unsigned int) var_1);
                }
                var_13 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */short) (unsigned char)19)), ((short)31634))))));
                var_14 = ((/* implicit */unsigned int) arr_4 [i_1] [i_1 - 2] [i_1 - 2] [i_0]);
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) 2914924437U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)84))))) || (((((/* implicit */long long int) ((/* implicit */int) var_5))) >= (6231376178855402985LL))))))) : (((unsigned long long int) ((2914924437U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))))));
                var_16 = ((/* implicit */unsigned int) ((148166683U) == (max((4294967295U), (((/* implicit */unsigned int) (short)8488))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 13; i_7 += 2) 
                        {
                            {
                                arr_25 [i_4] [i_5] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_3] [i_5] [i_6] [i_7]))) ? (((((/* implicit */int) (unsigned short)0)) | (16777216))) : (((/* implicit */int) var_9)))));
                                var_17 = ((/* implicit */short) arr_5 [i_3]);
                                var_18 -= min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 2] [i_7] [i_7])) ? (((/* implicit */int) arr_23 [i_7 + 3] [i_7 + 2] [i_7] [i_7 + 1] [i_7 - 1])) : (((/* implicit */int) arr_23 [i_7 + 3] [i_7 + 1] [i_7] [i_7 + 3] [i_7]))))), (((((/* implicit */unsigned int) ((/* implicit */int) max((var_0), ((unsigned short)5100))))) / (((unsigned int) (unsigned char)171)))));
                                arr_26 [i_3] [i_4] [i_5] [i_6] [i_7] [i_6] = ((/* implicit */short) (+(6231376178855402985LL)));
                                var_19 = max((148166685U), (((/* implicit */unsigned int) (unsigned short)5121)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_8 = 3; i_8 < 13; i_8 += 4) 
                    {
                        var_20 = (-(((/* implicit */int) ((unsigned short) var_5))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)255)))))));
                        var_22 = ((/* implicit */unsigned int) 6231376178855403002LL);
                    }
                    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned short) arr_14 [i_5] [i_4]);
                        var_24 -= ((/* implicit */unsigned char) ((6U) & (1657736659U)));
                    }
                }
                /* vectorizable */
                for (unsigned char i_10 = 1; i_10 < 14; i_10 += 2) 
                {
                    arr_36 [i_3] [i_4] [i_10] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) (-9223372036854775807LL - 1LL))))));
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((short) (unsigned char)110)))));
                }
                for (unsigned char i_11 = 2; i_11 < 15; i_11 += 4) 
                {
                    var_26 = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */unsigned short) (short)-643)), ((unsigned short)62824))));
                    var_27 = min((((((/* implicit */_Bool) (short)-9006)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-643))) : ((+(3811005068U))))), (613793520U));
                    arr_41 [i_3] [i_4] = ((/* implicit */unsigned short) arr_35 [i_3] [i_11] [i_11] [i_4]);
                }
                for (short i_12 = 2; i_12 < 15; i_12 += 1) 
                {
                    arr_45 [i_3] [i_4] [i_12] = ((/* implicit */unsigned int) (~(6386057478026301750ULL)));
                    arr_46 [i_3] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)60436))));
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((unsigned short) (short)-185)))));
                }
                var_29 ^= ((unsigned int) var_1);
                var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-31910)) | (((/* implicit */int) (unsigned short)5000))));
                var_31 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) 613793520U)))));
            }
        } 
    } 
}

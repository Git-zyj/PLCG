/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102906
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_19 ^= ((/* implicit */unsigned short) ((max((arr_2 [i_0] [i_0 - 1]), (((/* implicit */int) (unsigned char)4)))) ^ ((+(((/* implicit */int) arr_1 [i_1]))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((4356939359584600291LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)46)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))) | (var_16))))));
                    var_20 = min(((+(((/* implicit */int) var_7)))), (((((/* implicit */_Bool) arr_2 [i_1] [i_0 - 1])) ? (arr_2 [i_0 - 1] [i_0 - 1]) : (-108991003))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_16 [i_4] [i_0] [i_4] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */short) (((-(((-23LL) & (((/* implicit */long long int) 1614768580U)))))) >= (((/* implicit */long long int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) (_Bool)0)))))));
                                var_21 += (unsigned short)2817;
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((-1985291297) == (((/* implicit */int) var_13)))))))) ? (((int) (-9223372036854775807LL - 1LL))) : ((-(arr_2 [i_0] [i_0 - 1])))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_5] [i_6] = ((/* implicit */int) var_6);
                                arr_23 [i_6] [i_0] [i_2] = ((/* implicit */short) ((3243378591040746841LL) ^ (((((/* implicit */_Bool) max((((/* implicit */signed char) var_4)), (var_18)))) ? (max((((/* implicit */long long int) (unsigned char)0)), (var_2))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                                arr_24 [i_0] [i_1] [i_2] [i_5] [i_0] [i_6] = ((/* implicit */signed char) arr_7 [i_1] [i_2] [i_6]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_27 [i_0] [i_1] [i_0] = var_12;
                    arr_28 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 1023168303030745549LL)) ? (1992821393U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0 - 1])))));
                }
                for (unsigned char i_8 = 2; i_8 < 16; i_8 += 2) 
                {
                    var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)1)), (var_2)))) ? (((((/* implicit */int) var_12)) | ((~(((/* implicit */int) var_18)))))) : ((-(((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_8 - 2]))))));
                    arr_32 [i_0 - 1] [i_0] = ((/* implicit */signed char) var_6);
                    var_23 = min((var_9), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) var_13))))));
                    arr_33 [i_0] [i_1] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)68)) > (1961329316)));
                    arr_34 [i_0] [i_1] [i_0] = ((((/* implicit */unsigned int) (+(1063478706)))) + (max((arr_14 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned int) (signed char)-111)))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */int) max(((((~(var_16))) % (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-8342))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-14)), (322352550U)))) ? (201326592U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
}

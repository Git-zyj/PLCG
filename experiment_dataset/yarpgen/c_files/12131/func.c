/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12131
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_9 [i_2] = (+(((/* implicit */int) (unsigned char)245)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_20 = min(((unsigned char)6), ((unsigned char)241));
                                arr_17 [i_0] [i_0] [3U] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)234)) ? (1099377410048ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (2938308205U) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)114), (((/* implicit */signed char) (_Bool)1))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_5] [i_1] [5U] [i_2] [i_5] = ((/* implicit */unsigned long long int) var_13);
                        var_21 = ((/* implicit */unsigned short) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2]);
                    }
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */long long int) min((min(((!((_Bool)1))), (arr_12 [i_0] [i_6] [i_2] [i_6] [i_1]))), (((((/* implicit */int) ((unsigned char) arr_4 [9] [i_2]))) != ((~(((/* implicit */int) (_Bool)1))))))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_19))));
                        var_23 = ((/* implicit */signed char) (((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) < (arr_8 [i_0])))))) & (((arr_15 [10U] [i_1] [(_Bool)1] [10U]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : ((~(((/* implicit */int) arr_18 [i_0] [10ULL] [i_2] [i_1] [i_0] [i_0]))))))));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)22777)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) >> (((/* implicit */int) min((((/* implicit */unsigned short) arr_16 [i_2] [(_Bool)1] [i_2] [(_Bool)1] [i_2])), (var_0))))))) : (((((/* implicit */long long int) 1705330011)) | (arr_3 [i_1])))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (max((((/* implicit */unsigned long long int) var_5)), (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_6] [i_2] [i_1] [i_0]))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) arr_20 [i_0] [i_0] [(unsigned char)2] [i_7] [i_8]);
                                arr_32 [i_0] [(unsigned char)16] [i_0] [(unsigned char)16] [i_8] = ((/* implicit */unsigned long long int) var_4);
                                arr_33 [i_8] = (unsigned char)255;
                                var_27 |= ((/* implicit */_Bool) ((int) min(((-(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_31 [i_0] [i_1] [i_2] [i_7] [i_8])) : (((/* implicit */int) arr_14 [i_0] [i_1] [12ULL] [i_2] [i_7] [i_8] [i_8])))))));
                            }
                        } 
                    } 
                    arr_34 [16] [(unsigned char)16] [15] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
    {
        for (int i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_11 = 0; i_11 < 23; i_11 += 2) 
                {
                    var_28 -= ((/* implicit */signed char) min(((-(arr_36 [i_9]))), (((/* implicit */unsigned int) ((arr_42 [i_11]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))))));
                    var_29 = ((int) ((((/* implicit */_Bool) var_16)) ? (var_10) : (arr_42 [i_9])));
                }
                var_30 = ((/* implicit */_Bool) min((((((/* implicit */int) arr_40 [i_9] [(unsigned char)11] [i_10])) & (((/* implicit */int) var_14)))), (((arr_40 [i_9] [i_9] [i_9]) ? (((/* implicit */int) arr_40 [i_9] [i_10] [i_10])) : (((/* implicit */int) arr_40 [i_10] [i_9] [i_9]))))));
                arr_43 [i_9] [22U] [i_9] = ((/* implicit */signed char) (_Bool)1);
            }
        } 
    } 
    var_31 = ((((unsigned long long int) var_2)) << (((var_7) - (758988499))));
    var_32 = ((/* implicit */_Bool) min((var_32), (var_4)));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161260
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
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) 511826295761168847ULL)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-4911407548192239843LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 1780572731U)))))))) / (((/* implicit */long long int) (-((-(((/* implicit */int) var_10)))))))));
        var_12 = ((/* implicit */unsigned int) ((min((((((/* implicit */unsigned long long int) var_8)) - (1737789808842246117ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (1780572708U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    for (unsigned int i_1 = 2; i_1 < 16; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (((_Bool)0) ? (1780572731U) : (1780572719U))))) <= ((+(((/* implicit */int) arr_5 [i_1 - 1]))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (8309290626766527694LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned int i_2 = 2; i_2 < 16; i_2 += 2) /* same iter space */
    {
        arr_11 [i_2 - 1] = ((/* implicit */long long int) (short)-15937);
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    {
                        var_13 = ((/* implicit */unsigned long long int) arr_4 [i_4]);
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)40184))))) ? (((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? (arr_4 [i_2 + 3]) : (((/* implicit */unsigned int) -957657890)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (8309290626766527688LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
                            var_15 = ((/* implicit */unsigned short) ((((unsigned long long int) var_6)) << (min((1780572728U), (((/* implicit */unsigned int) arr_15 [i_3 + 2] [i_3] [i_4]))))));
                            arr_22 [i_6] [i_5] [i_4] [(signed char)7] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) min((var_2), (((/* implicit */short) var_3)))))))) ? (((/* implicit */unsigned int) arr_17 [i_6] [i_6] [i_5] [i_4] [i_3] [i_2])) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [(short)14] [i_3] [i_4] [0U] [i_5] [i_5]))))) ? (4247478267U) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_10 [i_6])), (var_2)))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_7 = 2; i_7 < 16; i_7 += 2) /* same iter space */
    {
        arr_25 [i_7] [i_7] = ((/* implicit */_Bool) ((long long int) var_8));
        arr_26 [i_7 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (957657889)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3690788010U))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-11246)) : (((/* implicit */int) (short)18579)))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_11)) << (((/* implicit */int) (_Bool)0))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            arr_30 [i_7] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-38))) < (1780572727U))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_7] [i_8] [i_7]))) : ((+(var_6)))));
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_7 - 2] [i_8])) && (((/* implicit */_Bool) var_8))));
            arr_31 [i_7] = ((/* implicit */short) ((((/* implicit */int) (signed char)-101)) >= (((/* implicit */int) (short)18579))));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_37 [i_10] [i_9] [i_9] [(unsigned char)11] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_7 - 1])) ? (((/* implicit */int) arr_10 [i_7])) : (((/* implicit */int) arr_15 [i_7] [4ULL] [4ULL]))));
                        arr_38 [i_7] [i_7] [i_7] [4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-11235)) ? (((/* implicit */int) (short)6482)) : (((/* implicit */int) arr_23 [i_7]))));
                    }
                } 
            } 
        }
    }
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 2739352075U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-43)))) : (((/* implicit */int) ((unsigned short) (unsigned char)63)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-75))))) && (((/* implicit */_Bool) var_6))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1780572728U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35933))) : (5824088379253189442ULL)))) ? (((/* implicit */int) ((unsigned char) 1568997596841282473ULL))) : ((~(((/* implicit */int) (signed char)47))))))));
}

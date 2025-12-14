/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177717
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
    var_19 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (signed char)71)) << (((((((/* implicit */_Bool) (short)7403)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)32766)))) + (39))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_20 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 16777216U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_13))), (2147221504U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)118)))))))) : (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_8)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */signed char) var_4)), (var_14))))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))) & (4294950912U)))));
        var_21 = ((/* implicit */short) var_13);
    }
    var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) max((var_10), (var_14)))) : (((/* implicit */int) var_17)))) - ((~(((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned char)138))))))));
    /* LoopNest 3 */
    for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        for (int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (signed char i_3 = 3; i_3 < 17; i_3 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            arr_18 [i_5] [i_1] [i_3 - 1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) (+(min((arr_2 [i_1 + 2]), (((/* implicit */int) var_8))))));
                            var_23 += ((/* implicit */unsigned short) min((((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)60))))) ^ (((var_4) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_12)))))), (((((/* implicit */_Bool) var_12)) ? ((-(((/* implicit */int) (short)2048)))) : (((/* implicit */int) var_9))))));
                        }
                        arr_19 [i_1] [i_1] [i_1] [(signed char)8] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((min((var_5), (((/* implicit */short) (unsigned char)17)))), (((/* implicit */short) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_8 [(short)14] [i_2] [i_1]))))))))));
                    }
                    for (short i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        arr_24 [i_1 - 1] [i_1] = ((/* implicit */long long int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_1] [(unsigned char)7] [i_3] [i_6] [i_2] [(unsigned char)7] [i_2])))))))));
                        arr_25 [i_1] [13ULL] [(short)9] [(signed char)13] [i_1] = ((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [12] [i_1 + 1] [i_3 - 3] [i_1])) : (((/* implicit */int) arr_14 [i_1 + 2])))))));
                    }
                    for (unsigned short i_7 = 2; i_7 < 16; i_7 += 2) 
                    {
                        arr_28 [i_2] [(_Bool)1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [(_Bool)1] [i_1] [i_3 + 1] [i_7]))));
                        arr_29 [i_1] [i_2] [(_Bool)1] [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_16)) : ((-(((/* implicit */int) (unsigned char)137)))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_13 [i_1] [i_2] [8] [(unsigned char)11] [i_1]))))) ? ((+(((/* implicit */int) (short)7403)))) : (((/* implicit */int) ((unsigned short) arr_6 [i_7])))))));
                    }
                    arr_30 [3U] [3U] [3U] [3U] = ((/* implicit */unsigned short) min((((((/* implicit */int) (unsigned short)15392)) | (((/* implicit */int) var_14)))), (((/* implicit */int) var_17))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) var_8);
}

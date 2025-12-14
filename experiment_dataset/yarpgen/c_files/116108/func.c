/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116108
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
    var_10 = ((/* implicit */unsigned short) var_3);
    var_11 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) var_9)))))) | (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [(signed char)15] [i_0])) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)120)))))))) | (((/* implicit */int) arr_3 [(unsigned char)16]))));
                                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(signed char)16] [(signed char)16] [(signed char)16] [17U] [(signed char)16] [(signed char)14])) ? (arr_6 [(signed char)8] [(unsigned short)0] [(signed char)8]) : (arr_2 [20U] [16U]))))))) % (((/* implicit */int) ((unsigned short) arr_8 [i_4 - 1] [22U] [7U] [2U] [i_4 - 1]))))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_0] [22U] [(_Bool)1]) < (arr_6 [(signed char)18] [(signed char)18] [(unsigned short)10]))))) + ((~(((arr_12 [(unsigned short)22] [(unsigned short)22] [(unsigned short)16]) << (((arr_5 [(unsigned short)20] [(unsigned short)22] [(signed char)2]) - (1210719887U))))))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [12U] [i_0] [(signed char)23])) ? (((/* implicit */int) arr_1 [i_0] [(unsigned short)7])) : (((/* implicit */int) arr_4 [5U] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [(signed char)14] [i_0])) & (((/* implicit */int) arr_3 [(_Bool)1]))))) : ((~(arr_9 [(unsigned char)7] [(unsigned char)7] [11LL] [9LL] [(signed char)9] [(signed char)19])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [(signed char)14] [i_0])) | (((/* implicit */int) arr_3 [22U]))))) ? (((arr_9 [(signed char)15] [(signed char)15] [(unsigned short)18] [(unsigned short)12] [(unsigned short)12] [(unsigned short)12]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)7] [i_0]))))) : ((~(0U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned short)23])))));
            }
        } 
    } 
    var_16 = var_3;
}

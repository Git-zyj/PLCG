/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182403
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
    var_19 ^= ((/* implicit */short) var_0);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            var_20 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 3])) ? (((/* implicit */int) arr_1 [i_1 - 3])) : (((/* implicit */int) arr_1 [i_1 + 3])))));
            var_21 = ((/* implicit */signed char) max((((/* implicit */long long int) ((short) (unsigned char)102))), (((long long int) var_4))));
            var_22 = ((/* implicit */unsigned int) arr_4 [i_1] [i_1] [i_1]);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30435))) & (((11599687731804890582ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                arr_10 [(_Bool)1] [i_2] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */int) (short)-26558))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [(signed char)13]))) | (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_18)) ? (arr_3 [13U] [i_2] [(signed char)0]) : (((/* implicit */long long int) arr_6 [(signed char)0] [(unsigned short)4] [(unsigned short)4])))), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_3] [i_0])) + (((/* implicit */int) var_5))))))))));
                arr_11 [i_2] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_5 [i_0]))), (((/* implicit */unsigned long long int) ((unsigned short) arr_5 [i_0])))));
                arr_12 [i_0] [(unsigned char)6] [(unsigned char)9] = ((/* implicit */_Bool) ((signed char) ((unsigned long long int) ((((/* implicit */int) (unsigned char)102)) + (((/* implicit */int) (short)-3959))))));
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27620)) ? (arr_5 [i_3]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3564594093U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (3077341663801159105ULL)))) ? (min((arr_4 [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) var_14)))) : (arr_5 [i_0]))))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_15 [i_4] [i_2] [i_4] = ((/* implicit */signed char) 18124385333896498934ULL);
                arr_16 [i_4] [(_Bool)0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_2] [(_Bool)1])) || (((/* implicit */_Bool) var_18)))))))) & (((((/* implicit */_Bool) arr_0 [5ULL])) ? (((/* implicit */int) max((((/* implicit */short) (signed char)123)), ((short)-27315)))) : (((/* implicit */int) (unsigned short)65535))))));
            }
            /* LoopSeq 4 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                var_25 -= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_17 [(unsigned short)4]))))));
                arr_21 [i_0] [i_5] [(short)4] [(signed char)7] = ((/* implicit */signed char) ((int) (-(730373213U))));
            }
            /* vectorizable */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                arr_25 [i_2] [(unsigned short)2] &= ((/* implicit */unsigned long long int) arr_1 [i_2]);
                var_26 = (unsigned short)0;
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                arr_28 [i_0] [i_2] [i_7] [(_Bool)1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)7181))) || (var_12))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_19 [i_0] [i_0] [(short)0] [i_7])));
                var_27 -= ((/* implicit */unsigned short) max(((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_26 [(signed char)12] [(short)14] [i_7 - 1])) : (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_7] [4ULL] [4ULL]))))))), (322358739813052710ULL)));
                var_28 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((signed char) arr_9 [(unsigned char)6] [i_7 - 1]))) ? ((-(((/* implicit */int) var_16)))) : (((/* implicit */int) ((unsigned char) arr_26 [(_Bool)1] [i_7] [i_7])))))));
            }
            for (unsigned int i_8 = 3; i_8 < 12; i_8 += 3) 
            {
                var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_8 - 1] [i_8 + 2] [i_8 - 2])) ? (((/* implicit */int) arr_13 [i_8 - 1] [i_8 + 2] [i_8 - 2])) : (((/* implicit */int) arr_13 [i_8 - 1] [i_8 + 2] [i_8 - 2]))))) ? (arr_2 [i_8] [i_2]) : (((/* implicit */int) max((arr_7 [i_0] [i_2] [i_8 - 2]), (arr_7 [i_0] [i_2] [i_8])))));
                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (((~(var_6))) / (((/* implicit */int) max((((/* implicit */unsigned short) (short)-5)), ((unsigned short)0)))))))));
                arr_32 [i_0] [i_0] [i_0] [i_8 + 3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_18 [(unsigned short)4])), (arr_23 [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */int) ((short) 18446744073709551609ULL))))), (((/* implicit */int) ((short) (unsigned char)150)))));
            }
            var_31 = ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */_Bool) arr_24 [i_0] [0U] [0LL] [i_0])) ? (arr_18 [(short)0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)63)))))));
        }
        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) arr_1 [i_0]))));
    }
    var_33 = ((/* implicit */signed char) var_0);
    var_34 = ((/* implicit */int) var_9);
}

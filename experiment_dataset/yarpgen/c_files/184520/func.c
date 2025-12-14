/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184520
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
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            arr_12 [1LL] [i_3] = ((/* implicit */short) var_17);
                            var_20 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) var_6)), (201737167515748868LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)1023))) <= (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [(unsigned char)5] [11LL] [i_0]))) : (arr_0 [i_0])))))))));
                            var_21 = ((/* implicit */long long int) (unsigned short)65535);
                        }
                        arr_13 [5LL] = ((/* implicit */short) (+(((/* implicit */int) max((arr_9 [i_0 - 2] [i_3] [i_3] [13LL] [i_3]), (arr_9 [i_0 + 1] [i_1] [i_0 + 1] [(short)1] [i_2]))))));
                    }
                    var_22 = ((/* implicit */unsigned char) ((min((arr_4 [i_0 - 2]), (arr_4 [i_0 - 2]))) < (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))) & (-2142828122261689941LL)))));
                    var_23 -= ((/* implicit */unsigned char) min((min((((var_18) & (arr_4 [i_2]))), (((/* implicit */long long int) (unsigned char)63)))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) | (((/* implicit */int) var_19))))) ? (max((arr_4 [i_1]), (((/* implicit */long long int) (unsigned char)78)))) : (var_12)))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_1 [(unsigned short)5] [i_1])))) ? (((/* implicit */int) ((unsigned char) (unsigned char)7))) : (((/* implicit */int) arr_7 [(unsigned char)11] [(unsigned short)13] [i_1] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0 - 2])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)63)) > (((/* implicit */int) (unsigned short)65535))))) : ((-(((/* implicit */int) arr_5 [i_1]))))))) : (((((/* implicit */_Bool) arr_6 [i_0 + 1] [(unsigned short)7])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_0] [(unsigned char)17] [16LL])))))));
                    arr_14 [i_2] [(unsigned char)1] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0 - 2] [(short)5]);
                }
            } 
        } 
        var_25 = ((/* implicit */short) ((max((arr_8 [(unsigned char)5] [i_0] [(unsigned char)5] [i_0 - 2]), (((/* implicit */long long int) var_0)))) <= (((/* implicit */long long int) ((((/* implicit */int) min(((short)16352), (var_1)))) | (((/* implicit */int) var_5)))))));
    }
    for (short i_5 = 2; i_5 < 17; i_5 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) ((short) (-(((/* implicit */int) (unsigned short)65510)))));
        var_27 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)255)), (((((/* implicit */_Bool) arr_7 [i_5 - 2] [i_5] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5 + 1])) : (((/* implicit */int) var_13))))));
    }
    var_28 ^= ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)65534), (((/* implicit */unsigned short) var_11))))) * (((/* implicit */int) max((((/* implicit */unsigned short) var_19)), (var_8))))))) ? (((/* implicit */long long int) min((((((((/* implicit */int) (short)-28964)) + (2147483647))) >> (((((/* implicit */int) var_5)) - (110))))), (((/* implicit */int) var_16))))) : (var_9));
}

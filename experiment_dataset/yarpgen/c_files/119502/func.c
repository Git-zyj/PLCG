/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119502
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
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0];
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_9 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16734)) && (((/* implicit */_Bool) -3911833155065659001LL))))) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [12LL])) ? (var_4) : (-3539484799570845402LL)))) ? (((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)18695)) & (((/* implicit */int) var_8))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 3; i_4 < 18; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_1] [i_3] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3] [i_2] [i_3] [(unsigned char)1] [i_3])) ? (((long long int) ((unsigned short) arr_0 [i_0]))) : (((((/* implicit */_Bool) (unsigned short)12)) ? (1125899906711552LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61782)))))));
                            arr_13 [i_0] [12LL] [12LL] [12LL] [(unsigned short)12] = ((/* implicit */unsigned short) arr_7 [(unsigned short)4] [(unsigned char)11] [(unsigned short)14] [(unsigned short)17] [13LL]);
                            arr_14 [(unsigned short)17] [i_2] [(unsigned char)15] [(unsigned short)2] = var_8;
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)145)) + (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)109)))), (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) arr_11 [i_0] [(unsigned char)13] [i_1] [i_2] [(unsigned short)2] [(unsigned char)5] [i_0])))))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_15 = var_11;
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned char)145)) ? (-6052097852543010663LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) & (((/* implicit */long long int) ((/* implicit */int) var_3))))) != (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1] [(unsigned short)4] [i_5]))))))))));
                        }
                        var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_0 + 3] [i_0 + 3]))) - (-6169466182614717700LL)))));
                    }
                } 
            } 
        } 
        arr_19 [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)3);
    }
    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26026))))) != (((((((/* implicit */int) (unsigned short)38938)) ^ (((/* implicit */int) (unsigned short)58482)))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_22 [i_6] [i_6]))))))));
        arr_24 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)52567)) ? (((/* implicit */int) (unsigned short)25142)) : (((/* implicit */int) (unsigned short)60471))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_0 [i_6]))) / (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)30930)) : (((/* implicit */int) (unsigned short)17287))))))) ? (((long long int) arr_10 [i_6] [i_6] [8LL] [i_6] [i_6])) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)38493)))))));
    }
    var_20 ^= ((/* implicit */long long int) var_13);
}

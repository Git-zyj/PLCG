/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13161
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
    var_20 = ((0ULL) - (((((/* implicit */_Bool) (+(((/* implicit */int) (short)2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_1))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 7; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)52932)))));
                        var_22 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_0 [i_0])))) & (((/* implicit */int) var_16))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned char) (~((-(var_1)))));
                        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (unsigned short)8160))))) || (((/* implicit */_Bool) var_18)))) ? (((/* implicit */int) var_3)) : ((((!(((/* implicit */_Bool) 5353212146275882495ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 17675877849729090327ULL))))) : (((/* implicit */int) (unsigned short)5048))))));
                        arr_11 [i_0] [i_1 + 2] [i_0] [i_4] = ((((/* implicit */unsigned long long int) (((((-(((/* implicit */int) var_9)))) + (2147483647))) >> (((((/* implicit */int) (short)25190)) - (25185)))))) ^ (((((((/* implicit */_Bool) (unsigned char)136)) && (((/* implicit */_Bool) (unsigned char)241)))) ? (arr_3 [i_0] [(unsigned char)4] [i_1]) : ((+(17675877849729090327ULL))))));
                        arr_12 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_11);
                    }
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 4; i_6 < 9; i_6 += 3) /* same iter space */
                        {
                            var_25 *= ((/* implicit */short) var_10);
                            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) & (min((((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) var_4)))), (((((/* implicit */int) (unsigned char)141)) | (((/* implicit */int) (unsigned short)33064))))))));
                            var_26 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((unsigned short) var_13)), (arr_13 [i_5] [i_0] [i_0] [i_0])))), (var_14)));
                        }
                        for (unsigned short i_7 = 4; i_7 < 9; i_7 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_17))));
                            var_28 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31))) / (var_12)))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_19 [i_1 + 2] [i_2 - 2] [i_2] [i_5] [i_5] [i_5]))))));
                        }
                        var_29 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)2)) >> (((((((/* implicit */_Bool) (short)-6508)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_7 [i_0] [i_1] [i_2] [i_5]))) - (18446744073709551503ULL))))) <= (((((/* implicit */_Bool) (unsigned short)23579)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned short)49730))))) : (((/* implicit */int) (unsigned short)33091))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned short) (+((((-(((/* implicit */int) var_17)))) - (((/* implicit */int) ((unsigned short) arr_3 [i_8] [i_2] [i_0])))))));
                        arr_26 [i_0] [(unsigned short)3] = ((/* implicit */unsigned long long int) (-((-(((((/* implicit */int) var_15)) - (((/* implicit */int) (short)-6508))))))));
                    }
                    arr_27 [i_0] [i_1] [6ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_24 [i_0] [i_1]))))) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) arr_14 [i_2 + 2] [i_2] [i_0] [i_0] [i_0] [i_0]))));
                    arr_28 [7ULL] [i_0] [i_2] [i_0] = (unsigned char)91;
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (unsigned char)165)))), (((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) (short)-23745)) : (((/* implicit */int) var_18))))))), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)108))))), (min((var_1), (((/* implicit */unsigned long long int) (short)-19479))))))));
    var_32 = max(((unsigned char)93), ((unsigned char)115));
}

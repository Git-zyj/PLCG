/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179185
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
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_16) % (((/* implicit */unsigned long long int) 1024))))) ? (((unsigned long long int) arr_11 [i_0] [i_1] [(short)3] [1ULL] [(unsigned short)18] [i_4])) : (max((var_7), (((/* implicit */unsigned long long int) var_1))))))) ? (1896886685) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)149)), (var_3)))))))));
                                var_20 = (short)9023;
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4 - 1] [(_Bool)1] = ((/* implicit */unsigned char) -130553065);
                                var_21 *= ((var_11) ? (2390890308071387451ULL) : (((unsigned long long int) arr_6 [i_0 + 1])));
                            }
                        } 
                    } 
                    var_22 = ((2207646459528334745ULL) | (((/* implicit */unsigned long long int) 130553061)));
                }
            } 
        } 
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (~(arr_1 [i_0] [i_0])))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 130553063)) ? (16055853765638164156ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 16055853765638164156ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551602ULL))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        arr_27 [i_5] [i_6] [i_7] [i_8] = ((/* implicit */_Bool) ((((_Bool) arr_2 [(unsigned char)21])) ? (((((/* implicit */_Bool) (short)32420)) ? (max((((/* implicit */int) (_Bool)1)), (-1564635435))) : (((/* implicit */int) (unsigned short)3307)))) : (((/* implicit */int) (_Bool)1))));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((9446365969060894391ULL), (2390890308071387455ULL)))) ? (var_12) : (((/* implicit */int) var_15)))))));
                    }
                }
            } 
        } 
        arr_28 [i_5] = ((/* implicit */short) (-((+(((/* implicit */int) ((unsigned short) var_14)))))));
    }
    for (short i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_5 [i_9] [i_9] [i_9]) ? (((/* implicit */int) arr_5 [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_5 [i_9] [i_9] [i_9]))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_9] [i_9] [i_9] [i_9]))) | (var_8)))));
        arr_32 [i_9] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) var_5)) - (min((((/* implicit */unsigned long long int) var_2)), (var_16)))))));
        var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_6))))), (16055853765638164163ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_9] [i_9] [i_9]))) : ((-(min((arr_1 [i_9] [(_Bool)1]), (12795642843623288799ULL)))))));
    }
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((var_2), (var_2))))))) || (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)12400)) >= (130553081))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_3)))) : (((/* implicit */int) var_10)))))));
    var_29 = ((/* implicit */short) var_9);
    var_30 = ((/* implicit */_Bool) ((short) (+((-(18446744073709551602ULL))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103496
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) (short)30145)) == (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)30139)) : (((/* implicit */int) (short)-30139))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) var_9)))) == (((((/* implicit */int) var_2)) / (((/* implicit */int) var_2)))))))) : (((max((((/* implicit */unsigned long long int) (unsigned char)126)), (1920848814575377045ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10555)))))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (1920848814575377045ULL)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_14 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-11723)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0 - 2] [i_2] [i_1 - 1]))) < (arr_2 [i_0]))))));
                        var_15 ^= ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_0] [i_1]);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_14 [i_0] [(unsigned short)9] [(unsigned short)9] [i_2] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (((/* implicit */signed char) (_Bool)1)))))) : ((-(565737090446982351ULL))))) ^ (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_6)))))));
                        arr_15 [i_4] [i_0 + 2] [i_0 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)7)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (max((16264103848141447489ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) : ((~(((/* implicit */int) ((var_11) && ((_Bool)1))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_19 [i_5] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [i_0 + 2])) ? (((/* implicit */long long int) ((((arr_11 [i_5] [i_5] [3] [i_5] [i_5] [i_2]) + (2147483647))) << (((((/* implicit */int) (unsigned char)146)) - (146)))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) & (9223372036854775807LL))))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_8 [i_0] [(short)2] [(_Bool)1] [i_5])) ? (arr_18 [i_5]) : (arr_12 [i_0] [i_0] [i_0] [i_0]))))))));
                        arr_20 [i_5] [i_5] [i_2] [(unsigned char)7] [i_5] = ((/* implicit */signed char) ((((unsigned long long int) 16347062512251626599ULL)) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        var_16 -= (_Bool)0;
                        var_17 = ((/* implicit */short) ((unsigned short) (+(((/* implicit */int) ((_Bool) var_9))))));
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_18 = ((/* implicit */_Bool) ((arr_18 [i_0]) ^ (((/* implicit */int) arr_10 [i_6] [i_6] [i_0 + 2] [i_1 - 1] [i_0 - 1] [i_0 + 2]))));
                        var_19 = ((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_1]);
                        arr_23 [i_0] [i_1 + 3] [i_2] [i_2] = ((/* implicit */short) (((!(var_5))) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_3)))))));
                    }
                    var_20 = ((/* implicit */unsigned short) arr_21 [i_0 + 1] [i_0] [i_1 + 2] [i_1 + 2]);
                    arr_24 [i_0] [i_1] [11LL] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)0)) % (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) ((((/* implicit */_Bool) (short)-30151)) && (((/* implicit */_Bool) 2559671306024542828ULL)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        var_21 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)18594)) ? (((/* implicit */int) (short)-25586)) : (((/* implicit */int) (_Bool)0))))), (((arr_2 [i_7]) % (1394166598143786228ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((16347062512251626599ULL), (((/* implicit */unsigned long long int) 1963001444)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
        var_22 = ((/* implicit */_Bool) 4294967295LL);
        var_23 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) || (max((arr_4 [i_7] [i_7]), ((_Bool)1)))))));
        var_24 |= ((/* implicit */long long int) ((-302226802) ^ (((/* implicit */int) (unsigned short)45550))));
    }
    for (int i_8 = 3; i_8 < 22; i_8 += 2) 
    {
        var_25 = ((((/* implicit */_Bool) 17052577475565765387ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
        arr_30 [i_8] = ((((((((/* implicit */_Bool) (((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (short)-16798)) : (((/* implicit */int) (_Bool)0)))) + (2147483647))) << (((302226799) - (302226799))));
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)32512)) << ((((((-(((/* implicit */int) (unsigned char)210)))) + (240))) - (22)))));
        var_27 = var_2;
        arr_31 [i_8] = ((/* implicit */signed char) min((((var_9) ? (((unsigned long long int) arr_28 [i_8])) : (((/* implicit */unsigned long long int) ((int) (unsigned char)237))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_27 [18ULL]))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_28 [i_8])) : (arr_29 [i_8] [i_8]))))))));
    }
    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) var_4))));
}

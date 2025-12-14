/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113894
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
    var_16 = ((/* implicit */int) var_6);
    var_17 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)120))));
    var_18 = ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */short) min(((signed char)-116), ((signed char)114)))), (var_4)))), (((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (signed char)-117))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_19 |= ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) var_15)) < (((/* implicit */int) var_3))))), (699465923)));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    var_20 = ((/* implicit */signed char) 699465923);
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 699465906)))))));
                }
                for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    var_22 = ((/* implicit */long long int) ((((((/* implicit */int) (short)455)) == (((/* implicit */int) (short)455)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)20)))) : (((((/* implicit */int) var_2)) % (((/* implicit */int) var_2))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 8; i_4 += 4) 
                    {
                        for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            {
                                arr_16 [i_5] [i_4] [i_3] [4ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)115)) >= (((/* implicit */int) (signed char)-116))))) % (699465922)));
                                var_23 = (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) + (max((((/* implicit */int) (signed char)28)), (-699465912)))))));
                                var_24 -= ((/* implicit */long long int) ((((((((((/* implicit */long long int) ((/* implicit */int) (short)461))) < (-1672871530348643292LL))) ? ((+(((/* implicit */int) (signed char)115)))) : (((((/* implicit */int) (signed char)85)) - (((/* implicit */int) (short)455)))))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (signed char)-1))))) - (1)))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-456))))) ? (min((((/* implicit */long long int) (short)-452)), (6568573611518930696LL))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)115), ((signed char)-116))))))))));
                }
                for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 2; i_8 < 8; i_8 += 3) /* same iter space */
                        {
                            arr_24 [i_6] = ((/* implicit */unsigned int) var_8);
                            var_26 = ((/* implicit */long long int) (((!(((var_14) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)450))))))) && (((/* implicit */_Bool) (~(min((var_10), (((/* implicit */unsigned long long int) (short)-452)))))))));
                        }
                        for (unsigned long long int i_9 = 2; i_9 < 8; i_9 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((short)452), (((/* implicit */short) var_15)))))));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) var_14))));
                            var_29 = ((/* implicit */short) min((max((((/* implicit */long long int) (signed char)102)), (var_7))), (((/* implicit */long long int) max(((unsigned short)3968), (((/* implicit */unsigned short) (signed char)4)))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_30 [i_1] [i_6] [i_1] [i_6] [i_1] [i_6] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */int) min(((unsigned short)3968), (((/* implicit */unsigned short) (short)456))))))) > (((((/* implicit */int) ((var_1) <= (5756882179106150895ULL)))) & (((/* implicit */int) ((((/* implicit */int) (signed char)6)) <= (((/* implicit */int) (signed char)-1)))))))));
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (12689861894603400716ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47636)))))) ? (((/* implicit */int) max(((unsigned short)17916), (((/* implicit */unsigned short) (signed char)-13))))) : (min((((/* implicit */int) (signed char)-116)), (var_8))))))));
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) 699465907))));
                            var_32 = min((min((((/* implicit */int) (signed char)-125)), (699465890))), (((/* implicit */int) min((var_4), (((/* implicit */short) (signed char)-116))))));
                        }
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_8), (((/* implicit */int) (signed char)115))))) ? ((~(((/* implicit */int) (unsigned short)20918)))) : (((((((/* implicit */_Bool) -699465896)) ? (((/* implicit */int) (unsigned short)47649)) : (((/* implicit */int) var_13)))) | (((/* implicit */int) (signed char)-67)))))))));
                        var_34 = ((/* implicit */int) min((var_34), ((+(((((/* implicit */int) (signed char)115)) / (((((/* implicit */int) (unsigned short)17930)) << (((((/* implicit */int) (unsigned short)47656)) - (47641)))))))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                    {
                        arr_34 [i_6] = ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned short)17885)), (3251146731U)));
                        arr_35 [i_0] [i_1] [i_6] [i_6] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned short)47630)) ^ (((/* implicit */int) (short)-18707))))));
                        var_35 += ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)-18707)) ? (((/* implicit */int) var_13)) : (var_8))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        var_36 = var_5;
                        var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) ((((((/* implicit */int) (unsigned short)40409)) <= (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) (unsigned short)44617)) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)-1), (((/* implicit */short) (signed char)28)))))) : (((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17928))) : (var_7))))) : (((/* implicit */long long int) -699465896)))))));
                    }
                    arr_36 [i_6] = ((/* implicit */int) var_11);
                    arr_37 [i_6] [(short)5] [i_6] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) < (5138559391999971846LL))))))));
                }
            }
        } 
    } 
}

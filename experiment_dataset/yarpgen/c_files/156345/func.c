/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156345
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
    var_17 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) || (((((/* implicit */unsigned long long int) -8487450425391226878LL)) != ((+(9ULL)))))));
                var_19 ^= ((/* implicit */_Bool) 18446744073709551612ULL);
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    arr_7 [14ULL] [i_1] = ((/* implicit */signed char) (+(((((3135454521274848991ULL) & (4ULL))) >> (((/* implicit */int) (unsigned char)0))))));
                    arr_8 [i_0] [i_0] [i_2] [i_2] |= ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)188))) % (3603816476U)))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-(((/* implicit */int) ((((9223372036854775807LL) % (-8257613661971589187LL))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)67)) > (((/* implicit */int) (unsigned char)255))))))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) (unsigned char)124);
                        arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] = (_Bool)1;
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+(1066879528U))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 22; i_4 += 4) 
                    {
                        for (long long int i_5 = 4; i_5 < 21; i_5 += 1) 
                        {
                            {
                                arr_20 [i_1] [i_1] [i_2] [i_4] [10LL] [(signed char)24] |= ((/* implicit */long long int) ((((/* implicit */int) (!((_Bool)1)))) % (((/* implicit */int) (((~(((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) (unsigned short)0)))))));
                                var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                }
                var_23 -= ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) (unsigned short)19390))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_6 = 1; i_6 < 15; i_6 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
        {
            arr_25 [i_6] [i_7] [i_6] = ((/* implicit */long long int) 6556750162038157240ULL);
            var_24 = ((/* implicit */unsigned char) 5571800409934356766LL);
            arr_26 [i_6] [i_7] [i_6] = ((/* implicit */long long int) (-2147483647 - 1));
        }
        for (long long int i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
        {
            arr_29 [i_6] [(short)2] [i_6] = ((/* implicit */unsigned char) (~(3228087768U)));
            var_25 = ((/* implicit */long long int) (unsigned short)41042);
            arr_30 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (+(((((/* implicit */int) (short)15206)) / (-2147483634)))));
        }
        arr_31 [i_6] [i_6] = ((/* implicit */long long int) (unsigned char)0);
        /* LoopSeq 3 */
        for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (-(17033137432468455779ULL))))));
            var_27 = ((/* implicit */short) (~(10079998777528053293ULL)));
        }
        for (int i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((2147483647) - (2147483622)))))) % ((-(18446744073709551612ULL)))));
            arr_38 [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)2))));
            /* LoopSeq 1 */
            for (unsigned char i_11 = 0; i_11 < 16; i_11 += 3) 
            {
                var_29 = ((/* implicit */unsigned int) (unsigned char)242);
                var_30 += ((/* implicit */unsigned char) (!((_Bool)1)));
            }
            var_31 |= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)164)) - (((((/* implicit */int) (short)-2870)) - (((/* implicit */int) (unsigned char)20))))));
        }
        for (int i_12 = 0; i_12 < 16; i_12 += 3) /* same iter space */
        {
            var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15728640ULL)) && (((/* implicit */_Bool) 576179277326712832LL))));
            var_33 = ((/* implicit */short) ((1098139821740883125ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)202)))));
            var_34 = ((/* implicit */unsigned int) (!(((-2147483634) > (((/* implicit */int) (short)-5))))));
            var_35 = ((/* implicit */short) (unsigned char)12);
            var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)29)) ^ (((/* implicit */int) (unsigned char)0)))))));
        }
        var_37 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))) >= (63603807U))))));
        var_38 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)86))));
    }
    for (int i_13 = 1; i_13 < 15; i_13 += 1) /* same iter space */
    {
        arr_48 [(unsigned char)15] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)253))));
        var_39 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)0))));
        var_40 = (-(((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))))));
        var_41 = ((/* implicit */unsigned short) (~((((+(((/* implicit */int) (signed char)12)))) * (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)17033)) - (17016)))))))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 22; i_14 += 1) 
    {
        var_42 = (+(((/* implicit */int) (unsigned short)15)));
        arr_51 [i_14] = ((/* implicit */unsigned long long int) ((1948928562) & (((/* implicit */int) (unsigned char)10))));
    }
    var_43 = ((/* implicit */unsigned int) max((var_43), ((((+(19U))) | (((/* implicit */unsigned int) (((((-2147483647 - 1)) / (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) (!(((/* implicit */_Bool) 3U))))))))))));
}

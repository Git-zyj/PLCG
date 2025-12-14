/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171462
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
    var_18 = ((/* implicit */_Bool) max((1614939157U), (((/* implicit */unsigned int) var_9))));
    var_19 = ((/* implicit */int) min((2680028149U), (((/* implicit */unsigned int) var_7))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((_Bool) arr_2 [i_1]));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((arr_5 [i_0]) ^ (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2680028150U)) ? (2087316316) : (((/* implicit */int) var_8))))), (max((265550831U), (((/* implicit */unsigned int) (unsigned char)74)))))))));
                var_21 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_16), ((unsigned short)35577))))) / (4029416464U))));
                var_22 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((-295047923) | (((/* implicit */int) (unsigned short)35577))))) ? (((((/* implicit */_Bool) var_1)) ? (3128031276U) : (1614939125U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)14742)))))))), (((((((/* implicit */_Bool) 4033010094U)) ? (((/* implicit */long long int) -648688406)) : ((-9223372036854775807LL - 1LL)))) & (9223372036854775807LL)))));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) max(((unsigned short)29947), ((unsigned short)46772)))) < (-648688407)))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2])) >> (((/* implicit */int) (_Bool)1))))) ? (((var_6) ? (1707880042) : (2087316293))) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))))));
                                arr_18 [i_0] [i_1] [i_2] [i_3 + 1] [i_2] = ((/* implicit */int) max((arr_7 [i_0] [i_1] [i_3] [i_4]), (((/* implicit */unsigned short) (_Bool)0))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    {
                        arr_30 [i_5] [i_6] [i_7] = ((/* implicit */short) arr_24 [i_5] [i_5]);
                        var_24 = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)29190)))), (((/* implicit */int) max(((unsigned short)35583), (((/* implicit */unsigned short) (_Bool)1))))))) >> (((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (986627129U)))) ? (((((/* implicit */_Bool) (short)-27034)) ? (664069498) : (((/* implicit */int) (unsigned short)29208)))) : (((/* implicit */int) (unsigned char)72)))) - (664069471)))));
                        var_25 = ((/* implicit */unsigned long long int) -648688390);
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)51955)) & (2087316316))) << (((((((((/* implicit */_Bool) 295047922)) ? (((/* implicit */int) arr_23 [i_8])) : (960802797))) ^ (((/* implicit */int) arr_24 [i_8] [i_8])))) + (25367))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_9 = 3; i_9 < 18; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                for (int i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    {
                        arr_40 [i_5] [i_5] [i_9] [11] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_21 [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_5] [i_9] [i_10]))) : (arr_36 [i_5])))) ? (arr_35 [i_5] [i_9] [i_5] [i_11]) : (((((/* implicit */_Bool) max((((/* implicit */int) arr_38 [i_5] [i_9] [i_10] [i_11])), (295047922)))) ? (((/* implicit */unsigned long long int) arr_26 [i_5])) : (((arr_28 [i_5]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_5])))))))));
                        var_27 = ((/* implicit */int) ((((((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1))))) >> (((((/* implicit */int) var_5)) % (((/* implicit */int) (_Bool)1)))))) > (max((((((/* implicit */_Bool) (short)30072)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) var_10)))), (((/* implicit */int) (signed char)112))))));
                        arr_41 [i_5] [i_5] [i_5] [i_11] = (i_5 % 2 == zero) ? (((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_25 [i_9 - 1] [i_9] [i_10] [i_11])))) + (2147483647))) << (((((int) ((((-842594143889729386LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_24 [i_5] [i_5])) - (25347)))))) - (597743765)))))) : (((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_25 [i_9 - 1] [i_9] [i_10] [i_11])))) + (2147483647))) << (((((int) ((((-842594143889729386LL) + (9223372036854775807LL))) << (((((((((/* implicit */int) arr_24 [i_5] [i_5])) - (25347))) + (4204))) - (24)))))) - (597743765))))));
                        var_28 = ((/* implicit */unsigned int) ((_Bool) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (1304355732) : (((/* implicit */int) (short)-4699))))));
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) 2367604908257541227ULL)) && (((/* implicit */_Bool) var_0)))), (((((/* implicit */int) var_11)) != (2087316316))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-28388)))))));
}

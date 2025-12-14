/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103889
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) max((arr_1 [i_2] [i_1]), (((/* implicit */unsigned char) (!((_Bool)1))))))), ((unsigned short)2047))))));
                    var_19 = ((/* implicit */unsigned int) max((var_19), (max((max((var_1), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_1])) + (2147483647))) << (((((((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_2])) + (22153))) - (18))))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (8796092497920ULL)))) ? (max((max((774952611U), (2502983533U))), (((/* implicit */unsigned int) -255513933)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 1]))))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((unsigned long long int) (-(arr_5 [i_3 - 1] [i_1] [i_2] [i_3])));
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 2) /* same iter space */
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)49))) : (((unsigned int) (unsigned char)209)))));
                        var_20 = ((/* implicit */int) ((((((((/* implicit */_Bool) (unsigned char)206)) ? (2047U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32192))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (((!(var_12))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_9))))) : (max((-2673919918862745856LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_14 [i_1] [i_4])))))))));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) 939524096))), (((((/* implicit */_Bool) 10781400972964862726ULL)) ? (1303168559) : (1303168559)))))) ? ((~(((((/* implicit */_Bool) 18446735277617053696ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (8572736750590119097LL))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_4 + 1] [i_4 + 1])))))));
                        arr_17 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_4 + 2])) & (((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_4 + 2]))))) % ((~(14622864363319314470ULL)))));
                    }
                    for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 2) /* same iter space */
                    {
                        arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */short) (!((_Bool)1)))), ((short)-32190)));
                        var_22 = ((/* implicit */unsigned char) arr_15 [i_0] [i_0] [i_1] [i_1] [i_2] [i_5]);
                        arr_21 [i_0] [i_0] = var_2;
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_25 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) (signed char)40);
                        arr_26 [i_6] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)255)), (1303168573)));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */long long int) max((max((var_3), (var_13))), (((/* implicit */int) var_14))));
                        var_24 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (short)127)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_0])))) : ((-(((/* implicit */int) (_Bool)1))))))), (((unsigned long long int) arr_3 [i_0] [i_0]))));
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_33 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned short)64512)), ((+(max((((/* implicit */unsigned long long int) (unsigned char)208)), (18446744073709551615ULL)))))));
                        arr_34 [i_0] [i_1] [i_2] [i_8] &= ((/* implicit */unsigned char) ((max((((/* implicit */int) arr_8 [i_8 - 1] [i_1] [i_1] [i_0])), (var_13))) <= (((((/* implicit */_Bool) arr_8 [i_8 - 1] [i_0] [i_2] [i_8])) ? (((/* implicit */int) arr_9 [i_8 - 1] [i_8] [i_2] [i_8] [i_2])) : (((/* implicit */int) arr_8 [i_8 - 1] [i_1] [i_2] [i_8]))))));
                        var_25 -= ((/* implicit */_Bool) var_15);
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)48)) | (((/* implicit */int) (_Bool)1))));
    var_27 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */int) max(((short)-7750), (var_2)))), (((((/* implicit */int) var_6)) * (((/* implicit */int) (unsigned short)65535))))))), (4294967295U)));
}

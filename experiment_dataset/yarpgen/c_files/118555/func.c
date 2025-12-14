/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118555
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
    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_6)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_10 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_0]) : (arr_1 [i_1])))) ? ((-(arr_1 [i_0]))) : (arr_1 [i_0])));
                            arr_11 [i_1] [i_1] [(unsigned short)9] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))) : ((~(var_9)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) % (127)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_1] [i_2]))) % ((~(arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                            arr_12 [6] [i_1] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1125865547104256ULL)) ? (18445618208162447364ULL) : (1398291081048569607ULL)));
                        }
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [(unsigned char)6] [i_0])) : (((/* implicit */int) (unsigned short)23756))))) || (((/* implicit */_Bool) 1600057277))));
                arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1348388121448822023ULL)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) arr_7 [i_0])))) | (((((/* implicit */_Bool) arr_7 [i_0])) ? (1985104752) : (((/* implicit */int) arr_7 [i_0]))))));
                /* LoopSeq 4 */
                for (unsigned short i_4 = 4; i_4 < 11; i_4 += 1) 
                {
                    arr_18 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)68))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_1] [i_1] [i_4 - 3]))) + (arr_4 [i_1]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_4] [i_1] [i_1] [i_4 - 2])))))));
                    arr_19 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)18099);
                    arr_20 [i_1] [(signed char)3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((~(arr_1 [i_1])))))) ? ((~(arr_6 [i_4 - 1] [i_4 - 4] [i_4 - 3] [i_4 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)43))))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                arr_25 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (unsigned char)25);
                                arr_26 [i_0] [i_1] [i_1] [(unsigned short)1] [i_6] = (signed char)105;
                            }
                        } 
                    } 
                    arr_27 [i_0] = ((unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [i_4 - 3] [i_0]))));
                }
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
                {
                    arr_31 [i_1] [i_7] [i_1] [i_1] = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) (unsigned char)9)) : (var_11))))) * ((((+(((/* implicit */int) (signed char)3)))) * (((/* implicit */int) arr_28 [i_0] [(signed char)3]))))));
                    arr_32 [i_1] [7] [7] [i_1] = ((/* implicit */unsigned long long int) arr_16 [i_7] [i_1] [6] [6]);
                    arr_33 [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_7])) | (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1]))))));
                }
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 9; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 2; i_10 < 11; i_10 += 3) 
                        {
                            {
                                arr_43 [i_1] = ((/* implicit */unsigned long long int) (signed char)50);
                                arr_44 [i_0] [i_1] [i_8] [i_9] [2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-86)) ? (((((/* implicit */_Bool) arr_40 [i_0] [i_1] [i_0] [i_8] [i_9] [9ULL])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_42 [i_8] [i_1] [(unsigned short)6] [(unsigned char)6] [i_10])))) : (-1985104753)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)124)), (16423023999710182606ULL)))) ? (arr_4 [i_8]) : ((~(16423023999710182606ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)176)))));
                                arr_45 [i_10] [i_8] [(signed char)2] [i_8] [i_8] [i_0] = ((/* implicit */int) (signed char)3);
                            }
                        } 
                    } 
                    arr_46 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)23744))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) (signed char)31)) ? (var_4) : (((/* implicit */unsigned long long int) arr_34 [i_0])))))) - (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_6)))) + (arr_1 [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 1; i_12 < 9; i_12 += 3) 
                        {
                            {
                                arr_53 [i_1] [i_1] [i_1] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) var_8)) : (arr_1 [i_8])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)124)) ? (arr_1 [i_0]) : (arr_1 [i_1]))))));
                                arr_54 [i_0] [i_1] [i_8] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)59439))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        for (signed char i_14 = 3; i_14 < 9; i_14 += 3) 
                        {
                            {
                                arr_59 [i_0] [i_0] [i_8] [i_13] [i_0] [i_0] = ((/* implicit */unsigned char) var_15);
                                arr_60 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 10187360238823561008ULL)) || (((/* implicit */_Bool) (signed char)-68)))) ? (((((((((/* implicit */_Bool) var_5)) ? (arr_16 [i_0] [i_8] [i_8] [i_1]) : (((/* implicit */int) (signed char)50)))) + (2147483647))) >> (((((((/* implicit */_Bool) var_5)) ? (arr_52 [i_14 + 1] [i_1] [(unsigned short)1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)158))))) - (10799783741990215715ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1985104782)) ? (829564092) : (((/* implicit */int) (signed char)-69))))) ? (((/* implicit */int) arr_42 [i_1] [i_1] [11ULL] [i_13] [i_14 + 2])) : (((/* implicit */int) arr_58 [i_13] [i_13]))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 10187360238823561008ULL)) || (((/* implicit */_Bool) (signed char)-68)))) ? (((((((((/* implicit */_Bool) var_5)) ? (arr_16 [i_0] [i_8] [i_8] [i_1]) : (((/* implicit */int) (signed char)50)))) + (2147483647))) >> (((((((((/* implicit */_Bool) var_5)) ? (arr_52 [i_14 + 1] [i_1] [(unsigned short)1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)158))))) - (10799783741990215715ULL))) - (14928201112872987618ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1985104782)) ? (829564092) : (((/* implicit */int) (signed char)-69))))) ? (((/* implicit */int) arr_42 [i_1] [i_1] [11ULL] [i_13] [i_14 + 2])) : (((/* implicit */int) arr_58 [i_13] [i_13])))))));
                            }
                        } 
                    } 
                    arr_61 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */signed char) arr_48 [i_1] [i_1] [i_1] [i_1]);
                }
                for (unsigned short i_15 = 0; i_15 < 12; i_15 += 2) /* same iter space */
                {
                    arr_66 [i_0] [(unsigned short)4] [i_15] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)7)))) ? (arr_65 [i_0] [i_0] [i_15] [i_15]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))))))));
                    arr_67 [i_1] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65509))))) ? ((+(((((/* implicit */_Bool) 1822021735)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (unsigned char)27)))))) : (((/* implicit */int) (signed char)25)));
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 12; i_16 += 1) 
                {
                    for (unsigned short i_17 = 1; i_17 < 11; i_17 += 3) 
                    {
                        {
                            arr_72 [i_0] [i_1] [i_1] [i_0] [i_1] = ((((/* implicit */_Bool) arr_5 [7ULL] [(signed char)1] [i_1] [(unsigned char)2])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((1985104752) > (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_17])))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4)))) | (13948582781145530637ULL))));
                            arr_73 [i_1] [i_16] [i_0] [(signed char)0] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 10868263367828276498ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) : (6761591616456848360ULL))) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))));
                            arr_74 [i_1] [i_1] [i_16] [i_17] = ((/* implicit */signed char) (unsigned char)0);
                            arr_75 [3ULL] [i_1] [i_1] [i_17] [(unsigned char)11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)1258))))) : (8200443110936257598ULL))))));
                            arr_76 [i_1] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)54125)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) -1904264106)), (var_4)));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106609
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (1152886320234758144ULL))))));
                    arr_10 [(unsigned short)5] [i_2 - 1] = ((/* implicit */unsigned char) 4ULL);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_17 [i_4] [i_3] [i_2] [(unsigned short)12] [(unsigned short)12] = ((/* implicit */unsigned char) (signed char)-12);
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)12)), (20ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))) : (((long long int) (signed char)10))))) ? (min((((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1771))) : (7484735223386372231ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)7)), (2119493846)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_3 [i_1] [i_1]), (arr_3 [i_2] [6ULL])))) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [(unsigned short)15] [(unsigned char)8] [i_0])) : (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */short) (signed char)32))))))))));
                                arr_18 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_3] [i_0] [i_3 - 1] [i_3 - 1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)202)) >= (((/* implicit */int) (unsigned char)242)))))) * (((unsigned int) var_2))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) (short)28);
                }
                for (unsigned short i_5 = 1; i_5 < 15; i_5 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) (~(min((((/* implicit */long long int) (_Bool)1)), (arr_0 [i_5 - 1] [i_5])))));
                    arr_23 [9LL] [i_1] [(unsigned short)8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) (unsigned char)54)))));
                }
                for (unsigned short i_6 = 1; i_6 < 15; i_6 += 4) /* same iter space */
                {
                    arr_26 [i_6] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((max(((_Bool)0), ((_Bool)1))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)1794))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)100))))))) : (1693708712U)));
                    var_22 ^= ((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned char)202)) / (((/* implicit */int) arr_20 [i_0] [i_1] [(unsigned short)8] [i_0])))), (((/* implicit */int) arr_4 [i_6] [i_1] [i_0]))));
                }
                arr_27 [10ULL] [i_1] [i_0] = ((/* implicit */unsigned short) (-((~(((21LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))))));
            }
        } 
    } 
    var_23 = (unsigned short)45890;
    /* LoopNest 2 */
    for (unsigned int i_7 = 2; i_7 < 21; i_7 += 2) 
    {
        for (int i_8 = 1; i_8 < 21; i_8 += 1) 
        {
            {
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)-2))))))))));
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_7 - 1])) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_28 [i_7] [i_8]))) ? (-12LL) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_7]))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                arr_33 [i_8] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_32 [i_7 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1771))) : (arr_32 [i_7 + 3]))) - (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_8]))))), ((+(((/* implicit */int) var_4)))))))));
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_31 [i_7 + 1] [(signed char)6] [i_7 + 3]), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_7 - 1] [i_8 + 2]))) > (3628561719U))))) : (min((((/* implicit */long long int) (short)-32767)), (-915305366884836239LL)))));
                /* LoopNest 3 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        for (long long int i_11 = 1; i_11 < 20; i_11 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned long long int) (~((-(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) (unsigned char)32))))))));
                                arr_42 [i_8] [i_8] [(short)22] [(unsigned short)8] [i_7 + 2] = ((/* implicit */unsigned int) min((min((((4ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114))))), (18446744073709551611ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)19885)) ? (((/* implicit */int) arr_38 [i_7 + 2] [i_8] [i_9] [i_10] [i_11 + 4])) : (((/* implicit */int) (unsigned short)65520)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120334
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
    var_13 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_6) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) var_3))))))), (var_7)));
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (short)-23244)), (3050214601U)));
    var_15 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)23228))) - (((((/* implicit */_Bool) var_0)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9)))) : (((((/* implicit */_Bool) 1244752695U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_6))))) : (((/* implicit */unsigned long long int) 528310942U))));
            var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */short) max((((/* implicit */signed char) var_12)), (arr_3 [i_0] [i_0])))))))));
            var_17 = ((/* implicit */signed char) (((+(((/* implicit */int) var_5)))) % (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))));
        }
        /* LoopSeq 3 */
        for (unsigned int i_2 = 2; i_2 < 14; i_2 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) (~(((/* implicit */int) var_11))));
            var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_3 [i_2 + 1] [i_2 + 2]), (arr_3 [i_2 + 1] [i_2 + 2]))))));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((3050214606U) << (((((/* implicit */int) (short)23715)) - (23688)))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_5 [i_2] [i_2] [i_2])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (3050214592U)))) ? (((/* implicit */int) max((var_1), (var_5)))) : ((~(((/* implicit */int) var_3))))))));
            var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_5)) / (((/* implicit */int) arr_2 [i_2 + 1] [i_2 - 2]))))));
            arr_10 [i_2] [i_2 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) 3050214601U))), (((((/* implicit */_Bool) (unsigned short)1224)) ? (((/* implicit */int) (unsigned short)4289)) : (((/* implicit */int) (_Bool)1))))))) || (((((/* implicit */int) ((((/* implicit */long long int) 3050214597U)) >= (var_0)))) != ((~(((/* implicit */int) arr_0 [i_0]))))))));
        }
        for (unsigned int i_3 = 2; i_3 < 14; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_22 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_9 [i_3 - 2])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))))));
                var_23 = ((/* implicit */unsigned char) (+(max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)48694))))), (((((arr_11 [i_4] [i_0]) + (9223372036854775807LL))) >> (((arr_11 [i_0] [i_0]) + (966800554153750732LL)))))))));
            }
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                var_24 = ((/* implicit */short) (-(((/* implicit */int) arr_8 [i_0]))));
                /* LoopNest 2 */
                for (short i_6 = 4; i_6 < 15; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_7 - 1])), ((unsigned short)18657))))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((arr_4 [i_0] [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) min((arr_13 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) arr_18 [i_5] [i_5])))))))) + (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_15 [i_7] [i_3] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)36845)))) - (((((/* implicit */int) var_2)) + (((/* implicit */int) arr_8 [i_6]))))))))))));
                        }
                    } 
                } 
            }
            arr_21 [i_3] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((short) var_0))), (min((arr_14 [i_3 + 2] [i_3] [i_3] [i_3 + 2]), (3050214607U)))));
            /* LoopSeq 1 */
            for (short i_8 = 1; i_8 < 15; i_8 += 4) 
            {
                var_27 += ((/* implicit */long long int) max(((unsigned short)16825), (((/* implicit */unsigned short) (short)6781))));
                var_28 |= ((((/* implicit */_Bool) var_10)) ? (1244752706U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))));
                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((2730835897141583540ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2106)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) (unsigned short)4046)) : (((/* implicit */int) (short)12725))))) : (((((/* implicit */_Bool) arr_13 [i_8 - 1] [i_3 - 2] [i_3] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_0)))));
            }
        }
        for (unsigned short i_9 = 1; i_9 < 13; i_9 += 3) 
        {
            var_30 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) 344992514))))), (arr_14 [i_0] [i_9 + 1] [i_9 + 2] [i_0])))), ((((-(var_6))) >> (((((((/* implicit */int) arr_22 [i_0] [i_0])) | (((/* implicit */int) var_5)))) + (12355)))))));
            var_31 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)63429))));
            arr_26 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 472420132U)) ? (((/* implicit */int) (_Bool)1)) : (-279162412)))));
            arr_27 [i_0] [i_0] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (3050214594U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1)))))) / (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-17443)) + (2147483647))) << (((4316125013588069304ULL) - (4316125013588069304ULL))))))));
        }
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_32 ^= ((/* implicit */_Bool) (+(((/* implicit */int) var_12))));
        var_33 = ((/* implicit */unsigned short) (-(arr_29 [i_10])));
        arr_30 [i_10] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_29 [i_10])) ? (arr_29 [i_10]) : (arr_29 [i_10])))));
    }
}

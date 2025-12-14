/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162106
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((unsigned long long int) (short)-9734)), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)15525)), (1152363186U))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_11 [i_0] [i_3] [i_3] [i_3] [i_3] [i_4 - 1])) < (((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 - 1])))) ? (min(((-(4294967277U))), (4294967293U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)0)))))));
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)-15279)) : (((/* implicit */int) arr_2 [i_0] [i_0 + 1])))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)0))))) ? (min((4294967277U), (4294967277U))) : (max((4294967277U), (((/* implicit */unsigned int) (unsigned char)42)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_3 + 2] [i_0 + 1])) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) arr_2 [i_3 + 2] [i_0 - 1])))))));
                                var_21 |= max((min((4294967290U), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) (signed char)-105))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 2 */
    for (short i_5 = 3; i_5 < 10; i_5 += 2) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((3865032531980722076ULL) >> (((((/* implicit */int) (unsigned char)216)) - (183)))))) ? (max((((/* implicit */unsigned long long int) arr_8 [i_5] [i_5 + 1] [i_5])), (11553276602449530502ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)42), (((/* implicit */unsigned char) arr_14 [i_5 - 2]))))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)23878))) : (3328174758U))) >= (3328174763U))))) | ((-(((2955979938U) >> (((2955979957U) - (2955979944U)))))))));
        arr_18 [i_5] [i_5] = ((/* implicit */short) max((max(((-(1338987321U))), (1338987311U))), (((/* implicit */unsigned int) (unsigned short)20127))));
    }
    for (short i_6 = 1; i_6 < 12; i_6 += 2) 
    {
        arr_21 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((unsigned int) (-(1338987372U))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1338987358U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)213))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_6 + 1] [i_6 + 1] [i_6 - 1]))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-105)) < (((/* implicit */int) (short)-8146))))), (14611470390208603981ULL))))))));
        /* LoopNest 2 */
        for (signed char i_7 = 1; i_7 < 12; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 1; i_9 < 11; i_9 += 4) 
                    {
                        for (short i_10 = 0; i_10 < 13; i_10 += 3) 
                        {
                            {
                                arr_32 [i_6] [i_7] [i_8] [i_9] [i_9] [i_9] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2955979967U)) ? (1338987372U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)12303)))))) ? ((~(2955979944U))) : (2955979967U))) >> (((((8ULL) << (((((((/* implicit */_Bool) (unsigned short)20122)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-8119))) : (arr_25 [i_9] [i_6] [i_6] [i_6]))) - (4294959126U))))) - (18014398509481960ULL)))));
                                arr_33 [i_6] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) (signed char)-109)), (8623358045035838297ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)110)), ((unsigned char)215))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) ((((unsigned int) ((4294967291U) >> (((((/* implicit */int) (signed char)-9)) + (27)))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (short)32767)))))))));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)116))))) ? (((unsigned long long int) ((short) 1657870722U))) : (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)12))))), (((((/* implicit */_Bool) (unsigned short)45409)) ? (((/* implicit */unsigned long long int) 1338987372U)) : (arr_19 [i_8])))))));
                    arr_34 [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) min(((+(arr_30 [i_6] [i_6] [i_6] [i_7 - 1] [i_6 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)56)) >> (((((/* implicit */int) (unsigned char)226)) - (218))))))));
                }
            } 
        } 
    }
}

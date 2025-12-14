/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152548
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
    var_13 = ((/* implicit */signed char) ((long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 4518022775525779172LL)) : (1ULL))))));
    var_14 += ((/* implicit */signed char) min((((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_8)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) ((signed char) arr_2 [i_0]));
        var_16 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_1)) ? (2297429201U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (~((-(var_11))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */int) max((((arr_2 [i_1]) | (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (arr_0 [i_1])))))), (((((((/* implicit */_Bool) (unsigned short)65524)) ? (arr_2 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) + (((/* implicit */long long int) max((((/* implicit */int) var_4)), (-1677044720))))))));
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (short)-1)))) >> (((var_9) - (1975018029727601829LL))))))));
        var_20 &= ((/* implicit */unsigned short) max((min((1492508440), (((/* implicit */int) arr_1 [i_1])))), (min((((int) var_10)), (arr_0 [i_1])))));
    }
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) 1677044716))));
    /* LoopSeq 2 */
    for (int i_2 = 4; i_2 < 15; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) 1134550418U);
            arr_11 [i_2] [i_3] [i_2] = ((/* implicit */int) ((signed char) (+(((int) (short)-29050)))));
            arr_12 [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (-1677044720) : (((/* implicit */int) (signed char)-67))));
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                arr_15 [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) arr_9 [i_2]);
                arr_16 [(signed char)14] [i_3] [14] [i_3] &= ((/* implicit */_Bool) arr_5 [14LL]);
                arr_17 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_5 [i_2]))))));
                var_23 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 1]))) <= (4294967284U)))), ((~(((((/* implicit */_Bool) 15U)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) (_Bool)1))))))));
            }
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                arr_21 [(unsigned char)7] [i_2] [i_3] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) var_12)), (arr_13 [i_2] [i_2] [i_2] [i_5]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)0)))))));
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_5 [i_2])))) * ((-(((/* implicit */int) (unsigned char)19)))))))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                var_25 = ((/* implicit */unsigned char) -1694737871);
                var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -525964290560554888LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))) : (7867541429966278464LL)))) ? (525964290560554887LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-67)))));
            }
            /* vectorizable */
            for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                var_27 = ((/* implicit */unsigned char) 525964290560554870LL);
                var_28 -= ((/* implicit */unsigned long long int) ((int) var_1));
                arr_26 [i_2] [i_2] [(unsigned char)0] [i_2 - 3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 - 4] [i_3])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_12))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_7])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_19 [(unsigned short)4])))))));
            }
        }
        arr_27 [i_2] = min((((long long int) arr_6 [i_2 - 2] [i_2 - 4])), (((/* implicit */long long int) ((short) var_8))));
        var_29 = ((/* implicit */_Bool) ((max((((18446744073709551615ULL) - (((/* implicit */unsigned long long int) 1967140663)))), (((/* implicit */unsigned long long int) (unsigned char)19)))) - (((/* implicit */unsigned long long int) min((4170453384U), (((/* implicit */unsigned int) ((arr_8 [i_2] [i_2 - 1] [(signed char)14]) + (((/* implicit */int) var_0))))))))));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_30 = (unsigned short)33953;
        arr_30 [i_8] [i_8] = ((/* implicit */signed char) ((unsigned int) arr_24 [6] [i_8]));
    }
}

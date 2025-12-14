/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129093
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
    var_15 = ((/* implicit */unsigned long long int) (~(((max((var_10), (((/* implicit */unsigned int) (unsigned short)12)))) + (0U)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((unsigned char) var_10)))) ? (max((((arr_0 [i_0]) << (0U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
            arr_5 [i_0] = ((/* implicit */unsigned char) min((max((min((arr_1 [i_0]), (((/* implicit */unsigned int) (signed char)127)))), (((2614635896U) >> (((((/* implicit */int) (unsigned char)220)) - (197))))))), (((/* implicit */unsigned int) ((arr_0 [i_0]) > (min((((/* implicit */unsigned int) arr_4 [i_1] [i_0])), (2614635919U))))))));
            arr_6 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */int) (unsigned char)112)) * (((/* implicit */int) (unsigned short)65524)))) : (((/* implicit */int) arr_4 [i_0] [(short)0])))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
            var_17 *= ((/* implicit */short) ((_Bool) var_3));
        }
        var_18 = (!(((/* implicit */_Bool) var_11)));
        arr_7 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (arr_1 [i_0])))))), (max((((/* implicit */unsigned long long int) min((arr_0 [i_0]), (arr_1 [i_0])))), (min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */short) min(((~(((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) (unsigned char)112)))))), (max((((/* implicit */int) max(((unsigned char)242), (((/* implicit */unsigned char) (_Bool)1))))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)106))))))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
        arr_11 [12U] [12U] = ((max((((/* implicit */unsigned long long int) (unsigned char)102)), (5704009960477017107ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))));
        arr_12 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)1536))))) < (((/* implicit */int) (!(arr_9 [i_2] [i_2]))))));
    }
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_20 [i_3] = ((/* implicit */unsigned short) (((((+(((/* implicit */int) arr_18 [i_3] [i_5])))) >> (((arr_15 [i_3]) - (4032185705U))))) << (((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_16 [i_3] [i_4]))))), ((((_Bool)0) ? (arr_15 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) - (4294959791U)))));
                    var_20 = ((max((max((1433227361U), (((/* implicit */unsigned int) (unsigned char)52)))), (((/* implicit */unsigned int) arr_8 [i_4])))) > (((/* implicit */unsigned int) ((/* implicit */int) (!((!((_Bool)1))))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)23795), ((short)23131)))) ? ((-(5U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_4])) && (((/* implicit */_Bool) (unsigned short)2047))))))))) ? (arr_2 [i_5] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((_Bool) var_5)), ((!(((/* implicit */_Bool) var_11))))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_3])) | (((/* implicit */int) arr_9 [i_3] [i_3]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3]))))) : (((/* implicit */int) min((var_11), (((/* implicit */short) var_1))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) arr_16 [i_3] [i_6]);
            var_24 = ((/* implicit */short) ((unsigned char) (short)-27680));
            var_25 = ((/* implicit */short) ((var_1) ? (((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (arr_18 [i_6 + 2] [i_3])))) ? (max((4057269993501780273ULL), (((/* implicit */unsigned long long int) (unsigned char)156)))) : (14389474080207771343ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_6 + 2] [i_6 + 2])) ? (((((/* implicit */_Bool) 2147483520U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2481))) : (arr_19 [i_3] [i_6 - 2] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6 + 2] [i_6 + 2] [i_6]))))))));
        }
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_13))));
    }
}

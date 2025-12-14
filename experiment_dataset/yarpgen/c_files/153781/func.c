/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153781
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */int) var_2)) << (((2686716017U) - (2686716004U))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483638)) ? (((((/* implicit */int) (unsigned short)172)) << (((89715289U) - (89715286U))))) : (((/* implicit */int) var_6))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_15 ^= ((/* implicit */unsigned short) var_2);
        var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-21557)), (((((/* implicit */_Bool) 4666127848825153927ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6941))) : (arr_4 [i_1])))));
    }
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        arr_9 [13U] = arr_4 [i_2];
        arr_10 [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((var_10) ? (((/* implicit */int) arr_8 [i_2])) : (arr_3 [i_2]))), (((/* implicit */int) ((short) var_13)))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)21556)) | (((/* implicit */int) (unsigned short)4))))) : ((+(arr_4 [i_2])))))));
        var_17 -= ((/* implicit */int) ((unsigned short) (short)-20716));
        arr_11 [i_2] = (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) var_3)) : (((int) ((((/* implicit */_Bool) var_12)) ? (241367211033381782ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
        var_18 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))), (arr_6 [i_2]))))));
    }
    /* LoopSeq 4 */
    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((var_2) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) var_11)))))));
            var_20 = ((/* implicit */unsigned int) max((arr_12 [i_3]), (((/* implicit */unsigned short) max((arr_15 [i_3]), (arr_15 [i_3]))))));
            arr_17 [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_8))) ? ((-(4668322482402835572ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) (unsigned char)89)) ? (6993805307343154399LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)203))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_1)))) ? (((((/* implicit */_Bool) var_4)) ? (var_1) : (var_1))) : (((/* implicit */unsigned int) (+(var_9)))))))));
            var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_16 [i_3] [i_3] [i_3]), (((((/* implicit */_Bool) var_9)) ? (arr_3 [i_4]) : (((/* implicit */int) (short)-6941))))))) ? (((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) (!(var_6)))) : (((var_6) ? (arr_16 [i_3] [i_3] [i_3]) : (((/* implicit */int) var_10))))))) : (((((/* implicit */_Bool) min((var_13), (((/* implicit */int) arr_14 [i_3] [i_3] [i_3]))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_7))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-27030)) + (2147483647))) << (((((/* implicit */int) var_2)) - (1))))))))));
            arr_18 [2] [2] = ((/* implicit */int) min((max((var_11), (var_12))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_3])))))));
        }
        var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) -1)) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_0 [i_3] [i_3])) : (((/* implicit */int) var_10))))) ? (arr_4 [i_3]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) var_3)) : (arr_16 [16U] [i_3] [i_3]))))))));
        arr_19 [i_3] [i_3] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_4)), ((~(var_7)))));
        arr_20 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)81))) : (arr_6 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_15 [i_3])), (var_5)))))))) ? (((/* implicit */int) ((_Bool) arr_8 [i_3]))) : (arr_5 [i_3] [i_3]));
        arr_21 [i_3] = ((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3])) ? (var_9) : (((/* implicit */int) arr_15 [i_3])))))), (((/* implicit */int) ((((/* implicit */int) var_2)) != (var_13))))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_5])))))));
        arr_26 [i_5] [(short)11] = (!(((/* implicit */_Bool) var_13)));
        var_24 = ((/* implicit */short) var_9);
        var_25 = ((/* implicit */_Bool) max((var_25), (((((/* implicit */unsigned int) arr_5 [i_5] [i_5])) > (var_1)))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        var_26 *= ((/* implicit */_Bool) (((!(var_10))) ? ((-(((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))));
        var_27 = ((/* implicit */_Bool) var_13);
        arr_31 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_6])) ? (arr_30 [i_6]) : (arr_30 [i_6])));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 2) 
    {
        arr_35 [i_7] [i_7] &= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) ^ (((/* implicit */int) var_12))));
        arr_36 [i_7] = ((/* implicit */short) var_1);
        var_28 *= ((/* implicit */_Bool) var_5);
        /* LoopNest 2 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 14; i_9 += 4) 
            {
                {
                    var_29 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 14301240292148422786ULL)) ? ((-(arr_3 [i_9]))) : (((((/* implicit */_Bool) arr_7 [i_7])) ? (((/* implicit */int) var_10)) : (1087645480)))));
                    var_30 *= ((/* implicit */unsigned int) var_6);
                }
            } 
        } 
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109112
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
    var_17 = ((/* implicit */int) var_14);
    var_18 = ((/* implicit */unsigned char) 2147483647);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) (unsigned short)63963);
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) <= (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) (~(((arr_4 [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    arr_7 [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21848)) ? (((((/* implicit */_Bool) var_14)) ? (1252266110) : (((/* implicit */int) arr_1 [i_0 - 1])))) : (((/* implicit */int) arr_3 [i_0 - 1]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3] [i_3]))) * (var_15)))) ? (((/* implicit */int) arr_8 [i_3])) : ((-(((/* implicit */int) arr_2 [i_3] [i_3]))))));
        /* LoopSeq 2 */
        for (long long int i_4 = 1; i_4 < 14; i_4 += 3) 
        {
            var_23 = ((/* implicit */int) (((+(var_12))) == (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_16)) ^ (arr_9 [i_3]))))));
            var_24 = ((/* implicit */unsigned short) (((+((-2147483647 - 1)))) % (((/* implicit */int) ((short) var_11)))));
        }
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 13325000562154865281ULL)) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) (short)21550))));
            arr_17 [i_3] [i_5] [i_3] = ((/* implicit */_Bool) (unsigned char)250);
            var_26 = ((/* implicit */short) var_15);
        }
    }
    for (int i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        var_27 &= ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_6])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6] [i_6])))))) ? (((/* implicit */int) ((_Bool) -2))) : (((/* implicit */int) ((18446744073709551605ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
        arr_20 [i_6] [i_6] = ((/* implicit */short) max((max(((+(arr_18 [i_6]))), (((/* implicit */unsigned long long int) (signed char)-53)))), (((((/* implicit */_Bool) arr_4 [i_6])) ? (arr_4 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 3 */
        for (unsigned short i_7 = 4; i_7 < 18; i_7 += 1) 
        {
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 18134058637546149707ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))), (((int) var_12))))) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_0 [i_6] [i_7 - 2])))) : (((/* implicit */int) (unsigned short)63963))));
            var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_7 - 4])) && (((/* implicit */_Bool) arr_1 [i_7 - 4])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_22 [i_6] [i_7 - 2]), (((/* implicit */unsigned char) arr_21 [i_6] [i_7 - 1] [i_6]))))) ? (((/* implicit */int) arr_3 [i_7 - 2])) : (((/* implicit */int) min((var_14), (var_14))))))) : (max((((long long int) 11ULL)), (((/* implicit */long long int) arr_0 [i_7 + 1] [i_7 - 4]))))));
        }
        for (unsigned long long int i_8 = 4; i_8 < 18; i_8 += 1) 
        {
            var_30 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_25 [i_8 - 1] [i_8 - 2])) ? (arr_25 [i_8 - 2] [i_8 - 2]) : (((/* implicit */int) arr_6 [i_8 + 1] [i_8 - 2])))), (((/* implicit */int) arr_27 [i_6]))));
            var_31 = ((/* implicit */_Bool) ((min((arr_21 [i_8 - 4] [i_8 + 1] [i_8 - 4]), (arr_21 [i_8 + 1] [i_8 - 3] [i_8 + 1]))) ? (((/* implicit */int) (!(arr_21 [i_8 + 1] [i_8 - 4] [i_8 - 2])))) : (((arr_21 [i_8 + 1] [i_8 - 2] [i_8 + 1]) ? (((/* implicit */int) arr_21 [i_8 - 1] [i_8 - 2] [i_8 - 3])) : (((/* implicit */int) arr_21 [i_8 + 1] [i_8 - 4] [i_8 + 1]))))));
            var_32 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6] [i_6]))) + (1288251299U)))) ? (((((/* implicit */int) (unsigned short)10622)) - (((/* implicit */int) arr_21 [i_6] [i_6] [i_8 + 1])))) : (((((/* implicit */int) arr_6 [i_8 - 2] [i_6])) - (((/* implicit */int) (short)6597))))))));
            arr_28 [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((unsigned int) max(((unsigned short)65535), (var_0)))) % (((/* implicit */unsigned int) ((int) 775953311)))));
        }
        for (unsigned long long int i_9 = 2; i_9 < 18; i_9 += 2) 
        {
            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((+(((((/* implicit */int) var_4)) * (((/* implicit */int) arr_19 [i_9 + 1])))))) : (((arr_24 [i_6] [i_9 - 2]) ? (((/* implicit */int) arr_24 [i_6] [i_9 + 1])) : (((/* implicit */int) arr_24 [i_9 + 1] [i_6]))))));
            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_31 [i_9 + 1] [i_9 - 2])) : (((/* implicit */int) var_8)))))))));
            arr_33 [i_6] [i_6] [i_9 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((2293538256U) >> (((2147483619) - (2147483616))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)62)) && (((/* implicit */_Bool) 1073741824))))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (17451036570614855621ULL))) : (((/* implicit */unsigned long long int) -1858347521))));
        }
    }
    var_35 = ((/* implicit */signed char) ((unsigned char) (-(((var_13) ? (((/* implicit */int) var_7)) : (var_16))))));
}

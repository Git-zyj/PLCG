/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184658
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (1044480) : (((/* implicit */int) (unsigned char)227))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_12))))) : (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
            var_21 = ((/* implicit */int) var_12);
        }
        for (short i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 1; i_3 < 13; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        {
                            arr_15 [6] [i_5] [i_3 + 3] &= ((/* implicit */_Bool) ((short) (_Bool)1));
                            arr_16 [i_0] [i_2] [i_2] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (((~(((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) ((((/* implicit */int) var_15)) < (((/* implicit */int) (_Bool)1)))))))) : (max((-1357776919), (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                /* LoopSeq 3 */
                for (signed char i_7 = 2; i_7 < 13; i_7 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [6] [i_2] [i_7 + 1])) << (((/* implicit */int) var_6))))), (((var_13) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))))));
                    var_23 += ((/* implicit */signed char) max((min((((/* implicit */int) ((unsigned char) -414389675))), (((((/* implicit */int) (_Bool)0)) | (2097151))))), (((/* implicit */int) (_Bool)1))));
                    var_24 += max((max((arr_14 [i_0] [i_2 - 1] [i_6] [i_7 + 1] [i_0 - 1]), (arr_18 [i_0] [i_2 - 1] [5U] [i_7 + 1]))), (((arr_14 [i_0] [i_2 - 1] [i_6] [i_7 + 1] [i_0 - 1]) >> (((var_5) - (1070217967))))));
                }
                for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1616170370)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)80))));
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) max((((arr_11 [(unsigned char)6] [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? (var_5) : (((/* implicit */int) arr_11 [(signed char)12] [i_0 + 1] [i_0 + 1] [i_0 + 1])))), (((/* implicit */int) (_Bool)1)))))));
                    var_26 = ((/* implicit */long long int) (+(max((arr_0 [i_0 - 1]), (((/* implicit */unsigned int) (_Bool)1))))));
                    var_27 = ((/* implicit */long long int) max((var_27), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))))), (max((((/* implicit */long long int) ((unsigned short) var_10))), (max((8845663401871948951LL), (((/* implicit */long long int) arr_19 [(short)8] [(_Bool)1] [i_6]))))))))));
                    var_28 = (_Bool)0;
                }
                for (unsigned char i_9 = 3; i_9 < 12; i_9 += 1) 
                {
                    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) min((2080490718U), (((/* implicit */unsigned int) ((arr_23 [i_6]) ? (((/* implicit */int) arr_3 [i_0] [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) -166172874)) && (((/* implicit */_Bool) (signed char)59)))))))))))));
                    arr_27 [i_0] = ((/* implicit */signed char) max((max((arr_25 [i_0] [i_9 - 1]), (arr_25 [i_0] [i_9 + 4]))), (((/* implicit */unsigned long long int) var_5))));
                    arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (signed char)106);
                }
                arr_29 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                /* LoopSeq 1 */
                for (unsigned short i_10 = 1; i_10 < 15; i_10 += 4) 
                {
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (_Bool)1))))))) > (((((/* implicit */unsigned int) 1324740616)) | (4294967295U))))))));
                    arr_34 [i_0] [i_2] [i_2 - 1] = ((/* implicit */long long int) ((unsigned int) ((arr_18 [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 1]) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                    arr_35 [i_0] [i_2] [10ULL] [i_2] [i_2] = ((/* implicit */_Bool) ((int) var_9));
                    var_31 = ((/* implicit */short) max((((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (max((-1346077975), (((/* implicit */int) (signed char)-49))))))), (((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_10 + 1] [i_0] [i_6] [i_0] [i_0 - 1]))) : ((-(arr_0 [i_2])))))));
                }
            }
            arr_36 [i_0] [(unsigned short)12] = ((((/* implicit */_Bool) arr_17 [i_0 - 1] [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_0)))) : (((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) arr_13 [i_0] [i_2] [i_2] [i_0] [(unsigned char)3])) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (signed char)107)) << (((((/* implicit */int) var_1)) - (111))))))));
        }
        arr_37 [i_0] [i_0] = ((/* implicit */short) (((+(((arr_22 [i_0] [i_0]) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) var_15)))))) % (((/* implicit */int) min((arr_20 [i_0 - 1] [i_0] [i_0 + 1]), (((/* implicit */unsigned char) (_Bool)1)))))));
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
        {
            for (unsigned short i_12 = 1; i_12 < 14; i_12 += 1) 
            {
                {
                    arr_43 [(unsigned short)15] [i_11] [i_12 + 2] [i_0] = ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_0] [(unsigned char)11] [15ULL]))) > (var_19)))), (var_8)));
                    arr_44 [i_12 - 1] [(unsigned char)4] [i_0] |= (-(((/* implicit */int) max((max(((_Bool)1), (var_15))), (arr_22 [i_0] [5U])))));
                }
            } 
        } 
    }
    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((var_18) | (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
    var_33 = ((/* implicit */int) ((long long int) ((unsigned short) var_14)));
}

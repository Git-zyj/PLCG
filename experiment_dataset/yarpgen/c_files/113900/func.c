/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113900
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
    var_15 = ((/* implicit */int) var_3);
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_16 = var_14;
        arr_2 [(unsigned short)14] [(unsigned short)14] &= ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)5582)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))) >= (((/* implicit */int) (short)32759))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_5 [i_1] = ((/* implicit */short) (_Bool)1);
            arr_6 [(short)11] [i_1] [i_0] = ((/* implicit */_Bool) max((min((((/* implicit */short) (_Bool)1)), ((short)16412))), (((/* implicit */short) ((_Bool) arr_1 [i_0 + 2])))));
            var_17 = ((/* implicit */_Bool) max((((unsigned short) (_Bool)1)), (((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) var_1)))), (var_9))))));
            var_18 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) var_12)) | (15LL))), (((/* implicit */long long int) (+(var_12))))));
        }
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            var_19 = ((/* implicit */signed char) ((unsigned short) (unsigned char)135));
            var_20 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) arr_0 [i_0 + 2])))));
            /* LoopSeq 1 */
            for (long long int i_3 = 1; i_3 < 14; i_3 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    var_21 = ((/* implicit */unsigned short) var_14);
                    var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_14 [i_4] [(short)0] [i_2] [i_4]) > (((/* implicit */int) var_11)))) ? (((/* implicit */int) ((short) arr_7 [i_4]))) : (var_7)))) ? (((/* implicit */int) ((_Bool) arr_9 [i_3 + 2] [i_3] [i_3 + 2]))) : (max(((~(((/* implicit */int) (short)-32759)))), (((((/* implicit */_Bool) 65535U)) ? (((/* implicit */int) var_6)) : (arr_14 [i_0] [i_0] [i_0] [i_4])))))));
                }
                for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    var_23 = ((/* implicit */signed char) ((unsigned short) (short)32747));
                    arr_18 [i_5] [12] [i_2] [12] [i_0 - 1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_0 [i_0 + 1]))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((signed char) arr_12 [i_3 + 1] [i_3 - 1] [i_3 - 1] [(short)12])))));
                    var_24 = ((/* implicit */signed char) max((var_2), (((((/* implicit */_Bool) arr_4 [i_5])) ? ((+(((/* implicit */int) (short)32755)))) : (((/* implicit */int) (short)32760))))));
                }
                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65533)) <= (((/* implicit */int) min(((_Bool)1), (((((/* implicit */_Bool) (short)21283)) && (((/* implicit */_Bool) var_7))))))))))));
            }
            var_26 -= ((/* implicit */signed char) min((((((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (var_1)))) - (min((((/* implicit */unsigned int) var_2)), (var_12))))), (((/* implicit */unsigned int) (unsigned short)65526))));
        }
    }
    for (short i_6 = 1; i_6 < 11; i_6 += 4) 
    {
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) max((762518524), (var_2))))))))));
        arr_21 [i_6] [3ULL] = ((/* implicit */int) (_Bool)1);
        arr_22 [i_6 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)12895)) ? (((unsigned int) ((arr_9 [i_6 - 1] [i_6 + 1] [i_6 - 1]) <= (((/* implicit */unsigned int) 0))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(15872)))) ? (((/* implicit */int) (short)-20138)) : (((/* implicit */int) ((unsigned char) arr_3 [5ULL] [5ULL] [5ULL]))))))));
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_11)), (min((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)64))))), ((short)0))))))));
    }
    for (long long int i_7 = 4; i_7 < 18; i_7 += 2) 
    {
        arr_26 [i_7 - 3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) -2441080160747850420LL)) ? (((/* implicit */int) (short)12897)) : (762518508)));
        arr_27 [(short)16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_13)))), (((/* implicit */int) ((((/* implicit */int) (short)22)) >= (((/* implicit */int) (unsigned short)2)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1722639164)))))) : (((long long int) var_0))));
        var_29 -= ((/* implicit */_Bool) (+(max((var_8), (((/* implicit */unsigned int) (signed char)127))))));
    }
    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
    {
        var_30 = ((/* implicit */unsigned char) var_0);
        arr_31 [i_8] = ((/* implicit */int) var_10);
        arr_32 [i_8] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) ((unsigned short) (unsigned short)65533))) >= (((/* implicit */int) (unsigned short)10))))), (((((((/* implicit */_Bool) (unsigned short)7)) && (((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) -762518525)) ? (762518546) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((-7965737683948631719LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)32512))))))))));
    }
}

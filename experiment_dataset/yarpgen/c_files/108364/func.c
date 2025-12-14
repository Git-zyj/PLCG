/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108364
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned char) (short)-1))) : (((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_2)))))))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) var_5)))), (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_4))))))) : (((/* implicit */int) var_6))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0])) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) ((signed char) arr_0 [i_0]))))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) != ((-(arr_0 [14U]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            arr_5 [(signed char)10] [(unsigned short)15] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1]))));
            arr_6 [i_1 + 1] = ((/* implicit */short) arr_4 [i_0] [i_0] [i_1]);
        }
        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1324900051))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [(unsigned short)16] [6U])) & (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) (unsigned short)7605)) : (((/* implicit */int) var_7))))));
        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (1968622307U))))));
    }
    for (int i_3 = 1; i_3 < 20; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_8 [i_3 + 1]), (arr_8 [i_3 - 1])))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44684))) & (18446744073709551615ULL))))));
        arr_13 [i_3 - 1] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)44686))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((long long int) arr_18 [i_5 - 1] [i_5] [i_3 - 1] [i_3 - 1]))) : (((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_3 + 1] [9ULL])) ? (((var_14) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) arr_8 [i_3 - 1]))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_3])) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)20851))) ? ((+(8684550870756457124LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))));
                    var_22 = ((/* implicit */signed char) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned short)5] [i_4]))) * (max((arr_15 [i_3] [8ULL] [16U]), (((/* implicit */unsigned long long int) var_4)))))));
                    arr_19 [i_3] [(signed char)16] [i_5] = ((/* implicit */unsigned long long int) ((signed char) 1968622307U));
                    arr_20 [(short)0] [i_4] [i_5] = ((/* implicit */unsigned int) var_7);
                }
            } 
        } 
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [(unsigned char)11])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_4)))) ? ((+(((/* implicit */int) arr_16 [i_3] [i_3] [i_3 + 1])))) : (((/* implicit */int) arr_9 [i_3 + 1])))))));
        arr_21 [i_3 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(unsigned short)10] [(short)14] [i_3 + 1])) ? (arr_14 [i_3]) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_2)), (1968622324U))))))) || (((/* implicit */_Bool) arr_7 [i_3] [i_3 - 1]))));
    }
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_11)))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (17476946900055121292ULL) : (((/* implicit */unsigned long long int) 4062812964U))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) (unsigned short)44701)) ? (((/* implicit */int) (short)-24)) : (var_5)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 3) 
    {
        arr_24 [i_6 - 2] [i_6 + 1] = ((/* implicit */short) var_13);
        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((131071LL), (((/* implicit */long long int) arr_4 [8U] [i_6 - 2] [i_6]))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)3450))))))))));
    }
}

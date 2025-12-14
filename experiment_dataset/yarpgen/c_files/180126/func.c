/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180126
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
    var_12 = ((/* implicit */signed char) ((short) var_1));
    var_13 -= ((/* implicit */long long int) (+(((/* implicit */int) ((((int) var_9)) >= (((/* implicit */int) var_5)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_14 += ((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */int) var_7)) + (((/* implicit */int) (short)-10454)))))))));
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_1 [4ULL]), (((/* implicit */unsigned int) (short)30161)))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((int) arr_5 [i_0]));
            arr_7 [i_1] [(short)2] [i_0] |= (+(var_1));
            arr_8 [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */short) arr_4 [(short)16] [i_1] [i_1])), ((short)14441)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) : (arr_1 [i_1]))) + (((/* implicit */unsigned int) min((((int) var_6)), (((/* implicit */int) (short)30158)))))));
            arr_9 [i_0] [i_0] = ((short) max((((/* implicit */int) (short)10299)), (((((/* implicit */_Bool) arr_0 [(unsigned short)21] [(unsigned short)21])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (-909595124)))));
            /* LoopSeq 1 */
            for (int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) & (((/* implicit */int) (short)10538)))));
                arr_15 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)30142))) | (((((/* implicit */_Bool) (short)2525)) ? (arr_13 [i_2 + 1]) : (arr_13 [i_2 + 3])))));
            }
        }
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            var_15 -= ((/* implicit */short) arr_16 [i_4]);
            var_16 -= ((/* implicit */signed char) arr_18 [(unsigned char)5] [i_4] [i_4]);
            /* LoopSeq 1 */
            for (unsigned int i_5 = 1; i_5 < 13; i_5 += 4) 
            {
                var_17 -= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)12901))) % (17066080760370779605ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_10))))));
                arr_23 [i_3] [(short)14] [i_5] [i_5 + 3] = ((/* implicit */unsigned long long int) ((signed char) arr_20 [i_3]));
            }
        }
        var_18 = ((/* implicit */short) ((_Bool) arr_12 [i_3] [i_3]));
        arr_24 [i_3] = ((/* implicit */unsigned long long int) (short)12729);
    }
    /* vectorizable */
    for (unsigned int i_6 = 1; i_6 < 15; i_6 += 3) 
    {
        var_19 |= ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_3 [i_6]))))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) var_7))))))));
    }
    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
    {
        arr_29 [i_7] = ((/* implicit */int) ((((long long int) (unsigned char)115)) | (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) (unsigned short)52214)))))))) | ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_12 [i_7] [i_7])) : (((/* implicit */int) arr_3 [i_7]))))))));
        var_22 -= (-(((/* implicit */int) ((unsigned char) var_4))));
    }
    var_23 -= ((/* implicit */int) var_3);
}

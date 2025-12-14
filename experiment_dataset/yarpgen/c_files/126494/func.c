/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126494
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
    var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) | (var_14)))) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) var_0)))))) < (((/* implicit */int) var_9))));
    var_16 = var_14;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) (unsigned short)52406)))));
        arr_3 [i_0] = ((((/* implicit */int) max((min(((unsigned short)51999), ((unsigned short)13563))), (min((((/* implicit */unsigned short) var_10)), (arr_0 [i_0])))))) + (min(((+(((/* implicit */int) arr_0 [1LL])))), (((/* implicit */int) arr_1 [i_0])))));
        var_17 *= ((/* implicit */unsigned short) ((int) (-((~(((/* implicit */int) arr_1 [i_0 + 1])))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 10; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) ((var_2) - (var_12)));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_19 = ((/* implicit */unsigned short) (unsigned char)104);
            var_20 = (unsigned short)32767;
            arr_10 [i_1 + 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (_Bool)1)))));
        }
        for (unsigned short i_3 = 1; i_3 < 9; i_3 += 3) /* same iter space */
        {
            var_21 -= ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)512)) >> (((((/* implicit */int) arr_5 [(unsigned char)5])) + (31452))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (short)-27613)))))));
            var_22 = ((/* implicit */long long int) 0);
        }
        for (unsigned short i_4 = 1; i_4 < 9; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
            {
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (unsigned short)0))));
                var_24 = ((/* implicit */unsigned char) -438810133);
                var_25 = (((-(((/* implicit */int) arr_18 [8] [(unsigned short)8])))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [0] [(unsigned short)4]))))));
                var_26 = ((874589601) == (((/* implicit */int) (_Bool)1)));
                var_27 = ((/* implicit */short) (+(((/* implicit */int) arr_11 [i_4] [i_5]))));
            }
            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
            {
                var_28 ^= ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */int) arr_20 [i_4 - 1] [i_4 - 1])));
                arr_21 [i_4] [i_4 - 1] = ((((/* implicit */_Bool) (unsigned short)63279)) ? (((/* implicit */int) arr_15 [i_6] [i_6])) : (((int) 562949936644096LL)));
            }
            var_29 = ((/* implicit */short) ((unsigned char) var_11));
            var_30 = var_5;
            var_31 += ((/* implicit */_Bool) ((arr_14 [i_1 + 1] [i_1 - 1] [1LL]) + (((((/* implicit */_Bool) (unsigned short)24832)) ? (((/* implicit */int) arr_18 [i_1] [i_1])) : (((/* implicit */int) var_13))))));
        }
        arr_22 [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [(_Bool)1])) + (((/* implicit */int) var_5))));
        var_32 ^= arr_20 [i_1] [i_1];
    }
}

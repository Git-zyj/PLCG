/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153552
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [(short)8] [(short)8])) ^ (((/* implicit */int) (signed char)(-127 - 1)))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    arr_13 [(signed char)4] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (((~(1969093846U))) & (((/* implicit */unsigned int) (+(((/* implicit */int) (short)677)))))));
                    arr_14 [i_3] [i_2] [10] [i_0] = ((unsigned int) ((_Bool) arr_0 [i_0] [i_3]));
                }
                var_18 ^= ((/* implicit */signed char) arr_2 [i_2]);
            }
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) 
                {
                    var_19 = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_1))))))));
                    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)34))));
                }
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */int) ((short) (unsigned short)35131))) == (((/* implicit */int) ((short) arr_6 [i_0] [i_0] [i_0]))))))));
                var_22 = ((/* implicit */_Bool) ((unsigned int) (_Bool)1));
            }
            var_23 = ((/* implicit */_Bool) ((((unsigned long long int) min((arr_17 [(short)15] [i_1] [i_0] [i_0]), (((/* implicit */int) (signed char)-80))))) << ((+(((/* implicit */int) (signed char)34))))));
        }
        var_24 ^= ((/* implicit */int) (((+(((unsigned int) arr_3 [i_0])))) >= (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-2572)) : (((/* implicit */int) (unsigned short)33322)))))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        var_25 = ((/* implicit */short) ((int) arr_20 [i_6]));
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) (+(((unsigned int) var_6))));
            var_27 = ((/* implicit */int) max((var_27), ((~(((/* implicit */int) arr_23 [i_6] [i_7]))))));
            var_28 = ((/* implicit */long long int) ((unsigned int) (signed char)34));
        }
        for (unsigned int i_8 = 1; i_8 < 17; i_8 += 2) 
        {
            var_29 = ((/* implicit */unsigned int) ((unsigned short) arr_27 [i_8 + 2] [i_8 + 2] [i_8 - 1]));
            var_30 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [i_8 - 1] [i_8 - 1])) == (((/* implicit */int) (short)(-32767 - 1)))));
            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_6] [i_8])) ? (((/* implicit */int) arr_21 [i_6])) : (((/* implicit */int) (_Bool)1))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_8 + 2])))));
            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [i_8 - 1] [i_8 - 1] [i_8 - 1])))))));
        }
        var_33 -= arr_23 [i_6] [i_6];
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_31 [18])))))));
        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)6991)) ? (((/* implicit */int) (short)2572)) : (((/* implicit */int) (unsigned short)30405)))))));
        var_36 = ((/* implicit */short) ((signed char) ((int) (unsigned short)18497)));
        var_37 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))) ? (max((2522889846U), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-34)))))))));
        var_38 -= ((/* implicit */signed char) ((((((/* implicit */int) var_13)) - (((int) arr_31 [16LL])))) | (((/* implicit */int) (_Bool)0))));
    }
    var_39 = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) max(((unsigned short)35131), (((/* implicit */unsigned short) (short)-2))))))));
    var_40 = ((/* implicit */signed char) max((var_40), (((signed char) var_12))));
}

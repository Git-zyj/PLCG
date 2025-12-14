/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168693
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
    var_20 -= ((/* implicit */short) min((((/* implicit */int) ((var_5) < (((/* implicit */int) var_0))))), (((((var_16) / (((/* implicit */int) var_11)))) / (min((((/* implicit */int) var_7)), (-1)))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (signed char)-81))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((unsigned int) (-(arr_0 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [(short)15])) + (((/* implicit */int) (_Bool)0))));
        arr_6 [i_1] &= ((/* implicit */unsigned int) arr_5 [i_1]);
        arr_7 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)19038)) + (((/* implicit */int) (_Bool)0)))))));
        var_23 -= ((/* implicit */unsigned char) (_Bool)1);
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)32751))) / (2056510740545879029LL)));
    }
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */short) max((min(((-(var_8))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))))), (((/* implicit */unsigned int) min((((((/* implicit */int) (signed char)46)) / (arr_9 [i_2] [i_2]))), (((arr_10 [i_2]) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) (unsigned char)0)))))))));
        arr_11 [i_2] [i_2] |= ((/* implicit */short) (unsigned char)255);
    }
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        /* LoopSeq 4 */
        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
        {
            arr_16 [i_3] [i_4] = ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) var_9)))) * ((+(((/* implicit */int) var_4)))))) | ((+(((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_14 [i_3] [i_4])))))));
            var_25 = ((((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (unsigned char)255)))) << (((1907795001) - (1907794994))));
            arr_17 [i_3] [(unsigned short)0] [i_4] |= ((/* implicit */signed char) ((short) var_19));
            var_26 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) 2097151)) ? (var_3) : (min((((/* implicit */unsigned int) (_Bool)0)), (5U)))))));
            arr_18 [i_4] = ((/* implicit */unsigned short) (+(min((arr_5 [i_3]), (((/* implicit */long long int) var_14))))));
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
        {
            var_27 ^= ((/* implicit */unsigned char) ((-2056510740545879021LL) * (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                arr_27 [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) arr_20 [i_5] [i_5] [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) -2056510740545879016LL)) ? (((/* implicit */int) ((_Bool) (short)-19286))) : (((/* implicit */int) ((signed char) var_5))))))));
                var_29 += ((/* implicit */short) ((unsigned int) (unsigned char)206));
            }
        }
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            var_30 += ((/* implicit */_Bool) (((-(arr_9 [i_3] [(unsigned char)18]))) - (((/* implicit */int) (unsigned short)2230))));
            var_31 |= ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)63306)))) >> (((((((/* implicit */int) var_11)) - (-1480901159))) - (1480901275)))));
            /* LoopNest 2 */
            for (short i_8 = 3; i_8 < 18; i_8 += 2) 
            {
                for (unsigned int i_9 = 1; i_9 < 19; i_9 += 1) 
                {
                    {
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (((-(0U))) << (((((/* implicit */int) arr_14 [i_3] [8U])) - (9))))))));
                        var_33 = ((((/* implicit */_Bool) -2097151)) ? ((-(((/* implicit */int) (unsigned short)4)))) : (((/* implicit */int) arr_24 [i_3] [i_7] [i_8 + 1])));
                        var_34 = ((/* implicit */unsigned short) arr_28 [i_3] [i_7]);
                    }
                } 
            } 
        }
        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            arr_37 [i_10] [i_10] = ((/* implicit */int) arr_3 [i_3]);
            arr_38 [i_10] [i_3] = ((/* implicit */_Bool) (unsigned char)246);
            arr_39 [i_3] [i_3] [i_3] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)190)))) : (var_12)))) - ((((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (3364779654U))) - (((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))))));
            var_35 = ((/* implicit */unsigned int) arr_36 [i_10] [i_3]);
        }
        arr_40 [i_3] = ((/* implicit */unsigned long long int) ((int) (short)25000));
        var_36 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) (short)6311)))), ((-(((/* implicit */int) ((unsigned char) -2097151)))))));
    }
    var_37 -= ((/* implicit */long long int) ((((((/* implicit */int) var_4)) / (((/* implicit */int) (unsigned short)2230)))) - (((((/* implicit */int) ((short) (short)25000))) >> (((((/* implicit */int) var_7)) - (44040)))))));
    var_38 = ((/* implicit */short) (+(((unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), (var_1))))));
}

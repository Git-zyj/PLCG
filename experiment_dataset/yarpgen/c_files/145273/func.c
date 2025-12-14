/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145273
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_12 [i_0] [i_2] [i_2] [i_3])))) <= (var_2))))));
                            arr_15 [i_0] [i_1] [i_2] [i_3 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_2] [7] [i_3 - 2])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) arr_6 [i_2] [i_3])) : (((/* implicit */int) arr_1 [i_1] [i_3])))))))) : ((~(arr_11 [i_2] [(unsigned short)10] [i_2])))));
                            var_19 = ((/* implicit */int) ((long long int) var_6));
                            var_20 = ((((/* implicit */_Bool) 11ULL)) ? (min((((/* implicit */int) min((var_6), (((/* implicit */unsigned char) (signed char)63))))), (arr_14 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_9)), ((unsigned char)31)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */int) (signed char)-63)) : (arr_5 [i_0]))) : (((((((/* implicit */int) var_5)) + (2147483647))) >> (((((/* implicit */int) arr_10 [i_2] [i_2])) - (39))))))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_1] = max((var_6), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (signed char)-47)) : (-1382525435)))) == (((var_15) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [(unsigned char)2] [i_0])))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_4 = 1; i_4 < 23; i_4 += 2) 
    {
        arr_21 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(arr_20 [(short)18] [i_4 + 1])))))) ? (min((((/* implicit */unsigned long long int) ((long long int) arr_17 [21LL]))), (((18446744073709551585ULL) & (((/* implicit */unsigned long long int) var_2)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4 + 2] [i_4])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6)))))))))));
        var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < ((-9223372036854775807LL - 1LL))));
        var_22 = ((/* implicit */int) arr_20 [i_4] [i_4]);
        var_23 = ((/* implicit */int) min((18446744073709551584ULL), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_7)))) & (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_0)))))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        var_24 = ((/* implicit */unsigned char) var_12);
        var_25 ^= ((/* implicit */unsigned short) var_15);
        var_26 = ((/* implicit */unsigned long long int) ((((int) arr_22 [i_5] [i_5])) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5])))))));
        arr_25 [i_5] [i_5] = ((/* implicit */long long int) ((unsigned int) (!((_Bool)1))));
        arr_26 [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(arr_18 [i_5]))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_27 = ((/* implicit */long long int) arr_24 [(unsigned short)1] [i_6]);
        var_28 = ((/* implicit */unsigned short) ((long long int) arr_9 [i_6] [i_6] [i_6] [i_6]));
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            for (long long int i_8 = 1; i_8 < 14; i_8 += 4) 
            {
                {
                    var_29 = (((!(((/* implicit */_Bool) 12ULL)))) ? (max((((/* implicit */int) max((arr_7 [(signed char)4]), (arr_1 [i_6] [i_7])))), (((((/* implicit */int) var_12)) | (((/* implicit */int) var_9)))))) : (((/* implicit */int) ((_Bool) (_Bool)1))));
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_5 [i_6]))));
                }
            } 
        } 
        arr_35 [i_6] = ((/* implicit */signed char) (-(max((((/* implicit */int) min((((/* implicit */short) var_1)), ((short)-4456)))), (((((/* implicit */int) var_13)) >> (((/* implicit */int) var_8))))))));
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                {
                    var_31 = ((/* implicit */long long int) (signed char)29);
                    arr_43 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((arr_36 [(unsigned char)4]), (((/* implicit */long long int) var_17))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_11))) - (-2554153429243475487LL))) : (arr_20 [i_6] [i_9]))) - (((/* implicit */long long int) ((((/* implicit */int) max((arr_31 [i_6] [i_9] [i_6] [(signed char)0]), (((/* implicit */unsigned char) (signed char)-1))))) % ((~(((/* implicit */int) arr_22 [i_6] [i_6])))))))));
                    arr_44 [i_6] [i_9] [10LL] = ((/* implicit */unsigned char) var_5);
                    var_32 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_9), (var_9)))) ? (max((((/* implicit */unsigned long long int) arr_30 [i_6] [(short)9] [i_6])), (18446744073709551598ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [(_Bool)0] [i_9] [i_6] [i_10]))))) - (((/* implicit */unsigned long long int) ((long long int) arr_19 [i_6] [i_10])))));
                }
            } 
        } 
    }
    var_33 = ((/* implicit */long long int) max((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13)))))), (((/* implicit */int) ((unsigned char) var_7)))));
    var_34 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_6)) < (((/* implicit */int) ((_Bool) var_2)))))), (min((((long long int) var_3)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))))))));
    var_35 = ((/* implicit */_Bool) (((+(max((-6638800383327535870LL), (((/* implicit */long long int) var_16)))))) >> (((((/* implicit */int) var_8)) + (((((/* implicit */int) var_8)) % (var_4)))))));
}

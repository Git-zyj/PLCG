/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164342
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
    var_20 = ((/* implicit */unsigned char) ((var_14) >> (((((((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) var_1)) - (133))))) >> ((((~(((/* implicit */int) var_8)))) - (95))))) - (131050)))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */unsigned int) var_12)), (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))) == (min((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_19)), (var_14))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [18] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_19))) / (var_0)));
        var_22 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_1 [i_0]))) << (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */signed char) var_4)))))));
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned short)12])) ? (var_12) : (((/* implicit */int) var_13))))) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) | (((/* implicit */int) var_1)))))))) ? (max((((/* implicit */unsigned int) var_8)), (max((var_14), (((/* implicit */unsigned int) var_1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))));
        arr_5 [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_24 = ((/* implicit */int) ((long long int) min((((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_8 [(unsigned char)16])) : (var_10))), (((/* implicit */int) var_18)))));
        arr_9 [i_1] = ((/* implicit */unsigned int) (+((+(-1371237620)))));
        var_25 *= ((/* implicit */short) (~(max((((int) var_19)), (((/* implicit */int) var_5))))));
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 19; i_2 += 2) 
    {
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) ((unsigned short) (short)(-32767 - 1)))) : (((/* implicit */int) (short)(-32767 - 1))))))));
        var_27 = ((/* implicit */unsigned char) ((int) var_15));
    }
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_2 [i_3] [i_3])))))));
        arr_14 [i_3] = ((/* implicit */int) (-((-((+(var_0)))))));
        /* LoopSeq 3 */
        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 1) 
        {
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_11), (var_11)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_18))))) : (min((arr_2 [i_4] [i_3]), (((/* implicit */unsigned long long int) var_4)))))) >= ((-(arr_2 [i_3] [i_3]))))))));
            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4]))) : (var_15)))) && (((((/* implicit */_Bool) var_0)) && (var_3))))))));
        }
        for (int i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            var_31 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
            var_32 = ((/* implicit */long long int) (~(((max((var_10), (((/* implicit */int) var_7)))) | (max((((/* implicit */int) var_8)), (var_10)))))));
            var_33 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_16))) == (max((var_16), (((/* implicit */int) arr_8 [i_3]))))));
        }
        for (int i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_7 = 3; i_7 < 7; i_7 += 2) 
            {
                var_34 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) var_16)))));
                var_35 = ((/* implicit */unsigned char) (~((~(var_0)))));
            }
            for (signed char i_8 = 4; i_8 < 7; i_8 += 1) 
            {
                arr_31 [7LL] [7LL] [i_6] [i_3] = ((((((((/* implicit */_Bool) arr_10 [i_3] [i_3])) && (((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) arr_24 [i_3] [i_8 - 3] [i_8 - 3] [i_8 - 4])))) ? (arr_25 [i_3] [i_3] [i_3] [8]) : (((unsigned long long int) (!(((/* implicit */_Bool) var_14))))));
                arr_32 [(unsigned char)8] = ((/* implicit */unsigned int) (!((((~(var_14))) != (((/* implicit */unsigned int) ((/* implicit */int) max((arr_13 [i_6]), (((/* implicit */short) var_19))))))))));
                arr_33 [i_8] [2] [(unsigned char)0] [i_3] = ((/* implicit */long long int) ((((long long int) var_15)) > (((/* implicit */long long int) var_0))));
            }
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (signed char i_10 = 1; i_10 < 6; i_10 += 2) 
                {
                    {
                        arr_38 [i_9] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_30 [i_3] [(signed char)4]))))));
                        var_36 |= ((/* implicit */int) max((((long long int) max((((/* implicit */unsigned long long int) var_9)), (arr_37 [i_3])))), (((/* implicit */long long int) ((signed char) arr_24 [i_3] [i_6] [i_9] [i_10 + 1])))));
                    }
                } 
            } 
        }
    }
    var_37 = ((/* implicit */long long int) var_8);
    var_38 += ((/* implicit */unsigned char) var_14);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112690
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
    var_16 -= ((/* implicit */unsigned short) var_11);
    var_17 |= ((/* implicit */unsigned char) var_0);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_18 -= (+((+(((/* implicit */int) var_2)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) arr_2 [(unsigned short)8]);
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (~(18102494923497358332ULL))))));
            var_21 = ((unsigned char) (unsigned short)34685);
            arr_4 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) (unsigned char)31))))) ? ((+(var_7))) : (((/* implicit */int) var_12)));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (unsigned int i_4 = 1; i_4 < 19; i_4 += 3) 
                {
                    {
                        var_23 = ((/* implicit */int) (-(((((/* implicit */long long int) var_8)) + (arr_9 [i_4] [(signed char)8] [5])))));
                        var_24 = ((/* implicit */int) ((unsigned short) (signed char)0));
                        var_25 = arr_12 [(unsigned short)6] [i_2] [i_4 + 1];
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            var_26 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_0] [i_0] [i_4 - 1] [(unsigned char)7] [i_0]))));
                            var_27 -= ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_14 [i_0] [i_4] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) 286430779)) ? (179430611) : (((/* implicit */int) (signed char)2))));
                            var_29 ^= arr_6 [i_0] [i_0] [i_0];
                            arr_16 [i_0] [i_0] [i_0] [i_4 + 1] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (arr_9 [i_4 - 1] [i_4 + 1] [i_4 - 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [(signed char)12] [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4)))))));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) arr_13 [19LL] [(signed char)9] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_6] [i_6]))));
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                var_31 = 36028728299487232ULL;
                var_32 += ((/* implicit */unsigned char) ((((int) arr_14 [13] [9U] [i_7] [9U])) / (var_6)));
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)10)) / (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-29935)) : (var_11)))));
                arr_21 [i_0] [i_6] [i_7] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_2)) - (286430775)))));
                var_34 |= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) (signed char)86)))));
            }
        }
        var_35 = ((/* implicit */short) var_3);
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
    {
        arr_24 [12] [(signed char)2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) arr_7 [(unsigned char)12] [i_8] [i_8] [i_8])))))) == (((((/* implicit */_Bool) arr_5 [i_8] [3ULL])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_8])))))));
        arr_25 [i_8] [(unsigned char)10] |= ((/* implicit */unsigned int) var_7);
    }
    var_36 = ((/* implicit */short) var_2);
}

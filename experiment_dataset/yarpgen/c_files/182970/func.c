/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182970
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)60597)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 *= ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_2]))));
            var_21 &= ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned char)255))))));
            arr_10 [i_1] [(unsigned short)4] [(unsigned short)4] = ((/* implicit */long long int) arr_6 [i_1] [i_2]);
        }
        var_22 = ((/* implicit */_Bool) min((var_22), (arr_5 [i_1] [i_1])));
        arr_11 [i_1] = ((/* implicit */unsigned char) arr_7 [i_1]);
        arr_12 [9LL] = ((/* implicit */unsigned short) ((-2819551265337680136LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)25)))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */short) ((_Bool) 15435891313545330257ULL));
        var_24 -= ((/* implicit */signed char) arr_14 [i_3] [i_3]);
        arr_15 [i_3] = ((/* implicit */unsigned short) ((long long int) arr_3 [(_Bool)1] [i_3]));
        /* LoopSeq 3 */
        for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            var_25 = ((/* implicit */long long int) 17116842733753085776ULL);
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_6 [i_3] [i_3])))) ? ((-(((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) arr_5 [i_3] [i_4]))));
        }
        for (signed char i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
        {
            var_27 = (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)230))))));
            /* LoopNest 3 */
            for (unsigned short i_6 = 2; i_6 < 19; i_6 += 2) 
            {
                for (long long int i_7 = 1; i_7 < 19; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        {
                            arr_32 [i_3] [i_3] [i_3] [i_3] [i_8] = ((/* implicit */signed char) (~((-(var_5)))));
                            var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                        }
                    } 
                } 
            } 
            arr_33 [18U] [i_5] [18U] &= ((/* implicit */short) arr_0 [i_5] [i_3]);
        }
        for (signed char i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
        {
            var_29 &= ((/* implicit */_Bool) ((unsigned long long int) arr_26 [i_9]));
            var_30 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)25)) ? (-2405152222104909LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)101)))));
            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_5 [i_3] [i_3]))) ? (arr_25 [i_3] [i_3] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            var_32 = ((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (_Bool)0)))));
        }
    }
    for (signed char i_10 = 0; i_10 < 18; i_10 += 2) 
    {
        var_33 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_10] [i_10]))))) + (max((1154028587U), (((/* implicit */unsigned int) arr_7 [i_10]))))))), (((max((arr_8 [i_10]), (((/* implicit */long long int) var_12)))) | (((/* implicit */long long int) ((/* implicit */int) max((arr_16 [i_10]), ((unsigned short)65408)))))))));
        var_34 = ((/* implicit */_Bool) var_10);
    }
    var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 17116842733753085776ULL)) ? (((/* implicit */int) (short)7231)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)58814))))))));
    var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(var_10))) >> (((((/* implicit */int) ((unsigned short) var_0))) - (48)))))) ? (var_17) : (((/* implicit */unsigned int) (-(max((((/* implicit */int) (unsigned short)58814)), (var_8)))))))))));
}

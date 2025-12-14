/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144391
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
    var_12 = var_3;
    var_13 = ((/* implicit */_Bool) min((var_13), (var_2)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_14 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)0)))))))) % (((((/* implicit */_Bool) ((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)1)))) : (((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */long long int) arr_2 [(short)7]))))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_5 [i_0] [i_1])))) ? ((~(min((var_8), (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)8128))))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))))))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 3) /* same iter space */
            {
                arr_10 [i_2] [i_1] [i_0] [i_2] = ((/* implicit */short) ((((unsigned long long int) arr_4 [i_2 - 1] [i_2 - 2] [i_2 - 2])) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)9)) ? (arr_9 [i_2 - 2] [i_2 - 1] [i_2 - 1]) : (((/* implicit */int) var_11)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_14 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) (unsigned char)0)) < (arr_5 [13U] [i_1]))));
                    arr_15 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) arr_6 [i_2 - 2] [i_1] [i_2 - 1]);
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_16 &= ((/* implicit */unsigned int) min((((/* implicit */long long int) var_4)), (min((arr_12 [i_0] [i_1] [i_2] [i_2 - 2]), (((/* implicit */long long int) (unsigned short)58991))))));
                    var_17 ^= ((/* implicit */unsigned int) -1870778062);
                    var_18 = (-(((((/* implicit */_Bool) (short)8128)) ? (((/* implicit */unsigned long long int) 0LL)) : (min((arr_18 [i_0] [i_1] [(unsigned short)6] [i_4]), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_0])))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_9 [i_1] [i_2] [i_2 + 1])) < (((((/* implicit */long long int) ((/* implicit */int) (signed char)-47))) / (4067558358836594927LL)))));
                }
                arr_19 [3ULL] [i_2] = ((/* implicit */long long int) ((((var_6) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -8724357233805109725LL)))))) ? ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) >= (var_3)))))) : (min((((/* implicit */int) (_Bool)0)), ((-(((/* implicit */int) var_9))))))));
            }
            for (unsigned int i_5 = 2; i_5 < 16; i_5 += 3) /* same iter space */
            {
                var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0])))))) ? ((+((~(-4067558358836594927LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) -2109794867)) <= (((var_6) >> (((((/* implicit */int) (unsigned short)65535)) - (65479)))))))))));
                arr_23 [i_0] [i_0] [(unsigned char)15] [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) ((unsigned long long int) 217881483572432473LL))) ? (((/* implicit */long long int) arr_5 [i_5] [i_0])) : ((+(-3LL)))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((-668765040), (((/* implicit */int) (signed char)0)))))));
            }
            var_22 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (short)-26336)) < (((/* implicit */int) (signed char)0)))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (signed char i_8 = 1; i_8 < 16; i_8 += 3) 
                {
                    {
                        var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (2454971952U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) < (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)54)) >> (((1413867759) - (1413867758))))))));
                        arr_31 [(signed char)4] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)136)) + (((/* implicit */int) (signed char)0))));
                    }
                } 
            } 
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2423))) - (((var_3) * (((/* implicit */unsigned long long int) 48057810U)))))))));
            arr_32 [3LL] [i_0] [i_6] = ((/* implicit */short) ((((((/* implicit */int) var_7)) < (649167717))) ? (((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (unsigned char)67)) : (-1599964632))) : (((/* implicit */int) var_9))));
            arr_33 [i_0] [i_0] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) ((var_0) || (((/* implicit */_Bool) arr_4 [i_0] [i_6] [(short)15])))))));
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_6] [i_6] [i_0] [16ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3)));
        }
        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            /* LoopNest 3 */
            for (int i_10 = 3; i_10 < 15; i_10 += 2) 
            {
                for (int i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) -7405923192975255683LL))));
                            arr_46 [i_0] [i_0] [(unsigned char)8] [i_0] [i_0] &= ((_Bool) (~(((/* implicit */int) var_9))));
                            var_27 = ((/* implicit */short) ((((((/* implicit */int) arr_37 [i_10 - 3])) >= (((/* implicit */int) var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) : (min((7017585897469167269ULL), (((/* implicit */unsigned long long int) arr_38 [i_10 + 2] [i_10 + 2] [i_11]))))));
                            arr_47 [i_9] = ((((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)63113)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_16 [i_0] [i_9] [i_10] [i_10] [i_12]))))))) < (min((((((/* implicit */_Bool) var_1)) ? (4067558358836594927LL) : (((/* implicit */long long int) arr_13 [6U] [5] [i_10 - 3] [0U])))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_7)), (arr_34 [10])))))));
                            arr_48 [i_9] [(signed char)1] [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (var_0))))) + (((unsigned int) var_0))));
                        }
                    } 
                } 
            } 
            var_28 *= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) min((((/* implicit */short) arr_35 [i_0] [i_9])), (var_11)))))) ? (((((/* implicit */long long int) arr_25 [i_0] [i_0] [i_0])) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)89))) : (-288230376151711744LL))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)250)) >> (((arr_4 [i_0] [i_0] [i_0]) - (5579906660247004055LL))))))));
        }
        arr_49 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) (unsigned char)236)))));
    }
    for (int i_13 = 0; i_13 < 17; i_13 += 2) /* same iter space */
    {
        var_29 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)0), (((/* implicit */short) (signed char)82))))) ? (((((/* implicit */_Bool) arr_18 [i_13] [i_13] [11LL] [i_13])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))) : ((-(646861064)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_14 = 0; i_14 < 17; i_14 += 3) 
        {
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)(-32767 - 1))))))));
            arr_56 [(signed char)4] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)31483))) * (arr_50 [i_13] [i_14])));
        }
    }
}

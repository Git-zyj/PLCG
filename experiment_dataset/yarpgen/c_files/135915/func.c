/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135915
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) (_Bool)0)))))), (max((((/* implicit */unsigned long long int) var_7)), (var_8))))))));
                        arr_12 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) var_4);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) (((+(arr_0 [i_0 + 2] [i_0]))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))));
                        arr_22 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) (((-(((((/* implicit */unsigned long long int) arr_18 [i_0] [i_5] [i_4])) * (var_11))))) * (((var_12) * (((/* implicit */unsigned long long int) arr_17 [i_0 + 1] [i_4] [(short)11]))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 2; i_7 < 15; i_7 += 3) 
    {
        var_17 &= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_5 [i_7])) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) arr_11 [i_7] [i_7] [i_7 - 1])))) + (2147483647))) >> (((var_11) - (15100035882381784827ULL)))));
        /* LoopSeq 3 */
        for (short i_8 = 2; i_8 < 13; i_8 += 3) 
        {
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */int) var_4)) : (arr_24 [i_7] [i_7])))))));
            arr_29 [i_7 - 2] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [(_Bool)0] [i_8 + 1] [(_Bool)0])) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_20 [i_7] [i_7] [i_7 + 1] [(unsigned short)14]))))));
            var_19 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) <= (((/* implicit */int) ((unsigned char) arr_16 [i_8] [i_8] [i_8] [i_7])))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_9 [i_9] [i_7 - 2] [i_7 + 1] [i_7 - 2] [i_7 + 1] [i_7 - 2])) : (((/* implicit */int) var_7))));
            arr_32 [(_Bool)1] [(_Bool)1] &= ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_7 - 1])) + (((/* implicit */int) arr_5 [i_7 - 1]))));
            var_21 += ((/* implicit */unsigned short) arr_10 [i_7]);
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_6))))) ? ((+(-3921877666355020241LL))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
            var_23 = ((/* implicit */unsigned char) (_Bool)1);
        }
        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) 
        {
            arr_35 [i_10] = ((/* implicit */long long int) 4980608742392037721ULL);
            arr_36 [i_7] [i_10] = ((/* implicit */_Bool) 4278190080U);
            arr_37 [i_7 - 1] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7] [(signed char)9] [i_7]))) % (var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)0)) : (((((/* implicit */int) arr_21 [i_7] [(unsigned short)2] [i_10] [i_10])) ^ (((/* implicit */int) var_14)))))))));
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 3) 
            {
                {
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (~(((/* implicit */int) var_10)))))));
                    var_26 -= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_43 [(unsigned char)10]))) != (var_5))))));
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 3) 
                        {
                            {
                                var_27 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (short)-8630)))) && (((/* implicit */_Bool) arr_39 [i_7] [i_7 + 1] [i_14]))));
                                arr_49 [i_7 - 2] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_33 [i_14] [i_13] [i_7]))))) + ((+(8998584199103262992LL)))));
                                var_28 = var_2;
                                var_29 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)20659)) / (((/* implicit */int) (unsigned short)10877))));
                            }
                        } 
                    } 
                    arr_50 [i_7] [i_12] [i_12] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) >= (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_30 += ((/* implicit */unsigned long long int) ((_Bool) ((_Bool) arr_33 [i_15] [(signed char)5] [i_15])));
        arr_53 [i_15] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (+(0U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -5759605378548259887LL))))) : ((+(((/* implicit */int) (unsigned char)13))))))));
        arr_54 [i_15] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
    }
    /* LoopNest 2 */
    for (short i_16 = 0; i_16 < 19; i_16 += 3) 
    {
        for (unsigned char i_17 = 0; i_17 < 19; i_17 += 3) 
        {
            {
                arr_60 [i_17] [i_17] = ((/* implicit */unsigned int) 549755813887ULL);
                var_31 = ((/* implicit */signed char) ((unsigned char) ((_Bool) ((_Bool) 8591131036770909939ULL))));
                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}

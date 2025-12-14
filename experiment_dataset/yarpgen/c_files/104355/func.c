/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104355
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
    var_18 = ((/* implicit */signed char) (((-(var_16))) - (var_8)));
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (arr_2 [i_0 + 2] [i_0 + 1])));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0 + 2]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */signed char) (-(min((((/* implicit */long long int) (-(((/* implicit */int) (short)32750))))), ((-(1149796819609940906LL)))))));
        var_21 += ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32750))))) ? (max((((((/* implicit */_Bool) (short)-32732)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [(short)23])), (4152324070461955460LL)))))) : (min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)11180)) % (((/* implicit */int) arr_5 [(_Bool)1]))))))));
    }
    for (unsigned int i_2 = 2; i_2 < 15; i_2 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_3 = 4; i_3 < 17; i_3 += 2) 
        {
            var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(unsigned short)11])) ? (arr_11 [15ULL] [(signed char)7] [i_2]) : (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */int) ((short) 3580473628U))) : (((/* implicit */int) arr_0 [i_3 - 3] [i_2 + 2]))));
            var_23 = ((/* implicit */unsigned int) arr_1 [i_2]);
            var_24 = ((((_Bool) arr_6 [i_2])) ? (((/* implicit */int) ((unsigned char) arr_8 [i_2] [i_3 - 3]))) : (((int) var_15)));
            /* LoopNest 2 */
            for (unsigned int i_4 = 2; i_4 < 17; i_4 += 2) 
            {
                for (short i_5 = 3; i_5 < 14; i_5 += 2) 
                {
                    {
                        var_25 += ((/* implicit */signed char) ((int) arr_12 [i_2 - 2] [i_3 - 3] [i_4 - 1] [i_5 - 3]));
                        var_26 |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_8 [i_2] [i_4])) >= (((/* implicit */int) (short)-32756)))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            arr_19 [i_2] [i_6] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((unsigned int) -817214463)) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (short)-32751))) ? (var_11) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)7341)))))));
                arr_23 [i_2 + 1] [i_6] [i_7] |= var_5;
                var_28 += ((/* implicit */unsigned long long int) (unsigned char)31);
            }
            /* LoopNest 2 */
            for (long long int i_8 = 3; i_8 < 16; i_8 += 2) 
            {
                for (short i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    {
                        var_29 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) arr_2 [i_2 - 1] [i_8 + 2])))));
                        var_30 = ((/* implicit */_Bool) arr_27 [(unsigned short)12] [i_6] [i_8] [i_9]);
                        arr_29 [9U] [i_6] [i_8] [i_9] = ((/* implicit */short) ((unsigned long long int) arr_10 [i_8 + 2]));
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (-(arr_2 [i_2 - 1] [i_2 - 1]))))));
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned long long int) arr_10 [i_2]);
            /* LoopNest 2 */
            for (short i_10 = 1; i_10 < 16; i_10 += 4) 
            {
                for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    {
                        arr_34 [i_2] [15ULL] |= ((/* implicit */long long int) (+(arr_11 [10ULL] [i_2 + 3] [i_10 + 2])));
                        arr_35 [i_2 + 2] [i_6] [(unsigned char)7] [(unsigned short)3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_14)))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 18; i_12 += 4) 
        {
            for (unsigned char i_13 = 4; i_13 < 16; i_13 += 4) 
            {
                {
                    arr_42 [i_2] [i_2] = ((/* implicit */_Bool) 22LL);
                    arr_43 [(short)11] [i_12] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) min((min(((-(var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_13 + 2] [i_13] [i_12] [i_13] [i_2 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [(unsigned short)13] [i_12] [i_12]))) : (var_15)))))), (((((/* implicit */_Bool) (unsigned char)104)) ? (min((var_8), (((/* implicit */unsigned long long int) (_Bool)0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
                }
            } 
        } 
    }
    for (signed char i_14 = 0; i_14 < 18; i_14 += 2) 
    {
        arr_48 [i_14] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)121))))) ? (((/* implicit */unsigned int) -2007336866)) : (arr_20 [i_14] [17LL] [i_14] [(short)16])));
        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) arr_13 [i_14] [i_14] [i_14]))));
        arr_49 [i_14] |= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [3LL] [i_14] [i_14])) ? (12LL) : (((/* implicit */long long int) ((/* implicit */int) (short)4051)))))) ? ((+(((/* implicit */int) arr_36 [i_14])))) : (((/* implicit */int) ((_Bool) (short)-32751)))))));
        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (((-(((((/* implicit */int) (signed char)-118)) + (((/* implicit */int) (unsigned char)169)))))) == ((((((_Bool)1) ? (((/* implicit */int) (unsigned char)114)) : (-2007336866))) | (((2007336874) >> (((arr_1 [i_14]) + (1511586580))))))))))));
    }
}

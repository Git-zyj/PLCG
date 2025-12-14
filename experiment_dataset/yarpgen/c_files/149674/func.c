/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149674
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
    var_12 = ((/* implicit */unsigned short) max((((/* implicit */int) ((min((15425776552127139590ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) != (((/* implicit */unsigned long long int) var_11))))), ((+(((((/* implicit */_Bool) 10024511895923494910ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)61890))))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) (-(3681550861143744360LL)));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) min((var_2), (((/* implicit */signed char) arr_1 [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_8))))) <= (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))))))))));
        var_15 -= ((/* implicit */unsigned char) ((((/* implicit */int) (!((_Bool)1)))) < (((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3968)) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0])))) < ((~(((/* implicit */int) arr_2 [i_0]))))))) : (max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)238))) > (-5176092447652594835LL)))), ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_17 = ((/* implicit */signed char) ((_Bool) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (0LL))), (((/* implicit */long long int) ((arr_1 [3ULL]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-83))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-2709))));
        arr_5 [i_1] = (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_19 = ((/* implicit */long long int) (_Bool)1);
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)16907)) ? (288503) : (((/* implicit */int) arr_6 [i_2]))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_21 = (~(arr_8 [i_6]));
                        arr_18 [i_6] [i_5] [6] [i_3] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) arr_8 [i_6]);
                        var_22 *= ((/* implicit */unsigned char) var_1);
                        arr_19 [i_6] [i_5] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))) : (1991929849)));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_10 [i_3])) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) arr_13 [i_3] [i_3] [i_7])) != (((/* implicit */int) (_Bool)0)))))));
            var_24 &= arr_23 [i_3];
            var_25 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)195)) << (((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [(_Bool)1]))) : (-1LL)))));
            var_26 = ((/* implicit */_Bool) 1LL);
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_10] [i_10] [i_10])) ? (((/* implicit */int) var_5)) : (arr_28 [(short)11] [i_7] [(short)11]))))));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (!(arr_24 [i_10] [i_9] [i_7]))))));
                            arr_31 [i_3] [16ULL] [i_3] [(unsigned char)8] [i_10] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_10)) | (var_0)));
                            arr_32 [i_10] [i_8] [i_7] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)126)) * (((/* implicit */int) (short)3))))));
                        }
                    } 
                } 
            } 
        }
        arr_33 [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_5)))))));
        var_29 = ((/* implicit */short) ((unsigned long long int) (short)12577));
        var_30 = ((/* implicit */long long int) max((var_30), (4325726751601572512LL)));
    }
    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)251))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) min((min((((/* implicit */short) (_Bool)1)), (var_1))), (((/* implicit */short) var_8)))))));
    var_32 = ((/* implicit */unsigned long long int) (_Bool)0);
}

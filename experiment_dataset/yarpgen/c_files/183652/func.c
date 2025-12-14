/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183652
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
    var_17 ^= ((/* implicit */unsigned short) ((long long int) var_6));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)5743)) : (((/* implicit */int) arr_0 [i_0])))) >> (((((((/* implicit */_Bool) 1998599800U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) - (4294967291U)))));
        arr_2 [i_0] = ((/* implicit */signed char) var_4);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (2296367496U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((((/* implicit */int) arr_1 [i_0 - 2] [i_0])) | (((/* implicit */int) arr_1 [i_0] [(unsigned char)1]))))));
    }
    for (short i_1 = 2; i_1 < 23; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) - (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))))) ? (((/* implicit */int) (signed char)-43)) : ((-(((/* implicit */int) (signed char)-43))))));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_16 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]))))))));
                        }
                    } 
                } 
            } 
            arr_17 [(unsigned short)20] = min((arr_7 [i_1 - 2] [i_1 - 2]), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_1] [i_2])) == (var_6)))) <= (((/* implicit */int) arr_14 [i_1] [i_1 - 1] [i_1] [i_1 - 1]))))));
            var_21 = ((/* implicit */unsigned char) ((unsigned int) ((var_6) % (((/* implicit */int) (short)5743)))));
            var_22 = ((/* implicit */long long int) (unsigned char)219);
        }
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            for (int i_7 = 2; i_7 < 23; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_2)) - (152)))))) % (((arr_10 [i_1 - 2]) >> (((arr_10 [i_1 + 1]) - (13355240513394979068ULL)))))));
                        arr_25 [i_1] [i_1] [i_6] [i_7] [i_8] &= ((((/* implicit */_Bool) min((((((/* implicit */int) (short)-28856)) ^ (((/* implicit */int) var_9)))), ((+(((/* implicit */int) arr_11 [i_1] [i_6] [i_8]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) (short)28856)) : (((/* implicit */int) (_Bool)1))))) ? (var_1) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_1 + 1] [i_6] [i_8]))))))) : (((/* implicit */unsigned long long int) min((min((195780924), (((/* implicit */int) var_15)))), (((/* implicit */int) ((unsigned short) var_15)))))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_6] [i_8])) / (((/* implicit */int) arr_19 [i_8] [i_8] [i_7 - 1])))) << (((((((/* implicit */_Bool) -1622024806793196929LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13)))) - (157)))))) ? (((/* implicit */int) min((arr_5 [i_7 + 1] [i_7 - 2]), (arr_5 [i_7 + 1] [i_7 - 1])))) : (((/* implicit */int) ((unsigned char) arr_8 [17ULL] [(short)10] [i_8])))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_7] [i_8])))))) & (5554814846693094878LL)));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned char) min(((+(min((((/* implicit */long long int) (short)-5743)), (var_16))))), (((/* implicit */long long int) var_12))));
        arr_26 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) (short)5743)) << (((1622024806793196929LL) - (1622024806793196915LL)))))), (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_1] [i_1 - 2]))) ^ (arr_4 [i_1 - 1])))));
        arr_27 [i_1] &= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_15)), ((unsigned short)10759)))) && ((_Bool)0)))), (-8533120777828370582LL)));
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 12; i_9 += 1) 
    {
        var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 525240258U)) + (arr_21 [i_9] [i_9 - 2])));
        var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)23759)) ? (7947279944596272672LL) : (((/* implicit */long long int) ((/* implicit */int) (short)28856))))) - (((/* implicit */long long int) ((((/* implicit */int) (short)-17490)) ^ (((/* implicit */int) arr_11 [i_9] [(short)15] [i_9])))))));
        arr_30 [i_9] = ((/* implicit */unsigned char) ((((-608268905) * (((/* implicit */int) arr_8 [i_9 + 3] [16U] [i_9])))) / (((/* implicit */int) arr_11 [(short)19] [i_9 - 1] [(short)2]))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 1; i_10 < 17; i_10 += 1) 
    {
        var_29 = ((((/* implicit */_Bool) arr_19 [(unsigned char)5] [(unsigned char)5] [i_10 + 2])) || (((/* implicit */_Bool) arr_13 [i_10] [i_10] [i_10 - 1] [i_10 + 2])));
        var_30 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) (_Bool)0)))) + (2147483647))) << (((((/* implicit */int) var_4)) - (7880)))));
    }
}

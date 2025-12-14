/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114500
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)174))))))) ? (((((/* implicit */long long int) ((var_15) | (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) % (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((unsigned char) var_4))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */short) arr_3 [i_2] [23LL]);
                    var_19 += ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((unsigned char) var_15))) ? (((/* implicit */int) arr_6 [i_1] [i_2])) : (((/* implicit */int) ((signed char) arr_0 [(signed char)21] [(signed char)0]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                arr_13 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1LL))));
                arr_14 [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_14))));
                arr_15 [i_4] [i_3] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_6 [i_4] [i_3])) : (((/* implicit */int) var_9))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        {
                            arr_22 [i_0] [i_3] [i_4] [i_4] [i_5] [i_6] [i_6] |= ((/* implicit */short) var_5);
                            var_20 = ((/* implicit */signed char) ((unsigned int) (~(var_16))));
                        }
                    } 
                } 
            }
            for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                var_21 *= ((/* implicit */unsigned char) var_15);
                arr_25 [11LL] [i_7] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_3] [i_7])) ^ (((/* implicit */int) var_10))))) ^ (var_7)));
            }
            var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_0)) - (((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [i_0] [i_0] [i_0] [15ULL]))))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_8] [i_8])) ? (max((((/* implicit */unsigned int) arr_12 [i_8] [i_8] [i_8] [i_8])), ((~(var_15))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (short)-27756))))))));
        arr_29 [i_8] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_12 [i_8] [i_8] [i_8] [i_8])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_28 [i_8])) : (((/* implicit */int) arr_27 [i_8]))))))) || (((/* implicit */_Bool) var_16))));
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            arr_33 [i_8] [i_9] [i_8] = ((/* implicit */signed char) ((((int) ((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))) | (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_15)))))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */int) (short)-13524)) == (((/* implicit */int) (signed char)-23))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) -5497664865845366289LL)) ? (-113382836280470946LL) : (((/* implicit */long long int) -1758382159))));
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_19 [i_10] [i_8] [(_Bool)1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_4)) * (((/* implicit */int) arr_18 [i_10] [(unsigned char)17] [i_10] [i_8]))))))) ? (((/* implicit */long long int) (~(((((/* implicit */int) arr_18 [i_10] [i_10] [i_8] [i_8])) | (((/* implicit */int) var_11))))))) : ((((_Bool)0) ? (-3915664666694107357LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)23))))))))));
        }
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) max((arr_2 [i_8]), (((/* implicit */unsigned int) ((((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_8))))) >> (((((/* implicit */_Bool) 2032U)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (unsigned short)42489))))))))))));
        arr_36 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)-1)) : (((((/* implicit */_Bool) -3915664666694107357LL)) ? (((/* implicit */int) (unsigned short)60132)) : (1758382150)))))) ? (((/* implicit */int) ((((((/* implicit */int) (short)26252)) >> (((1874001239496593707ULL) - (1874001239496593692ULL))))) == (((/* implicit */int) (short)-13))))) : (-1758382155)));
    }
}

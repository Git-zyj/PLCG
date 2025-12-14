/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159423
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
    var_17 &= ((/* implicit */unsigned char) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) (unsigned short)12)))) : (((/* implicit */int) (unsigned char)25))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
        {
            arr_4 [i_0] [5ULL] [5ULL] &= ((/* implicit */int) arr_2 [i_1]);
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_18 &= ((/* implicit */unsigned long long int) arr_8 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                        var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (unsigned short)61627)) == (((/* implicit */int) (unsigned short)12)))))) ? ((~(((/* implicit */int) ((unsigned char) var_10))))) : (((/* implicit */int) ((-2147483631) <= (((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_2 + 1])))))));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((((unsigned long long int) arr_7 [i_0] [i_2] [i_0] [i_2] [i_1] [(signed char)17])) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_2 - 1]))))))))));
                        arr_9 [i_3] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)61627)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_1))), (((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_0] [i_0] [i_2 + 1] [i_3]) && ((_Bool)1))))))) || (((/* implicit */_Bool) (~((-(arr_2 [i_0]))))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (signed char)-1))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
        {
            var_22 &= ((/* implicit */short) (~(((/* implicit */int) ((var_1) == (18446744073709551591ULL))))));
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((4294967295U) >> (((18446744073709551615ULL) - (18446744073709551602ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4] [i_0] [i_0])))));
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                for (long long int i_6 = 2; i_6 < 18; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        {
                            var_24 &= ((/* implicit */int) arr_17 [i_0]);
                            var_25 = ((/* implicit */unsigned short) arr_16 [i_6 + 1] [i_6 + 1] [i_5] [i_6 + 1] [i_7]);
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((int) arr_14 [i_6 - 2])))));
                            var_27 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) 4095U)))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)20)) : (((/* implicit */int) (short)-8322))));
            var_29 = ((/* implicit */unsigned int) (signed char)19);
            arr_24 [(unsigned short)5] [(unsigned short)5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_12 [i_8] [i_8])), (89064270U)))) ? (((var_11) ? (((((/* implicit */_Bool) 4294967295U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)32764)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-5699)) + (2147483647))) >> (((((((/* implicit */_Bool) arr_7 [i_8] [i_8] [i_8] [i_8] [(unsigned short)18] [(unsigned short)18])) ? (((/* implicit */long long int) var_13)) : (arr_16 [i_0] [i_8] [i_0] [i_0] [i_0]))) - (1779464878LL))))))));
            arr_25 [i_0] = ((/* implicit */long long int) arr_7 [i_0] [17ULL] [17ULL] [i_0] [i_0] [i_8]);
        }
    }
}

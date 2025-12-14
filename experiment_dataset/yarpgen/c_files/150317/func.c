/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150317
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(_Bool)1] = ((/* implicit */_Bool) max((((((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])) | (((/* implicit */int) arr_0 [i_0 - 1])))), (max((((/* implicit */int) arr_1 [i_0 - 1])), (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) (short)26476)) : (((/* implicit */int) (unsigned char)0))))))));
        var_10 &= ((/* implicit */signed char) var_6);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
        {
            arr_10 [i_2] [i_1] [i_2] &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)48913)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))));
            arr_11 [i_1] = ((/* implicit */unsigned short) (unsigned char)94);
        }
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
        {
            arr_14 [2ULL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [1ULL]))) < (((((/* implicit */_Bool) arr_5 [i_3] [2])) ? (4186112U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1])))))));
            /* LoopNest 3 */
            for (unsigned char i_4 = 1; i_4 < 6; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)53349)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)146))))) : ((-(27ULL)))));
                            arr_24 [i_1] [i_1] = ((/* implicit */int) var_7);
                            arr_25 [i_1] [i_1 - 1] [(_Bool)1] [i_1] [i_1] = (unsigned short)16624;
                            var_12 *= ((/* implicit */unsigned char) (unsigned short)22287);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
        {
            var_13 = (_Bool)1;
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_1 - 1]))) : (1066705661U)));
            arr_28 [i_7] [i_7] [i_7] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_7] [i_1] [i_1 - 1] [i_7])) ? (((/* implicit */int) arr_20 [i_7] [i_1] [i_1 - 1] [i_7])) : (((/* implicit */int) arr_20 [i_7] [i_1] [i_1 - 1] [i_7]))));
            var_15 = ((/* implicit */long long int) arr_6 [i_1]);
        }
        var_16 = ((/* implicit */unsigned char) arr_12 [i_1]);
    }
    /* vectorizable */
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
    {
        arr_32 [i_8] [i_8] &= ((/* implicit */short) (_Bool)1);
        var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)12186)) == (((/* implicit */int) (unsigned short)5862))));
    }
    var_18 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))) : ((-(2852631285U)))))));
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (-(((/* implicit */int) var_7)))))));
}

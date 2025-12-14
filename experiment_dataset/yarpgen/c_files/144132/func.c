/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144132
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) arr_2 [i_0])), (arr_4 [i_1]))))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */long long int) (unsigned short)4142);
                        var_12 ^= ((/* implicit */signed char) (unsigned short)61394);
                        arr_12 [i_1] = ((/* implicit */int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)131))) : (((long long int) -1047513757))))));
                        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [(_Bool)1] [i_0])), ((unsigned short)16383))))))))));
                    }
                } 
            } 
            var_14 += ((/* implicit */unsigned long long int) var_3);
        }
        for (int i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    {
                        var_15 += ((/* implicit */unsigned int) min((((unsigned long long int) arr_16 [i_6] [i_5] [i_4] [(_Bool)1])), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_16 [(unsigned short)8] [i_4] [0] [i_6])), ((unsigned char)162)))) * (((/* implicit */int) ((-1202950111) >= (((/* implicit */int) arr_16 [i_6] [i_5] [i_4] [i_0]))))))))));
                        arr_19 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))))) / (((((/* implicit */_Bool) (unsigned short)57066)) ? (956866047U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */unsigned int) (+((-(var_4))))))));
                        var_16 = ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */int) var_2)) * (((/* implicit */int) (unsigned char)131)))) >= ((-(-1202950107))))));
                    }
                } 
            } 
            arr_20 [i_0] [i_4] [i_4] |= ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)61393)))), ((+(((/* implicit */int) arr_10 [i_4] [(unsigned short)2] [i_4] [(unsigned char)4])))))) == (((/* implicit */int) arr_15 [3] [(unsigned char)1] [i_0] [i_0]))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    {
                        arr_28 [i_9] [i_8] = ((/* implicit */unsigned short) -1202950138);
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            arr_31 [i_0] [i_8] [i_8] [i_9] [(short)6] [i_10] [i_10] = ((/* implicit */int) arr_25 [i_0] [i_0] [8]);
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((1935236987) + (((/* implicit */int) (unsigned short)4143))))) | (arr_13 [i_8])));
                        }
                    }
                } 
            } 
            var_18 = ((/* implicit */long long int) (unsigned short)61393);
            arr_32 [i_7] |= ((/* implicit */unsigned long long int) (~(842854766U)));
        }
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_8)) ? (-423918927) : (((/* implicit */int) (signed char)-5)))))))))));
    }
    for (int i_11 = 1; i_11 < 15; i_11 += 4) 
    {
        var_20 = ((((/* implicit */int) var_2)) >> (((/* implicit */int) var_7)));
        arr_37 [i_11 - 1] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)45915)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))), (arr_33 [i_11])))) ? (((/* implicit */int) (short)-512)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)45916)) : (((/* implicit */int) var_8)))) < (((/* implicit */int) arr_34 [i_11])))))));
    }
    var_21 = ((/* implicit */long long int) var_1);
    var_22 = ((/* implicit */int) ((long long int) (((!(((/* implicit */_Bool) 1202950110)))) ? (((/* implicit */unsigned int) var_3)) : (3787355642U))));
}

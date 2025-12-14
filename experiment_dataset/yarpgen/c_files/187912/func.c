/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187912
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
    for (int i_0 = 4; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */int) var_4)) >> ((((~(((/* implicit */int) arr_0 [i_0])))) + (264)))))));
        var_20 += ((/* implicit */unsigned long long int) arr_0 [0U]);
    }
    for (int i_1 = 4; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_1 [(_Bool)1]))) ? (((/* implicit */int) max((arr_3 [i_1]), (((/* implicit */unsigned short) (_Bool)1))))) : (arr_4 [i_1 - 2] [i_1 - 4])))) || ((!(((/* implicit */_Bool) (unsigned char)112)))))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (long long int i_3 = 1; i_3 < 13; i_3 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((((/* implicit */int) (unsigned char)28)) - (28)))))) ? (((unsigned long long int) arr_11 [i_1 - 4] [i_1 + 1] [i_1 - 3] [i_1])) : (((/* implicit */unsigned long long int) var_12)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            {
                                arr_19 [i_1 - 3] [i_5] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned char) arr_13 [i_1] [i_2] [i_3] [i_4] [i_5] [i_5]))))) ? (((((/* implicit */_Bool) arr_18 [i_1] [i_2] [i_1] [i_4] [i_5])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5] [i_4])))))))) * (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_6 [i_4] [i_4])) >> (((((/* implicit */int) arr_8 [i_2] [i_2])) - (48976)))))))));
                                arr_20 [i_1 + 1] [i_2] [i_2] [i_4] [i_5] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)8)), (2943363398735218570ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) max((((/* implicit */int) max((arr_12 [i_1] [i_1 - 4] [i_1 + 2] [i_1]), (arr_12 [i_1] [i_1 - 4] [i_1 + 2] [i_1])))), (((((/* implicit */_Bool) arr_12 [(unsigned char)4] [i_1 - 4] [i_1 + 2] [i_1 - 2])) ? (436133029) : (((/* implicit */int) (_Bool)0))))));
        var_24 = ((/* implicit */signed char) arr_11 [i_1] [i_1] [i_1] [i_1]);
    }
    for (int i_6 = 4; i_6 < 13; i_6 += 4) /* same iter space */
    {
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned short) (+(((long long int) (!(arr_14 [(unsigned short)9] [i_6 - 3] [(unsigned char)15] [i_6]))))));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_6] [i_6 + 1])) ? (((/* implicit */int) arr_6 [i_6 - 1] [i_6 - 2])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-1631)) : (((/* implicit */int) (short)-1))))))))) : (max((((/* implicit */long long int) max((arr_6 [i_6 - 3] [i_6]), ((unsigned char)45)))), (max((((/* implicit */long long int) arr_0 [i_6])), (var_6)))))));
    }
    for (int i_7 = 4; i_7 < 13; i_7 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_7] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_12 [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_12 [i_7] [i_8] [4LL] [i_8]))));
            /* LoopNest 3 */
            for (unsigned char i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (short i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        {
                            arr_38 [i_8] [i_8] [i_9] [i_10] [i_10] = ((/* implicit */long long int) var_12);
                            arr_39 [i_7 - 1] [i_8] [i_8] [i_7 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_7 - 4] [i_7]))));
                        }
                    } 
                } 
            } 
            var_27 = arr_6 [i_7] [i_8];
            var_28 += ((/* implicit */unsigned char) ((short) 567344929));
        }
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 3) 
        {
            arr_43 [i_7] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)-1)) : (-1595063032)));
            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_7])) & (arr_16 [i_7] [i_12] [i_7])))) ? (arr_35 [i_7] [i_7 + 2] [i_12] [i_7] [i_12]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) arr_11 [i_7] [i_7] [(_Bool)1] [i_12])) : (((/* implicit */int) arr_13 [i_7 + 1] [i_7 + 1] [(unsigned char)2] [i_7] [4] [i_12]))))))))));
        }
        for (unsigned char i_13 = 0; i_13 < 16; i_13 += 4) 
        {
            arr_46 [i_7] [i_13] [i_13] = ((/* implicit */_Bool) (((_Bool)1) ? (7042668154313512319ULL) : (((/* implicit */unsigned long long int) -436133020))));
            var_30 = ((unsigned long long int) (short)32767);
            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) var_8))));
        }
        arr_47 [i_7] [i_7] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_11 [i_7 - 3] [i_7] [i_7] [i_7 + 3]))))));
        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (unsigned char)255))));
    }
    var_33 = ((/* implicit */long long int) min((((/* implicit */unsigned char) var_16)), (((unsigned char) var_1))));
    var_34 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (_Bool)1)), (4061596425548172931LL)));
}

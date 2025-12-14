/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136636
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
    var_13 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (unsigned short)59834)))), (((/* implicit */int) ((unsigned char) var_11)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_14 += ((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 - 1]);
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (((+(arr_0 [(_Bool)1]))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                arr_8 [i_0 + 2] [i_1] [i_0 + 2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_0] [(_Bool)1])) != (arr_3 [i_0]))))));
                arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) arr_4 [i_0] [i_0 - 1] [i_0]);
            }
            arr_10 [i_0] [i_0 + 2] = ((/* implicit */short) (+(((/* implicit */int) arr_5 [i_0] [i_0]))));
            /* LoopSeq 1 */
            for (short i_3 = 1; i_3 < 18; i_3 += 2) 
            {
                arr_13 [i_0] [i_1] [1] [i_3 + 2] = ((short) arr_0 [i_0]);
                var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_3 + 3] [i_1] [i_3] [18]))));
                arr_14 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_3 + 4] [i_3 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(short)7] [(short)7] [i_0 + 2]))) : (arr_3 [i_0])));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) arr_1 [i_0]);
                            var_18 = ((/* implicit */long long int) ((short) 2365450895875014353ULL));
                        }
                    } 
                } 
                arr_21 [0ULL] [0ULL] [i_3 + 4] [i_3] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 16059948202093134479ULL))));
            }
        }
        for (signed char i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
        {
            var_19 += ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [(_Bool)1] [i_0 + 1]))));
            var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))) >= (2365450895875014342ULL)));
        }
        for (signed char i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0 - 1] [i_7] [i_7]);
            var_22 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_18 [(unsigned short)13] [i_0] [i_0] [i_7] [(unsigned short)13])) ? (16081293177834537276ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [0ULL] [0ULL] [(unsigned short)21] [i_7])))))));
        }
        for (signed char i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
        {
            var_23 &= arr_16 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0];
            var_24 = ((int) arr_22 [i_0]);
        }
        arr_30 [i_0] = arr_1 [i_0 + 1];
        arr_31 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (+(arr_24 [i_0]))));
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)52299)), (16081293177834537273ULL)))) ? (((/* implicit */int) (unsigned short)17984)) : (((/* implicit */int) (short)-17689))))) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_33 [i_9])) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned char)16)))))))));
        arr_36 [i_9] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) 4684179829108563971ULL)) && (((/* implicit */_Bool) arr_33 [i_9 - 1])))));
    }
    for (int i_10 = 0; i_10 < 23; i_10 += 4) 
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 23; i_11 += 3) 
        {
            for (int i_12 = 0; i_12 < 23; i_12 += 4) 
            {
                for (unsigned short i_13 = 3; i_13 < 22; i_13 += 3) 
                {
                    {
                        arr_46 [i_10] [i_11] = ((/* implicit */short) min((((/* implicit */int) ((signed char) arr_38 [i_13 - 2]))), (((((/* implicit */_Bool) arr_34 [i_13 - 1])) ? (((/* implicit */int) arr_34 [i_13 - 1])) : (((/* implicit */int) arr_38 [i_13 - 3]))))));
                        arr_47 [i_11] [i_10] [(short)7] [i_11] [i_12] [i_13 + 1] = ((/* implicit */short) max(((~(((/* implicit */int) (_Bool)1)))), (866230927)));
                        /* LoopSeq 2 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_26 = ((/* implicit */short) (unsigned char)16);
                            arr_50 [i_10] [i_11] [i_11] [i_12] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_11])) ? (max((((/* implicit */unsigned long long int) arr_48 [i_13 + 1] [i_11] [i_13 + 1] [i_13 - 1] [i_13 - 2])), (arr_45 [i_11] [i_11] [i_13 - 3] [i_13 - 1] [i_13 - 1]))) : (((/* implicit */unsigned long long int) arr_44 [i_10] [21LL]))));
                            var_27 = ((/* implicit */unsigned short) (((+(13762564244600987644ULL))) >= ((~(((unsigned long long int) arr_38 [i_10]))))));
                        }
                        for (short i_15 = 0; i_15 < 23; i_15 += 4) 
                        {
                            arr_54 [0] [i_11] [i_11] [i_11] [i_11] [(_Bool)1] = ((/* implicit */unsigned short) 1605900393);
                            var_28 = max((var_10), (((/* implicit */long long int) ((int) arr_41 [i_12] [(unsigned char)22] [i_10]))));
                        }
                        var_29 = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) ((signed char) (_Bool)1))))), ((!(((/* implicit */_Bool) arr_53 [i_10] [i_13 - 1] [i_12] [(_Bool)1] [i_10]))))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) arr_43 [i_10])) >= (((/* implicit */int) arr_43 [i_10])))));
        var_31 = ((/* implicit */unsigned long long int) (_Bool)1);
        var_32 = ((/* implicit */long long int) ((((/* implicit */int) (short)-1)) >= (-1218775491)));
    }
    var_33 = ((/* implicit */short) var_2);
}

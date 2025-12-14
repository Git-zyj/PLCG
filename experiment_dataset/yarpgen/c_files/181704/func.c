/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181704
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) (~(arr_1 [i_0] [i_0])));
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) 13706927195505104593ULL))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (short)-12133)) * (((/* implicit */int) (_Bool)1))))))) > ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (13929084306585667751ULL))))))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                for (int i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */signed char) arr_2 [i_0] [i_0] [i_0]);
                        arr_9 [i_0] [(unsigned char)8] [i_0] = (-(min((((/* implicit */unsigned long long int) (signed char)24)), (1941934238865014767ULL))));
                        var_16 = ((/* implicit */int) 7601822041501913052LL);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        var_17 = ((((/* implicit */int) ((((/* implicit */int) arr_10 [(signed char)5])) == (((/* implicit */int) arr_10 [i_4]))))) <= (((/* implicit */int) ((unsigned short) (signed char)10))));
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    for (signed char i_8 = 2; i_8 < 9; i_8 += 3) 
                    {
                        {
                            var_18 |= ((/* implicit */unsigned int) ((long long int) (signed char)-15));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) -5067328006236632466LL)) || (((((/* implicit */int) (signed char)7)) == (((/* implicit */int) (signed char)-11))))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((int) (-(((/* implicit */int) arr_2 [10U] [17] [(short)14]))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (int i_9 = 1; i_9 < 9; i_9 += 1) 
            {
                var_21 = ((/* implicit */int) (unsigned char)21);
                var_22 *= ((/* implicit */_Bool) arr_15 [6]);
            }
            for (unsigned int i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    for (int i_12 = 2; i_12 < 9; i_12 += 2) 
                    {
                        {
                            arr_34 [i_4] [i_4] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_25 [(_Bool)1] [(_Bool)1] [7ULL])))) >= (((/* implicit */int) (signed char)10))));
                            var_23 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_4] [i_4] [8U] [1U] [i_4] [i_4])) % (arr_32 [8U] [i_4] [0ULL] [i_4] [i_4])))) < (((unsigned long long int) arr_14 [(_Bool)1] [i_5]))));
                            arr_35 [i_4] [i_4] [0] [i_4] [i_4] [0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_4] [i_4] [i_4])) < (((/* implicit */int) (signed char)0))))) == (arr_32 [(short)9] [i_11] [i_11] [i_11] [0ULL])));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    var_24 = ((/* implicit */unsigned short) ((unsigned char) (signed char)-11));
                    var_25 = ((/* implicit */unsigned short) (-(((unsigned long long int) (signed char)0))));
                    arr_39 [i_4] [i_5] [i_10] [i_5] [i_4] = 2459662857U;
                }
            }
            for (unsigned int i_14 = 0; i_14 < 10; i_14 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned char) ((short) (signed char)63));
                arr_43 [i_4] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (signed char)-32))))));
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    for (unsigned short i_16 = 0; i_16 < 10; i_16 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) (unsigned short)45757);
                            var_28 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(arr_8 [i_4] [1U] [(short)2] [10ULL] [i_16]))))));
                        }
                    } 
                } 
            }
            var_29 = ((/* implicit */_Bool) arr_27 [i_5]);
            /* LoopNest 3 */
            for (long long int i_17 = 0; i_17 < 10; i_17 += 4) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 1) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) (signed char)-5);
                            var_31 -= ((/* implicit */signed char) (((-(-2147483634))) <= (((((/* implicit */int) arr_3 [i_4] [i_5] [(_Bool)1])) + (((/* implicit */int) (unsigned short)63540))))));
                            var_32 = ((/* implicit */signed char) ((long long int) arr_45 [6] [i_19]));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_20 = 0; i_20 < 10; i_20 += 3) 
        {
            var_33 = ((/* implicit */long long int) arr_18 [i_4] [i_4] [i_4] [i_4]);
            var_34 = (-(((/* implicit */int) ((((/* implicit */int) arr_54 [i_20] [i_4] [i_20])) == (((/* implicit */int) (signed char)-10))))));
        }
    }
    var_35 -= ((/* implicit */unsigned long long int) ((unsigned int) (((~(((/* implicit */int) (signed char)-56)))) <= (((/* implicit */int) ((((/* implicit */int) var_10)) > (var_1)))))));
}

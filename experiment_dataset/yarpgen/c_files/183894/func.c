/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183894
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)8191))) : (-6511014985893662367LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61189))))))))) ? ((-((-(8U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
        var_19 ^= arr_0 [i_0];
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((arr_5 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_10 [i_0] = ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_6 [i_2]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_15))));
                    arr_11 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_2]))));
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] [i_3] = ((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) (unsigned short)27007)) ? (2147475456U) : (arr_0 [(signed char)11]))), (((/* implicit */unsigned int) (short)-19433))))));
        var_21 = ((/* implicit */unsigned short) ((((1ULL) > (((/* implicit */unsigned long long int) 2789527007U)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)3775))))) : (arr_5 [2])));
        /* LoopSeq 2 */
        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_15))))))));
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
            {
                arr_22 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (17) : (arr_19 [i_4] [i_4])))) ? (((/* implicit */int) (((!(arr_20 [i_3] [i_3] [i_3] [i_3]))) && (((/* implicit */_Bool) (-(arr_12 [12ULL] [12ULL]))))))) : (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        {
                            var_23 *= arr_20 [i_7] [1U] [i_4] [i_3];
                            arr_28 [i_7] [i_4] [i_5] [i_4] [i_3] = ((/* implicit */signed char) 21);
                        }
                    } 
                } 
            }
            for (short i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 2; i_9 < 14; i_9 += 3) 
                {
                    for (signed char i_10 = 1; i_10 < 12; i_10 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) arr_13 [5U] [5U]);
                            var_25 += ((/* implicit */short) (_Bool)1);
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_18 [i_4] [i_4 + 1] [i_4 - 1] [i_4 - 1]))))));
                arr_39 [i_4] [i_4] = ((/* implicit */unsigned char) 4539628424389459968ULL);
                var_27 = ((/* implicit */unsigned long long int) arr_19 [i_4 + 1] [i_4]);
            }
        }
        for (unsigned int i_11 = 0; i_11 < 15; i_11 += 1) 
        {
            arr_43 [i_11] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) ((2147491838U) != (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) : (((/* implicit */int) (signed char)-114))))));
            var_28 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_20 [i_11] [i_11] [i_11] [i_3]))))));
        }
    }
}

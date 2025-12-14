/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159813
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
    var_14 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) var_13)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) ((unsigned char) (-(((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_6)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            var_16 = ((/* implicit */signed char) ((int) ((signed char) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) var_13))))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned int) ((long long int) max((arr_2 [(unsigned short)2] [(unsigned short)2] [i_1 - 3]), (((/* implicit */long long int) ((short) (signed char)-49))))));
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    for (signed char i_4 = 2; i_4 < 19; i_4 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_4 + 1] [i_4] [i_4 + 2] [i_4] [i_4])) % (((/* implicit */int) var_13))))) ? (min((arr_7 [i_1 - 3] [i_1 - 2] [i_1 - 1] [i_1 - 1]), (((/* implicit */long long int) arr_12 [i_4] [i_4 + 2] [i_4] [i_2] [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (-(((/* implicit */int) (signed char)63))))))))))));
                            arr_14 [i_4 + 2] [i_4] [i_3] [i_4] [i_4 - 1] [i_4 - 1] = ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
                arr_15 [1U] [(short)11] [i_0] &= ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) max((arr_8 [i_2] [i_1 - 3] [i_1] [i_0]), (arr_8 [i_0] [i_0] [i_0] [i_0])))))));
                var_19 ^= ((/* implicit */unsigned char) arr_0 [i_2] [(unsigned short)3]);
                var_20 = ((/* implicit */long long int) ((var_5) ^ (min((((/* implicit */unsigned long long int) ((arr_13 [i_2] [i_1] [12U] [i_2] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), ((-(var_5)))))));
            }
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
            {
                var_21 = (signed char)22;
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        {
                            arr_25 [20ULL] [20ULL] [i_5] [i_1] [i_0] = ((/* implicit */unsigned int) max((((arr_24 [i_7] [i_6] [i_5] [i_0] [i_0] [18ULL]) / (arr_24 [i_7] [i_6] [i_5] [i_1 - 3] [i_0] [i_0]))), (((arr_24 [i_0] [6LL] [i_5] [6LL] [6LL] [i_7]) % (((/* implicit */int) var_2))))));
                            var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((unsigned int) arr_21 [i_1 + 1] [i_1] [i_5] [(signed char)19] [(signed char)0] [i_7])) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (arr_21 [i_0] [i_1 - 3] [i_1] [i_1] [i_7] [i_7])));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 2) 
            {
                for (long long int i_9 = 3; i_9 < 17; i_9 += 3) 
                {
                    {
                        arr_33 [i_9] [i_9] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_6 [i_0] [i_0])))) > (((unsigned int) 0LL)))));
                        var_23 -= ((/* implicit */long long int) arr_0 [i_1] [i_8]);
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned char) ((max((min((((/* implicit */long long int) 3407862507U)), (0LL))), (((/* implicit */long long int) (signed char)-76)))) == (0LL)));
        }
        arr_34 [0LL] |= ((/* implicit */unsigned long long int) -1LL);
        var_25 += ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_21 [(unsigned short)9] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_0] [(short)9] [i_0])) : (((unsigned long long int) var_11)))));
    }
    var_26 = ((/* implicit */short) ((unsigned long long int) (~((-(((/* implicit */int) var_6)))))));
    /* LoopNest 3 */
    for (signed char i_10 = 0; i_10 < 15; i_10 += 1) 
    {
        for (int i_11 = 1; i_11 < 14; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) 
            {
                {
                    var_27 = ((/* implicit */long long int) var_10);
                    var_28 = ((/* implicit */signed char) arr_41 [i_11] [i_11] [i_11]);
                    var_29 |= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((((arr_7 [i_12] [i_11 - 1] [(signed char)12] [i_10]) ^ (-1LL))) | (((/* implicit */long long int) arr_26 [i_12] [i_11 + 1] [i_10] [i_10])))))));
                    arr_44 [(unsigned short)11] [0LL] [i_11] = ((/* implicit */int) var_13);
                }
            } 
        } 
    } 
}

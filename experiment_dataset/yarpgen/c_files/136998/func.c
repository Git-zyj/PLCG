/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136998
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
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [2LL] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((signed char) var_10))), (var_1)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [(unsigned short)6])) : (((/* implicit */int) var_8)))) : (((((/* implicit */int) arr_0 [(unsigned char)8])) ^ (((/* implicit */int) arr_0 [(signed char)0]))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((short) arr_4 [i_1] [i_0] [i_1]))), (min((((/* implicit */unsigned short) var_10)), (arr_1 [i_1 - 2])))));
            arr_6 [i_0] = ((/* implicit */unsigned char) var_8);
            var_12 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_1 - 1]);
            arr_7 [i_0] [i_1] [i_1] = (!(((/* implicit */_Bool) 14396223290783480246ULL)));
            arr_8 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)16979), (((/* implicit */unsigned short) (_Bool)1)))))) ^ (((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_3 [i_0] [i_0]))))));
        }
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_13 = ((/* implicit */_Bool) var_7);
        var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (arr_10 [i_2]) : (((/* implicit */unsigned long long int) var_0)))) >> (((arr_10 [(unsigned char)17]) - (8161307524833244020ULL)))))) ? (((/* implicit */unsigned long long int) ((arr_9 [i_2] [i_2]) % (((((/* implicit */_Bool) var_2)) ? (arr_9 [i_2] [i_2]) : (((/* implicit */int) var_11))))))) : (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_9 [i_2] [19])) : (arr_10 [i_2]))), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2]))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (unsigned int i_4 = 1; i_4 < 22; i_4 += 1) 
            {
                {
                    arr_17 [i_2] [i_2] [13] [i_3] = ((/* implicit */_Bool) var_0);
                    var_15 = ((/* implicit */unsigned char) (-(((((long long int) arr_12 [i_4] [(short)8] [i_2])) % (arr_12 [i_2] [i_3] [i_4 - 1])))));
                    arr_18 [i_2] [17] = ((/* implicit */signed char) (-(arr_10 [i_2])));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        arr_23 [i_5] = ((/* implicit */_Bool) ((arr_14 [i_5] [i_5 - 1] [i_5 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [i_5 - 1] [i_5 - 1]))) : (max((((/* implicit */unsigned long long int) arr_14 [i_5] [i_5 - 1] [i_5 - 1])), (var_9)))));
        arr_24 [i_5] = ((/* implicit */unsigned short) ((-1363422909123843487LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)122)))));
        arr_25 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((unsigned int) var_8));
        var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_5])), (var_3)))) <= (((/* implicit */int) arr_0 [i_5])))))) | (arr_10 [i_5])));
    }
    /* LoopNest 2 */
    for (signed char i_6 = 2; i_6 < 22; i_6 += 2) 
    {
        for (unsigned int i_7 = 3; i_7 < 21; i_7 += 3) 
        {
            {
                arr_30 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)134))));
                var_17 ^= var_0;
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        var_18 = ((/* implicit */int) max((arr_16 [i_7] [i_7 - 1]), (((_Bool) arr_16 [i_7] [i_7 - 1]))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((var_6), (((/* implicit */int) arr_34 [i_6] [i_6] [i_6] [i_7] [i_6])))), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_4)))))))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_26 [i_7 - 2]) : (arr_31 [i_7 - 2] [i_8] [i_7 - 2]))))));
                        arr_36 [i_6] [i_6] [i_6] [i_7] [14ULL] [i_6] = ((/* implicit */unsigned int) arr_13 [i_9] [i_7]);
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) arr_34 [i_10] [i_7] [i_7] [i_7] [i_6]);
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_33 [i_6] [i_7] [i_8] [i_10] [i_7]))));
                    }
                    arr_39 [i_6] [i_6] [i_8] [i_7] = ((/* implicit */unsigned short) ((int) min((((/* implicit */int) max((((/* implicit */short) var_7)), (var_4)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (1967343491))))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_7);
}

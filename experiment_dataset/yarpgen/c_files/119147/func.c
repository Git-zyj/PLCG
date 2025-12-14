/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119147
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [5])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 113744868)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [19U])))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3867))) : (3U))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) arr_1 [i_0]))));
        arr_5 [i_0] = arr_3 [i_0];
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_6 [i_1]))) ? ((((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2904213020U)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1])))))));
        var_15 = ((/* implicit */short) arr_7 [(signed char)3]);
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            arr_11 [(unsigned char)18] = ((/* implicit */unsigned long long int) ((int) arr_6 [i_1]));
            arr_12 [18] [i_2 - 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [i_1]), (arr_3 [i_2])))) ? (((/* implicit */int) ((unsigned short) (signed char)-15))) : (((/* implicit */int) ((signed char) arr_10 [i_1] [i_1] [i_2 + 2])))))) ? (((/* implicit */int) arr_10 [i_2] [i_2] [0U])) : (((/* implicit */int) arr_10 [i_2 + 1] [i_2] [15U]))));
        }
    }
    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_4 = 4; i_4 < 19; i_4 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned long long int) ((short) ((signed char) (unsigned char)170)));
            arr_19 [3] [3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_4]))) : (874325167U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)170))));
            arr_20 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */long long int) 16777215U)) : (arr_16 [i_4 - 3])))) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) arr_15 [i_4 + 2] [i_4 + 1]))));
        }
        for (unsigned short i_5 = 4; i_5 < 19; i_5 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 127)), (arr_13 [i_3])))), (arr_22 [i_3] [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_3 [15])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5] [i_3]))))))));
            var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((arr_18 [i_5 - 3] [i_5] [(unsigned short)0]), (arr_18 [i_5 - 2] [i_5] [i_5])))), (((unsigned long long int) (unsigned char)128))));
            var_19 += ((/* implicit */signed char) arr_0 [i_3] [i_3]);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            for (signed char i_7 = 3; i_7 < 20; i_7 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)4)) ? (4294967293U) : (28U)))) ? (((/* implicit */int) arr_9 [i_7 - 2] [i_7 - 1])) : (((((/* implicit */_Bool) 2169918058804804505LL)) ? (((/* implicit */int) arr_21 [i_3] [i_7])) : (888142927)))))) ? (((/* implicit */unsigned int) arr_24 [i_7] [i_7] [i_7])) : (((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)136)))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3])))))))));
                    arr_27 [i_3] [i_6] = ((/* implicit */signed char) (unsigned char)186);
                }
            } 
        } 
    }
    for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_0 [i_8] [i_8]), (((/* implicit */unsigned long long int) min((1U), (((/* implicit */unsigned int) (short)-10)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) arr_10 [i_8] [i_9] [i_8])) : (((/* implicit */int) (_Bool)1))))) : (((unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (2U) : (4294967292U))))));
            arr_33 [i_8] [i_9] [i_8] = ((((/* implicit */_Bool) arr_28 [(_Bool)1])) ? (((arr_29 [i_9]) ? (((/* implicit */int) arr_29 [i_9])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)12288)));
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_8])) ? ((((_Bool)1) ? (3U) : (((/* implicit */unsigned int) 1281932617)))) : (arr_28 [i_8])));
        }
        var_23 = ((/* implicit */signed char) arr_17 [(_Bool)1]);
        arr_34 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775792LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5))) : (2167731220U)))) ? (((((/* implicit */_Bool) arr_17 [i_8])) ? (arr_22 [i_8] [i_8] [(unsigned short)4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)83))))) : (((/* implicit */unsigned long long int) arr_26 [i_8] [i_8] [i_8] [i_8]))))) ? (arr_23 [i_8]) : (((/* implicit */int) ((_Bool) ((int) (unsigned short)0))))));
    }
    var_24 = ((/* implicit */signed char) var_2);
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (var_0)))) ? (((((/* implicit */_Bool) (unsigned short)53249)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned char)222))));
}

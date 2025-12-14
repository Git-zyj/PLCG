/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143483
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
    var_16 = ((/* implicit */_Bool) var_14);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_17 *= ((/* implicit */short) (~(((/* implicit */int) arr_1 [1LL]))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [0ULL])))))))));
        var_18 = ((/* implicit */int) (signed char)124);
    }
    /* LoopSeq 2 */
    for (short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)248)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)113)), ((short)31744))))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (1073741820LL) : (((/* implicit */long long int) 1914085108U))))))));
        var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-118)) && (((/* implicit */_Bool) (short)31743))));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    for (short i_5 = 1; i_5 < 12; i_5 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_8 [i_3] [i_4] [i_3] [i_4]))));
                            var_22 = ((/* implicit */_Bool) arr_9 [i_1] [i_5 + 1] [i_3]);
                            var_23 = ((((/* implicit */int) arr_14 [i_1] [(short)12] [i_3] [i_4] [(short)11] [i_5 - 1])) | (((/* implicit */int) (signed char)119)));
                        }
                    } 
                } 
            } 
            arr_16 [i_2] = ((/* implicit */unsigned short) arr_8 [i_2] [0ULL] [i_1] [0ULL]);
            var_24 += ((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_1] [i_2] [i_2] [i_2] [i_2] [i_2]))));
            arr_17 [i_2] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_14 [8ULL] [10LL] [i_1] [8ULL] [i_2] [i_2])), (min((561850441793536LL), (((/* implicit */long long int) var_4))))));
        }
        for (int i_6 = 3; i_6 < 11; i_6 += 2) 
        {
            var_25 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-110)) ? (arr_20 [i_1] [i_1] [i_6]) : (arr_9 [i_1] [i_1] [i_1])))) ? (arr_4 [(unsigned char)3] [i_6 - 1]) : (((((/* implicit */_Bool) 56690910816853770ULL)) ? (arr_20 [i_1] [i_1] [i_6 - 2]) : (((/* implicit */int) arr_10 [i_1]))))))) && (((/* implicit */_Bool) arr_3 [i_1] [i_6]))));
            var_26 = ((/* implicit */signed char) min((var_26), (arr_3 [i_6 - 2] [i_1])));
            arr_21 [i_1] [i_1] [i_1] = ((/* implicit */long long int) 3067391374U);
        }
        for (int i_7 = 0; i_7 < 14; i_7 += 4) 
        {
            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) arr_23 [i_1] [i_7])), (arr_19 [i_1] [i_7]))))))));
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-31730)) && (((/* implicit */_Bool) (short)-31760)))))));
                var_29 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(arr_13 [i_1] [i_8])))), (min((arr_8 [i_8] [(_Bool)1] [i_7] [i_8]), (((/* implicit */unsigned int) arr_13 [i_1] [i_8]))))));
                arr_27 [i_1] [i_1] [i_1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_8])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_8] [i_7] [i_8] [4LL] [i_1] [(unsigned short)7])) && (((((/* implicit */int) arr_26 [i_8] [i_8])) != (((/* implicit */int) (signed char)124))))))) : (((/* implicit */int) arr_6 [i_1] [i_8] [i_8]))));
            }
        }
        var_30 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1] [(unsigned char)13] [i_1] [i_1] [i_1]))));
    }
    for (long long int i_9 = 0; i_9 < 25; i_9 += 3) 
    {
        var_31 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)119))));
        var_32 |= (+(((/* implicit */int) arr_28 [i_9] [i_9])));
        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) var_4))));
        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) arr_29 [i_9] [i_9])) | (((/* implicit */int) arr_29 [i_9] [i_9])))) : (((/* implicit */int) var_3))));
    }
    var_35 += ((/* implicit */unsigned long long int) (short)31711);
}

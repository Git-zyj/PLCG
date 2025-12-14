/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111354
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
    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) var_15))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */int) arr_1 [i_0]);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned char) arr_6 [i_1 + 3] [20ULL] [i_2 + 2] [i_3 - 2] [i_3])), (var_6))));
                        var_22 = ((/* implicit */long long int) ((signed char) (+(arr_1 [(signed char)0]))));
                        var_23 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) min((((/* implicit */signed char) arr_7 [i_0] [i_0] [i_0])), (arr_4 [(signed char)1] [(signed char)1] [(signed char)1] [17LL])))))), (((/* implicit */int) arr_5 [i_0] [i_1] [i_3]))));
                    }
                    arr_8 [i_0] [i_1] [17ULL] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_5 [i_0] [i_2 + 2] [16LL])) | (((/* implicit */int) arr_6 [i_1 + 3] [i_1 + 3] [i_1 - 2] [i_1 - 1] [i_2 - 1]))))));
                    arr_9 [i_0] [i_0] [i_0] = arr_5 [i_0] [i_1] [i_0];
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)17])) ? (((/* implicit */int) arr_6 [i_0] [14] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0] [(signed char)8])) : ((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 3; i_7 < 12; i_7 += 2) 
                    {
                        arr_20 [i_7] [i_6] [i_5] [5ULL] = arr_19 [i_7 - 2] [i_5 - 1] [i_5] [i_5 + 1];
                        var_25 = ((long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_4] [i_4]))))) ? ((-(((/* implicit */int) (unsigned char)144)))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)253))))));
                    }
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        var_26 = ((/* implicit */short) (+((-9223372036854775807LL - 1LL))));
                        arr_23 [i_4] [i_5] [i_5] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+((+(9223372036854775807LL)))))) & (((unsigned long long int) arr_4 [i_5 - 1] [i_5 - 1] [i_6] [i_4]))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_16 [i_8] [i_5] [i_5] [i_4])))) : (arr_15 [i_4] [i_5 - 2])));
                    }
                    var_28 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_18 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))) : (var_5))));
                    var_29 = arr_4 [(signed char)5] [i_6] [(signed char)5] [i_4];
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned char) arr_17 [i_4] [i_4] [i_4] [i_4]);
        var_31 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) 9223372036854775799LL)) : (11978448294405292924ULL)))))));
        var_32 ^= ((/* implicit */short) var_8);
    }
    var_33 = var_2;
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153491
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) arr_2 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_18 = ((/* implicit */_Bool) arr_4 [i_0] [11U] [11U]);
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_11 [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1] [i_1 + 1]), (arr_11 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] [i_1 + 1])))) && (((/* implicit */_Bool) max(((unsigned char)123), (((/* implicit */unsigned char) var_6)))))));
                        var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) < (var_16))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-1591537078)))) >= (((((/* implicit */_Bool) (signed char)120)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) : ((~(((/* implicit */int) max((var_14), ((_Bool)0))))))))));
                        arr_12 [i_0] [i_1 + 1] [i_3 + 1] [i_2] = ((/* implicit */unsigned char) arr_9 [i_3] [i_2] [i_2] [i_2] [i_0]);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            arr_16 [i_4] = ((unsigned int) (-(((/* implicit */int) (_Bool)1))));
            var_21 |= ((/* implicit */signed char) (unsigned char)92);
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) var_7))))))));
        }
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_23 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_18 [i_7] [i_6])) : (((/* implicit */int) arr_18 [i_5 - 1] [i_0]))))) + (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_15))));
                        arr_26 [i_0] [i_5] [i_6] [i_7] [i_0] [i_5] = ((/* implicit */unsigned long long int) ((unsigned char) ((((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */int) (_Bool)1)))) < ((-(((/* implicit */int) var_3)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_31 [i_0] [i_6] [2ULL] [i_8] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((18446744073709551615ULL) % (6953767246219174739ULL)))) ? (((/* implicit */int) var_0)) : (-1738546697)));
                        arr_32 [i_8] [i_8] [1ULL] [10U] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (var_10)));
                        arr_33 [i_8] [i_8] [i_5 - 1] [i_8] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                    }
                    var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                    var_25 = ((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-32))))), ((signed char)89)))), ((-(((((/* implicit */int) var_13)) | (((/* implicit */int) arr_22 [i_0] [i_5 - 1] [i_0]))))))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */_Bool) var_6);
}

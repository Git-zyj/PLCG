/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118668
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
    var_18 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) 8475554689898997337LL)) >= (((((/* implicit */_Bool) var_17)) ? (var_9) : (((/* implicit */unsigned long long int) var_10)))))), (var_8)));
    var_19 = ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */unsigned long long int) ((var_6) && (((/* implicit */_Bool) (unsigned char)85))))), (max((((/* implicit */unsigned long long int) var_14)), (var_16))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (14968871921814398165ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 2]))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                for (unsigned char i_3 = 2; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
                        arr_10 [(unsigned short)17] [i_2] [(unsigned short)21] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_3)));
                        arr_11 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 - 2] [i_0 - 2] [i_3 - 1])) ? (arr_9 [i_2 - 2] [i_0 - 2]) : (arr_9 [i_2 - 2] [i_0 - 2])));
                        var_22 = ((/* implicit */signed char) ((arr_8 [i_3 - 1] [i_2 - 1] [1ULL] [i_0 + 3] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20)))));
                        arr_12 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_2] [i_0])) ? ((-(arr_3 [i_1] [i_2 + 2] [i_3]))) : (((/* implicit */unsigned long long int) arr_8 [(short)0] [(short)0] [i_2] [i_2] [i_2]))));
                    }
                } 
            } 
            arr_13 [i_0] = ((/* implicit */_Bool) 14641234650987004243ULL);
        }
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            arr_16 [i_0 + 1] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 3] [i_4])) ? (0ULL) : (((/* implicit */unsigned long long int) var_10))));
            arr_17 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 4; i_5 < 20; i_5 += 3) 
            {
                arr_20 [i_0] [20LL] [i_5] = ((/* implicit */_Bool) var_1);
                /* LoopSeq 3 */
                for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_5 - 1] [i_5] [i_0] [(_Bool)1] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 + 3])) && (((/* implicit */_Bool) var_16)))))));
                    var_24 = ((/* implicit */_Bool) ((int) (_Bool)1));
                }
                for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 2) /* same iter space */
                {
                    arr_27 [4] [i_5] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_7 + 2] [(unsigned char)6] [i_7 + 2] [i_0 - 2] [(signed char)8])) | (((/* implicit */int) var_17))));
                    arr_28 [i_0] [i_0] [(signed char)16] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 20ULL)) && (((/* implicit */_Bool) var_14))));
                }
                for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 2) /* same iter space */
                {
                    arr_32 [i_5] [i_5] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) arr_21 [i_8] [i_8] [14] [i_8 + 4] [i_8] [(unsigned char)17]);
                    arr_33 [5ULL] [23ULL] [i_5] [i_0] [i_0 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_23 [20] [i_5] [i_0]) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_23 [10ULL] [i_5] [i_5 + 1]))));
                    arr_34 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) arr_25 [i_0] [i_5] [i_5] [i_8]))));
                }
                var_25 = ((/* implicit */long long int) (_Bool)1);
                arr_35 [i_5] = ((/* implicit */unsigned char) (_Bool)0);
            }
            arr_36 [18U] = ((/* implicit */long long int) (_Bool)0);
        }
    }
}

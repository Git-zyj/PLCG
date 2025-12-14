/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136325
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
    var_10 = ((/* implicit */_Bool) 3598328609729283194LL);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0])))) ? ((+(3598328609729283194LL))) : (((/* implicit */long long int) arr_1 [(short)9] [(short)9]))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -3598328609729283194LL)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_1]) : (((/* implicit */int) (_Bool)1)))) : ((+(arr_0 [i_0])))));
            var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-25631)) ? (3598328609729283188LL) : (-3598328609729283188LL))) / (((/* implicit */long long int) max((arr_1 [i_0] [i_1]), (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))));
        }
        for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 3) 
        {
            arr_7 [i_2] [5LL] [i_0] = ((/* implicit */unsigned char) arr_1 [(short)7] [(unsigned char)3]);
            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((arr_2 [(short)3] [i_0] [i_0]), (arr_5 [0] [0])))) : (arr_1 [i_2 - 3] [i_2 - 4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_2))))), (arr_2 [(signed char)4] [i_0] [(short)6]))))) : (var_5)));
            var_15 = ((/* implicit */signed char) arr_4 [i_2]);
        }
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_5 = 2; i_5 < 8; i_5 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned long long int) (~(-3598328609729283195LL)));
                    arr_15 [i_0] [i_0] [i_5] [2LL] = ((/* implicit */unsigned int) var_9);
                }
                for (short i_6 = 2; i_6 < 8; i_6 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned char) var_5);
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_0))));
                }
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_3])))) ? (arr_9 [i_0] [i_0]) : (var_6)));
            }
            var_20 = ((/* implicit */unsigned short) ((0LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6285)))));
        }
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_7] [i_8 - 1] [i_8 + 1])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_8] [i_8 - 1] [i_8 + 1] [i_8] [i_8 + 1])))))) ? (((((/* implicit */_Bool) arr_19 [i_8 - 1] [i_8 - 1] [i_8 + 1])) ? (((/* implicit */long long int) min((((/* implicit */int) var_4)), (arr_1 [i_0] [i_0])))) : (arr_6 [i_7]))) : (((/* implicit */long long int) var_1))));
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_8 - 1] [i_8] [i_8 - 1] [i_8])) | (((/* implicit */int) arr_22 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 - 1]))))), (arr_18 [i_7] [i_7] [i_8 + 1]))))));
                }
            } 
        } 
    }
}

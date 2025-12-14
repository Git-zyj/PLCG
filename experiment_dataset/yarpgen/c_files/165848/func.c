/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165848
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
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned long long int) var_0);
            var_17 *= ((/* implicit */short) ((unsigned long long int) arr_2 [i_1]));
            var_18 = ((/* implicit */int) 3565680060677165013LL);
            var_19 |= ((/* implicit */unsigned short) (+(1095401912U)));
            var_20 = arr_3 [i_0];
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 2; i_3 < 18; i_3 += 3) 
            {
                var_21 *= ((/* implicit */short) ((unsigned long long int) ((short) (unsigned char)0)));
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    arr_17 [i_0] [i_2] [i_3 - 2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0 + 2])) != (((/* implicit */int) ((unsigned short) arr_8 [i_0])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 1; i_5 < 19; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */long long int) (((~(var_4))) >= (((/* implicit */unsigned long long int) arr_10 [i_3 + 2] [i_5 + 1] [i_0 + 1] [i_4]))));
                        arr_20 [i_0] [i_0 - 1] [i_2] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0 + 2] [i_5 + 1] [i_5] [i_5])) | (((/* implicit */int) arr_2 [i_0 + 2]))));
                    }
                    for (short i_6 = 3; i_6 < 17; i_6 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned short) arr_19 [i_3 - 2]);
                        var_24 = ((/* implicit */_Bool) ((arr_22 [i_6] [i_6 - 3] [i_6 + 2] [i_6] [i_6 - 3] [i_6]) >> ((((-(((/* implicit */int) arr_13 [i_6 + 1] [i_3] [i_2])))) + (170)))));
                    }
                }
                var_25 *= ((/* implicit */signed char) arr_4 [i_0] [i_0]);
            }
            var_26 ^= ((/* implicit */short) 18446744073709551605ULL);
        }
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            arr_26 [i_0] = ((/* implicit */unsigned long long int) 429017936U);
            var_27 = ((/* implicit */unsigned short) (!(arr_7 [i_0])));
            arr_27 [4U] = ((/* implicit */unsigned int) (short)8191);
            var_28 = arr_13 [i_0 + 3] [i_0] [i_0];
        }
        for (unsigned int i_8 = 1; i_8 < 17; i_8 += 4) 
        {
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) arr_9 [i_8]))))))));
            var_30 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_24 [i_0] [i_0 + 1] [i_0])), (arr_28 [i_0] [i_0 + 4] [i_8])));
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    {
                        var_31 -= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_32 [i_9] [14LL])) ? (((((/* implicit */_Bool) (short)30155)) ? (((/* implicit */long long int) var_0)) : (arr_22 [i_0 + 3] [i_0] [i_0] [i_0 + 2] [i_0] [i_0]))) : (((long long int) var_10))))));
                        arr_36 [i_0] [(unsigned char)9] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_5 [i_0] [i_0])), (arr_22 [(_Bool)1] [i_8 + 2] [i_8] [i_8 + 3] [i_9] [i_10])));
                    }
                } 
            } 
            var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_31 [i_8 + 1] [i_0 + 2] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) != (arr_0 [18LL] [i_0])))) : ((-(((/* implicit */int) min(((unsigned short)30720), ((unsigned short)65535))))))));
        }
    }
    var_33 &= ((/* implicit */short) max((((((/* implicit */int) ((var_5) >= (var_4)))) - ((-(((/* implicit */int) (short)0)))))), (var_14)));
    var_34 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned long long int) ((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (var_4)))));
}

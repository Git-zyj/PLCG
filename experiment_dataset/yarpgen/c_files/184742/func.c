/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184742
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (min((-1016853224502116459LL), (var_10))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 + 1] [i_2 - 2]))))) ? (((var_12) ^ (((/* implicit */unsigned long long int) 1016853224502116481LL)))) : (max((var_12), (((/* implicit */unsigned long long int) arr_1 [i_0 + 2])))));
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1016853224502116459LL)) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) 1016853224502116459LL))))), (((((/* implicit */_Bool) (short)508)) ? (1016853224502116481LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32595))))))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                    var_16 = ((/* implicit */signed char) 8807916887256289614LL);
                    var_17 = ((/* implicit */unsigned short) var_7);
                }
            } 
        } 
    } 
    var_18 = var_3;
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            arr_14 [i_3] [16LL] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 268435456U)) ? (1016853224502116506LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)147)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_4]))) / (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_4])))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (var_12)));
                var_20 &= ((/* implicit */unsigned long long int) (signed char)70);
            }
            for (unsigned int i_6 = 1; i_6 < 16; i_6 += 3) 
            {
                var_21 = ((/* implicit */unsigned int) var_13);
                var_22 = ((/* implicit */short) (unsigned char)11);
                /* LoopSeq 2 */
                for (short i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    arr_24 [i_3] = ((/* implicit */long long int) ((unsigned int) var_1));
                    arr_25 [(_Bool)1] &= ((/* implicit */signed char) (unsigned char)244);
                    var_23 = ((/* implicit */unsigned short) arr_2 [i_3] [i_3]);
                    arr_26 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)77))));
                    var_24 = ((/* implicit */unsigned short) var_10);
                }
                for (unsigned int i_8 = 2; i_8 < 15; i_8 += 3) 
                {
                    var_25 = ((/* implicit */short) ((((2265445916U) << (((var_7) - (190692073U))))) >> (((/* implicit */int) ((2252251234U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))))))));
                    var_26 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)65535)) ? (var_7) : (var_8)))));
                    var_27 = ((/* implicit */int) (-(var_1)));
                    arr_29 [i_3] [(unsigned char)3] [i_3] = ((/* implicit */short) (-(2044279821)));
                }
            }
            arr_30 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))) < (((long long int) var_2))));
        }
        arr_31 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))))))) ? (((((/* implicit */_Bool) -1016853224502116474LL)) ? (((/* implicit */long long int) arr_20 [i_3] [14ULL] [i_3] [14ULL])) : (min((-1016853224502116507LL), (1016853224502116463LL))))) : (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */long long int) (-2147483647 - 1))) / (1016853224502116463LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3] [i_3])))))));
        arr_32 [i_3] [i_3] = ((/* implicit */_Bool) ((long long int) (+((-2147483647 - 1)))));
        var_28 = ((/* implicit */unsigned char) min(((~(4611686018427387904ULL))), (((/* implicit */unsigned long long int) arr_19 [i_3] [i_3] [i_3] [(unsigned short)16]))));
        arr_33 [i_3] = ((/* implicit */signed char) ((((unsigned int) ((((/* implicit */unsigned long long int) var_10)) * (18446744073709551615ULL)))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_3]))))))));
    }
    var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) 562949953419264ULL))) > (18446744073709551606ULL)));
}

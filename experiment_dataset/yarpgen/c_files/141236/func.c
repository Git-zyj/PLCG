/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141236
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_9)) : (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (var_14))))) : (max((((/* implicit */unsigned long long int) var_0)), (13458977422612913107ULL)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_20 ^= ((/* implicit */int) ((((((/* implicit */_Bool) (short)-26553)) ? (((/* implicit */long long int) ((/* implicit */int) ((0U) < (4294967285U))))) : (max((var_8), (((/* implicit */long long int) var_1)))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_5)), (var_15)))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))))))));
            /* LoopSeq 2 */
            for (long long int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)127))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_6 [i_0] [i_1] [i_1]))) : ((+(var_4))))), (((/* implicit */unsigned long long int) var_7))));
                arr_7 [i_1] [i_1] [i_2] [14ULL] = ((/* implicit */signed char) (unsigned char)67);
            }
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    arr_13 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_5 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]), (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((signed char) var_3)))));
                    var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_3 + 1]))))) ? (((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_4]))) >= (4294967285U))), (arr_2 [i_3 + 1] [i_3] [i_3])))) : ((+(((2140113287) ^ (((/* implicit */int) var_15))))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    arr_16 [i_1] = ((/* implicit */int) arr_6 [i_0] [i_0] [(short)2]);
                    var_23 = (+((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))));
                }
                arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) arr_1 [i_0])) ? (5744567616450058938ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned long long int) var_8))))));
            }
        }
        var_24 = ((/* implicit */signed char) ((int) 0ULL));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            arr_21 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_16), (((/* implicit */signed char) (_Bool)1))))))))));
            var_25 = ((/* implicit */_Bool) 4294967295U);
            var_26 += ((/* implicit */unsigned long long int) ((unsigned char) arr_18 [i_0] [i_0]));
            arr_22 [(short)12] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_1)) & (((/* implicit */int) var_17)))) == ((+(((/* implicit */int) (unsigned char)24))))));
            /* LoopSeq 1 */
            for (signed char i_7 = 2; i_7 < 14; i_7 += 2) 
            {
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_6] [i_6] [i_0]) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? ((+(((/* implicit */int) arr_2 [i_0] [i_6] [i_6])))) : (((((/* implicit */int) var_2)) * (((/* implicit */int) arr_2 [i_7 + 1] [i_6] [i_0]))))));
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_0] [i_7 - 2]))))) ? (((/* implicit */int) arr_18 [i_7] [i_7 - 1])) : ((+(((/* implicit */int) arr_18 [i_0] [i_7 + 1])))))))));
                var_29 = ((/* implicit */int) arr_1 [i_7 - 1]);
            }
        }
        for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            arr_28 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (+(((/* implicit */int) var_15)))))));
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-110)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) (unsigned char)203))));
        }
        var_32 = ((/* implicit */short) (~((+((+(((/* implicit */int) (signed char)-18))))))));
    }
}

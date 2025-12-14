/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119613
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
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16180378665598051399ULL)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91))) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) (_Bool)1))))) : (((max((778706180U), (((/* implicit */unsigned int) (unsigned short)4736)))) & (((/* implicit */unsigned int) ((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23557))))))))));
    var_16 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_3)))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */short) var_4)), ((short)23553))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_12)))) : (((((/* implicit */_Bool) 8191)) ? (((var_10) - (var_10))) : (((/* implicit */unsigned long long int) (+(var_13))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                var_18 += ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_1 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]))));
                arr_8 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_2])) && (((/* implicit */_Bool) ((unsigned int) arr_2 [i_1] [i_0])))));
                var_19 = ((/* implicit */int) max((var_19), (8188)));
            }
            /* LoopSeq 1 */
            for (unsigned char i_3 = 1; i_3 < 8; i_3 += 1) 
            {
                var_20 = (-(((unsigned long long int) (~(((/* implicit */int) arr_9 [i_3]))))));
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((unsigned char) arr_3 [i_0 + 1] [i_1 + 2])))));
            }
            var_22 ^= ((/* implicit */short) arr_3 [i_0] [i_1]);
        }
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 1])) ? (arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 1]) : (arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 1])));
                arr_18 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) >> (((2236503796U) - (2236503765U)))));
                var_24 ^= ((/* implicit */signed char) var_6);
            }
            var_25 += ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)64191));
            var_26 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_0]);
        }
        /* vectorizable */
        for (short i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                for (unsigned int i_8 = 1; i_8 < 9; i_8 += 3) 
                {
                    {
                        arr_28 [8] [i_6] [i_6] = ((/* implicit */unsigned char) (~(8188)));
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 2; i_9 < 8; i_9 += 1) 
                        {
                            arr_31 [i_6] [i_6] [i_7] [i_0] [i_6] = ((/* implicit */signed char) 8191);
                            arr_32 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */short) var_14);
                        }
                        for (unsigned long long int i_10 = 3; i_10 < 8; i_10 += 3) 
                        {
                            arr_35 [i_6] [i_6] [i_7] [i_10] = ((((/* implicit */int) ((unsigned short) (short)-23558))) & (((/* implicit */int) (unsigned short)65535)));
                            arr_36 [i_6] [i_8] [i_7] [i_6] [i_6] = (i_6 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) arr_9 [i_6])) - (203)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) var_3)) >> (((((((/* implicit */int) arr_9 [i_6])) - (203))) + (190))))));
                            arr_37 [i_0] [i_6] [i_6] [i_8] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6385))) != (4540854475597477948ULL)));
                            arr_38 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_0]))) + (arr_33 [i_0] [i_0 + 1] [i_8] [i_0 + 1] [i_8 + 1] [i_6] [i_8 - 1])));
                        }
                        arr_39 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)23557)) ? (-8198) : (((/* implicit */int) (unsigned short)30425))));
                    }
                } 
            } 
            arr_40 [i_6] [i_6] = ((/* implicit */_Bool) arr_33 [i_0 + 1] [i_6] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_6] [i_0 + 1]);
        }
        arr_41 [i_0] [i_0] |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 13905889598112073668ULL)) ? (max((((/* implicit */unsigned int) (unsigned short)35111)), (2676860759U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) (signed char)83))));
        var_27 += ((/* implicit */unsigned char) (+(-8188)));
        var_28 = ((/* implicit */signed char) min((((((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1])) / (min((((/* implicit */int) var_12)), (-8198))))), (((/* implicit */int) var_0))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 1) 
    {
        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_11] [i_11])) ? (14009595115210321857ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_11] [i_11])))))))));
        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (_Bool)0))));
        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (((!((_Bool)1))) ? (14027013284305643900ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -8202)))))))))));
        arr_44 [i_11] = ((/* implicit */unsigned long long int) (+(((unsigned int) arr_42 [i_11] [i_11]))));
        arr_45 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 8188)) + (0U)))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_43 [i_11] [i_11])) && (((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) (unsigned short)2047)) ? (13905889598112073668ULL) : (((/* implicit */unsigned long long int) 3902820737U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3894147850U)) || (((/* implicit */_Bool) -1591855280)))))))))));
    }
}

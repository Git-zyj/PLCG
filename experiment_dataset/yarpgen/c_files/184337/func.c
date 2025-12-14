/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184337
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_11 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(3565352703U)))) ? (arr_3 [i_0 - 1] [i_0]) : (((((/* implicit */_Bool) 729614593U)) ? (1191298013339902050ULL) : (7112767391548772003ULL)))));
        arr_4 [i_0] = ((int) ((3565352679U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
        {
            arr_7 [i_0 - 1] [i_0] [(unsigned short)2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 1])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_1] [i_0])))) : (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_12 = ((/* implicit */unsigned char) (((_Bool)0) ? (13962760719307805547ULL) : (7112767391548772003ULL)));
                var_13 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)0)))) + (((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (_Bool)0))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) 3565352702U);
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (unsigned char)255))));
                /* LoopSeq 1 */
                for (unsigned int i_4 = 1; i_4 < 13; i_4 += 4) 
                {
                    arr_19 [i_0] [i_0] [i_0] [(short)12] = ((/* implicit */_Bool) ((729614593U) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                    arr_20 [13] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((_Bool) var_8));
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((arr_17 [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 1]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)46))))))));
                        arr_23 [i_0] [i_1] [i_3] [i_1] [i_5] [(unsigned short)4] [i_1] = ((/* implicit */unsigned int) ((3357285323599703552ULL) + (var_7)));
                    }
                }
            }
        }
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
        {
            var_16 ^= ((/* implicit */unsigned short) ((unsigned int) arr_13 [i_0 + 1] [i_0 - 2] [i_0 - 1]));
            arr_26 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 5557635435150882678ULL)) ? (18446744073709551615ULL) : (((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_6] [i_0])))))));
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((short) ((int) arr_1 [i_0 + 1] [8LL]))))));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(arr_11 [i_0] [i_6] [i_6])))) / (arr_17 [i_0] [i_6] [i_6] [i_6])));
        }
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        arr_29 [i_7] [i_7] = ((/* implicit */int) (~(((unsigned long long int) max((12889108638558668938ULL), (var_7))))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((3565352695U) & (arr_9 [i_7] [(short)13] [i_7])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_22 [i_7])), (max((0U), (3565352703U)))))) : (max((18446744073709551615ULL), (10296889555202354960ULL))))))));
    }
    for (short i_8 = 0; i_8 < 11; i_8 += 4) 
    {
        var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_8] [i_8] [i_8] [i_8])) & (((((((/* implicit */int) arr_10 [i_8] [i_8] [i_8] [i_8])) & (((/* implicit */int) var_1)))) & (((/* implicit */int) arr_27 [i_8]))))));
        arr_34 [(short)1] = ((/* implicit */_Bool) (~((((~(13777130468555532342ULL))) >> (((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18415838148780016120ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) - (18415838148780016094ULL)))))));
    }
}

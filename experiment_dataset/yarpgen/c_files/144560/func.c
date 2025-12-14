/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144560
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
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((int) ((((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27084))) : (var_2))) | (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */long long int) arr_3 [i_0 - 1]);
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) (signed char)92))))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_1])) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38569))) / (var_6))))))))));
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26967))) : (arr_8 [i_0] [i_1])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */long long int) var_5)) < (var_2))))));
                                arr_17 [i_3] [i_0] [i_0] [i_3] [i_4] [i_0] = ((/* implicit */_Bool) (unsigned short)38569);
                                var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) >> (((var_2) + (8445613206526412151LL)))))) <= (((((-4645333241997368635LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_8)) - (65418))))))))));
                                arr_18 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */int) var_10))))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */int) ((-4695155941090374876LL) >= (((/* implicit */long long int) arr_1 [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 2) 
                    {
                        for (int i_6 = 2; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) min((max((min((var_4), (((/* implicit */short) arr_3 [i_6])))), (((/* implicit */short) ((((/* implicit */_Bool) -4695155941090374872LL)) && (((/* implicit */_Bool) (unsigned short)26967))))))), (((/* implicit */short) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (unsigned char)255)))) || (((/* implicit */_Bool) (unsigned short)5938)))))));
                                var_17 = (!(((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned short)38569)))) ^ (min((arr_11 [i_0 + 1] [i_0 + 1] [i_6] [i_5] [i_2] [i_2]), (((/* implicit */int) arr_20 [i_6] [i_5] [i_2] [i_1] [i_0 + 2]))))))));
                                var_18 = ((/* implicit */unsigned short) (-((-(arr_8 [i_0] [i_6 + 3])))));
                                var_19 = ((/* implicit */_Bool) (~(18446744073709551615ULL)));
                            }
                        } 
                    } 
                    var_20 *= ((/* implicit */unsigned long long int) var_1);
                    arr_23 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) var_2)), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_2]))), (((((/* implicit */_Bool) 6484326214116632898LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_0])))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 3; i_9 < 11; i_9 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)26967)))))));
                                var_22 = ((/* implicit */long long int) max((var_22), ((~(4695155941090374856LL)))));
                                var_23 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) var_8)), (7188363243794546296ULL)));
                            }
                        } 
                    } 
                    arr_35 [(unsigned short)1] [i_0] = ((/* implicit */long long int) var_9);
                }
                for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
                {
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -4695155941090374872LL)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 13; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((short) (unsigned short)26967))) : (((/* implicit */int) ((unsigned short) (short)-14290))))), (((/* implicit */int) var_1))));
                                var_26 = ((/* implicit */short) min(((-(((int) (unsigned short)26967)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)38568))) >= (2942120827560143687LL))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned short) ((((14564936320160906052ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3879))) : (((((/* implicit */_Bool) 959916010)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4695155941090374876LL)))));
                }
                var_28 *= ((/* implicit */_Bool) var_6);
                var_29 = ((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)26967)));
            }
        } 
    } 
}

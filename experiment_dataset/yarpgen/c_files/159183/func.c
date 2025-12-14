/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159183
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [8LL] [i_2] [i_2] = ((/* implicit */unsigned short) arr_10 [i_0]);
                            var_14 -= ((unsigned long long int) ((int) max((((/* implicit */unsigned long long int) var_11)), (18446744073709551615ULL))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22654)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned int) ((arr_13 [(unsigned short)6] [i_1] [0] [8U] [i_4]) ? (((/* implicit */int) arr_3 [4U] [9] [i_3])) : (((/* implicit */int) var_13))))) : (((unsigned int) (unsigned short)25522))));
                                var_16 = ((/* implicit */unsigned short) arr_6 [i_3] [i_2] [i_0]);
                                var_17 = ((/* implicit */signed char) ((((unsigned long long int) var_13)) > (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7336))) : (17162201291363794248ULL)))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [(short)5] [i_4] [i_0] = ((/* implicit */short) var_9);
                                var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((-6370473615685110971LL) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))))))));
                            }
                            for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 1) 
                            {
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(short)1] [i_1] [(short)4]))) : (8129230520332688041ULL)))) ? (((/* implicit */int) (unsigned short)1)) : ((~(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4294967288U)));
                                var_20 |= ((/* implicit */long long int) ((unsigned long long int) -766809511));
                            }
                            for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                            {
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (((_Bool)1) ? (min((var_0), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) -1911212683)) % (arr_18 [i_0] [(_Bool)1] [i_0] [i_0] [2ULL] [i_0])))))))))));
                                var_22 ^= ((/* implicit */unsigned long long int) ((unsigned int) var_9));
                                arr_20 [i_1] [i_1] = var_7;
                            }
                            for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                            {
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_12 [i_0] [i_1 - 1] [i_1 - 2] [7LL] [i_1 + 2])))) ? (480101863) : (((/* implicit */int) arr_6 [(short)7] [i_1 - 1] [i_0]))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1919585770U)) ? (((((/* implicit */_Bool) -438808176)) ? (((/* implicit */int) arr_2 [i_1] [i_1 + 2] [i_7])) : (((/* implicit */int) arr_2 [3U] [i_1 - 3] [i_3])))) : (((/* implicit */int) (_Bool)0))));
                                arr_24 [7U] [i_0] [i_0] [i_1] [i_0] [(short)3] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)10353)), (3006982794U)));
                                var_25 = ((/* implicit */short) 10681225294792726255ULL);
                                var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [5U] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_2] [(signed char)9] [i_3] [i_7]))) : (12721398494936285934ULL)));
                            }
                            arr_25 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned short) 3389228162U))), ((+(((((/* implicit */_Bool) (unsigned short)5975)) ? (var_8) : (((/* implicit */unsigned long long int) 4294967295U))))))));
                        }
                    } 
                } 
                arr_26 [i_1] [i_1] [(unsigned short)6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [i_1 - 1]), (((/* implicit */unsigned short) arr_13 [i_1 - 3] [9U] [i_1 - 3] [9U] [i_1]))))) ? (((arr_13 [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 2] [i_1]) ? (850462619658686980LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-10615))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)54)) && (((/* implicit */_Bool) var_5))))))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 4; i_8 < 8; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 2; i_9 < 9; i_9 += 2) 
                    {
                        {
                            var_27 += max((min((var_4), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) (_Bool)1)));
                            var_28 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)21500)) ? (8804309952928780050LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))), (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_5)) : (var_6))), (((/* implicit */unsigned long long int) arr_23 [i_0] [i_1 - 2] [i_8 + 1] [i_1] [i_8 + 2] [i_9] [i_9]))))));
                            var_29 += ((/* implicit */unsigned char) ((unsigned long long int) var_11));
                            arr_33 [i_1] [i_8 + 1] [3U] [i_1] = min((arr_14 [(short)2]), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 3202382884755073898ULL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27845))))), (((/* implicit */long long int) arr_31 [(signed char)0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 = var_9;
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158760
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_10 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_3]))) >= (max((min((18446744073709551615ULL), (var_8))), (((/* implicit */unsigned long long int) (unsigned char)193))))));
                        arr_12 [i_0] [i_0] [i_1] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) 14745573759128576183ULL);
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        arr_17 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned int) ((long long int) (unsigned char)189));
                        var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((short) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_4]))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) 
                        {
                            arr_21 [i_0] [i_4] [i_1] [i_0] = (+(((/* implicit */int) (short)32127)));
                            var_12 = var_6;
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_20 [i_5 + 1] [i_5 + 2] [i_5 + 4] [i_5 - 1] [i_5 + 4] [i_5 + 3])) | (((/* implicit */int) arr_11 [i_5 + 1] [i_5 + 2] [i_5 + 4] [i_5 - 1] [i_5 + 4] [i_5 + 3]))));
                        }
                        var_13 = ((/* implicit */unsigned long long int) arr_8 [i_2] [i_1] [i_2] [i_4]);
                        var_14 ^= ((/* implicit */long long int) ((((unsigned long long int) (short)16597)) | (max((arr_2 [i_0] [i_2]), (arr_2 [i_4] [i_4])))));
                    }
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (short)7936)), ((+(((/* implicit */int) (short)-7919))))))) <= ((((((_Bool)1) ? (20ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-7919)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_6))))))));
        var_16 += ((/* implicit */short) 18446744073709551604ULL);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
        {
            var_17 = ((((/* implicit */_Bool) arr_16 [i_0] [i_6] [i_0] [i_6])) ? (((/* implicit */unsigned long long int) (-(var_7)))) : ((-(var_0))));
            arr_26 [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0]);
            /* LoopSeq 3 */
            for (unsigned short i_7 = 2; i_7 < 16; i_7 += 3) /* same iter space */
            {
                arr_30 [i_0] [i_6] = ((/* implicit */unsigned short) ((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7] [i_7] [i_7 + 1] [i_7] [i_7] [i_7])))));
                arr_31 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned long long int) var_3);
            }
            for (unsigned short i_8 = 2; i_8 < 16; i_8 += 3) /* same iter space */
            {
                var_18 = ((/* implicit */short) var_1);
                arr_34 [i_0] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0] [i_6] [i_8 - 1] [i_8 - 1])) ^ (((/* implicit */int) (short)28902))));
                arr_35 [i_0] [i_0] [i_6] [i_6] |= 18446744073709551604ULL;
            }
            for (unsigned short i_9 = 2; i_9 < 16; i_9 += 3) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_18 [i_9] [i_6]))));
                var_20 ^= ((/* implicit */long long int) (unsigned short)6551);
            }
        }
        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
            arr_40 [i_0] = ((/* implicit */unsigned long long int) min(((-(((long long int) 18446744073709551609ULL)))), (((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)226))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-1LL)))))));
            var_22 += ((/* implicit */short) 2270354208090425633ULL);
            arr_41 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (short)-1))))))) ? (min((18446744073709551608ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1))))) : (min((min((((/* implicit */unsigned long long int) -1LL)), (var_5))), (((/* implicit */unsigned long long int) var_9))))));
        }
        for (signed char i_11 = 2; i_11 < 15; i_11 += 4) 
        {
            var_23 -= ((/* implicit */unsigned char) min((((((/* implicit */int) ((short) 1427903227))) - (((/* implicit */int) ((5ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))), (((/* implicit */int) ((short) arr_33 [i_11])))));
            arr_45 [i_0] = ((/* implicit */_Bool) ((short) ((max((((/* implicit */unsigned long long int) arr_18 [i_0] [i_0])), (arr_32 [i_0] [i_11] [i_11] [i_11]))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_29 [i_0] [i_0] [i_11]))))))));
        }
    }
    var_24 = ((/* implicit */int) var_4);
}

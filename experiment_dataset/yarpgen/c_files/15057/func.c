/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15057
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((arr_0 [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)32704))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) var_13))))));
            arr_7 [i_0] [i_0] = max((((((/* implicit */_Bool) (unsigned short)18946)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)153)))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-2724527579648541621LL))))));
        }
        for (unsigned short i_2 = 2; i_2 < 20; i_2 += 1) /* same iter space */
        {
            arr_12 [4ULL] [4ULL] &= ((/* implicit */short) (!(((/* implicit */_Bool) (short)-21636))));
            var_14 += ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))));
        }
        arr_13 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_2), (arr_2 [i_0 + 1] [i_0])))) ^ (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0 - 1] [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 1] [i_0])) > (((/* implicit */int) (short)-17060)))))))) : (var_4)));
    }
    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        arr_18 [i_3] = (((!(((/* implicit */_Bool) arr_16 [i_3] [i_3])))) || (((/* implicit */_Bool) ((unsigned char) (unsigned short)19484))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            arr_22 [i_3] [i_4] = ((/* implicit */unsigned char) 2245694491535471240LL);
            var_15 += ((/* implicit */signed char) (+(((((/* implicit */int) arr_19 [i_3] [i_3] [i_4])) | (((/* implicit */int) (unsigned char)0))))));
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 35046933135360ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172))) : (3ULL)));
                        var_17 ^= ((/* implicit */signed char) arr_27 [i_3] [i_4] [i_4] [i_5] [i_6] [i_7]);
                    }
                    /* LoopSeq 1 */
                    for (short i_8 = 3; i_8 < 21; i_8 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_3] [i_5] [i_3] [i_6] [i_8] [i_3])) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned long long int) var_6)))))))));
                        arr_33 [i_8] = ((/* implicit */unsigned char) (~(arr_30 [i_5] [i_5] [i_5] [i_5] [i_8 + 2])));
                        var_19 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (short)-893)) ? (((/* implicit */int) arr_25 [i_3] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) var_10)))));
                        arr_34 [i_8 + 1] [i_3] [i_3] = ((/* implicit */unsigned char) var_2);
                        arr_35 [i_3] [i_8 + 3] = ((unsigned char) arr_20 [i_8 + 2] [i_4]);
                    }
                    arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)704))));
                    var_20 += ((/* implicit */unsigned long long int) var_5);
                }
                for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    arr_40 [i_5] [i_4] &= ((/* implicit */unsigned char) (_Bool)1);
                    arr_41 [i_9] [i_4] [i_9] = ((/* implicit */unsigned long long int) arr_29 [i_3] [i_4] [i_5] [i_3] [i_3]);
                }
                /* LoopSeq 1 */
                for (unsigned short i_10 = 4; i_10 < 23; i_10 += 2) 
                {
                    var_21 |= ((((/* implicit */int) arr_25 [i_3] [i_3] [i_4] [i_5] [i_10])) - (((/* implicit */int) (short)-32761)));
                    arr_44 [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) var_4);
                    var_22 -= ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_26 [i_10 - 4] [i_5] [i_5] [i_4] [i_3] [i_3])))) > (((/* implicit */int) ((unsigned char) var_3)))));
                    arr_45 [i_3] [i_4] [i_4] [i_10 - 2] [i_3] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_21 [i_4]) ? (((/* implicit */int) (unsigned short)46053)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_11)) : (14624140866893827804ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_23 [i_3] [i_5])))))));
                }
            }
        }
    }
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) max(((unsigned char)255), (((/* implicit */unsigned char) var_13))))) ? (((((/* implicit */_Bool) var_5)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (var_5))))))));
}

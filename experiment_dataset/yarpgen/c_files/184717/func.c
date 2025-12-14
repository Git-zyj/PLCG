/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184717
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
    var_20 = ((/* implicit */unsigned int) (short)-32761);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_18))));
        var_22 = ((/* implicit */short) var_4);
    }
    for (int i_1 = 3; i_1 < 12; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (-((((-(var_12))) << (((/* implicit */int) ((_Bool) var_0)))))));
        arr_7 [i_1] [i_1] = (short)32756;
        var_23 = ((((/* implicit */int) (short)(-32767 - 1))) == (((/* implicit */int) var_9)));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            arr_10 [i_1] [i_2] [i_2] |= ((/* implicit */long long int) ((((unsigned long long int) ((var_6) + (3767746445U)))) / (((/* implicit */unsigned long long int) min((min((2147483647), (((/* implicit */int) arr_4 [i_1])))), (min((arr_1 [i_1] [i_1]), (((/* implicit */int) (short)13182)))))))));
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                arr_13 [i_1] [i_2] [i_1] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) >= (min((arr_12 [i_1] [0U] [i_1 - 1]), (arr_12 [i_1 - 3] [i_1 - 3] [i_1 - 1]))));
                arr_14 [6] [i_2] = ((/* implicit */short) ((long long int) min((((var_17) % (var_13))), (((((/* implicit */int) (short)-32766)) % (arr_1 [i_1] [i_2]))))));
            }
            for (int i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                arr_18 [i_4] = ((/* implicit */unsigned int) ((short) var_11));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        {
                            var_24 |= ((/* implicit */short) (!(((/* implicit */_Bool) 10190877001106036621ULL))));
                            arr_24 [i_4] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_1] [i_2])) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_6] [i_4]))))))) || (((min((((/* implicit */unsigned int) arr_22 [i_1 - 1] [i_2] [i_4] [11] [(short)5] [i_2] [i_4])), (var_8))) <= (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))))));
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(max((-891094226), (arr_1 [i_1 - 1] [i_2])))))), ((-((-(3469111697U))))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (+(var_11))))));
            }
        }
        arr_25 [i_1 - 2] = ((/* implicit */short) max(((unsigned char)5), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) var_15)))))));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_9 = 2; i_9 < 17; i_9 += 3) 
                {
                    arr_33 [i_8] [i_8] [5ULL] [5ULL] = ((/* implicit */short) var_2);
                    var_27 ^= ((/* implicit */long long int) arr_31 [i_8]);
                }
                for (long long int i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [3ULL] [i_8])))))));
                    var_29 = ((short) max((((/* implicit */int) min((arr_29 [i_10] [i_8]), (arr_29 [i_10] [10U])))), (arr_31 [i_8])));
                    var_30 = ((/* implicit */_Bool) var_16);
                }
                for (long long int i_11 = 0; i_11 < 18; i_11 += 3) /* same iter space */
                {
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) var_14))));
                    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) 17733017205367666480ULL))));
                }
                arr_41 [i_8] [i_8] = ((/* implicit */short) arr_39 [i_7] [i_7] [i_8]);
            }
        } 
    } 
    var_33 = (short)32760;
    var_34 += ((/* implicit */_Bool) 17733017205367666459ULL);
}

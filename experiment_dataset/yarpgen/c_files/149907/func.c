/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149907
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) ((signed char) min((12162681445993274155ULL), (12162681445993274153ULL)))))));
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((((/* implicit */long long int) -482581439)) + (var_9))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_12 -= ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
        var_13 &= ((/* implicit */short) ((((/* implicit */int) (!(arr_0 [i_0])))) >> (((6284062627716277443ULL) - (6284062627716277439ULL)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_14 ^= ((/* implicit */signed char) (+(6284062627716277463ULL)));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) arr_9 [i_1]);
                    var_16 = ((/* implicit */unsigned int) (+(6284062627716277465ULL)));
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 12162681445993274164ULL)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104)))));
        var_18 *= ((/* implicit */unsigned char) arr_3 [23LL]);
    }
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        var_19 = ((/* implicit */int) (~(min((((/* implicit */long long int) arr_8 [i_4])), (arr_11 [i_4] [i_4])))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_3 [i_4]))));
        var_21 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_9)) ? (arr_6 [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) max((arr_9 [i_4]), (arr_7 [i_4] [i_4] [i_4] [i_4]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [2U])) ? ((+(((/* implicit */int) (short)31497)))) : ((~(((/* implicit */int) (_Bool)1)))))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        var_22 = var_4;
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    {
                        arr_24 [i_5] [i_6] [i_8] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) arr_16 [i_5] [i_7]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            var_23 = ((/* implicit */int) ((long long int) arr_16 [i_5] [i_5]));
                            arr_28 [i_5] [i_6] [(_Bool)1] [i_8] [i_8] = ((/* implicit */unsigned short) 274877906912LL);
                            var_24 = (-(((/* implicit */int) (_Bool)1)));
                        }
                        for (short i_10 = 0; i_10 < 15; i_10 += 2) 
                        {
                            arr_31 [12U] [(_Bool)1] [i_10] [i_8] [i_10] &= ((/* implicit */short) (~(((/* implicit */int) arr_15 [i_5]))));
                            var_25 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)86)))))));
                            var_26 = ((/* implicit */short) (+(((/* implicit */int) arr_9 [i_7]))));
                            var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-73))));
                        }
                    }
                } 
            } 
        } 
        arr_32 [0] [i_5] = arr_13 [i_5];
        var_28 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)56))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129273
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
    var_17 = ((/* implicit */short) var_7);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)32760))) & (-5812456636658621137LL)));
        var_18 += ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */short) var_1);
        arr_6 [i_1] = ((/* implicit */short) arr_3 [i_1]);
        arr_7 [i_1] = ((/* implicit */unsigned short) arr_5 [i_1] [i_1]);
    }
    for (short i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 1; i_4 < 9; i_4 += 3) 
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)127)), (var_1)))) - ((+(((/* implicit */int) arr_4 [i_2]))))));
                arr_17 [i_2] [i_3] = ((/* implicit */short) max((arr_0 [i_2]), (arr_16 [i_3])));
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    var_21 += arr_20 [i_3 + 2] [i_3 + 1] [i_3 - 1] [i_3 + 3] [i_3 + 3] [i_3 - 2];
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)98)), ((unsigned short)0)))) ? (((/* implicit */int) (unsigned short)42275)) : (((/* implicit */int) var_2)))))));
                }
                var_23 -= ((/* implicit */short) (signed char)-98);
            }
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                var_24 -= ((/* implicit */short) ((((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_11 [i_2] [i_2])))))) >> (((((/* implicit */int) arr_12 [i_2] [(short)12] [i_3])) - (85)))));
                var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -3356923875691685564LL)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) (short)-14043))))), (((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151)))))))) ? (((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */int) min(((signed char)108), ((signed char)89)))) : (((/* implicit */int) arr_18 [i_3] [i_3 + 2] [i_6])))) : (((/* implicit */int) ((unsigned char) (_Bool)0)))));
            }
            arr_24 [i_2] [i_3] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_12 [i_3 + 4] [i_3] [i_3 + 4])) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) (unsigned short)45575))))));
        }
        for (short i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            var_26 = ((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_2]);
            var_27 += ((/* implicit */short) (-(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-101))) : (-8792006109883947175LL))) >= (((/* implicit */long long int) ((/* implicit */int) ((short) (short)255)))))))));
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        {
                            var_28 *= ((/* implicit */short) arr_3 [i_7]);
                            var_29 -= (+(((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_13 [i_2] [i_7] [i_9])) : (((/* implicit */int) (short)-5892)))));
                        }
                    } 
                } 
            } 
            var_30 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) (signed char)-102))))) ? (((/* implicit */int) min((arr_5 [i_7] [i_7]), (((/* implicit */unsigned char) (signed char)-86))))) : ((-(-1623535010)))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_31 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_4 [i_11]))));
            arr_40 [(short)2] [i_11] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)33)) ? (((((((/* implicit */int) (short)15412)) > (((/* implicit */int) (short)-32749)))) ? (((/* implicit */int) (unsigned char)192)) : (((((/* implicit */int) (unsigned short)45567)) - (((/* implicit */int) (signed char)-86)))))) : ((-(((/* implicit */int) (short)10073))))));
        }
        arr_41 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (min((var_8), (((/* implicit */int) var_0))))))) ? (((/* implicit */int) (short)17507)) : (((/* implicit */int) (unsigned char)105))));
        arr_42 [5U] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2525565819U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)185))))));
    }
    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 1) 
    {
        var_32 = ((/* implicit */_Bool) (-(((/* implicit */int) ((var_8) <= (2040445997))))));
        arr_45 [i_12] [(short)4] = ((short) ((min((((/* implicit */int) arr_3 [(_Bool)1])), (var_4))) > (((/* implicit */int) (short)-1160))));
        var_33 |= ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_12] [i_12]))));
    }
}

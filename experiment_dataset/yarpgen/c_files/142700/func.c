/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142700
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = var_0;
                    arr_9 [i_0] [2U] [2U] = ((/* implicit */short) arr_1 [i_0] [i_1 - 1]);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_12 = ((/* implicit */long long int) max((var_12), (((((((/* implicit */_Bool) arr_11 [i_3])) || (((/* implicit */_Bool) arr_11 [i_3])))) ? (max((arr_11 [4LL]), (arr_11 [i_3]))) : (((arr_11 [i_3]) - (arr_11 [i_3])))))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                {
                    arr_16 [i_4] [i_5] [i_4] [i_4] = ((((/* implicit */_Bool) arr_14 [i_4] [i_5])) ? (((/* implicit */long long int) ((((((/* implicit */int) var_7)) & (((/* implicit */int) arr_15 [i_5] [i_4] [3])))) >> (((arr_12 [i_3]) - (3791754488U)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) var_11))))) ? (-4196736454960938708LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_4] [i_5]))))));
                    var_13 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_11 [i_5])))) ? (((/* implicit */int) ((unsigned short) arr_10 [i_3]))) : (((int) var_3)))));
                    var_14 += ((/* implicit */long long int) arr_13 [(short)12] [i_5]);
                }
            } 
        } 
    }
    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        arr_21 [i_6] = ((/* implicit */signed char) ((((arr_20 [i_6] [i_6]) >= (arr_20 [i_6] [i_6]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6]))) : (((((/* implicit */_Bool) var_11)) ? (arr_19 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
        var_15 += ((/* implicit */unsigned short) (unsigned char)255);
    }
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_24 [10LL] |= (unsigned char)48;
        /* LoopSeq 3 */
        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            var_16 = ((((((/* implicit */_Bool) ((arr_22 [i_7] [i_7]) ? (((/* implicit */int) arr_23 [i_7] [i_7])) : (((/* implicit */int) arr_18 [i_8]))))) ? (max((var_5), (((/* implicit */unsigned int) arr_17 [i_7])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3))));
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) | (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_27 [i_8] [i_8])))) ? (((/* implicit */int) min(((short)7686), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) ((unsigned short) var_1))))))));
        }
        for (signed char i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            /* LoopNest 2 */
            for (short i_10 = 2; i_10 < 12; i_10 += 2) 
            {
                for (short i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    {
                        arr_36 [i_7] [i_9] [i_10] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) & (arr_33 [i_7])))) ? (((arr_30 [i_7]) ? (max((arr_19 [i_7]), (arr_27 [i_7] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3579846237580333402ULL) >> (((((/* implicit */int) arr_31 [i_7])) + (61)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((short) arr_31 [i_7])))))));
                        arr_37 [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((long long int) arr_17 [i_7]));
                    }
                } 
            } 
            var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-19289)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11791))) : (15996281800224721993ULL))) | (((/* implicit */unsigned long long int) var_4))));
            arr_38 [i_9] [i_9] &= ((/* implicit */signed char) ((min((arr_27 [(_Bool)1] [i_9]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7] [i_9]))) <= (var_5)))))) <= ((-(max((((/* implicit */unsigned long long int) arr_26 [i_7] [i_9])), (var_9)))))));
            arr_39 [i_7] = max((((((/* implicit */_Bool) arr_32 [i_7])) ? (((/* implicit */int) arr_32 [i_7])) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) arr_32 [i_9])) ? (((/* implicit */int) arr_32 [i_9])) : (((/* implicit */int) arr_32 [i_7])))));
        }
        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 14; i_13 += 2) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_19 = ((/* implicit */short) arr_29 [i_13] [i_14] [i_7]);
                        arr_48 [i_12] [i_13] [i_13] [i_13] [i_14] [i_7] &= ((_Bool) ((_Bool) arr_23 [i_7] [i_13]));
                        var_20 *= ((/* implicit */short) max((arr_46 [i_7] [i_12] [i_12] [6U] [i_13]), (((/* implicit */unsigned int) (short)9133))));
                        arr_49 [i_14] [i_14] [i_13] [i_12] &= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) max((arr_27 [i_7] [i_13]), (((/* implicit */unsigned long long int) (_Bool)1))))) && (((/* implicit */_Bool) arr_32 [i_14])))))));
                        var_21 *= ((/* implicit */long long int) var_1);
                    }
                } 
            } 
            arr_50 [i_7] [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_28 [i_7] [i_7])))) & (((/* implicit */int) var_11))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) (signed char)47)))) < (((/* implicit */int) (unsigned char)152))))))));
        }
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_42 [i_7] [(signed char)4])), (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_7]))) < (8598965351193456466LL)))) % (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))))));
        var_23 += ((/* implicit */unsigned int) arr_35 [i_7] [(unsigned short)2] [(unsigned short)2] [(unsigned short)12] [i_7] [i_7]);
    }
    var_24 -= (signed char)75;
}

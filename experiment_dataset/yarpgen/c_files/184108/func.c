/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184108
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
    for (short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0 - 1] [i_0 - 1] = ((/* implicit */short) (+((~(((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0 - 2] [i_1] [i_2] = ((/* implicit */_Bool) ((arr_4 [i_2 - 1] [i_0 + 1]) ? (((/* implicit */int) arr_0 [i_2 - 1])) : (((/* implicit */int) arr_0 [i_2 - 1]))));
                    arr_11 [i_0] [i_0 - 2] [i_0] = ((/* implicit */long long int) arr_8 [2] [2] [i_0]);
                    arr_12 [i_0 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)142)) <= (((var_0) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_3 [i_0] [i_0 + 3]))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-(((/* implicit */int) var_12)))))));
                        var_19 &= ((/* implicit */int) var_7);
                    }
                }
            } 
        } 
    }
    /* LoopSeq 4 */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
    {
        var_20 = ((((/* implicit */_Bool) (~(203600023)))) ? (((/* implicit */unsigned long long int) (~(arr_16 [i_4])))) : (arr_17 [i_4] [i_4]));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            for (unsigned short i_6 = 1; i_6 < 22; i_6 += 2) 
            {
                {
                    arr_22 [i_4 + 1] [14LL] &= ((/* implicit */int) arr_20 [i_4 + 1] [i_5] [i_6]);
                    var_21 = ((/* implicit */short) 10182467401817848460ULL);
                }
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((max((10182467401817848476ULL), (8264276671891703139ULL))) > (((/* implicit */unsigned long long int) -5158629124320431686LL)))))));
        arr_25 [19] [19] = (-(((/* implicit */int) arr_23 [i_7 + 1] [i_7 + 1])));
        arr_26 [(unsigned short)4] = ((/* implicit */_Bool) (~(((/* implicit */int) ((arr_19 [i_7 + 1]) > (arr_19 [i_7 + 1]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            for (int i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                {
                    var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [20] [i_8]))));
                    arr_32 [i_7] [i_7] [i_7 + 1] [i_7] = arr_21 [i_8] [i_7 + 1] [i_8];
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 2; i_10 < 22; i_10 += 1) 
                    {
                        for (short i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1034199085)) ? (5158629124320431686LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)11)))));
                                var_25 -= ((/* implicit */unsigned char) arr_38 [i_7] [i_7 + 1] [i_7]);
                                var_26 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)74)) * (((arr_23 [(short)5] [10]) ? (((/* implicit */int) arr_23 [i_7] [i_7 + 1])) : (((/* implicit */int) arr_23 [i_7] [i_7]))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_23 [i_7 + 1] [i_9])))))));
                    var_28 = ((/* implicit */unsigned int) var_14);
                }
            } 
        } 
    }
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) var_14))));
        arr_42 [(short)4] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_41 [i_12 - 1] [i_12])) && (((/* implicit */_Bool) arr_40 [i_12 - 1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_12 - 1]))) <= (arr_41 [i_12 - 1] [i_12])))));
        arr_43 [(signed char)7] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? (arr_17 [i_12 - 1] [i_12]) : (arr_17 [i_12 - 1] [i_12 - 1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_17 [i_12 - 1] [i_12]) >= (arr_17 [i_12 - 1] [i_12])))))));
        arr_44 [i_12 - 1] = ((/* implicit */unsigned char) var_2);
    }
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned short) arr_24 [i_13 - 1] [i_13 - 1]);
        var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_27 [i_13] [i_13 - 1])) >= (((((arr_39 [i_13] [i_13] [i_13] [i_13] [i_13]) + (2147483647))) >> (((var_14) - (16492141141150794925ULL))))))))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 16; i_14 += 4) 
        {
            for (unsigned int i_15 = 0; i_15 < 16; i_15 += 4) 
            {
                {
                    arr_54 [(_Bool)1] [(_Bool)1] [i_15] [i_15] = ((/* implicit */_Bool) (-(((int) arr_51 [i_13] [i_13 - 1]))));
                    var_32 *= ((/* implicit */unsigned long long int) ((_Bool) var_14));
                }
            } 
        } 
    }
    var_33 = ((/* implicit */_Bool) max((-5158629124320431687LL), (((/* implicit */long long int) var_4))));
    /* LoopNest 2 */
    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 2) 
    {
        for (long long int i_17 = 1; i_17 < 8; i_17 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_18 = 2; i_18 < 9; i_18 += 4) 
                {
                    for (unsigned short i_19 = 0; i_19 < 11; i_19 += 4) 
                    {
                        {
                            arr_64 [(unsigned short)10] [(_Bool)1] [i_17] [i_19] = ((/* implicit */unsigned short) min((((-1690039247) + (1690039267))), ((+(((/* implicit */int) var_0))))));
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_19])) ? (((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-59)) && (((/* implicit */_Bool) 805307222062524886ULL))))) >> (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (arr_28 [i_17 + 1]))) - (124))))) : (((/* implicit */int) var_16))));
                            arr_65 [i_17] = ((/* implicit */unsigned long long int) (+((~(((((/* implicit */int) var_12)) << (((arr_46 [i_17]) - (2067628847U)))))))));
                            var_35 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)109)) | (((/* implicit */int) (signed char)64))))));
                        }
                    } 
                } 
                arr_66 [i_16] [i_17] [i_16] = ((/* implicit */unsigned short) (_Bool)0);
            }
        } 
    } 
}

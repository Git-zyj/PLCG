/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178369
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)2288))))) ? (((/* implicit */int) (unsigned short)1666)) : (((/* implicit */int) arr_2 [i_0] [i_0])))))));
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) (+(arr_3 [i_1] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) : (arr_0 [i_0] [i_1]))))))));
            var_18 = ((/* implicit */unsigned int) arr_4 [i_1]);
        }
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (long long int i_4 = 1; i_4 < 12; i_4 += 4) 
                {
                    {
                        arr_12 [i_0] [i_3] [i_3] [i_4 - 1] = ((/* implicit */long long int) arr_10 [i_0] [i_2] [i_3] [i_3]);
                        var_19 = ((/* implicit */_Bool) arr_4 [i_4 + 1]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            for (long long int i_6 = 3; i_6 < 13; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 11; i_7 += 2) 
                    {
                        for (short i_8 = 1; i_8 < 13; i_8 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_5]))));
                                arr_23 [i_0] [i_5] [i_5] [i_6] [i_7 + 4] [i_8 - 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)65535))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (-(364966925021384008ULL))))));
                                arr_24 [i_6] [i_6 - 1] = ((/* implicit */short) (-(3ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            {
                                var_22 = (!(((/* implicit */_Bool) 70368735789056ULL)));
                                arr_32 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */_Bool) (~((~(18081777148688167608ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned long long int i_11 = 2; i_11 < 12; i_11 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(5704190385689884273LL)))) ? (((((/* implicit */_Bool) 5704190385689884273LL)) ? (arr_25 [i_11 - 2] [i_11] [i_0] [i_11] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_11 + 2] [i_11 + 1]))))) : (((/* implicit */long long int) (~(arr_20 [i_11 + 2] [i_11 + 1] [i_11 - 2] [i_0] [i_0]))))));
            var_24 -= ((/* implicit */_Bool) (~(12051554667190762825ULL)));
            arr_35 [i_11] = ((/* implicit */unsigned short) arr_2 [i_11 - 2] [i_0]);
        }
        for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 1) 
        {
            var_25 ^= ((/* implicit */unsigned short) (~(4294967277U)));
            var_26 = (-(4048313220U));
            arr_40 [i_12] [i_12] = ((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_12]);
            /* LoopNest 3 */
            for (unsigned char i_13 = 3; i_13 < 11; i_13 += 4) 
            {
                for (unsigned int i_14 = 0; i_14 < 15; i_14 += 4) 
                {
                    for (unsigned char i_15 = 3; i_15 < 12; i_15 += 3) 
                    {
                        {
                            arr_48 [i_13 + 3] [i_14] [i_15 + 3] [i_13 + 3] [i_12] = ((/* implicit */long long int) (+((-(((/* implicit */int) (_Bool)0))))));
                            var_27 = ((/* implicit */_Bool) min((var_27), ((!(((/* implicit */_Bool) 392416864963196848LL))))));
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_33 [i_0])))))))));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */unsigned long long int) 6117060470972138841LL);
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_52 [i_0] [i_16] [i_16] = ((/* implicit */unsigned char) arr_43 [i_0] [i_0] [i_0]);
            /* LoopNest 2 */
            for (short i_17 = 1; i_17 < 14; i_17 += 1) 
            {
                for (unsigned int i_18 = 0; i_18 < 15; i_18 += 1) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_1 [i_0])))))))));
                        var_31 = (~(6117060470972138841LL));
                        var_32 *= ((/* implicit */short) arr_30 [i_0] [i_0] [i_16] [i_17 + 1] [i_18]);
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned char) arr_6 [i_16]);
        }
        for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 1) 
        {
            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned char)89)))))))));
            arr_61 [i_19] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_57 [i_0] [i_0] [i_19] [i_0] [i_19])) ? (12051554667190762825ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_19])))));
            var_35 = ((/* implicit */unsigned long long int) (unsigned short)65535);
        }
    }
    /* LoopNest 2 */
    for (unsigned long long int i_20 = 3; i_20 < 21; i_20 += 1) 
    {
        for (unsigned long long int i_21 = 4; i_21 < 21; i_21 += 4) 
        {
            {
                arr_68 [i_21 - 1] [i_20] [i_20 - 1] = ((/* implicit */long long int) arr_67 [i_20 - 1] [i_20 - 2] [i_20]);
                /* LoopSeq 1 */
                for (long long int i_22 = 0; i_22 < 25; i_22 += 4) 
                {
                    var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_69 [i_21]))))))))))));
                    var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_64 [i_20 - 2])) ? (((/* implicit */int) arr_64 [i_20 + 4])) : (((/* implicit */int) (unsigned short)65535))))), (18081777148688167607ULL))))));
                    arr_72 [i_20 + 2] [i_20] = arr_65 [i_21 + 2] [i_20 - 1] [i_20 + 3];
                }
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123424
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_16 *= ((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) min((var_9), (((/* implicit */unsigned char) arr_1 [i_0] [i_0]))))), ((~(var_2)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) (~((~((~(((/* implicit */int) var_4))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    {
                        arr_17 [i_2] [i_2] [i_4] [i_3] = ((/* implicit */long long int) (~((-(min((((/* implicit */unsigned int) var_12)), (0U)))))));
                        arr_18 [i_2] [i_2] [i_4] [i_4] [i_2] = min((min((max((var_11), (((/* implicit */long long int) arr_15 [i_2] [i_3] [i_4] [i_5])))), (((/* implicit */long long int) max((((/* implicit */int) var_9)), (-1927084830)))))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))), (min((((/* implicit */long long int) arr_11 [i_5] [i_2] [i_2])), (6275878121155053573LL))))));
                        var_17 += ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(max((((/* implicit */unsigned int) arr_14 [i_2] [i_2] [i_2])), (16515072U)))))), (max((((/* implicit */long long int) (+(var_10)))), ((~(3920963273206873597LL)))))));
                        arr_19 [i_5] [i_2] [i_5] = max(((-(max((((/* implicit */unsigned int) -1927084830)), (arr_9 [i_2]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -8897749652417958964LL)))))))));
                        var_18 *= ((/* implicit */_Bool) max((((/* implicit */long long int) max(((!(((/* implicit */_Bool) 4294967295U)))), ((!(((/* implicit */_Bool) -3920963273206873597LL))))))), (max((((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-1)), (4278452241U)))), (max((6275878121155053575LL), (((/* implicit */long long int) var_9))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_6 = 1; i_6 < 14; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                for (unsigned char i_8 = 1; i_8 < 14; i_8 += 2) 
                {
                    {
                        arr_27 [i_2] [i_6 + 1] [i_7] [i_2] [i_7] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned char) arr_15 [i_2] [i_6] [i_6] [i_2])), ((unsigned char)161)))))))));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((((/* implicit */long long int) (+((-(((/* implicit */int) (_Bool)1))))))), ((~((~(-4134653391670208667LL))))))))));
                        var_20 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) (-(((/* implicit */int) (short)-259))))), (max((-3620991899357526623LL), (((/* implicit */long long int) arr_7 [i_2])))))), (min((max((-1LL), (-3920963273206873597LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_5)))))))));
                    }
                } 
            } 
        } 
        arr_28 [2U] &= (~((~(((/* implicit */int) max((var_14), ((unsigned char)133)))))));
    }
    for (long long int i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
    {
        var_21 = (-(min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))))), ((~(4134653391670208670LL))))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((min((max((((/* implicit */long long int) arr_22 [i_9])), (-3920963273206873597LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_9))))))), (max((((/* implicit */long long int) (-(((/* implicit */int) var_9))))), ((~(4134653391670208676LL))))))))));
        arr_31 [i_9] [i_9] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((((/* implicit */int) min(((unsigned short)19), (((/* implicit */unsigned short) (unsigned char)92))))), ((~(((/* implicit */int) arr_10 [i_9] [i_9]))))))), ((~(max((((/* implicit */unsigned int) var_5)), (var_2)))))));
        var_23 += ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(59241419054200171LL))))))), (max((((/* implicit */unsigned int) max((1339755960), (((/* implicit */int) var_3))))), ((~(1188349322U)))))));
        var_24 = ((/* implicit */unsigned int) max((2744888472108451320LL), (((/* implicit */long long int) (~(1339755960))))));
    }
    for (long long int i_10 = 0; i_10 < 15; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_11 = 2; i_11 < 13; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_12 = 1; i_12 < 14; i_12 += 4) 
            {
                for (signed char i_13 = 3; i_13 < 13; i_13 += 2) 
                {
                    {
                        arr_43 [i_10] [i_10] [i_10] = ((/* implicit */short) (~((~(-1339755955)))));
                        arr_44 [i_10] = (!(((/* implicit */_Bool) 4134653391670208667LL)));
                    }
                } 
            } 
            arr_45 [i_10] [i_10] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_10])))))));
            var_25 = ((/* implicit */signed char) (+((-(arr_33 [i_10] [i_11 + 2])))));
        }
        for (unsigned int i_14 = 2; i_14 < 13; i_14 += 1) 
        {
            var_26 += ((/* implicit */short) max((min(((~(arr_8 [i_10] [i_14]))), (max((arr_23 [12LL]), (arr_39 [i_10] [10LL]))))), (((/* implicit */long long int) min((((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (unsigned char)160))))), (max((-1339755942), (((/* implicit */int) (unsigned char)1)))))))));
            /* LoopNest 2 */
            for (long long int i_15 = 0; i_15 < 15; i_15 += 4) 
            {
                for (unsigned short i_16 = 1; i_16 < 13; i_16 += 3) 
                {
                    {
                        var_27 ^= (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))))));
                        arr_55 [i_16] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)11)), ((unsigned short)12285))))));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) min((arr_24 [i_14 + 2]), (((/* implicit */int) var_15))))), (min((9223372036854775807LL), (((/* implicit */long long int) (signed char)-25))))))));
            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) min((max((((/* implicit */long long int) min((1957087029), (-1339755942)))), (min((((/* implicit */long long int) (unsigned short)15360)), (var_11))))), ((-(min((((/* implicit */long long int) var_10)), (9223372036854775797LL))))))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_17 = 3; i_17 < 14; i_17 += 1) 
        {
            for (long long int i_18 = 0; i_18 < 15; i_18 += 4) 
            {
                {
                    arr_61 [i_10] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (var_13)))), (min((((/* implicit */long long int) (unsigned char)126)), (arr_53 [i_17]))))))));
                    arr_62 [i_10] [i_10] [i_18] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)31))))))))));
                    /* LoopSeq 2 */
                    for (short i_19 = 1; i_19 < 14; i_19 += 4) /* same iter space */
                    {
                        arr_65 [i_10] [i_19] [i_18] [i_10] [i_10] [i_18] = ((/* implicit */signed char) (~(max((max((arr_63 [i_10] [i_17] [i_10] [i_19]), (((/* implicit */unsigned long long int) var_7)))), (max((((/* implicit */unsigned long long int) arr_11 [i_19] [i_10] [i_10])), (13468498000016476788ULL)))))));
                        var_30 ^= ((/* implicit */_Bool) max((min(((~(arr_22 [i_10]))), (min((arr_54 [i_10] [i_17 - 3] [i_18] [i_18] [i_10] [i_18]), (((/* implicit */int) arr_48 [i_19 + 1] [i_18] [i_17])))))), (max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)252))))), (max((-1), (((/* implicit */int) (unsigned short)29319))))))));
                    }
                    for (short i_20 = 1; i_20 < 14; i_20 += 4) /* same iter space */
                    {
                        arr_68 [i_10] [i_10] [i_18] [i_10] [i_18] [i_17 - 3] = min((max((((/* implicit */long long int) (+(var_13)))), (min((arr_59 [i_10] [i_17 - 3] [i_18] [i_20 - 1]), (540431955284459520LL))))), (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))), ((~(((/* implicit */int) arr_13 [i_18] [i_20]))))))));
                        arr_69 [i_10] [i_17] [i_18] [i_10] = ((/* implicit */long long int) min(((~((~(arr_64 [i_18] [i_10] [i_10]))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)173))))), ((~(((/* implicit */int) var_7)))))))));
                        arr_70 [i_10] [i_10] [i_10] [i_10] = min((min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_15)), (arr_11 [i_10] [i_10] [i_18])))), (max((-9223372036854775798LL), (((/* implicit */long long int) arr_29 [i_10])))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_51 [i_10] [i_18]), (((/* implicit */short) var_5)))))))));
                        arr_71 [i_10] [i_17] [i_18] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) min(((unsigned char)10), (arr_57 [i_10])))), ((~(var_10))))))));
                        arr_72 [i_20] [i_18] [i_10] [i_17 + 1] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -8206208455097258303LL))));
                    }
                }
            } 
        } 
    }
}

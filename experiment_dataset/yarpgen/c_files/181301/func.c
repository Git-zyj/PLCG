/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181301
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_11 -= ((/* implicit */unsigned int) (short)29771);
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) -5413208483630135876LL))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            var_13 = ((/* implicit */long long int) min((var_13), (((long long int) arr_9 [i_2]))));
            var_14 = ((/* implicit */unsigned char) ((5413208483630135875LL) >> (((arr_3 [10] [i_3] [i_2]) + (1523861842)))));
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned int) ((short) arr_6 [i_2] [i_4]));
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) arr_5 [i_4]);
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_5])) & (((/* implicit */int) arr_5 [i_4]))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */unsigned short) 130816U);
        }
        for (short i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
        {
            var_19 += ((/* implicit */signed char) (~(((/* implicit */int) arr_5 [4U]))));
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((((int) arr_0 [9])) + (2147483647))) << (((((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(unsigned short)1] [(unsigned short)13] [7U] [i_2] [4ULL] [7] [(short)1]))) | (338680456U))) - (338680457U))))))));
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                for (long long int i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    {
                        var_21 = ((/* implicit */int) ((short) min((arr_21 [i_8] [i_10]), (arr_21 [i_10] [i_9]))));
                        var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_15 [(_Bool)1] [5LL] [(signed char)11] [1LL]), (((/* implicit */unsigned short) arr_17 [6U] [i_10] [(unsigned short)2] [(unsigned short)10] [i_10] [(unsigned short)0])))))))) <= (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [11U] [5U] [(short)4]))) / (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(short)3] [1LL] [i_9] [i_10])))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
                        {
                            var_23 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)7115)))))));
                            var_24 -= ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned short)7680)), (456934930U)));
                            var_25 = ((/* implicit */unsigned short) min((min((16200524549678708264ULL), (((/* implicit */unsigned long long int) arr_6 [7U] [i_9])))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)215)), (arr_6 [i_10] [5U]))))));
                            var_26 = ((unsigned int) ((((/* implicit */_Bool) arr_11 [i_11])) ? (((/* implicit */int) arr_10 [11ULL] [i_9] [3])) : (((/* implicit */int) arr_11 [i_11]))));
                            var_27 = ((/* implicit */int) ((var_7) - (((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned char)24)))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 15; i_12 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */long long int) 140052757149539902ULL);
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_12])) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_2 [i_12]))));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (signed char)125))));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)30373)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) arr_26 [11ULL] [4U] [i_9] [9U] [14LL]))));
                        }
                    }
                } 
            } 
            var_32 |= ((/* implicit */unsigned long long int) 19U);
        }
        var_33 = ((/* implicit */unsigned short) arr_1 [i_2]);
    }
    for (int i_13 = 0; i_13 < 19; i_13 += 3) 
    {
        var_34 ^= ((/* implicit */unsigned short) arr_36 [18U]);
        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (short)508))));
    }
    for (signed char i_14 = 0; i_14 < 16; i_14 += 1) 
    {
        var_36 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76))) < ((~(arr_0 [i_14])))));
        var_37 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_3 [16LL] [9ULL] [i_14])) ? (((((/* implicit */_Bool) 1599528578)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21282))) : (arr_36 [9ULL]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [5U]))))), (((/* implicit */unsigned int) var_8))));
        var_38 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)58430))));
    }
}

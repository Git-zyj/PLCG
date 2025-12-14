/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178366
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_10 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_3] [i_1])) ? (((14758133077739257155ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-86))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3])))));
                            var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((((/* implicit */int) var_4)) / (((/* implicit */int) var_4)))) * (((/* implicit */int) var_4)))))));
                            arr_14 [i_3] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)48351);
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-5215)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) >> (((var_5) - (1664819580U)))))), (arr_5 [i_0] [i_1] [i_1])))));
                var_12 *= ((/* implicit */signed char) var_7);
                /* LoopNest 3 */
                for (unsigned short i_4 = 3; i_4 < 23; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) arr_16 [i_0] [i_1] [i_6] [i_5]))));
                                arr_25 [i_0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 + 2] [i_6 + 1]))))), (min((((/* implicit */long long int) (signed char)97)), ((-9223372036854775807LL - 1LL))))));
                                var_14 = ((/* implicit */unsigned short) (signed char)97);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 1; i_7 < 22; i_7 += 4) 
    {
        for (long long int i_8 = 1; i_8 < 20; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 1; i_9 < 22; i_9 += 2) 
                {
                    for (signed char i_10 = 3; i_10 < 19; i_10 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) 2436443298U);
                            var_16 = ((/* implicit */unsigned short) var_2);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_11 = 0; i_11 < 23; i_11 += 2) 
                {
                    arr_39 [i_11] [i_8] [i_8] [i_7] = ((/* implicit */_Bool) (short)15450);
                    arr_40 [i_8] = ((/* implicit */_Bool) arr_11 [i_8] [i_11] [i_11]);
                }
                var_17 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (short)-15467)), (613651240140654343LL)));
                arr_41 [i_7] [i_8] [i_7] = ((/* implicit */signed char) var_6);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_12 = 1; i_12 < 18; i_12 += 3) 
    {
        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 4) 
        {
            for (signed char i_14 = 4; i_14 < 18; i_14 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_20 [i_12 - 1] [i_12 + 1] [i_12]))));
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 4; i_15 < 18; i_15 += 4) 
                    {
                        for (short i_16 = 0; i_16 < 19; i_16 += 2) 
                        {
                            {
                                var_19 |= ((/* implicit */unsigned long long int) arr_32 [i_12] [i_13] [i_12] [i_15]);
                                var_20 = ((/* implicit */int) var_4);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        arr_59 [i_17] [i_17] [i_17] [i_12] = ((/* implicit */unsigned int) arr_21 [i_12 + 1] [i_13] [i_14 + 1] [i_17]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_18 = 0; i_18 < 19; i_18 += 4) /* same iter space */
                        {
                            arr_62 [i_18] [i_17] [i_14 - 2] [i_17] [i_18] = ((/* implicit */_Bool) (unsigned char)218);
                            arr_63 [i_13] [i_17] = ((/* implicit */unsigned char) -613651240140654332LL);
                            arr_64 [i_18] [i_17] [i_17] [i_14] [i_17] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-111)) & (((/* implicit */int) (unsigned short)65535))));
                        }
                        for (signed char i_19 = 0; i_19 < 19; i_19 += 4) /* same iter space */
                        {
                            arr_68 [i_12] [i_17] = ((/* implicit */_Bool) arr_21 [i_12 + 1] [i_12] [i_12] [i_12]);
                            var_21 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) (unsigned short)20500)) && (((/* implicit */_Bool) (signed char)85)))) && (((/* implicit */_Bool) min((arr_66 [i_17] [i_17] [i_14] [i_13] [i_13] [i_17]), (((/* implicit */unsigned short) (signed char)86))))))), (((((/* implicit */_Bool) 2147483622)) || (((((/* implicit */int) var_0)) == (arr_22 [i_19] [i_13] [i_19] [i_17])))))));
                            var_22 = ((/* implicit */unsigned short) (((~((((-2147483647 - 1)) ^ (((/* implicit */int) var_4)))))) == (((((/* implicit */_Bool) arr_45 [i_14 + 1])) ? (((((/* implicit */int) arr_0 [i_14] [i_12])) / (((/* implicit */int) arr_65 [i_12])))) : (((/* implicit */int) arr_44 [i_19]))))));
                        }
                    }
                    var_23 = ((/* implicit */unsigned int) 613651240140654343LL);
                }
            } 
        } 
    } 
}

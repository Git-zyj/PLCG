/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16904
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
    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)100))))) : (var_13)))), (((unsigned long long int) var_4))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) ((long long int) max((max((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) (_Bool)1)))));
        var_17 ^= ((/* implicit */signed char) max((((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_0] [i_0])))), ((-(((/* implicit */int) (signed char)19))))));
        var_18 -= ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1 - 1] [i_1] = ((/* implicit */int) arr_5 [i_1] [i_1]);
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((signed char) arr_2 [(signed char)16])))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-8184291899236452920LL)))) <= (((unsigned long long int) (signed char)100))))))))));
        var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
        /* LoopSeq 2 */
        for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    for (short i_5 = 2; i_5 < 19; i_5 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_10))));
                            var_22 += ((/* implicit */signed char) (+(((/* implicit */int) ((min((((/* implicit */int) arr_11 [i_1] [i_3] [i_1] [i_5 - 1])), (-407372695))) <= (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-84)), (var_8)))))))));
                            var_23 = var_10;
                            arr_18 [i_3] [i_2] [i_1] [i_4] [i_5] [i_5 - 2] = ((/* implicit */_Bool) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) max((var_1), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))));
                        }
                    } 
                } 
                arr_19 [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) (+(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_4)))))));
            }
            /* vectorizable */
            for (unsigned char i_6 = 2; i_6 < 17; i_6 += 1) 
            {
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)78)) ? (288225978105200640LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)18267)) ^ (((/* implicit */int) (signed char)123)))))));
                var_25 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)11)) / (((/* implicit */int) (signed char)81))));
            }
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                var_26 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) var_0)) % (arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                arr_24 [i_1] = ((unsigned long long int) ((max((((/* implicit */unsigned int) arr_23 [i_1 - 1])), (arr_17 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2] [i_2] [i_7] [i_7]))) <= (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-81), (((/* implicit */signed char) (_Bool)1))))))));
                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_2] [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2] [i_2 - 1] [4ULL])) && ((((_Bool)1) || (((/* implicit */_Bool) (signed char)66))))))))))));
            }
            /* vectorizable */
            for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                var_28 += ((/* implicit */signed char) var_3);
                /* LoopSeq 1 */
                for (signed char i_9 = 1; i_9 < 18; i_9 += 1) 
                {
                    var_29 += ((/* implicit */unsigned short) (-(((/* implicit */int) arr_13 [i_9 + 2] [i_2 - 1] [i_8] [i_1 - 1] [i_2 + 2]))));
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-1062987831)))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (short)12474))))));
                    var_31 = ((/* implicit */_Bool) 421305499U);
                    var_32 = arr_27 [i_8] [i_1] [i_2 + 1] [i_1] [i_1 - 1];
                }
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) (_Bool)1)))))));
                            var_34 = ((/* implicit */unsigned short) 1099511627775ULL);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_12 = 3; i_12 < 19; i_12 += 1) 
                {
                    for (int i_13 = 1; i_13 < 16; i_13 += 3) 
                    {
                        {
                            arr_42 [i_1] [i_2 + 2] [i_2] [i_8] [i_2] [i_1] [i_13] = ((/* implicit */unsigned char) ((unsigned int) var_5));
                            var_35 -= ((/* implicit */short) 4159356270899636713LL);
                            arr_43 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1] = (((_Bool)1) ? (var_13) : (arr_27 [i_12 + 1] [i_1] [i_8] [i_1 - 1] [4LL]));
                            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [0U])))))) - (arr_36 [i_1 - 1] [i_2 - 1]))))));
                            var_37 += ((/* implicit */_Bool) (signed char)81);
                        }
                    } 
                } 
                var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((unsigned short) arr_32 [i_1 - 1] [i_1 - 1])))));
            }
            arr_44 [i_1] [1U] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_14 = 1; i_14 < 17; i_14 += 1) 
            {
                arr_48 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) (+(arr_33 [i_2 - 1] [i_2] [i_2] [i_2] [i_2 + 1] [i_2])));
                var_39 = ((((/* implicit */int) arr_11 [i_2] [i_2 + 1] [i_2 - 1] [i_2])) & (((/* implicit */int) var_3)));
            }
        }
        for (unsigned char i_15 = 3; i_15 < 18; i_15 += 3) 
        {
            var_40 -= ((/* implicit */unsigned char) (signed char)81);
            var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((1062987831) & (-1062987831))))))) >> (((((arr_16 [i_1 - 1] [i_15 + 1] [i_15] [i_15] [i_15 - 2] [i_15] [i_15]) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) - (3078413033U))))))));
        }
    }
    /* LoopNest 3 */
    for (signed char i_16 = 0; i_16 < 13; i_16 += 3) 
    {
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (unsigned short i_18 = 0; i_18 < 13; i_18 += 1) 
            {
                {
                    var_42 ^= ((/* implicit */int) (_Bool)1);
                    /* LoopNest 2 */
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        for (long long int i_20 = 2; i_20 < 9; i_20 += 3) 
                        {
                            {
                                arr_65 [i_16] [i_16] [i_17] [i_16] [i_16] = (~(((long long int) (signed char)-95)));
                                var_43 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(-1062987813)))) + (8123585635684184833LL)));
                                var_44 ^= ((/* implicit */_Bool) (-(((((arr_62 [i_16] [i_16] [i_16] [i_19] [i_19]) / (1831546872))) / (arr_40 [18])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

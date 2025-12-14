/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107128
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
    for (signed char i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
            {
                var_17 = ((/* implicit */signed char) var_14);
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_13)) : (var_1)));
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14))));
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_13))));
            }
            for (long long int i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 2; i_4 < 23; i_4 += 3) 
                {
                    var_21 = ((/* implicit */unsigned long long int) var_13);
                    var_22 = ((/* implicit */unsigned short) max(((~(var_12))), (((/* implicit */unsigned long long int) var_11))));
                    arr_11 [i_0 + 1] [i_1] [i_4] [(unsigned short)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1704015597U)) ? (0ULL) : (((/* implicit */unsigned long long int) var_13))));
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))) : (var_15)));
                }
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_10))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 2) 
                    {
                        {
                            arr_18 [i_0] [i_1] [(unsigned short)6] [i_3] [i_5] [i_6] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((-739690028), (((/* implicit */int) (short)-19440)))))))), (max((((/* implicit */unsigned long long int) max(((short)-16393), (((/* implicit */short) (signed char)73))))), (var_12)))));
                            var_25 = ((/* implicit */unsigned int) (~(var_10)));
                            arr_19 [i_0] [i_1] [i_3] [i_5] [(unsigned char)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (var_9) : (((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_5)))))))) : ((~(var_4)))));
                        }
                    } 
                } 
                arr_20 [i_0 + 1] [22ULL] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_15) : (var_1)))) ? (max((((/* implicit */unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) var_1)), (var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_23 [i_0] [i_0] [i_1 - 1] [i_7] = ((/* implicit */signed char) var_4);
                arr_24 [i_0] [i_1] [i_7] [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) var_11))));
                var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)89)))) : ((+(((/* implicit */int) var_6))))));
            }
            arr_25 [i_1 + 1] [i_1] [i_0] &= ((/* implicit */_Bool) var_3);
        }
        arr_26 [i_0] [i_0] = ((/* implicit */_Bool) var_13);
        var_27 = ((/* implicit */unsigned char) var_6);
    }
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
    {
        for (unsigned char i_9 = 2; i_9 < 16; i_9 += 1) 
        {
            {
                var_28 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                arr_33 [i_9] = ((/* implicit */_Bool) (+(var_16)));
            }
        } 
    } 
}

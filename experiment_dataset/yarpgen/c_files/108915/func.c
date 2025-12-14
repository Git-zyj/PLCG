/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108915
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
    var_15 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (+(var_9)))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)106)) ? (var_11) : (((/* implicit */int) var_13)))), ((+(((/* implicit */int) (unsigned char)255))))))) : (((max((302468199924023792LL), (-302468199924023789LL))) << (((((/* implicit */int) var_7)) - (13604)))))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((unsigned int) 18446744073709551604ULL)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((var_8) != (((/* implicit */int) var_14))))) : (((/* implicit */int) var_13))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33105)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170))) : (arr_0 [i_0])));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)33105)) ? (((/* implicit */int) (unsigned short)32430)) : (920154189)));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) arr_8 [i_0] [1ULL] [i_0] [i_0]);
                    arr_11 [i_2] [i_0] [i_0] [6LL] = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) var_13)))));
                    arr_12 [i_0] = ((/* implicit */signed char) var_6);
                    arr_13 [i_0] = ((/* implicit */signed char) ((arr_9 [i_0] [i_1] [i_0]) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0]))))));
                }
            } 
        } 
        arr_14 [4LL] [i_0] = ((/* implicit */short) arr_9 [i_0] [13ULL] [13ULL]);
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 3) 
        {
            for (long long int i_4 = 3; i_4 < 14; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    {
                        arr_23 [i_0] [i_0] [i_4 - 2] [(unsigned char)13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_3 - 1] [i_4 - 1]))));
                        arr_24 [i_0] [i_0] = ((/* implicit */short) ((arr_9 [i_5] [i_4] [i_3]) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)-4451)) + (2147483647))) << (((((/* implicit */int) (short)4450)) - (4450)))))) : (arr_22 [i_4 + 1] [i_4 + 1] [i_3 - 1] [(_Bool)1])));
                        /* LoopSeq 1 */
                        for (int i_6 = 2; i_6 < 12; i_6 += 2) 
                        {
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (signed char)3))));
                            arr_29 [3LL] [i_3] [i_4 - 1] [i_5] [i_0] = ((/* implicit */unsigned int) ((((var_5) || (((/* implicit */_Bool) var_12)))) ? (arr_16 [i_0] [i_3] [(unsigned short)7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_16 [i_6] [i_5] [i_0]))))));
                        }
                        var_18 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_21 [i_5] [i_4] [i_3] [i_3 + 1] [i_0])) || (((/* implicit */_Bool) arr_1 [(unsigned short)10])))) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) arr_8 [i_3] [i_4 - 1] [i_4 - 2] [i_4 - 1]))));
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_7 [i_5]))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
    {
        var_20 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_7] [i_7] [i_7] [14ULL])) ? (((/* implicit */int) arr_20 [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_20 [i_7] [i_7] [i_7] [i_7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_22 [i_7] [i_7] [i_7] [i_7]) >> (((-117513752) + (117513758)))))))))) : ((~(min((arr_0 [i_7]), (((/* implicit */unsigned long long int) var_2))))))));
        arr_34 [i_7] = ((/* implicit */short) ((17798486633046899215ULL) >= (((/* implicit */unsigned long long int) -225439807))));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 2) 
            {
                {
                    arr_39 [7ULL] [(signed char)10] [i_9 + 3] [(unsigned char)9] = ((/* implicit */unsigned int) ((long long int) 17798486633046899231ULL));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 1; i_10 < 12; i_10 += 2) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 15; i_11 += 3) 
                        {
                            {
                                arr_47 [i_7] [i_8 + 1] [i_9 + 2] [i_10] [i_10 + 3] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_41 [i_8] [(unsigned short)7] [i_8])) ? (arr_18 [i_7] [(unsigned short)5] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_43 [i_10 - 1] [i_10] [i_9] [6ULL])))))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) 1392806746U))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_22 = ((/* implicit */short) var_5);
}

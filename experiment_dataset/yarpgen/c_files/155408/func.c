/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155408
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_2)))))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) % (18446744073709551615ULL))), (((((/* implicit */_Bool) 489192448U)) ? (9ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) - (4256718362U))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_2 = 4; i_2 < 19; i_2 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        arr_12 [i_4] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((18446744073709551603ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_2 - 4] [(_Bool)0] [i_2 - 4] [i_2] [i_2 - 4])) << (((((/* implicit */int) arr_10 [(short)3] [i_2] [i_2 - 4] [i_2] [i_2 - 4])) - (8799)))));
                        var_13 = ((/* implicit */_Bool) ((var_7) % (((/* implicit */unsigned long long int) arr_11 [5] [i_1] [i_2] [i_1] [i_1] [i_2]))));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned short) max((var_14), (var_8)));
                        var_15 += var_3;
                    }
                    var_16 = ((/* implicit */short) ((unsigned long long int) 38248933U));
                    arr_15 [i_3] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) (signed char)104);
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_7 = 2; i_7 < 19; i_7 += 1) 
                    {
                        var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) ((18343094267946438301ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) && (((((/* implicit */int) arr_6 [i_0] [i_0])) == (((/* implicit */int) arr_20 [i_0] [i_0] [i_1] [i_0] [i_0] [i_7 - 2] [i_7]))))));
                        var_18 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_7 - 2] [(unsigned char)17] [i_2 - 1] [(unsigned short)12]);
                        arr_21 [i_2] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_2))))) >= (((/* implicit */int) var_4)));
                        arr_22 [i_0] [i_2] [(unsigned short)17] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_2] [i_2] [i_6] [i_7 - 2] [i_7 - 1])) ? (((/* implicit */int) arr_13 [i_2 + 1] [i_2] [i_6] [i_7] [i_7 - 2])) : (arr_11 [i_2 + 1] [i_2 + 1] [i_2] [i_7] [i_7 - 2] [(_Bool)1])));
                    }
                    for (unsigned short i_8 = 3; i_8 < 17; i_8 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((((/* implicit */int) (signed char)84)) <= (((/* implicit */int) arr_2 [(unsigned char)10] [i_1] [14U])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0))))));
                        var_20 *= ((/* implicit */unsigned long long int) ((38248933U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_2 - 4] [i_2 - 3] [i_2 - 3] [i_0] [i_2] [i_8 + 2])))));
                    }
                    arr_25 [i_2] [i_2 - 1] [i_1] [i_0] [i_2] = ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))) : (arr_4 [i_2 - 2] [i_1] [i_0] [i_2]));
                    arr_26 [i_0] [i_2] [i_2 + 1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) % (((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (unsigned short)57596))))));
                }
                for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 57185572280177571ULL)))))) : (((((/* implicit */_Bool) arr_13 [i_9] [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (38248933U)))));
                    var_22 = ((/* implicit */short) ((((/* implicit */int) var_5)) % (((/* implicit */int) arr_28 [i_2 + 1] [i_2] [i_2] [i_2 - 1]))));
                    arr_29 [(unsigned short)17] [i_0] [i_0] [i_2] [(short)16] [i_0] = ((/* implicit */short) var_1);
                }
                var_23 = ((/* implicit */signed char) ((arr_14 [i_2 - 2] [(_Bool)1] [i_2 - 2] [13ULL] [i_2] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [(unsigned char)10])))));
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))));
                arr_30 [i_2] = ((((((/* implicit */int) var_9)) >> (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) arr_7 [i_2] [i_2 - 2] [i_1] [i_2 - 2] [i_2 - 2])));
            }
            var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) var_4)) > (var_6))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) 9ULL)) && (((/* implicit */_Bool) (signed char)100))))), (min((((/* implicit */unsigned short) (short)20680)), (var_2)))))) : (((/* implicit */int) var_1))));
            var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) 809990984U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)127))));
            arr_31 [0U] [(unsigned char)19] = ((/* implicit */unsigned long long int) (unsigned char)207);
        }
        /* vectorizable */
        for (signed char i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            arr_34 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_24 [i_0] [i_0] [(short)8]);
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_0] [i_10] [i_0])))))));
        }
        /* vectorizable */
        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
        {
            var_28 = ((/* implicit */short) ((unsigned short) var_2));
            var_29 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) + (var_7)));
        }
        var_30 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_1)) >= (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))))));
        arr_39 [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((unsigned long long int) arr_13 [(_Bool)1] [(_Bool)1] [i_0] [11ULL] [i_0])) : (arr_27 [i_0] [i_0] [i_0] [i_0])));
        var_31 -= ((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */int) arr_10 [i_0] [12U] [(signed char)11] [i_0] [i_0])), (var_6))));
    }
    var_32 = ((/* implicit */_Bool) var_7);
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-105))))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) -1470393765)) | (0ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (var_6))))))))));
}

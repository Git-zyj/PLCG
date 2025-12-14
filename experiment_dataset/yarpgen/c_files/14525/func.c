/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14525
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) min(((short)-20941), (((/* implicit */short) var_7))))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)54)) : (var_5)))))) ? (max(((+(var_18))), (var_18))) : (((/* implicit */unsigned int) var_9))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) 9223372036854775807LL);
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) ((unsigned char) ((var_15) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) : (((/* implicit */int) var_8))));
                var_22 += ((/* implicit */unsigned long long int) ((short) (signed char)3));
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((signed char) arr_0 [i_0] [i_0]))), (var_10)));
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [(short)6]))) - (var_6)))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)54)) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) var_18)) : (9223372036854775807LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0)))))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_24 = ((/* implicit */unsigned long long int) ((short) ((unsigned long long int) ((((/* implicit */int) arr_7 [i_2] [i_2])) < (var_5)))));
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2]))));
            arr_10 [i_2] [i_3] = ((/* implicit */short) max((15ULL), (((((/* implicit */_Bool) (short)12575)) ? (((((/* implicit */_Bool) (unsigned char)5)) ? (17426012036880863139ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 58720256U)))))))));
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    var_26 -= ((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_2] [i_2] [i_2]))));
                    var_27 &= ((/* implicit */int) var_1);
                }
                for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    arr_19 [i_2] [5ULL] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_6] [i_4] [i_3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_6])))))));
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (-(((/* implicit */int) (signed char)0)))))));
                }
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    var_29 ^= 1020732036828688476ULL;
                    var_30 |= ((/* implicit */int) (((+(((/* implicit */int) ((short) arr_0 [i_4] [i_4]))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (18446744073709551608ULL) : (1020732036828688476ULL)))) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) min((arr_7 [i_2] [i_3]), (arr_8 [(signed char)10] [i_4] [i_3]))))))));
                    arr_23 [i_2] [i_2] [i_4] [i_7] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (((_Bool)1) ? (-487158226) : (((/* implicit */int) (_Bool)1))))), (-9183413193333346745LL)));
                }
                arr_24 [i_2] = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_9 [i_4] [i_3])), (9223372036854775807LL)));
            }
            arr_25 [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_9 [i_2] [i_3])))) ? ((((-(var_15))) / (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) max((arr_0 [i_2] [i_2]), (((((/* implicit */_Bool) arr_2 [(short)2] [i_3])) ? (((/* implicit */unsigned int) var_9)) : (var_11))))))));
        }
        for (unsigned long long int i_8 = 2; i_8 < 9; i_8 += 4) 
        {
            arr_28 [i_2] = ((/* implicit */_Bool) 1020732036828688489ULL);
            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) -9223372036854775789LL))));
            arr_29 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-38)), (var_10)))) || (((/* implicit */_Bool) ((arr_6 [i_8 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_8 + 1] [i_8 - 2] [i_2] [i_8 - 1]))))))));
        }
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (short i_10 = 3; i_10 < 9; i_10 += 4) 
            {
                {
                    arr_37 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_10 - 3] [i_10] [i_10 - 2] [i_9]))))), (min((17426012036880863144ULL), (((/* implicit */unsigned long long int) -6945879176550046908LL))))));
                    arr_38 [i_2] [i_2] [i_10] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_2] [i_9] [i_10 - 1] [i_10 - 1] [i_10 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_2] [i_9] [i_10 - 3] [i_10 - 3]))) : (arr_22 [i_2] [i_9] [i_10 + 2] [(short)4] [i_9])))), (var_15)));
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) var_16))));
                    var_33 = ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (arr_6 [i_9]))), (((/* implicit */unsigned long long int) var_8))))) ? ((+(var_12))) : (((/* implicit */long long int) max((var_18), (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))))));
                }
            } 
        } 
        arr_39 [i_2] = ((/* implicit */short) 0U);
    }
}

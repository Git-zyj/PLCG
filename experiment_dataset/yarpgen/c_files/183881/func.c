/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183881
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_12 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_6 [10LL] [(unsigned short)2] [i_3] [10LL])) : (((/* implicit */int) var_11))))) ? (max((((/* implicit */long long int) (_Bool)1)), (var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4 - 2] [i_3] [2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned short)3] [i_4 - 2] [i_4]))) : (arr_4 [(unsigned short)5] [(unsigned short)5])))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_1 [i_0]))))))));
                                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((var_9) || (((/* implicit */_Bool) var_1))))), (((unsigned int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_12 [(unsigned short)1] [i_1] [(unsigned short)10])));
                                var_14 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32640)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [(unsigned short)4])))) ? (((0U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) 1330913754)) : (arr_11 [i_0] [i_1] [i_2 + 2] [i_3])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) - (1330913750)))) : (var_0)))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_16 = ((((/* implicit */_Bool) arr_10 [4ULL] [i_5] [i_2] [4LL] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1073741824U)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_13 [i_2 + 1] [i_2] [5ULL] [i_2 - 1] [i_2 + 2] [i_2]))))) : (1073741824U));
                                arr_18 [i_0] [(unsigned short)1] [(short)1] [(short)1] [3ULL] = ((/* implicit */unsigned long long int) arr_13 [i_2 + 1] [i_2] [10LL] [i_2 + 2] [i_2 - 1] [i_2 + 2]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 3; i_8 < 10; i_8 += 1) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((short) 1749557037U)), (((short) arr_22 [i_0] [6LL] [i_2] [i_7] [i_2 + 2])))))) != (min((4223491351U), (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))))));
                                var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) arr_17 [i_2 + 2] [i_2] [i_2 + 1] [i_2 + 1] [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 370643604))))) : (((/* implicit */int) arr_7 [i_0] [(short)5] [i_0]))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) var_8);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_9 = 0; i_9 < 19; i_9 += 1) 
    {
        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_1))));
                    /* LoopNest 2 */
                    for (long long int i_12 = 1; i_12 < 17; i_12 += 3) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 19; i_13 += 3) 
                        {
                            {
                                var_21 |= ((/* implicit */_Bool) var_10);
                                var_22 = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (1048064U));
                                var_23 = ((/* implicit */long long int) ((unsigned short) ((arr_33 [8] [i_12 + 1] [1ULL] [i_12 + 1] [i_13]) | (((/* implicit */long long int) ((((/* implicit */int) var_6)) % (((/* implicit */int) var_1))))))));
                                var_24 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_9] [6ULL])) && (min((((((/* implicit */_Bool) arr_32 [i_13] [i_11] [i_11] [i_9])) && (((/* implicit */_Bool) (signed char)-58)))), ((!(((/* implicit */_Bool) var_2))))))));
                                var_25 = ((/* implicit */short) 1330913754);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned int) (+(var_4)));
    /* LoopNest 3 */
    for (unsigned int i_14 = 0; i_14 < 25; i_14 += 4) 
    {
        for (long long int i_15 = 1; i_15 < 24; i_15 += 2) 
        {
            for (short i_16 = 3; i_16 < 24; i_16 += 2) 
            {
                {
                    var_27 = ((/* implicit */int) var_1);
                    arr_43 [i_14] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((9426410433169234075ULL), (((/* implicit */unsigned long long int) ((int) var_3)))))) ? (min((max((550066788U), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) var_5)))) : (var_7)));
                    var_28 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (short)-4205)), (14837932514740383961ULL)));
                }
            } 
        } 
    } 
}

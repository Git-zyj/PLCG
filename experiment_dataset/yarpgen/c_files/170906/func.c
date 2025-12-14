/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170906
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
    for (long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14843710953152078335ULL)) ? (524287U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    arr_10 [i_0] [i_0] [(_Bool)1] [i_1] = ((/* implicit */_Bool) max((arr_7 [(_Bool)1] [(_Bool)1] [i_2]), (((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0]))));
                    var_13 -= ((/* implicit */int) (!((_Bool)1)));
                    arr_11 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_8 [i_2] [i_1] [5ULL])) : (((/* implicit */int) (_Bool)1))))) : (((unsigned long long int) arr_4 [i_0] [i_1] [i_1]))))) && ((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_2 [6] [i_1 - 1])), (arr_4 [i_0] [i_1 + 1] [(short)9]))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((var_15), (var_4)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned long long int) arr_20 [i_3] [i_4] [i_3]);
                    var_17 += ((/* implicit */_Bool) (signed char)84);
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        for (signed char i_7 = 1; i_7 < 17; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 945019627892801227ULL))));
                                var_19 = (!(((/* implicit */_Bool) 524269U)));
                                var_20 = (((!(((/* implicit */_Bool) 3U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3]))) : (11324166023811978820ULL)))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_4] [i_6] [i_7 + 1] [8LL] [i_7] [i_7 + 2])) ? (((/* implicit */int) arr_24 [(_Bool)1] [(_Bool)1] [i_5] [i_7] [i_7 - 1] [i_7 - 1])) : (-1)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        arr_29 [i_5] [i_8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) -1)) ? (1878695892U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_30 [i_3] [i_4] [i_3] [i_8] [i_3] [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_25 [i_8] [i_8] [i_5] [i_4] [i_4] [i_4] [i_3]))));
                        arr_31 [i_3] [i_3] [i_3] [i_5] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_4] [i_4])) + (((/* implicit */int) arr_25 [i_3] [(_Bool)1] [i_5] [i_8] [i_5] [i_4] [i_4]))));
                        var_22 = ((/* implicit */_Bool) ((signed char) arr_25 [i_8] [3ULL] [i_4] [i_4] [i_3] [i_3] [i_3]));
                    }
                }
                for (short i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
                {
                    var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294442997U)) ? (max((((((/* implicit */_Bool) (short)-11030)) ? (8U) : (((/* implicit */unsigned int) 1107456399)))), (((/* implicit */unsigned int) arr_13 [i_3] [i_3])))) : (((unsigned int) (_Bool)1))));
                    arr_34 [i_3] [i_4] [i_9] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (0ULL)))) ^ (16164327967264409746ULL)))) ? (max(((-(arr_19 [(signed char)15] [(_Bool)1] [i_9] [i_4]))), (((/* implicit */unsigned long long int) min((134217727), (((/* implicit */int) arr_27 [i_3] [i_4] [i_9] [i_9] [i_4] [i_4]))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-2)) + (2147483647))) << (((/* implicit */int) ((unsigned short) arr_27 [i_3] [3ULL] [i_9] [i_3] [i_3] [i_4]))))))));
                }
                var_24 += ((/* implicit */signed char) (-(((((/* implicit */int) var_10)) % ((+(((/* implicit */int) (signed char)(-127 - 1)))))))));
            }
        } 
    } 
}

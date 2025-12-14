/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139477
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
    var_13 = ((/* implicit */_Bool) var_12);
    var_14 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_5);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_15 ^= ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1]))))));
                            arr_11 [i_3] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)85), ((signed char)-86)))) ? (((/* implicit */int) min((arr_10 [i_0] [i_0] [i_2] [i_0]), (((/* implicit */short) arr_8 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3]))))) : (((/* implicit */int) min((arr_8 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_8 [i_3] [i_2] [i_2] [i_1] [i_1] [i_0]))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 3; i_5 < 10; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 9; i_6 += 4) 
                        {
                            {
                                arr_21 [(signed char)10] [(signed char)10] |= ((/* implicit */unsigned long long int) ((arr_16 [i_6 + 2] [i_6] [i_6]) ^ (((/* implicit */int) arr_3 [10U] [i_6 + 2]))));
                                var_16 = arr_12 [i_0] [i_1] [i_0] [i_6 - 1];
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_15 [(signed char)10] [6LL] [i_4]))));
                                arr_22 [i_0] [10LL] [i_0 - 1] [i_0] = ((/* implicit */long long int) arr_16 [i_0 + 1] [i_6 + 2] [i_5 + 1]);
                                arr_23 [i_0] [i_0] [i_0] [i_4] [i_5] [i_6 - 1] = ((/* implicit */_Bool) (((_Bool)1) ? (134217600) : (((/* implicit */int) (unsigned char)177))));
                            }
                        } 
                    } 
                    arr_24 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0] [i_0 - 2] [i_0])) ? (((/* implicit */long long int) arr_1 [i_0 - 2])) : (arr_12 [i_4] [i_4] [i_4] [i_0 + 1])));
                    arr_25 [i_0 - 1] [i_0] [(unsigned short)10] = ((/* implicit */signed char) arr_12 [i_0] [i_0] [i_1] [i_4]);
                }
                for (signed char i_7 = 3; i_7 < 10; i_7 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_8 = 1; i_8 < 8; i_8 += 3) /* same iter space */
                    {
                        var_18 -= ((/* implicit */long long int) arr_28 [i_0 - 2] [i_0 - 2] [i_7] [i_7] [i_8 + 1]);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_34 [i_1] [i_7 - 2] [i_0] [i_9] = (!(((/* implicit */_Bool) arr_3 [i_0] [i_1])));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((-134217600) == (-134217600))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_20 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((min(((unsigned char)23), (((/* implicit */unsigned char) (_Bool)1)))), (arr_13 [i_0] [i_1] [i_7] [0U]))))));
                            arr_37 [i_0] [i_1] [i_7 - 1] [i_8] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_28 [i_0 + 1] [6LL] [i_0 - 2] [i_0 - 2] [(unsigned char)6]), (var_11)))))))));
                        }
                        for (unsigned int i_11 = 1; i_11 < 10; i_11 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (~(max((((/* implicit */int) (!(((/* implicit */_Bool) 0U))))), (arr_39 [(_Bool)1] [0ULL] [i_1] [i_7 - 1] [i_8] [i_11]))))))));
                            arr_41 [i_0] [i_0] [0U] [i_8] [i_0] = max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)50496));
                            arr_42 [i_8] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0 + 1] [i_0 + 1]);
                            arr_43 [i_0] [i_1] [i_7 - 3] [i_7 - 2] [i_8] [i_11] = ((/* implicit */_Bool) max((8034243472346663743ULL), (((/* implicit */unsigned long long int) 4294967282U))));
                        }
                        var_22 = ((/* implicit */unsigned int) arr_9 [i_0 - 2] [i_0] [i_7] [i_8 + 1]);
                    }
                    for (short i_12 = 1; i_12 < 8; i_12 += 3) /* same iter space */
                    {
                        arr_47 [i_0] = ((/* implicit */unsigned char) arr_17 [i_12 + 2] [i_0] [i_12] [i_12 - 1]);
                        var_23 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_36 [i_12 + 3] [i_0 + 1])))) ? (arr_36 [i_12 + 1] [i_1]) : (((/* implicit */unsigned long long int) min((var_10), (var_10))))));
                        arr_48 [i_0 - 1] [i_0] [i_0] [9ULL] [i_0] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_7 - 2] [i_12 + 2])) ? (((/* implicit */int) arr_15 [i_0] [i_7 - 3] [i_12 + 3])) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((signed char) 4294967295U))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)35))) : (4294967294U)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (-25LL)))) : (arr_35 [i_0] [i_1] [i_1] [i_7 + 1] [i_12 + 3])))));
                    }
                    arr_49 [i_0] [i_7 - 2] [i_1] [i_0] = ((/* implicit */unsigned int) (~(var_10)));
                    var_24 = ((/* implicit */int) min((((/* implicit */long long int) (_Bool)1)), ((~(281474976710144LL)))));
                }
                arr_50 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (signed char)85)), (10412500601362887873ULL)));
            }
        } 
    } 
}

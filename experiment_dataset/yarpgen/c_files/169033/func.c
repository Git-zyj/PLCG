/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169033
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), ((unsigned short)65535)))) && (((/* implicit */_Bool) var_2))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_12 ^= ((/* implicit */unsigned short) arr_7 [i_2] [i_2 + 3]);
                        arr_10 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) (_Bool)1);
                        var_13 |= ((/* implicit */_Bool) (short)-13498);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_14 &= ((/* implicit */signed char) ((((_Bool) min(((signed char)-16), (((/* implicit */signed char) arr_3 [i_0] [(short)2] [i_4]))))) ? (min((((/* implicit */unsigned long long int) arr_11 [i_1 + 1] [i_1] [i_1 + 1] [i_2 - 2] [i_4])), (8902679442586258326ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [(unsigned short)8])) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_5 [i_4] [i_1 + 1] [(_Bool)1])))))));
                        arr_13 [i_0] [i_1 + 1] [i_2] [i_0] = ((/* implicit */_Bool) arr_11 [i_2 + 3] [(short)3] [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */short) max((((arr_8 [i_5 - 1] [i_1 + 1] [i_1 - 1] [i_5] [i_5] [i_2 + 2]) ? (3745792609213867672LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1]))))), (((/* implicit */long long int) (_Bool)1))));
                        var_16 = ((/* implicit */unsigned short) max((((long long int) min((arr_14 [i_0] [i_0] [i_0]), (arr_2 [i_0] [(_Bool)1])))), (((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2 - 2] [i_2 - 1] [i_2 - 3])) ? (arr_11 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 3] [i_2 - 3]) : (arr_11 [i_2 + 1] [i_2] [i_2] [(unsigned short)0] [i_2 - 3])))));
                    }
                    /* LoopSeq 3 */
                    for (int i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
                    {
                        var_17 *= ((/* implicit */_Bool) max((arr_9 [i_6] [i_2] [i_1] [i_0]), (((/* implicit */unsigned int) arr_18 [i_6] [i_6]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 1; i_7 < 10; i_7 += 1) 
                        {
                            arr_22 [i_0] [6U] [i_2] = ((/* implicit */long long int) ((short) ((unsigned int) arr_12 [(unsigned short)10] [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1 + 1])));
                            var_18 = ((/* implicit */unsigned short) (_Bool)1);
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
                    {
                        arr_25 [i_0] [i_0] [i_2 + 2] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)53)) <= (((/* implicit */int) arr_21 [i_1 - 1] [i_1 + 1] [i_2 + 3] [i_0] [i_2 - 1] [i_2] [i_8]))));
                        var_19 = ((/* implicit */short) (_Bool)1);
                        var_20 = ((/* implicit */signed char) ((((arr_9 [i_0] [i_0] [(_Bool)1] [8]) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ^ (((((/* implicit */_Bool) (unsigned short)1)) ? (4294967295U) : (4294967278U)))));
                    }
                    for (int i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
                    {
                        arr_30 [(_Bool)0] [i_1] [(_Bool)0] [11LL] [i_0] [i_9] = ((/* implicit */unsigned int) ((_Bool) arr_1 [i_0]));
                        var_21 = (signed char)-119;
                    }
                    var_22 *= ((/* implicit */short) var_10);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) ((var_6) > (((/* implicit */unsigned long long int) 1486646126U)))))))) ^ (((/* implicit */int) (signed char)37))));
    /* LoopNest 2 */
    for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                arr_35 [i_11] [i_11] [i_10] &= ((/* implicit */short) arr_34 [i_10]);
                var_24 = ((_Bool) ((((/* implicit */_Bool) arr_34 [i_10])) ? (arr_34 [i_10]) : (arr_34 [i_10])));
                var_25 = ((/* implicit */int) (_Bool)1);
            }
        } 
    } 
}

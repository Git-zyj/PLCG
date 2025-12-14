/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137344
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3682764061033055407ULL)) ? (((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)12074)) / (((/* implicit */int) (unsigned short)12074))))))) : (((((/* implicit */_Bool) (unsigned short)14786)) ? (1099511627775LL) : (((/* implicit */long long int) ((/* implicit */int) (short)8389)))))));
    var_21 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_16))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_22 -= ((/* implicit */unsigned int) ((int) -2009997573));
        arr_3 [i_0] [i_0] = 2009997577;
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        for (unsigned short i_2 = 2; i_2 < 8; i_2 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (int i_5 = 3; i_5 < 10; i_5 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */short) arr_13 [i_1] [i_2] [i_3] [i_4] [i_5]);
                                arr_16 [i_1] [i_2] [7LL] [i_3] [i_4] [0ULL] [i_5] |= ((/* implicit */short) arr_5 [i_4]);
                                arr_17 [i_1 - 1] [i_1] [i_2] [(short)0] [i_4] [i_5] = ((/* implicit */short) min(((((~(arr_9 [7] [i_3]))) + (((/* implicit */long long int) max(((-2147483647 - 1)), (-1348570576)))))), (((/* implicit */long long int) (unsigned short)12074))));
                                var_24 += ((/* implicit */unsigned short) ((arr_2 [i_2]) ? ((-2147483647 - 1)) : (((((/* implicit */int) (unsigned short)14786)) * (((/* implicit */int) arr_13 [i_1] [i_2 - 1] [(unsigned short)6] [(_Bool)1] [i_5 - 2]))))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_2 + 3])) : (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */long long int) 278863505U)) : (((-20LL) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_2 + 1])))))));
                /* LoopSeq 1 */
                for (unsigned short i_6 = 4; i_6 < 10; i_6 += 4) 
                {
                    arr_20 [i_1] [i_2] [i_6] |= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)1))));
                    arr_21 [i_1] [i_2] [i_6] &= ((/* implicit */_Bool) ((unsigned int) ((arr_5 [i_1 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((1099511627775LL) < (((/* implicit */long long int) ((/* implicit */int) arr_14 [(unsigned short)3] [i_1 + 1] [i_1 + 1] [i_2] [i_2] [i_6]))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 9; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 4; i_8 < 8; i_8 += 4) 
                        {
                            {
                                arr_28 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 2])) ? (arr_5 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) ((unsigned short) arr_15 [i_6] [i_2 + 1] [i_2]))) ^ (((((/* implicit */_Bool) (short)30980)) ? (61962183) : (((/* implicit */int) (_Bool)0))))))));
                                var_26 ^= ((/* implicit */unsigned char) 370559613);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) 4278190080U))));
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) arr_29 [i_6] [i_1]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_10 = 3; i_10 < 10; i_10 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_11 = 3; i_11 < 9; i_11 += 3) 
                        {
                            var_29 = ((/* implicit */_Bool) min((var_29), ((_Bool)0)));
                            var_30 ^= ((/* implicit */short) (_Bool)0);
                        }
                        for (long long int i_12 = 1; i_12 < 9; i_12 += 3) 
                        {
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((int) arr_15 [1U] [i_1] [i_1])))));
                            var_32 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_9 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)27882)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (7328195300565047450ULL)))));
                            arr_40 [i_1 - 2] [1ULL] [i_1 - 2] [(short)5] [5] = ((61962200) << (((/* implicit */int) (_Bool)1)));
                            arr_41 [i_1] [i_2 + 1] = ((/* implicit */_Bool) -521107169261596975LL);
                        }
                        var_33 -= ((/* implicit */unsigned long long int) 67108800U);
                        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_6] [i_10])) ? (((arr_9 [i_2 + 2] [i_2 + 2]) & (((/* implicit */long long int) ((/* implicit */int) (short)-1))))) : (((/* implicit */long long int) arr_10 [i_6] [i_2] [i_6] [(unsigned short)4])))))));
                    }
                    for (unsigned int i_13 = 3; i_13 < 8; i_13 += 2) 
                    {
                        arr_45 [i_1 - 1] [i_1 - 1] [7U] [i_13] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_10 [i_13] [i_6] [i_2 - 2] [(short)4])) && (arr_4 [i_1] [i_6]))))), (var_11)));
                        var_35 = ((/* implicit */unsigned short) arr_8 [i_2] [10] [i_2 - 1]);
                    }
                    arr_46 [3U] [i_2] [i_6] = ((long long int) (_Bool)1);
                }
            }
        } 
    } 
}

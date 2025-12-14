/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164588
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
    var_11 &= ((/* implicit */_Bool) (((-(((/* implicit */int) ((var_6) < (var_6)))))) * (((((-131656653) + (2147483647))) << ((((~(((/* implicit */int) (short)-30051)))) - (30050)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_1] [10LL] [i_2] [i_3] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) min((var_1), (((/* implicit */unsigned short) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) var_9))))))))) > (((131656680) + (((/* implicit */int) (signed char)-21))))));
                        var_13 = ((/* implicit */int) max((((unsigned int) ((((/* implicit */int) (unsigned short)1731)) ^ (var_4)))), (((/* implicit */unsigned int) (!((_Bool)1))))));
                        var_14 = ((/* implicit */_Bool) var_9);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) (((+(var_0))) / (((/* implicit */int) ((short) var_6)))))) / (max((min((var_6), (((/* implicit */long long int) var_4)))), (min((((/* implicit */long long int) (unsigned char)1)), (var_6)))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */short) ((((/* implicit */int) (!((!(var_8)))))) * (((/* implicit */int) ((((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) == (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (_Bool)0)))))))))));
                            arr_18 [i_1] = ((/* implicit */_Bool) (((((~(max((((/* implicit */int) var_9)), (var_0))))) + (2147483647))) >> (((((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_3))))) | (((/* implicit */int) max((var_3), (((/* implicit */signed char) (_Bool)1)))))))));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_8))));
                            arr_19 [i_0] [i_4] [i_1] [i_0] [i_5] [i_2 - 1] [i_0] = ((/* implicit */unsigned short) var_3);
                        }
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((((/* implicit */int) ((((((/* implicit */int) (short)-32765)) > (((/* implicit */int) (_Bool)0)))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)1)))))))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_3)))))))));
                            arr_22 [i_1] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */_Bool) ((((max((var_2), (((/* implicit */unsigned int) var_9)))) / (var_2))) - (((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_1)))))))));
                            arr_23 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (-(min((((-9223372036854775802LL) - (-9223372036854775786LL))), (((/* implicit */long long int) var_0))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 9023929219232548715ULL))))) << (((/* implicit */int) ((var_7) < (((/* implicit */int) var_9)))))));
                            var_20 += ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)122))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_1))));
                            var_22 = ((/* implicit */_Bool) var_10);
                        }
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                        {
                            var_23 &= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (var_4)))) && (((/* implicit */_Bool) var_10)))));
                            var_24 = ((/* implicit */unsigned short) (~(((var_2) & (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) >> (((/* implicit */int) var_8)))))))));
                        }
                    }
                }
            } 
        } 
        arr_28 [i_0] &= ((/* implicit */short) (((-(max((var_7), (((/* implicit */int) (unsigned char)63)))))) <= (((/* implicit */int) ((3574825074207167313LL) < (((/* implicit */long long int) ((var_2) >> (((var_0) + (2136628067)))))))))));
        var_25 = ((/* implicit */long long int) ((max(((~(var_2))), (((/* implicit */unsigned int) var_8)))) | (((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) var_10))), (min((((/* implicit */int) (unsigned char)134)), (var_0))))))));
    }
    var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) var_7)) == ((~(max((((/* implicit */long long int) var_9)), (var_6)))))));
}

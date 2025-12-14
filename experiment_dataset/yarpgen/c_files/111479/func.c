/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111479
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
    var_15 = ((/* implicit */unsigned long long int) (signed char)127);
    var_16 = ((/* implicit */int) var_4);
    var_17 = ((/* implicit */unsigned int) ((int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_11))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */int) (~(((((unsigned long long int) var_6)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                        var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_0 - 1] [9] [i_3] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3637620342144979590LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_2)))))))));
                        var_19 = ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (((arr_8 [i_0] [i_0] [i_3]) ^ (1062352049)))))) ? (((min((var_14), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2])))) & (0ULL))) : (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (signed char)-18)))), (((/* implicit */int) (signed char)-99))))));
                    }
                    for (int i_4 = 4; i_4 < 11; i_4 += 3) 
                    {
                        arr_15 [i_1] = ((/* implicit */unsigned long long int) min((2147483644), (var_3)));
                        arr_16 [i_0 - 1] [i_0 + 3] [i_1] [i_2] [(signed char)3] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(arr_1 [i_1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 3; i_5 < 11; i_5 += 4) 
                    {
                        arr_19 [i_1] [i_5 - 3] [i_2] [i_1 + 2] [i_0] [i_1] = ((/* implicit */int) arr_1 [i_0]);
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (0ULL)))) && ((_Bool)1)));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 3; i_6 < 11; i_6 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_14))));
                            arr_26 [i_0 + 3] [i_0] [i_1] [i_0] [i_0 + 2] [i_0 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1] [i_6 - 3])) && (((/* implicit */_Bool) var_2))));
                            arr_27 [i_0] [i_2] [i_2] [i_6 + 1] [i_7] [i_1] [(unsigned short)6] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) var_5))) < (((/* implicit */int) var_1))));
                        }
                        for (unsigned long long int i_8 = 3; i_8 < 12; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) (-(arr_4 [i_0 + 1] [i_6 - 2] [i_8 - 2])));
                            var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 4244445350662886187ULL)))) ? (((/* implicit */int) ((short) var_0))) : ((~(((/* implicit */int) (short)-1))))));
                        }
                        var_24 *= ((/* implicit */int) var_1);
                        arr_30 [i_1] [4LL] [i_1 + 2] [i_1 + 3] [i_2] [i_6] = ((/* implicit */long long int) ((int) arr_12 [i_1] [i_0 + 3] [i_2] [i_6 - 3] [i_1 + 1] [i_6 - 3]));
                    }
                    arr_31 [i_0] [i_1] [(short)9] = ((/* implicit */unsigned long long int) arr_12 [i_1] [i_1 + 2] [i_1] [(signed char)8] [i_1 + 2] [i_1]);
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 2; i_9 < 10; i_9 += 4) 
                    {
                        var_25 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)1))))), (((((/* implicit */_Bool) arr_8 [i_9] [i_9] [i_9])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) && (((/* implicit */_Bool) 1073741823ULL))));
                        arr_35 [i_1] [i_1 + 2] [i_2] [i_9 + 2] = ((((/* implicit */int) var_1)) | (min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) < (var_5)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))))));
                    }
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) var_0);
                        var_27 = (short)-1;
                        arr_39 [i_1] [i_1 + 1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (max(((-(var_7))), (arr_4 [i_10] [i_1] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [(signed char)8] [i_1] [i_2] [i_2] [i_2] [i_10])) | ((+(((/* implicit */int) (_Bool)1)))))))));
                    }
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) var_9))));
                }
                var_29 = ((/* implicit */short) var_2);
                arr_40 [i_0 + 1] [i_1 + 3] [i_1] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_38 [i_1] [i_0 + 2] [i_1] [i_1]))))), (var_7))) < (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_9)))))))));
                var_30 += ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
            }
        } 
    } 
}

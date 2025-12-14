/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157652
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
    var_18 = ((/* implicit */long long int) (short)28206);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 1) /* same iter space */
                        {
                            arr_11 [i_4] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (signed char)9))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */unsigned int) (short)-28207);
                        }
                        for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 1) /* same iter space */
                        {
                            arr_15 [i_5] [6LL] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_19 |= ((unsigned short) (-(((/* implicit */int) (short)-32755))));
                        }
                        arr_16 [i_1] [i_1] = ((/* implicit */long long int) (short)28206);
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) 16646144U);
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)28206))))))))));
                        }
                        for (short i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            arr_27 [i_2] [i_2] |= ((/* implicit */int) min((8983982688504913172ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3LL)) ? (var_10) : (((((/* implicit */int) (unsigned short)15941)) % (((/* implicit */int) (short)28207)))))))));
                            var_21 += ((/* implicit */signed char) min((((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) -1540206308760516982LL)))))), (((long long int) arr_26 [i_0] [7LL] [i_2]))));
                        }
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (min((((/* implicit */unsigned long long int) min((((long long int) arr_22 [i_0] [i_2] [i_2] [(unsigned short)9])), (min((((/* implicit */long long int) (_Bool)1)), (arr_2 [i_0])))))), (min((min((((/* implicit */unsigned long long int) var_0)), (9462761385204638443ULL))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_6])) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) arr_9 [3U] [i_1] [i_2] [i_2] [3U] [i_2]))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        for (int i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) min((min((arr_3 [i_0] [i_9] [i_10]), (-953827431))), (((((/* implicit */_Bool) arr_3 [i_9] [i_1] [i_0])) ? (arr_3 [i_0] [i_1] [i_2]) : (arr_3 [i_10] [i_9] [i_0])))));
                                var_24 = ((/* implicit */int) -179334917916078109LL);
                                arr_34 [i_9] [i_9] = ((/* implicit */short) min((min((((/* implicit */long long int) (_Bool)1)), (2084757888100207495LL))), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */int) var_0))))))));
                                arr_35 [i_0] [i_1] [i_1] [i_9] [i_9] [i_10] = ((/* implicit */long long int) ((unsigned long long int) (~(arr_21 [i_0] [i_1] [i_1] [i_9] [i_10] [i_10] [9]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        var_25 = ((/* implicit */int) min((min((2649001759663736040LL), (((/* implicit */long long int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0])))), (min((arr_21 [i_0] [i_1] [i_1] [i_2] [i_1] [i_2] [i_1]), (((/* implicit */long long int) var_0))))));
                        arr_38 [i_2] [i_1] [i_2] [i_11] [i_11] [i_2] = ((/* implicit */unsigned short) -766635374);
                        arr_39 [i_2] = ((/* implicit */int) (unsigned short)27779);
                    }
                }
            } 
        } 
    } 
}

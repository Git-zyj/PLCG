/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1462
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
    var_10 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) arr_5 [i_2] [i_1] [i_0 - 3] [i_0]))))))))));
                    arr_7 [i_0] [8U] [i_2 + 2] = ((/* implicit */short) (~(max((((/* implicit */unsigned int) arr_5 [i_2] [i_2 + 3] [(_Bool)1] [i_2])), (((((/* implicit */unsigned int) -152598531)) * (2464362940U)))))));
                }
                for (unsigned char i_3 = 1; i_3 < 16; i_3 += 1) 
                {
                    arr_11 [i_0] [3] [i_3] = ((/* implicit */signed char) ((unsigned char) var_1));
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (-((~(-152598531))))))));
                }
                var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_1] [i_0 + 3] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_1] [i_1] [i_0 - 3] [(unsigned char)10]))))) - (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 631833259)), (arr_4 [i_0] [i_1] [17LL])))) + (arr_3 [i_0])))));
                var_14 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) 0ULL))) / (min((-152598531), (((/* implicit */int) (unsigned char)17))))));
                var_15 &= ((/* implicit */unsigned int) ((unsigned short) 152598531));
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    var_16 = arr_8 [i_0] [i_0];
                    arr_15 [i_0] [i_0] [i_4] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_1 [(unsigned char)3] [i_0 + 1])) ? (arr_1 [i_0] [i_0 - 2]) : (arr_1 [i_0] [i_0 - 2]))), (((((/* implicit */_Bool) 935450077)) ? (arr_1 [i_0 + 2] [i_0 - 3]) : (arr_1 [i_0] [i_0 + 2])))));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                            arr_22 [i_1] [i_1] [i_0] [i_5] [i_0] [i_0] [(_Bool)1] = var_5;
                            var_18 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) / (((/* implicit */int) var_8)));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            arr_26 [i_0 + 2] [i_0 + 2] [i_4] [i_0] [i_0] [i_5] [i_7] = ((/* implicit */unsigned short) (+(152598542)));
                            var_19 = ((/* implicit */unsigned char) 18446744073709551615ULL);
                            var_20 = ((/* implicit */unsigned char) (!((_Bool)1)));
                        }
                        var_21 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) 0LL)) ? (((int) -631833259)) : (((/* implicit */int) (_Bool)1)))));
                        var_22 |= ((/* implicit */unsigned long long int) max((((unsigned int) 7U)), (max((var_4), (((/* implicit */unsigned int) arr_10 [i_0 + 1] [i_0 + 2]))))));
                        var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_23 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 - 1])) ? (576460752286646272ULL) : (((/* implicit */unsigned long long int) 2844009767U)))) <= (((/* implicit */unsigned long long int) 4294967295U)))))));
                        arr_27 [i_0] [4LL] [6LL] [6LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        for (int i_9 = 2; i_9 < 17; i_9 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) var_7);
                                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (2147483647)))))));
                                var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) << ((((((_Bool)0) ? (((/* implicit */unsigned long long int) -631833259)) : (4611686018427387903ULL))) - (4611686018427387870ULL)))));
                            }
                        } 
                    } 
                    var_27 = (~(max((((/* implicit */unsigned int) arr_18 [i_0 - 2] [i_4])), (arr_4 [i_0 - 2] [i_0 - 2] [i_4]))));
                }
            }
        } 
    } 
}

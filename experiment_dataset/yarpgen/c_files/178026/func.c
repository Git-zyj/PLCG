/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178026
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (var_18) : (((/* implicit */int) arr_0 [i_0 - 2])))), (((/* implicit */int) min((arr_0 [i_0 + 2]), (arr_0 [i_0 - 1]))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 15)) ? ((+((+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 2] [i_2 - 2])))))));
                        arr_9 [i_3] [i_3] = -821544588;
                        arr_10 [i_0] [i_0] [i_0 + 1] [i_3] = ((/* implicit */short) max((2147483638), (arr_7 [i_0] [i_0] [i_0 + 2] [i_3] [i_3] [i_3])));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(1547178303148749367LL))), (((/* implicit */long long int) arr_12 [i_4] [i_4] [i_2] [i_1] [i_0 + 1]))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1)))))));
                        var_23 *= ((/* implicit */short) arr_1 [i_4] [i_4]);
                    }
                    for (int i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((max((min((3097021898724726898LL), (var_11))), (((/* implicit */long long int) arr_15 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 1])))) / (((/* implicit */long long int) ((/* implicit */int) (short)17306))))))));
                        arr_17 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */short) var_0);
                        var_25 = ((/* implicit */short) (-((+(min((((/* implicit */int) (short)0)), (902434175)))))));
                    }
                    for (int i_6 = 4; i_6 < 9; i_6 += 2) 
                    {
                        arr_22 [i_0 - 2] [i_2] [i_2 - 1] = ((/* implicit */long long int) var_7);
                        arr_23 [i_2] [i_1] [i_2] [i_6] [i_6] [i_1] = ((((arr_12 [i_6 - 2] [i_2] [i_2] [i_1] [i_0 - 1]) + (2147483647))) << ((((-(((((/* implicit */int) (short)-16169)) % (((/* implicit */int) var_10)))))) - (16169))));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) min((((/* implicit */int) ((_Bool) (_Bool)1))), (max((var_4), (((/* implicit */int) arr_21 [i_0] [i_0 - 2] [i_1] [i_2 - 2] [i_6 - 4] [i_6])))))))));
                    }
                    var_27 ^= ((/* implicit */short) (unsigned short)3334);
                    arr_24 [i_0 + 2] [i_1] [i_2] = ((/* implicit */int) 367503504325021197LL);
                    /* LoopSeq 3 */
                    for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        var_28 = ((short) arr_2 [i_7] [i_7]);
                        var_29 = ((/* implicit */unsigned short) (short)768);
                    }
                    for (int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) + (((/* implicit */int) (short)17306))))) ? (((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (short)5529)) : (((/* implicit */int) (short)11599)))) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0 - 2] [i_2 - 3])))) : (((/* implicit */int) ((-1635893939) > (((/* implicit */int) var_1))))))))));
                        arr_31 [i_2] [i_8] [i_8] = max((-821544588), ((((-(((/* implicit */int) arr_21 [i_2] [i_1] [i_2] [i_2] [i_0] [i_2])))) * (((/* implicit */int) arr_2 [i_2] [i_0])))));
                        arr_32 [i_8] [i_0] [i_0] [i_8] [i_0] = arr_21 [i_8] [i_2] [i_1] [i_1] [i_0] [i_0];
                    }
                    for (int i_9 = 2; i_9 < 9; i_9 += 2) 
                    {
                        var_31 = ((/* implicit */long long int) arr_13 [i_9] [i_0] [i_2] [i_1] [i_0]);
                        arr_35 [i_9] [i_1] = ((/* implicit */short) max((arr_8 [i_9] [i_9]), (((/* implicit */int) (unsigned char)238))));
                        var_32 *= ((/* implicit */_Bool) 902434180);
                    }
                }
            } 
        } 
    }
    var_33 = ((/* implicit */_Bool) (~(-414104745)));
    var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (4467570830351532032LL) : (((/* implicit */long long int) var_17))));
}

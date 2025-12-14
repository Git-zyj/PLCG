/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115053
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
    var_19 ^= ((/* implicit */long long int) (~(((/* implicit */int) (short)-22857))));
    var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (var_10));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) ((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) : ((~(((/* implicit */int) (unsigned short)65535)))))) : (((((/* implicit */int) var_5)) - (((/* implicit */int) (unsigned char)11))))));
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (short i_4 = 1; i_4 < 12; i_4 += 1) 
                            {
                                var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3 + 1])) ? (((/* implicit */int) arr_9 [i_3] [i_3] [i_3] [i_3 - 2])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_3 + 2]))));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (short)11079))) | (2147483647)));
                                var_24 = ((int) arr_14 [i_1 + 1] [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_4 + 1]);
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                arr_20 [i_2] [i_2] [i_5] [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_16 [i_0] [i_0] [i_0] [i_0] [4] [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)1))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) - (arr_16 [i_5] [i_3 + 1] [i_2] [i_2] [i_2] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) 1015386302007452574LL)))))));
                                arr_21 [i_2] [i_2] [i_5] [i_2] [i_2] = ((/* implicit */long long int) ((((arr_17 [i_0] [i_1] [i_2] [i_3]) % (((/* implicit */int) (unsigned short)65515)))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                            {
                                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (15720800334956350338ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_11 [i_1] [i_1] [i_1] [i_1] [(signed char)3]), (((/* implicit */short) arr_9 [i_0] [i_0] [i_0] [i_0])))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65533))) + (-2407357528080284296LL)))))) ? (((/* implicit */int) (unsigned char)180)) : (((/* implicit */int) arr_9 [i_1] [i_2] [i_3 - 1] [i_6]))));
                                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_11 [i_1 + 1] [i_3 - 1] [i_3] [i_3 + 2] [i_3]), (((/* implicit */short) arr_15 [i_1 + 1] [i_3 - 2] [i_3 + 2] [i_3 - 2] [i_6]))))) ? ((((_Bool)1) ? (2407357528080284283LL) : (-7173663242058660674LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)76)))));
                                arr_26 [i_0] [i_1] [i_0] [i_1] [i_0] [i_3] [i_6] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */int) arr_22 [i_0] [12LL] [i_3] [i_3])) : (arr_3 [i_0])))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)2))))));
                                arr_27 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (unsigned short)13791);
                                arr_28 [i_0] [i_1 + 1] [i_1 + 1] [i_3 + 2] [i_1 - 1] [i_2] [i_6] = ((signed char) (_Bool)1);
                            }
                        }
                    } 
                } 
                var_27 -= min((arr_17 [i_0] [i_0] [i_0] [i_0]), (var_18));
            }
        } 
    } 
}

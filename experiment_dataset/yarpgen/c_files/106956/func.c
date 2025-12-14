/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106956
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) var_9)), ((short)2669)))) > (((/* implicit */int) var_12))))) >= (((((/* implicit */int) ((signed char) (short)2685))) << (((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-2669)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */int) ((3167832490U) >> (((((/* implicit */int) (short)2640)) - (2629)))));
                        arr_10 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1] = ((((/* implicit */long long int) ((((/* implicit */int) (short)-2669)) / (((/* implicit */int) (short)2669))))) & (((long long int) 13)));
                        /* LoopSeq 4 */
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */int) (signed char)21)) >> (((arr_0 [i_4]) - (781224206)))));
                            var_21 = ((/* implicit */short) arr_4 [i_2] [i_3]);
                            var_22 = ((/* implicit */unsigned char) (short)2667);
                            var_23 = ((/* implicit */short) (_Bool)1);
                            arr_15 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) (signed char)63)) - (46)))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            var_24 = ((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [i_0 + 1] [i_1]);
                            var_25 = ((/* implicit */long long int) 4294967294U);
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_1] [i_1])) >= (((/* implicit */int) arr_3 [i_5] [i_1] [i_2]))));
                            var_27 = ((/* implicit */signed char) arr_0 [i_2]);
                            var_28 = ((/* implicit */short) ((arr_13 [i_0 - 1] [i_5] [i_0 - 1] [i_0 - 1] [i_5]) / (((9891703720924113758ULL) - (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]))))));
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)84))) & (arr_11 [i_0] [i_0] [i_0 + 1] [i_0] [i_1]))) << (((/* implicit */int) ((-8457710134639781360LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)7586))))))));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)5)) + (((/* implicit */int) (unsigned short)65530))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned char) (unsigned short)65535);
                            var_32 = ((/* implicit */_Bool) (unsigned char)239);
                            var_33 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_3] [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_12 [i_7] [i_1] [i_3] [i_2] [i_1] [i_0])) + (24842))) - (10)))));
                        }
                        var_34 = arr_6 [i_0] [i_1];
                    }
                    var_35 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (7093024499756769925LL))) * (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0 - 2] [i_0] [i_0 - 2] [i_0 + 1] [i_0 + 2] [i_0 - 2])) / (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
}

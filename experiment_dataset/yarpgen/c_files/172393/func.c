/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172393
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
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) (short)-9222)))) : (((((/* implicit */_Bool) ((int) 0U))) ? (((/* implicit */int) (_Bool)1)) : (var_12))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_1])) || (((/* implicit */_Bool) var_6)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0]);
                                arr_15 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((var_12) + (2147483647))) << (((((((var_3) + (2147483647))) << (((((/* implicit */int) ((_Bool) var_13))) - (1))))) - (2139368793)))));
                                var_17 = (~(1903988338));
                                var_18 = var_11;
                                var_19 = ((/* implicit */unsigned int) -1LL);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        for (unsigned int i_6 = 2; i_6 < 15; i_6 += 4) 
        {
            {
                arr_23 [i_5] [i_6] [i_6] = ((((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned char) var_7)))))) - (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)3))))) : (2404561009U))));
                arr_24 [i_5] [i_5] = ((/* implicit */short) ((((_Bool) ((arr_21 [i_5] [i_5] [i_6]) / (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-14)))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-2249343225156745836LL) >= (((/* implicit */long long int) 3280069953U)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (var_0)))))));
                /* LoopNest 3 */
                for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    for (long long int i_8 = 1; i_8 < 16; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            {
                                var_20 = max((((((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned int) 1903988338)))) % (((/* implicit */unsigned int) arr_17 [i_5])))), (((/* implicit */unsigned int) (signed char)41)));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (signed char)57))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-41)) >= (((/* implicit */int) (signed char)16))));
                                arr_32 [i_5] [i_5] [i_7] [i_8] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2249343225156745822LL) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) -1)) : (2404561009U))) : (((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                                arr_33 [i_5] [i_5] [i_5] [i_8 + 2] [i_9] = ((/* implicit */signed char) 8084773701117338929ULL);
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) min((var_13), (((/* implicit */int) ((short) ((((/* implicit */int) var_1)) == (((/* implicit */int) (signed char)-41)))))))))));
            }
        } 
    } 
}

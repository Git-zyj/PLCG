/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125736
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] = ((/* implicit */signed char) ((((long long int) var_2)) | (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */int) min((((/* implicit */short) var_3)), (var_14)))) : (((((/* implicit */int) var_5)) & (((/* implicit */int) arr_6 [i_0 - 2] [i_1] [i_0] [i_0])))))))));
                            arr_13 [(signed char)2] [5LL] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) arr_6 [i_3] [i_0] [i_0] [i_0]);
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                            {
                                arr_16 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? ((-(arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_2] [i_0 - 2])))))));
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((int) var_10))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)33632)) : (((/* implicit */int) var_3)))) : (((((/* implicit */int) arr_5 [i_0] [i_4])) & (((/* implicit */int) var_2)))))));
                            }
                        }
                    } 
                } 
                arr_18 [i_0] [i_1] = ((/* implicit */short) (unsigned short)33623);
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3170200398701909420ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 3] [i_0 - 3]))))) ? ((-(((/* implicit */int) var_6)))) : ((~(((/* implicit */int) (unsigned short)31914))))));
                arr_19 [i_0] [i_0] = ((/* implicit */unsigned int) arr_8 [i_0 - 1]);
                arr_20 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */int) arr_5 [i_0] [i_1])), (1220774015))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 2251799813685247LL)) / (var_11)));
    var_17 = ((/* implicit */_Bool) 14456482121907999601ULL);
    var_18 = ((/* implicit */short) var_3);
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_4))));
}

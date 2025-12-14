/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118090
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
    var_19 = var_10;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((unsigned char) 0U));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_4 = 2; i_4 < 17; i_4 += 1) 
                            {
                                var_21 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_0] [i_0] [i_4 + 2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_10 [i_1] [i_4 + 2] [i_4] [i_4 + 2] [i_4 + 3] [i_4]))));
                                arr_13 [i_0] [i_0] [i_0 + 1] [i_4] [i_0] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                                arr_14 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 4; i_5 < 16; i_5 += 2) 
                            {
                                var_22 = ((/* implicit */unsigned char) (!((_Bool)1)));
                                arr_17 [i_5] [i_2] [i_0] [i_2] [i_0] [i_1] [i_0 + 1] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            }
                            arr_18 [i_0] [i_3] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_10 [i_0] [i_0] [i_1] [i_2 - 1] [i_3] [i_3])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_6 = 4; i_6 < 18; i_6 += 3) 
                {
                    for (signed char i_7 = 1; i_7 < 17; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */long long int) arr_0 [i_0])))))) == (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                                var_24 = ((/* implicit */int) var_4);
                                arr_27 [i_7] [i_7] [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) (~(arr_1 [i_0 + 1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

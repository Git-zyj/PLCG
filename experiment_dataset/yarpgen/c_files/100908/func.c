/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100908
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_11 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) min((var_4), (((/* implicit */short) var_2)))))) ^ (max((((/* implicit */long long int) 1849046110U)), ((((_Bool)1) ? (arr_7 [i_0] [i_1 + 3] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                    var_12 &= ((/* implicit */signed char) var_7);
                    var_13 = ((/* implicit */unsigned char) (unsigned short)29467);
                }
                arr_10 [i_0] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) var_5)) % (-1)))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    for (unsigned char i_4 = 3; i_4 < 9; i_4 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
                            {
                                var_14 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((long long int) arr_9 [i_0] [(short)5] [i_4] [i_1]))), (var_8))), ((+(var_8)))));
                                var_15 *= ((/* implicit */unsigned char) var_3);
                                arr_19 [i_0] = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)23409));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) >= (((((((/* implicit */_Bool) var_7)) ? (arr_16 [i_0] [2LL]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                            }
                            arr_20 [i_0] [3LL] [i_3] &= ((/* implicit */long long int) ((signed char) max((((/* implicit */unsigned int) ((short) (short)11624))), (max((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (arr_18 [i_4] [i_3] [i_3] [i_1 - 1] [i_0] [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((-1) < (((/* implicit */int) var_10))));
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_6))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131333
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
    var_14 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned int) var_12)), (1040187392U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((13LL), (-3784179646989001778LL)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))))))));
    var_15 = ((/* implicit */int) max((((/* implicit */long long int) var_12)), (var_13)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0 + 1] [i_0 + 1] [10LL] [i_2] [(unsigned char)14] = ((/* implicit */unsigned short) var_0);
                                var_16 += ((/* implicit */short) 1435280410);
                                var_17 = ((/* implicit */signed char) max(((-(((((/* implicit */long long int) ((/* implicit */int) arr_9 [7ULL]))) / (arr_2 [(_Bool)1] [(_Bool)1]))))), (((/* implicit */long long int) ((unsigned short) ((arr_2 [i_2 + 2] [i_4 - 1]) / (((/* implicit */long long int) arr_7 [i_2] [i_1 - 1] [(_Bool)1] [i_2]))))))));
                                var_18 = ((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 2] [i_1] [i_0 - 2]);
                                arr_13 [i_0] [i_0] [i_1 - 1] [i_2] = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */short) ((unsigned char) 16754371825069874256ULL))), ((short)20769))));
                            }
                        } 
                    } 
                } 
                var_19 ^= 0LL;
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112132
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */int) arr_3 [i_0] [0LL] [i_0]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (short i_3 = 4; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_12 [i_1] [i_1] [(short)3] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_1)))))) : (arr_11 [i_0] [i_0] [i_0] [i_0])));
                            var_20 = arr_10 [5LL] [i_0];
                            var_21 = ((/* implicit */unsigned char) ((int) min(((~(((/* implicit */int) var_11)))), (((/* implicit */int) arr_7 [i_0] [i_3 - 4] [i_2])))));
                            arr_13 [(_Bool)1] [i_1] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) ((1439675519U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)560)))))) - (((/* implicit */int) ((arr_3 [i_0] [i_0] [i_0]) >= (arr_11 [i_0] [i_1] [i_1] [i_0]))))))) & (((arr_6 [i_3 - 3] [i_0] [i_0] [i_3 - 4]) / ((~(arr_0 [i_0])))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((signed char) (((+(((/* implicit */int) var_3)))) >= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_16)))))));
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        for (int i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            {
                arr_19 [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_17)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -718934380)) ? (((/* implicit */int) ((23ULL) != (30ULL)))) : ((~(((/* implicit */int) (short)23563)))))))));
                var_24 = ((/* implicit */unsigned char) min(((-(2779462711U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_4] [i_4] [i_4])))))));
                var_25 = ((/* implicit */unsigned long long int) ((int) (+(3213053275U))));
                arr_20 [i_4] = ((/* implicit */short) (+((-(((/* implicit */int) arr_18 [i_5]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    for (long long int i_7 = 1; i_7 < 21; i_7 += 2) 
                    {
                        {
                            arr_25 [i_4] [i_6] [i_7] = ((/* implicit */unsigned char) arr_22 [8ULL] [i_5] [(short)16]);
                            var_26 = ((/* implicit */long long int) (~(((1515504584U) << (((((/* implicit */int) (unsigned char)161)) - (154)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182925
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) (((+((+(((/* implicit */int) arr_0 [i_0])))))) | (((((_Bool) 0U)) ? (arr_1 [i_0]) : ((+(((/* implicit */int) (unsigned short)34668))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_14 &= var_0;
            arr_4 [i_0] [i_1] = ((/* implicit */int) ((_Bool) (~(((/* implicit */int) max((arr_0 [20U]), (((/* implicit */unsigned char) (_Bool)1))))))));
        }
    }
    for (short i_2 = 3; i_2 < 11; i_2 += 3) 
    {
        arr_7 [i_2] = ((((int) arr_5 [i_2 - 1])) != (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_2 - 1])) : (((/* implicit */int) (_Bool)1)))));
        var_15 += ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [8LL]))))), (((unsigned long long int) arr_2 [i_2] [i_2 - 2] [i_2 - 1]))));
        arr_8 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) arr_1 [i_2 - 3])))));
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 11; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))), (arr_10 [i_4]))), (((/* implicit */unsigned long long int) arr_1 [2LL]))));
                var_17 = min((min((((/* implicit */int) (short)13944)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (arr_14 [i_3] [i_4] [i_3]))))), ((-(((/* implicit */int) arr_0 [i_3])))));
            }
        } 
    } 
}

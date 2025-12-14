/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134060
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = (i_1 % 2 == 0) ? (((/* implicit */signed char) (~(((((/* implicit */_Bool) ((var_4) << (((arr_3 [i_1]) - (3523232540U)))))) ? (((unsigned int) arr_3 [i_1])) : (max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_2 [i_1])))))))) : (((/* implicit */signed char) (~(((((/* implicit */_Bool) ((var_4) << (((((arr_3 [i_1]) - (3523232540U))) - (842278335U)))))) ? (((unsigned int) arr_3 [i_1])) : (max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_2 [i_1]))))))));
                arr_4 [i_1] = ((/* implicit */unsigned int) ((short) var_7));
                var_11 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((_Bool) var_3))))), (max((((/* implicit */unsigned long long int) (short)-22008)), (0ULL)))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) ((arr_3 [i_1]) * (min((var_0), (arr_3 [i_1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            {
                var_12 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2])) << (((((/* implicit */int) arr_8 [i_3])) + (77)))))) != (((unsigned int) var_3))));
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) - (arr_9 [i_2]))) * (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((signed char) 0U))))) : (arr_9 [(signed char)14])));
                var_14 = ((/* implicit */_Bool) max((((var_4) % (((/* implicit */unsigned long long int) arr_6 [i_2])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_7))))) ? (arr_9 [i_2]) : (((((arr_9 [i_2]) + (9223372036854775807LL))) << (((/* implicit */int) var_6)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        {
                            var_15 -= ((/* implicit */unsigned int) ((long long int) -260777071673555153LL));
                            var_16 = ((/* implicit */unsigned int) var_8);
                        }
                    } 
                } 
                arr_14 [i_3] = ((/* implicit */long long int) ((_Bool) min((0ULL), (((/* implicit */unsigned long long int) (short)-21680)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) var_2))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (var_0))))) && (((/* implicit */_Bool) (unsigned char)191))));
    /* LoopSeq 2 */
    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
    {
        var_19 = arr_12 [(unsigned short)12] [i_6] [(signed char)16] [(unsigned short)12];
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((arr_0 [i_6]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) arr_16 [i_6] [i_6])) ? (1926278387U) : (arr_11 [i_6] [i_6] [i_6] [i_6]))) : (((/* implicit */unsigned int) min(((-(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_5)))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_21 = ((/* implicit */short) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_7] [i_7]))) : (arr_2 [i_7])))), (((((/* implicit */long long int) ((/* implicit */int) var_5))) & (arr_13 [i_7] [i_7] [22U] [i_7] [i_7] [i_7]))))), (((((/* implicit */_Bool) 8868677613288930992ULL)) ? (-14LL) : (((/* implicit */long long int) 2368688908U))))));
        var_22 = var_3;
        var_23 = ((/* implicit */long long int) arr_0 [i_7]);
        var_24 = ((/* implicit */int) (~(((min((arr_17 [i_7]), (((/* implicit */unsigned long long int) var_7)))) % (((/* implicit */unsigned long long int) ((260777071673555152LL) << (((arr_2 [i_7]) - (3046477389U))))))))));
    }
}

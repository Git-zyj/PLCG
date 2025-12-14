/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154390
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
    var_14 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)35736))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) + (1610612736U)))) : (((var_3) * (arr_1 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_1]))))))));
                var_16 = ((/* implicit */unsigned char) var_12);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_17 -= max((((arr_15 [2] [i_3] [i_4] [4ULL]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_15 [i_2] [i_3 + 1] [i_6 - 1] [2LL])))), ((~(((/* implicit */int) arr_8 [i_5])))));
                                arr_18 [i_5] [i_5] [i_4] [i_3] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_9 [i_4] [i_4] [i_6])), ((unsigned char)81)))) ? (((/* implicit */int) arr_16 [i_2])) : (((/* implicit */int) ((unsigned short) var_7)))))) ^ (min((((/* implicit */long long int) arr_5 [i_6 - 2] [i_6 - 1])), (((((/* implicit */long long int) 0)) & (3450494848657234668LL)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    for (long long int i_8 = 2; i_8 < 16; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 2; i_9 < 18; i_9 += 1) 
                        {
                            {
                                var_18 = ((var_13) ? (((/* implicit */int) arr_9 [i_3 - 1] [i_3 - 1] [19ULL])) : (min((arr_20 [i_3 - 1] [i_3]), (((/* implicit */int) arr_9 [i_3 - 1] [i_9] [i_3])))));
                                arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_7] = ((short) (unsigned short)29821);
                                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_7] [i_3 - 1]))));
                            }
                        } 
                    } 
                } 
                var_20 -= ((/* implicit */short) (_Bool)1);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_7);
}

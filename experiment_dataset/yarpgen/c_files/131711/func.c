/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131711
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_11 [i_3] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((_Bool) ((int) min((((/* implicit */unsigned int) var_4)), (15634655U)))));
                            var_15 = ((/* implicit */short) var_7);
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))))))) : (((((/* implicit */_Bool) (-(arr_7 [i_0 + 2] [i_1] [i_0])))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))))));
                            var_17 = ((/* implicit */unsigned int) var_11);
                        }
                    } 
                } 
                arr_12 [i_0] [2U] |= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (var_9)))) ? (arr_1 [(unsigned short)14]) : (arr_4 [i_0 + 3] [i_1] [i_1])))) * (min((((/* implicit */unsigned int) var_0)), (min((((/* implicit */unsigned int) var_6)), (var_12)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (int i_5 = 4; i_5 < 10; i_5 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_6 = 1; i_6 < 10; i_6 += 4) 
                {
                    for (int i_7 = 1; i_7 < 9; i_7 += 3) 
                    {
                        {
                            arr_23 [(unsigned char)4] [i_4] [i_6] [i_4] [i_4] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4])) ? (2818422478377324068ULL) : (((/* implicit */unsigned long long int) var_13))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_17 [(unsigned char)2] [i_4] [i_4] [(unsigned char)6]))) : ((-(18446744073709551603ULL)))))));
                            var_18 |= ((/* implicit */unsigned int) arr_13 [(unsigned char)8] [(signed char)8]);
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) var_0);
                arr_24 [i_4] = ((/* implicit */signed char) ((long long int) min((min((-5128857240400016565LL), (((/* implicit */long long int) arr_18 [i_4] [(unsigned char)7] [i_4])))), (((/* implicit */long long int) (~(((/* implicit */int) var_4))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_11);
}

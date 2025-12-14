/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14782
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) var_17);
                arr_6 [i_0] = ((/* implicit */unsigned char) 881431767U);
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */long long int) arr_0 [i_0] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) 1218727248U);
                                arr_20 [i_6] [i_5] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)200))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) -3956531463202176923LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58))) : (2337531258U)))) ? (var_1) : (((((/* implicit */_Bool) -3956531463202176923LL)) ? (((/* implicit */long long int) arr_9 [i_3])) : (arr_5 [11LL])))))));
                                var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) ((short) -191017919))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2])) ? (1885686889U) : (((/* implicit */unsigned int) arr_10 [i_3] [i_3] [i_6]))))) : (((((/* implicit */_Bool) arr_16 [i_6] [7U] [7U] [i_6])) ? (var_13) : (var_1))))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_13 [i_2])))))))));
                            }
                        } 
                    } 
                } 
                arr_21 [i_2] [3LL] [i_2] = ((/* implicit */unsigned int) 3956531463202176923LL);
                var_21 = ((/* implicit */unsigned char) max((var_21), (((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_5 [i_2]) : (((/* implicit */long long int) var_2))))) ? ((~(var_12))) : (((/* implicit */long long int) ((arr_10 [(unsigned short)3] [i_3] [i_3]) / (((/* implicit */int) (unsigned char)56))))))))));
                var_22 ^= ((/* implicit */long long int) ((unsigned short) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) <= (var_1)))));
            }
        } 
    } 
    var_23 = ((((/* implicit */_Bool) ((unsigned int) var_13))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)45148))) > (var_8)))))) : ((((+(var_4))) % (((/* implicit */long long int) ((/* implicit */int) ((short) -471878525)))))));
}

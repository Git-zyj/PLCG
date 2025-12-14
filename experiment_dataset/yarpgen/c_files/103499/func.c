/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103499
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) arr_3 [i_0] [i_4]);
                                arr_10 [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4])) ? (((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) (unsigned short)32900)) : (-327751882))) : (((/* implicit */int) (unsigned short)32635))));
                            }
                        } 
                    } 
                    var_19 = 1317057075;
                    arr_11 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_5 [i_0] [i_0] [i_0] [i_2])))) ? (arr_7 [i_2] [i_2] [i_2] [i_1] [i_0]) : (((int) arr_3 [i_0] [i_1]))))) - (2273595178U)));
                    var_20 = ((arr_7 [i_0] [i_2] [i_0] [i_2] [i_2]) ^ (((/* implicit */int) arr_9 [21U] [i_0] [i_1] [i_2] [i_2])));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (1799525132U) : (((/* implicit */unsigned int) var_6)))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(6115801673531654195LL)))) ? ((~(-786165146))) : (((/* implicit */int) var_12))))))))));
}

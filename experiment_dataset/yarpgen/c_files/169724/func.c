/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169724
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)86)) ? (var_8) : (((/* implicit */int) (unsigned char)170)))))) || ((!(((/* implicit */_Bool) arr_3 [i_0 + 3]))))));
                    arr_10 [i_0] [i_0] [i_0] [(unsigned char)2] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 2] [i_1] [i_2])) ? (var_2) : (((/* implicit */unsigned long long int) var_4)))), (var_2)))) ? (min(((+(var_9))), (((8197499944789760109ULL) / (((/* implicit */unsigned long long int) 25165824)))))) : (var_3));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_19 [10ULL] [i_1] [i_2] = ((/* implicit */unsigned long long int) var_7);
                                arr_20 [(unsigned char)9] [(unsigned char)9] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((var_4), (((/* implicit */long long int) 1212453127))))))) ? (var_3) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) arr_1 [i_0 - 1] [i_1])))))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_0] |= ((/* implicit */long long int) (unsigned char)199);
                    arr_22 [i_0] [1ULL] [1ULL] [i_0 + 2] = ((/* implicit */int) var_9);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) >> (((((long long int) -8120495627424706566LL)) + (8120495627424706588LL))))) <= (((/* implicit */int) var_7))));
}

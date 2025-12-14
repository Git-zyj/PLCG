/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160677
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
    for (long long int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) max((((((/* implicit */int) min((var_3), (arr_4 [i_0] [i_1])))) & (((/* implicit */int) (unsigned short)61291)))), (((/* implicit */int) var_11))));
                arr_7 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (min((((/* implicit */unsigned long long int) (unsigned char)84)), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)124)) > (((/* implicit */int) var_10))))))))) ? (((((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) (unsigned char)124)))) >> ((((~(((/* implicit */int) (unsigned char)137)))) + (165))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)131)) ? (arr_5 [i_1] [i_0 - 1]) : (((/* implicit */int) (unsigned char)103))))) ? (arr_5 [i_0 - 1] [i_0 + 2]) : (((/* implicit */int) (unsigned char)132))))));
                arr_8 [i_0] [(unsigned char)9] [i_1] = ((/* implicit */long long int) (unsigned char)131);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_1] [(signed char)5] [(_Bool)1] [i_4] = ((/* implicit */_Bool) var_0);
                                arr_18 [(signed char)6] [i_0] [1] [i_0] [i_0] = ((/* implicit */int) ((short) (unsigned char)153));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (((var_10) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)126))))))) ? ((~(((/* implicit */int) (unsigned char)103)))) : (((/* implicit */int) max((((((/* implicit */int) var_2)) > (((/* implicit */int) var_1)))), (((((/* implicit */int) (unsigned char)131)) > (((/* implicit */int) (unsigned char)147)))))))));
    var_13 = ((/* implicit */long long int) (~(((int) var_4))));
}

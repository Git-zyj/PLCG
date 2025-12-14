/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111148
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
    var_10 = min((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (var_5));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_7)) ? (3205489623155918886LL) : (((/* implicit */long long int) var_4)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */int) (unsigned char)228)), (var_4))) : (((/* implicit */int) ((unsigned char) var_8))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_1] [i_4 + 1] [i_1] = ((/* implicit */long long int) arr_4 [i_0] [i_0]);
                                arr_12 [i_3] [i_3] [13LL] [i_3] [i_3] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) ((long long int) ((int) min((arr_2 [i_3]), (((/* implicit */long long int) var_9))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_0 [i_2]))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) min((var_13), (min((((4323455642275676160LL) | (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) var_7))))));
}

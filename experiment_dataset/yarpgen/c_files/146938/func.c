/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146938
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
    var_19 = ((/* implicit */long long int) ((int) 10072099836040477101ULL));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_11 [(unsigned char)22] [i_1] [i_0] [(unsigned char)22] = ((/* implicit */int) (-(((unsigned long long int) (unsigned char)220))));
                                arr_12 [i_0] [i_0] [i_2] [i_3] [13] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+((-(((/* implicit */int) var_4))))))) & (max((((/* implicit */unsigned int) arr_0 [i_0])), (arr_1 [i_0])))));
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) max((((((/* implicit */_Bool) 3566419130U)) ? (arr_10 [i_4]) : (((/* implicit */long long int) 1794936948)))), (((long long int) arr_10 [i_1])))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65534))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) 7042520408117285978LL)) : (max((((/* implicit */unsigned long long int) -126931831246187666LL)), (8688039213174782396ULL))))) : (((/* implicit */unsigned long long int) var_1))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) max((var_21), (var_6)));
}

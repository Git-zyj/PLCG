/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131155
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)155)) : (arr_8 [i_0] [i_0] [i_1] [i_2]))), (min((arr_3 [i_0] [i_1] [i_2]), (((/* implicit */int) arr_4 [i_0] [i_1]))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [17LL] [i_2])) ^ (((/* implicit */int) (_Bool)0))))) ? (arr_2 [i_0]) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_14) : (((/* implicit */unsigned long long int) 692646523091700950LL))))))));
                    var_16 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (unsigned char)12))))) ? (((((arr_0 [i_0]) + (2147483647))) << (((arr_2 [i_1]) - (17660827947503369530ULL))))) : (((/* implicit */int) (short)15668)))), (((arr_5 [i_0] [(short)4] [i_2]) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [(unsigned char)16] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_10 [i_0] [i_0] [i_0] [5]) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)20))))) ? (((/* implicit */int) arr_6 [i_0])) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)252))))) ? (((/* implicit */int) arr_13 [4U] [9LL] [i_2] [i_2] [i_3] [i_3] [(signed char)10])) : (2147483647)))));
                                arr_17 [i_4] [i_3] [i_0] [(signed char)12] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_2])))) ? (max((((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) arr_7 [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) 2685985651037862121ULL))))))) : (((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_4] [i_3] [11LL]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_10);
    var_18 = ((/* implicit */int) max((var_18), (((int) min((((/* implicit */unsigned long long int) ((long long int) -1539905778))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (10761997654565224207ULL))))))));
}

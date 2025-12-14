/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150072
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
    var_11 = ((/* implicit */signed char) max((var_11), ((signed char)-95)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_6 [(short)1] [i_0] [(signed char)6] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-125))) ^ (774602254031945799LL)));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_13 [3U] [i_4] = ((/* implicit */short) max((((max((arr_8 [(signed char)13] [i_3] [i_3]), (((/* implicit */unsigned int) var_7)))) / (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_1])), (var_4))))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)18639)) != (((/* implicit */int) (signed char)30))))) < (((/* implicit */int) var_3)))))));
                                var_12 = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_3))))) - (((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))), (((/* implicit */unsigned int) (signed char)-3))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

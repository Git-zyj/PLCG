/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171707
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((int) (unsigned char)214))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    var_11 = (((+((((_Bool)1) ? (2419500618U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))))) > (((/* implicit */unsigned int) min((((/* implicit */int) (short)20613)), (-2021389069)))));
                    arr_6 [i_0] = ((/* implicit */unsigned char) (-(((1910826385U) % (min((1910826396U), (((/* implicit */unsigned int) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)32751))))), (max((2384140933U), (((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_2 + 4]))))));
                                arr_12 [i_0] [i_1] [(unsigned char)12] [i_3] [i_4] &= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (min((arr_1 [i_0]), (((/* implicit */long long int) arr_5 [i_0] [i_0] [(unsigned char)5]))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)31065))))), (max((2384140933U), (2021499341U)))))) : (min((max((((/* implicit */unsigned long long int) (unsigned short)53551)), (2341649417305466644ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)12)), ((unsigned short)40250))))))));
                                var_13 = ((int) arr_5 [i_4] [i_1] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178452
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
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) 14183043664532913172ULL))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)22287))))) && (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_3))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) min((arr_5 [(signed char)20] [(unsigned short)0] [i_2]), (((/* implicit */unsigned int) min((arr_4 [(signed char)19] [i_1 - 1] [i_0]), (((/* implicit */short) (_Bool)1)))))));
                    var_20 = ((/* implicit */signed char) min((min((arr_2 [i_1 + 2] [i_1 + 1]), (arr_2 [i_1 - 1] [i_1 + 2]))), (min((((/* implicit */unsigned int) (unsigned short)20496)), (arr_5 [i_1 - 2] [i_1 - 2] [i_1 + 1])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            {
                arr_13 [i_4] = ((/* implicit */short) ((unsigned long long int) (_Bool)1));
                arr_14 [i_4] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)43260))) ^ (-1LL)));
                var_21 = (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-6405))))));
            }
        } 
    } 
}

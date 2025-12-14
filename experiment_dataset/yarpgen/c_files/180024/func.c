/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180024
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
    var_11 = ((/* implicit */short) var_0);
    var_12 = ((/* implicit */_Bool) ((unsigned int) var_0));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) 605210017341868684LL);
                var_13 |= ((/* implicit */short) arr_3 [i_1] [i_1]);
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) ((unsigned char) (signed char)80));
                var_14 = ((/* implicit */long long int) (+(10039057248945664643ULL)));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) -164814578)) : (arr_10 [i_4 + 1] [i_4 - 3] [i_1] [i_4] [i_4 - 1])))) + (((unsigned long long int) min((((/* implicit */unsigned int) var_3)), (2806815102U))))));
                                arr_15 [i_1] [i_1] [i_1] [i_1] [(signed char)11] [i_1] = ((/* implicit */long long int) var_6);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 2) 
    {
        for (signed char i_6 = 1; i_6 < 9; i_6 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)59580))))) ? (min((arr_13 [(unsigned short)8] [i_5] [4] [i_6] [i_6] [i_6] [4]), (((/* implicit */int) var_0)))) : (arr_13 [2ULL] [i_5] [2ULL] [i_5] [i_5] [i_5] [i_5])))) ? (((((/* implicit */int) (signed char)-100)) - ((+(((/* implicit */int) (signed char)-100)))))) : (((/* implicit */int) arr_21 [i_5] [i_6] [(unsigned short)7]))));
                arr_22 [i_5] = ((/* implicit */int) (short)26252);
            }
        } 
    } 
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
}

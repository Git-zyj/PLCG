/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174482
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
    var_14 = ((long long int) (~(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (3247032940250955177LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        for (int i_4 = 4; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_15 [18] [i_1] [i_3 + 3] [i_0] [(signed char)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((2251799813685247LL) / (3247032940250955177LL)))) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_1])) : (((/* implicit */int) ((signed char) ((arr_8 [i_0] [(_Bool)1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))))));
                                arr_16 [i_0] [i_1 - 1] = ((/* implicit */_Bool) (((!((!(((/* implicit */_Bool) arr_6 [i_0] [4U] [i_1])))))) ? (min((arr_4 [i_1 + 1]), (arr_4 [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (arr_5 [i_0]))))))));
                                arr_17 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | ((~(arr_2 [i_4] [i_1] [i_0])))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1 + 1] [i_1 + 1] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3247032940250955171LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_4 [i_0])))) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_1 + 1] [i_0] [i_2] [i_2])) : (((((/* implicit */int) var_9)) - (((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_2] [i_2] [i_2])))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) var_13);
}

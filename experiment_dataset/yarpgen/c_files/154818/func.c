/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154818
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
    var_14 &= ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (arr_3 [(short)18])));
                arr_4 [i_1] = (-(((/* implicit */int) arr_0 [i_1 - 1])));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [(signed char)6] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((short) arr_7 [i_0] [(signed char)3] [i_1 - 1]))) >= (((/* implicit */int) ((_Bool) ((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(signed char)4] [(signed char)4] [i_3])))))))));
                            var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19))) : (arr_2 [i_2 - 1] [i_2 - 1] [i_1 - 1]))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_2 - 1])) * (((/* implicit */int) (unsigned short)17977)))))));
                            arr_12 [i_2 - 1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) arr_5 [i_2] [(signed char)2] [i_0]));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 4; i_4 < 17; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 1) 
        {
            {
                arr_19 [i_4] [i_5] |= ((/* implicit */unsigned char) arr_15 [i_4] [i_4 + 3]);
                var_17 = ((/* implicit */unsigned char) var_0);
                var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((arr_16 [i_5 - 1] [i_5]) < (((/* implicit */unsigned long long int) (+(arr_18 [11]))))))), ((+(((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))) : (arr_16 [i_4] [i_4])))))));
            }
        } 
    } 
}

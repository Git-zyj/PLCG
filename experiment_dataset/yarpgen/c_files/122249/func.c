/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122249
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
    var_14 = ((/* implicit */unsigned char) min((var_2), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (14324955937977097417ULL) : (14324955937977097397ULL))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) min((min((((arr_0 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))), (((/* implicit */unsigned int) ((unsigned short) 4121788135732454233ULL))))), (max((arr_0 [i_0]), (arr_0 [i_1])))));
                var_16 = ((/* implicit */unsigned char) ((int) min((((((/* implicit */_Bool) 14324955937977097397ULL)) ? (4121788135732454196ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), ((~(14324955937977097417ULL))))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 14324955937977097397ULL))))), (((signed char) arr_1 [i_0] [i_1])))))) & (min((((/* implicit */unsigned long long int) ((unsigned char) 14324955937977097448ULL))), (((4121788135732454201ULL) * (arr_1 [i_0] [i_3])))))));
                            var_18 = ((/* implicit */unsigned int) (~(min((max((4121788135732454208ULL), (((/* implicit */unsigned long long int) arr_8 [i_3] [i_1] [i_0] [(unsigned short)5] [i_3])))), (max((4121788135732454207ULL), (4121788135732454213ULL)))))));
                            var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 14324955937977097424ULL)) ? (14324955937977097419ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2 - 3] [i_3]))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2 - 2] [i_3]))) ^ (4121788135732454218ULL)))));
                            var_20 = ((/* implicit */_Bool) (~(arr_1 [i_0] [i_0])));
                            var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_7 [i_2 - 2] [i_2 + 3] [i_2 + 1] [i_2 - 1])), (min((((/* implicit */unsigned long long int) arr_7 [i_2 - 2] [i_2 + 3] [i_2 + 1] [i_2 - 1])), (4121788135732454187ULL)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) 4121788135732454219ULL);
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4121788135732454218ULL)) ? (arr_11 [i_0]) : (((/* implicit */int) arr_2 [i_1])))))));
                            var_24 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned int) min((4121788135732454207ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_5])))))), (((((/* implicit */_Bool) (~(14324955937977097397ULL)))) ? (((((/* implicit */_Bool) 14324955937977097436ULL)) ? (14324955937977097420ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_4] [(signed char)14]))))) : ((~(4121788135732454201ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119444
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) var_9);
                var_19 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 8117378663606538229LL)) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [i_0]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [(signed char)18] [i_1] [i_1]))))) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_4 [i_1] [i_0 - 2] [i_0]))))) : (8117378663606538229LL)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 18; i_2 += 2) 
    {
        for (unsigned int i_3 = 4; i_3 < 17; i_3 += 2) 
        {
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (((/* implicit */int) ((signed char) (-(((/* implicit */int) (unsigned short)65523)))))) : (((((/* implicit */_Bool) arr_11 [i_2 - 2])) ? (((/* implicit */int) min(((unsigned short)6), (((/* implicit */unsigned short) arr_10 [i_2 - 1] [i_2 - 1] [i_2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_6 [i_2] [i_3])))))))));
                arr_12 [i_3 - 3] = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_9 [i_3 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) / (((/* implicit */unsigned int) ((int) arr_7 [i_2]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))));
            }
        } 
    } 
    var_22 = var_17;
}

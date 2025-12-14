/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153782
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 += ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 1073709056))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) arr_2 [4] [i_0] [i_0])) ? (17944029765304320LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned short)14] [(short)16] [(unsigned short)14]))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */unsigned int) arr_1 [i_0]))))))))));
                var_13 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [6])))))) ? (min((arr_0 [i_1]), (((/* implicit */unsigned int) (signed char)63)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) max((arr_3 [i_0] [i_1] [i_0]), (((/* implicit */unsigned short) arr_2 [(signed char)0] [i_0] [i_1]))))) : (((/* implicit */int) arr_2 [4ULL] [4ULL] [i_0])))))));
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) max((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_7)))), ((!(((/* implicit */_Bool) (-(((/* implicit */int) var_11))))))))))));
                var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65531))));
                var_16 += ((/* implicit */unsigned char) ((int) (-(max((arr_0 [i_0]), (((/* implicit */unsigned int) -1621314052)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 15; i_2 += 3) 
    {
        for (short i_3 = 4; i_3 < 15; i_3 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) -457122630)) : (var_5))))));
                var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32767))));
            }
        } 
    } 
}

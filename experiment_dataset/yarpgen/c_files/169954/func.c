/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169954
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
    var_11 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_12 = (((_Bool)1) ? (7088529155486769267LL) : (-5797150250432236856LL));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((arr_2 [i_0] [i_0] [10LL]) + (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) - (min((max((arr_3 [(signed char)4] [(signed char)4]), (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))))));
                arr_5 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) var_3)))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) arr_2 [(unsigned char)16] [i_0] [(unsigned char)16])) : (min((min((7088529155486769272LL), (((/* implicit */long long int) arr_3 [i_0] [i_1])))), (((/* implicit */long long int) var_8))))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) -7088529155486769268LL);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) -7088529155486769273LL);
    var_14 -= ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 2U)) | (arr_9 [i_4] [i_2 - 1])))) ? ((~(7088529155486769273LL))) : (arr_12 [i_2 - 1] [i_3] [i_4]))))));
                    arr_14 [i_2 - 1] [i_2] [i_4] = (~((~(((var_9) ? (-7088529155486769273LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                }
            } 
        } 
    } 
}

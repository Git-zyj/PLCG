/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10663
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
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1310549851U)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)77)), (min(((unsigned short)37075), ((unsigned short)54661)))))) : (((((/* implicit */int) (short)26327)) ^ (((/* implicit */int) (short)11052))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) var_14)))));
                            var_18 = ((/* implicit */short) max((((/* implicit */int) ((unsigned short) var_1))), (((((((((/* implicit */int) var_11)) + (2147483647))) >> (((((/* implicit */int) var_15)) - (83))))) | (arr_2 [i_0] [i_1] [i_0])))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 1])) << (((((/* implicit */int) arr_1 [i_3 + 2])) - (7460)))))) ? (max((var_10), (((/* implicit */long long int) min(((unsigned short)10863), (((/* implicit */unsigned short) (short)-26315))))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_2] [i_3 - 1]) >= (((/* implicit */long long int) ((unsigned int) arr_7 [i_0] [i_0])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */int) (short)-1)) | (-2006386304)));
    var_21 = ((/* implicit */unsigned long long int) (-(((long long int) var_7))));
}

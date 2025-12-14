/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167379
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 18446744073709551612ULL)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */_Bool) var_3);
                var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) & (max((((/* implicit */unsigned int) (_Bool)1)), (var_9))))))));
                var_15 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) var_9)) & (31ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)-10)))) + (((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (unsigned int i_3 = 4; i_3 < 23; i_3 += 2) 
        {
            {
                var_16 = ((/* implicit */short) (signed char)-112);
                var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_5) / (var_6)))) ? ((((_Bool)1) ? (465463546224313715LL) : (var_3))) : (((/* implicit */long long int) min((arr_6 [(_Bool)1]), (((/* implicit */unsigned int) (_Bool)1))))))) - (((/* implicit */long long int) ((/* implicit */int) min((arr_7 [i_3 - 1] [i_3 - 2] [i_3 - 1]), (((/* implicit */unsigned short) ((_Bool) 1396269482)))))))));
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 22; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */int) var_8)) - (((/* implicit */int) (unsigned char)199))));
                            var_19 = ((/* implicit */signed char) (short)-25);
                        }
                    } 
                } 
            }
        } 
    } 
}

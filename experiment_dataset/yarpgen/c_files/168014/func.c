/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168014
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */int) ((signed char) (-(-2450049037283182947LL))))) : (((((/* implicit */int) ((signed char) 8844150100894563618ULL))) + ((-(((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_3])) ? (var_9) : (((/* implicit */int) (unsigned short)0))))) + (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-4)))))))))));
                            var_14 = ((/* implicit */short) max((var_14), (((short) 7LL))));
                        }
                    } 
                } 
                var_15 -= ((/* implicit */long long int) ((signed char) max((arr_4 [(_Bool)0] [i_1] [i_1] [i_1]), ((_Bool)0))));
                arr_9 [23] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) arr_0 [i_0] [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            {
                var_16 = ((/* implicit */long long int) ((_Bool) 3747972808406336744ULL));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) var_2);
                            var_18 = ((/* implicit */short) (!((_Bool)0)));
                        }
                    } 
                } 
            }
        } 
    } 
}

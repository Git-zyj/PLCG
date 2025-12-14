/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115936
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
    var_12 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))) <= (-5799391415888620919LL))))) >= (var_10)))) >> (((min((max((var_10), (var_10))), (min((((/* implicit */unsigned long long int) (short)20930)), (var_8))))) - (20928ULL)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */short) ((((/* implicit */int) ((signed char) min((var_6), (var_3))))) << (((((((unsigned long long int) (signed char)25)) - (max((var_8), (((/* implicit */unsigned long long int) var_11)))))) - (3120042223531350840ULL)))));
                            var_14 = ((/* implicit */short) (~(var_5)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (signed char i_5 = 2; i_5 < 18; i_5 += 4) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((((arr_13 [3ULL] [i_0] [i_1] [i_4] [i_4]) - (((/* implicit */int) arr_10 [i_0] [i_1] [(_Bool)1])))), (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_5 [(_Bool)1] [i_5] [i_4] [i_5 - 1]))))))))));
                            arr_16 [i_5] [i_1 - 1] [i_5] [i_5] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_7) | (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                            arr_17 [i_5] [i_4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) var_1)), (((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) - (((/* implicit */unsigned long long int) var_0))));
                        }
                    } 
                } 
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125932
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */int) (~(var_7)));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) -7544830004718225487LL);
                            var_14 |= ((/* implicit */_Bool) 13156740787415591510ULL);
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] |= ((/* implicit */long long int) ((((/* implicit */long long int) 1813980755)) != (((var_0) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (short)32745))))))))));
                arr_13 [(short)18] = ((/* implicit */signed char) ((((/* implicit */unsigned int) min((var_6), (((/* implicit */int) var_8))))) - (var_10)));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) min((var_10), (((/* implicit */unsigned int) var_6)))))));
    var_16 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19850))) == (((unsigned long long int) ((((/* implicit */_Bool) 2482705979U)) || (((/* implicit */_Bool) (signed char)127)))))));
}

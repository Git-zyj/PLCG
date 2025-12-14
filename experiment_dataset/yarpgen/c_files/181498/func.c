/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181498
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
    var_19 = ((/* implicit */short) ((min((0U), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_10))))))) << (((/* implicit */int) ((((/* implicit */int) var_2)) > ((-(((/* implicit */int) var_16)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [i_0] [i_0 + 2])) < (((/* implicit */int) ((((/* implicit */int) (unsigned short)17736)) > (((/* implicit */int) (short)-2362))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) ((6309831496023851189ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))))))) : (min(((~(arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 1])) >> (((((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) + (30108))))))))));
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_0 [i_0 - 1])))), (((/* implicit */int) (short)0)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) (short)-11514);
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_12 [i_2] [i_3] [i_2] [i_4] [i_4] [i_5]), (arr_12 [i_2] [i_3] [i_4] [i_5] [i_5] [i_5])))) / ((-(((/* implicit */int) arr_12 [i_4] [i_3] [i_4] [i_5] [i_5] [i_5]))))));
                            var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)14)), (4294967288U)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_15);
}

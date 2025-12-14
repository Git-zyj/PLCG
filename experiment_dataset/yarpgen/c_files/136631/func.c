/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136631
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
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)78)), (((((/* implicit */int) (unsigned char)179)) * (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                var_21 |= ((/* implicit */signed char) 5899497503857691090LL);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (unsigned char)100))) >> (((min((((/* implicit */unsigned long long int) var_5)), (min((var_11), (3458764513820540928ULL))))) - (94ULL)))));
                            var_23 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_2 [i_2 - 2] [i_3 - 1])))) * (((((/* implicit */int) (unsigned char)156)) * (((/* implicit */int) (unsigned char)89))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (unsigned char)136))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_15)))) : (((9643376168692465767ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (((/* implicit */int) var_7)))))))));
                var_25 += ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (((((/* implicit */_Bool) (short)-18021)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54))) : (arr_7 [i_1] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) max((arr_4 [i_1]), (arr_4 [i_1]))))));
            }
        } 
    } 
    var_26 += ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)145)) ? (var_19) : (var_19)))) ? (max((var_6), (((/* implicit */int) var_5)))) : (((/* implicit */int) var_17)))) >= (((((/* implicit */_Bool) var_8)) ? (((var_10) / (((/* implicit */int) (unsigned char)83)))) : (((/* implicit */int) var_18))))));
}

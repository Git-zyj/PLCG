/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148035
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
    var_20 = ((/* implicit */long long int) (((+((+(((/* implicit */int) var_9)))))) ^ ((~(((/* implicit */int) max((var_15), (((/* implicit */unsigned short) (unsigned char)152)))))))));
    var_21 = ((/* implicit */long long int) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) var_15);
                            arr_11 [i_2] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_18)), (var_6))))))) * (((((/* implicit */_Bool) arr_3 [i_1] [i_2 + 1])) ? (((unsigned long long int) (signed char)(-127 - 1))) : (((/* implicit */unsigned long long int) ((((-7734411913131533410LL) + (9223372036854775807LL))) << (((arr_2 [i_0] [i_0]) - (1835195589U))))))))));
                            var_22 = (+(max((7734411913131533428LL), (-7734411913131533410LL))));
                            var_23 += ((/* implicit */unsigned int) ((min((((/* implicit */long long int) min((((/* implicit */unsigned short) (short)-13008)), (arr_9 [i_0] [i_0] [i_2] [8])))), (((arr_3 [i_2] [10LL]) >> (((((/* implicit */int) arr_0 [i_3])) + (84))))))) < (((/* implicit */long long int) (+(((((/* implicit */int) var_1)) / (arr_5 [i_1] [i_1]))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) ((((max((arr_2 [i_0] [i_1]), (((/* implicit */unsigned int) var_9)))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_6)) : (arr_5 [(_Bool)1] [(signed char)4])))))) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -7734411913131533410LL)))) ^ (max((var_10), (((/* implicit */unsigned long long int) arr_6 [i_0] [(unsigned char)7] [i_0]))))))));
                var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)41544)) < (((/* implicit */int) var_5))))), (((unsigned long long int) arr_3 [i_0] [i_1])))))));
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 7734411913131533413LL))));
}

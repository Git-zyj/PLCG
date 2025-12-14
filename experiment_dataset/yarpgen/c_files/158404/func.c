/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158404
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
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (_Bool)1))));
                            var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_3 + 1])))) ? (var_11) : (((((/* implicit */unsigned long long int) var_12)) % (var_6))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            var_21 += ((/* implicit */_Bool) (~(var_12)));
                            var_22 *= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))), (min((((/* implicit */int) var_17)), (var_3)))))) ? (((unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) var_10))))) : (((/* implicit */unsigned long long int) var_8))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 &= var_9;
    var_24 = ((max((((unsigned long long int) var_1)), (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_1), (var_2)))) >> (((((unsigned int) 966806981)) - (966806976U)))))));
}

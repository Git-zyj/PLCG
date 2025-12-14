/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176443
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned char) var_5);
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 524284U)) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (4783848881098153627LL) : (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36869)))))) && (((/* implicit */_Bool) -3614883311683633685LL))));
                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((9015717704883332722ULL) <= (((/* implicit */unsigned long long int) arr_0 [i_0]))))) >> (((min((((/* implicit */long long int) (unsigned char)243)), (var_10))) - (228LL))))))));
                var_15 = ((((/* implicit */_Bool) ((arr_1 [i_1]) + (arr_1 [i_1])))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_3 [i_0] [i_0])) - (3443310451U)))) ? (var_3) : (((/* implicit */long long int) ((var_5) + (((/* implicit */unsigned int) var_9))))))) : (((/* implicit */long long int) ((int) 6101315559239170719ULL))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 14; i_2 += 2) 
    {
        for (long long int i_3 = 2; i_3 < 12; i_3 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((-2135910412248516479LL), (1260915601035298347LL)));
                var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */long long int) 3443310428U)) / (7280959095222007218LL)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (~(var_2)));
    var_19 = ((/* implicit */int) var_2);
}

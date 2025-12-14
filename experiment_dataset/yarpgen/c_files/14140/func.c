/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14140
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        {
                            var_19 -= ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) -1826385627)))));
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4]))) : (3486515935U)))))) ? (min((2504045898U), (((/* implicit */unsigned int) arr_3 [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))));
                            var_21 = ((min((6U), (((/* implicit */unsigned int) ((_Bool) var_4))))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2504045916U)))))));
                        }
                    } 
                } 
            } 
            var_22 = min((((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_1] [i_1] [i_0])), (-1442889708)))) ? (((/* implicit */int) ((signed char) 2504045919U))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_4)));
            arr_14 [i_0] = ((((/* implicit */int) var_4)) < (min((((int) (unsigned short)18)), (((/* implicit */int) ((signed char) arr_8 [i_0] [7] [i_1]))))));
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1255347660)) ? (2216615441596416LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_4 [i_0 - 1]) : (((/* implicit */long long int) (~(var_9)))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
        }
        arr_15 [0LL] [i_0] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [14U] [14U]))));
    }
    var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 1370469731))) ? (((var_1) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_15)))))))) : (((/* implicit */long long int) (+((-(-1255347667))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118708
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) min((var_15), (((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3332928171U)) && (((/* implicit */_Bool) arr_1 [(unsigned char)14] [i_3])))))) % (max((arr_3 [i_1] [i_1]), (arr_3 [i_4] [i_3 + 3]))))))));
                                arr_12 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_9 [i_4])) - (((/* implicit */int) var_14)))), (((int) var_12))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_4])) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_5 [i_2] [i_1] [14LL] [i_0]))))))) : (((((/* implicit */_Bool) 962039125U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_4 + 1])) ? (arr_6 [i_4] [i_2] [i_0] [i_0]) : (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) 962039124U)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_0 [i_1])))))));
                                var_16 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (var_5) : (((/* implicit */int) (unsigned char)157)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)0));
                }
            } 
        } 
    } 
    var_18 = ((((((/* implicit */_Bool) -1205249319)) ? (((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */long long int) var_3)))) : (min((var_2), (var_2))))) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)1))));
    var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((int) var_12)))) : (((/* implicit */int) var_6))));
    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((-8939222177155527264LL), (((/* implicit */long long int) var_7))))), (((unsigned long long int) (!(((/* implicit */_Bool) var_3)))))));
}

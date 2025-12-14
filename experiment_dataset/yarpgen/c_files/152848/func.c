/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152848
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) var_3))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((long long int) arr_0 [i_0] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) var_10))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) var_4);
                                arr_15 [4LL] [i_3] [i_2] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (((((((/* implicit */_Bool) arr_3 [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) arr_3 [i_4])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                            }
                        } 
                    } 
                    var_14 *= arr_12 [i_0] [i_0] [i_1] [i_1] [i_0];
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (var_0)))) : (arr_6 [i_0])))) ? (((/* implicit */int) ((_Bool) ((arr_14 [i_1] [i_1] [i_0] [i_0] [i_2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))) : (((((/* implicit */int) ((((/* implicit */unsigned long long int) -1319044195686767426LL)) == (17077400509008631001ULL)))) << (((((((arr_13 [6] [8ULL]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_1] [i_2])) - (30))))) - (7981926988964369509LL)))))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) + (2147483647))) << (((((var_8) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */long long int) var_1))))))) - (17518193252150530510ULL)))));
}

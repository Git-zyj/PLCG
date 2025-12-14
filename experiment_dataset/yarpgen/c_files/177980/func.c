/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177980
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
    var_14 = ((/* implicit */int) ((min(((~(var_10))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    var_15 = var_2;
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)-26786))) & (6811510456451336586LL)));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_3] [i_2] [i_3] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (!(arr_0 [i_1] [i_1])))) << (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_1))))))) : (var_10)));
                        var_16 = ((/* implicit */_Bool) (short)26785);
                        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16274137571934610946ULL)) ? (3003468757U) : (4294967293U)))) ? (var_11) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3996403896U)) ? (((/* implicit */int) (short)26785)) : (((/* implicit */int) var_4))))))))));
                        arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] [i_3] = ((/* implicit */int) var_1);
                        var_18 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) (short)26785)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (3996403896U)))))) >= (var_3)));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_19 = max((1959248845), (((/* implicit */int) (short)26793)));
        arr_16 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((unsigned int) var_7)) ^ (min((978119265U), (3316848030U)))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_2)), ((signed char)25)))))));
        var_20 = ((/* implicit */short) var_9);
    }
}

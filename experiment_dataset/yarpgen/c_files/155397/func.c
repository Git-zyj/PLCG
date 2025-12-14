/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155397
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
    var_19 = max((var_14), (((/* implicit */unsigned int) ((((((/* implicit */int) var_11)) % (((/* implicit */int) var_3)))) != (((/* implicit */int) var_12))))));
    var_20 ^= ((unsigned char) ((unsigned short) min((((/* implicit */short) (_Bool)1)), ((short)18272))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0)))))));
            var_22 ^= ((/* implicit */long long int) ((arr_3 [i_1] [i_1 - 4]) || (var_2)));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_3 = 3; i_3 < 17; i_3 += 4) 
            {
                for (int i_4 = 2; i_4 < 16; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) var_1);
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_5] [i_4 - 1])))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                for (unsigned int i_7 = 4; i_7 < 15; i_7 += 1) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) (~(arr_5 [i_7 - 4] [i_7 - 1])));
                        arr_20 [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
                        arr_21 [(_Bool)1] [i_6] [(_Bool)1] &= ((/* implicit */unsigned short) var_16);
                    }
                } 
            } 
        }
        arr_22 [i_0] = ((((/* implicit */int) var_12)) < (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])));
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (((unsigned int) arr_8 [i_0]))));
    }
}

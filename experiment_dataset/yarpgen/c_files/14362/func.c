/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14362
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
    var_15 = ((/* implicit */unsigned long long int) (~(var_5)));
    var_16 |= ((/* implicit */signed char) min((((/* implicit */long long int) var_12)), ((~(var_4)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = min((((/* implicit */int) min((max((((/* implicit */signed char) (_Bool)1)), (arr_0 [i_0] [i_0]))), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))), ((~(((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
        var_17 = (~(((/* implicit */int) var_3)));
    }
    for (long long int i_1 = 3; i_1 < 19; i_1 += 3) 
    {
        var_18 = ((unsigned int) ((_Bool) 7340032));
        arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_12))) ? (7340032) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    {
                        var_19 = ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((arr_11 [i_4] [i_2] [i_2] [i_4]), (((/* implicit */signed char) var_12))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1])))))))) / (arr_6 [i_4]));
                        arr_13 [i_4] = ((/* implicit */signed char) ((unsigned long long int) min((arr_6 [i_1]), (((/* implicit */long long int) arr_11 [i_4] [2] [i_3] [i_4])))));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1334601563)) / (-6878379736242244581LL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (arr_9 [i_1] [i_2] [(signed char)4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (_Bool)1))))))))));
                            var_21 -= ((/* implicit */long long int) max((((/* implicit */int) min((arr_4 [i_1 + 3]), (arr_10 [i_1 - 3] [i_5] [i_1 + 1])))), ((+(((/* implicit */int) arr_4 [i_1 - 3]))))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 549755813888LL)) ? (((/* implicit */int) (signed char)31)) : (var_5)));
                        }
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(33550336)))) ? (arr_9 [i_1] [i_1 - 3] [i_2 - 1]) : (((/* implicit */unsigned long long int) 1601408647))));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (!((_Bool)1))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_7 = 2; i_7 < 16; i_7 += 2) 
    {
        arr_20 [i_7 - 1] [i_7] &= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-116)) / (((/* implicit */int) (signed char)92))));
        arr_21 [i_7] = ((/* implicit */int) ((var_12) && ((_Bool)0)));
    }
}

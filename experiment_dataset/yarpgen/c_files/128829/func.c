/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128829
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        var_14 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65280))) | (1778091541U));
                        arr_12 [(unsigned char)5] [(unsigned char)5] [i_0] = ((/* implicit */unsigned char) arr_5 [i_0] [10U]);
                    }
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 535083291U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12550))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2]))) | (4025939034754584071ULL)))));
                    var_16 = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)98));
                    var_17 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_2] [i_0])) ? (((/* implicit */int) arr_8 [i_2] [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_0])))) ^ (((((/* implicit */_Bool) arr_2 [5U])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))))) ? (((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (arr_11 [(unsigned char)3] [(unsigned short)14] [i_0] [i_0]))) : (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)6714))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */_Bool) 136512164U)) ? (2008397999U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
}

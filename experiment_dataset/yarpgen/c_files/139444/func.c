/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139444
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
    var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) ((((/* implicit */_Bool) 6174607107452674231ULL)) && (((/* implicit */_Bool) 12272136966256877384ULL)))))))) : ((~(((var_5) ? (((/* implicit */unsigned long long int) var_3)) : (var_2)))))));
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        var_14 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 12272136966256877381ULL)) ? (6174607107452674231ULL) : (6174607107452674217ULL))) > (((((/* implicit */unsigned long long int) var_0)) | (6174607107452674231ULL)))));
        var_15 = ((/* implicit */long long int) ((((_Bool) 6174607107452674206ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 + 1])) - (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) (~(12272136966256877373ULL)))) ? (((((/* implicit */_Bool) 12272136966256877381ULL)) ? (6174607107452674237ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (((-(6174607107452674232ULL))) >> ((((((~(6174607107452674206ULL))) - (((((/* implicit */_Bool) arr_1 [(unsigned char)13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (12272136966256877384ULL))))) - (12272136966256877381ULL))))))));
                    arr_8 [i_0 - 3] [i_1] [i_0 - 3] [i_2] = ((/* implicit */int) (~((-(12272136966256877391ULL)))));
                    arr_9 [i_0] [i_0] [i_2] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 6174607107452674207ULL)) ? (12272136966256877373ULL) : (6174607107452674246ULL)));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (6174607107452674219ULL) : (6174607107452674246ULL))), (min((12272136966256877380ULL), (6174607107452674228ULL)))));
        var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(min((arr_7 [i_0] [i_0 + 1] [i_0] [i_0 + 1]), (((/* implicit */int) arr_3 [i_0] [(_Bool)1] [i_0 - 1]))))))), (((((/* implicit */_Bool) ((short) var_6))) ? (max((((/* implicit */unsigned long long int) var_1)), (6174607107452674227ULL))) : (6174607107452674258ULL)))));
    }
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            for (int i_5 = 1; i_5 < 10; i_5 += 4) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) ((((var_0) + (2147483647))) >> (((var_2) - (16780141510428176217ULL)))))) ? (((((/* implicit */_Bool) 6174607107452674231ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned char) 6174607107452674228ULL))));
                    arr_18 [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [i_3] [i_5 - 1] [i_5 - 1] [i_5 - 1])), (12272136966256877404ULL)))) ? (((/* implicit */unsigned long long int) ((long long int) ((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3] [i_3] [i_4] [i_5 + 1]))))))) : (((6174607107452674231ULL) << (((6174607107452674213ULL) - (6174607107452674204ULL)))))));
                    var_20 = ((/* implicit */int) min((max((min((12272136966256877405ULL), (6174607107452674250ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_5])) || (((/* implicit */_Bool) 12272136966256877394ULL))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(12272136966256877385ULL)))))))));
                    var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_4 [i_3])))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (6174607107452674238ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12272136966256877365ULL)) ? (((/* implicit */int) arr_14 [i_3] [i_4])) : (((/* implicit */int) arr_10 [i_3]))))) ? (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((signed char) 6174607107452674238ULL))))))));
                }
            } 
        } 
    } 
}

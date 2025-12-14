/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109025
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
    var_11 = ((/* implicit */int) var_10);
    var_12 = var_3;
    var_13 = (~(var_3));
    var_14 = ((/* implicit */unsigned long long int) 17594064);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_8 [i_3] = ((/* implicit */_Bool) ((var_9) << (((639874292) - (639874241)))));
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (arr_7 [i_1] [i_1] [i_3] [i_3 - 1])));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        arr_12 [i_4] [i_2] |= ((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [3] [4]));
                        arr_13 [i_0] [i_0] [i_0] [7ULL] = ((int) var_10);
                    }
                    arr_14 [5] [5] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_4 [i_2] [i_1]))));
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0]))));
        var_16 -= ((/* implicit */_Bool) ((int) (_Bool)1));
        arr_16 [i_0] = ((/* implicit */int) (-((-(arr_7 [i_0] [i_0] [i_0] [i_0])))));
        arr_17 [i_0] = var_4;
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                {
                    arr_25 [i_5] [i_6] [11] [i_5] = max((((((/* implicit */_Bool) 14533877258203086912ULL)) ? (((/* implicit */unsigned long long int) 69613928)) : (14533877258203086912ULL))), (((/* implicit */unsigned long long int) ((int) var_2))));
                    var_17 &= (+(((unsigned long long int) ((unsigned long long int) 1367013154))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_6))))))), (((unsigned long long int) arr_18 [i_10])))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            arr_38 [i_5] [i_5] [i_5] [i_5] [i_11] = ((/* implicit */_Bool) ((unsigned long long int) -17594045));
                            arr_39 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (-((~(arr_5 [3ULL] [i_10] [i_11])))));
                        }
                        arr_40 [i_9] [14] [i_5] [i_10] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_4 [i_8 - 1] [i_8]))))), (var_7)));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_12 = 2; i_12 < 21; i_12 += 2) 
    {
        arr_44 [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-951745228), (max((-1366017044), (((/* implicit */int) (_Bool)1))))))) ? (min((min((var_6), (arr_42 [i_12 - 1]))), (var_0))) : (var_4)));
        arr_45 [1ULL] = max((8796093018112ULL), (((/* implicit */unsigned long long int) ((_Bool) min((var_2), (((/* implicit */unsigned long long int) var_7)))))));
    }
}

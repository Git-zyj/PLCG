/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110080
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) 11439699627667257703ULL)) ? (((/* implicit */int) var_4)) : (-1586390619)))))));
                        var_18 -= ((unsigned char) arr_8 [i_1] [i_1] [i_1] [i_1 + 2]);
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 2]))) + (11439699627667257703ULL))))));
                        var_20 = (+(((/* implicit */int) arr_1 [i_1 + 2])));
                    }
                } 
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_24 [i_4] [i_8] [i_4] [i_7] = ((/* implicit */short) ((arr_15 [i_7]) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_4] [i_5] [i_7] [i_5])) != (((/* implicit */int) var_1))))))));
                                var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_6] [i_8])) ? (((/* implicit */int) arr_6 [i_8] [i_8] [i_8])) : (-1586390631)));
                                arr_25 [i_6] [i_8] = ((/* implicit */int) var_7);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_8 [i_4] [(signed char)1] [i_5] [i_6]))));
                    var_23 = ((/* implicit */int) ((6618182130477266878ULL) != (((/* implicit */unsigned long long int) 768387551))));
                    var_24 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) << (((arr_21 [i_4] [i_6] [i_6] [i_4] [i_5] [i_6]) - (3011260888U)))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned int) 768387549);
    }
    var_26 = ((/* implicit */unsigned long long int) 268435440LL);
    var_27 = ((/* implicit */unsigned int) (short)-8276);
}

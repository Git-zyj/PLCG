/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124670
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (+(((unsigned int) min((var_11), (((/* implicit */unsigned long long int) var_7))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] = ((unsigned char) arr_1 [i_0 + 1]);
                    arr_10 [(signed char)10] [(signed char)10] |= ((/* implicit */unsigned char) ((_Bool) var_0));
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned int) 3489688670U))) ? (var_6) : (((int) 6346138237558386717ULL))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((int) (~(12100605836151164898ULL))));
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (((unsigned int) -83833495))))));
                    }
                    arr_13 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) max((((/* implicit */unsigned int) ((((arr_8 [i_0]) + (2147483647))) >> ((((+(((/* implicit */int) arr_4 [i_0])))) - (56)))))), (((arr_7 [i_0] [i_1 - 1] [i_2 + 1] [i_2]) ? (((/* implicit */unsigned int) -561065164)) : (805278626U)))))) : (((/* implicit */signed char) max((((/* implicit */unsigned int) ((((arr_8 [i_0]) + (2147483647))) >> ((((((+(((/* implicit */int) arr_4 [i_0])))) - (56))) + (31)))))), (((arr_7 [i_0] [i_1 - 1] [i_2 + 1] [i_2]) ? (((/* implicit */unsigned int) -561065164)) : (805278626U))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        for (unsigned int i_5 = 2; i_5 < 11; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                {
                    var_18 *= ((/* implicit */unsigned int) 12100605836151164898ULL);
                    var_19 = ((/* implicit */long long int) var_9);
                }
            } 
        } 
    } 
}

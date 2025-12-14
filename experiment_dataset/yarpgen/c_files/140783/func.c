/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140783
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)108)), ((~(((/* implicit */int) ((unsigned char) var_6)))))));
        var_20 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [10U])) ? (343084060) : (((/* implicit */int) arr_2 [2]))))), (((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */unsigned long long int) var_4)) : (926052641266405139ULL)))));
        var_21 &= ((long long int) (((_Bool)1) && ((!(((/* implicit */_Bool) arr_0 [14]))))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_2] [i_3])) >> (((/* implicit */int) (_Bool)1))))))))));
                        var_23 = (((~(((/* implicit */int) (_Bool)0)))) ^ (((/* implicit */int) var_14)));
                    }
                    arr_10 [i_0] [i_1] [i_2 + 2] [i_0] = (~(((/* implicit */int) min((arr_9 [i_0] [i_2 + 1] [i_2 - 2] [i_0]), (arr_9 [i_0] [i_2] [i_2 - 2] [i_0])))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        arr_14 [(_Bool)1] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) arr_12 [i_4])) : (((/* implicit */unsigned long long int) (-(arr_12 [i_4]))))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                {
                    arr_20 [i_5] = ((/* implicit */signed char) 1144007917);
                    arr_21 [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) arr_16 [i_4])), (arr_12 [i_4]))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25640)))));
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_18 [i_4] [i_5] [i_5] [i_5])))))))));
                }
            } 
        } 
    }
}

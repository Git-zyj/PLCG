/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154856
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (unsigned short i_3 = 2; i_3 < 8; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) var_6)) ^ (var_11))) : (((((/* implicit */int) var_7)) ^ (((/* implicit */int) (_Bool)1))))));
                        arr_10 [i_0] [i_1 + 1] [i_0] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */int) (unsigned short)10485)) : ((~(((/* implicit */int) var_6))))));
                        var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (var_15))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) var_3))))) - (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_2)))));
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    {
                        var_21 = ((/* implicit */long long int) var_0);
                        var_22 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)18426)) & (219110436)));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_7 = 4; i_7 < 11; i_7 += 4) 
    {
        arr_22 [i_7] [i_7] = ((/* implicit */int) arr_19 [i_7 + 1]);
        var_23 = var_4;
    }
    var_24 = (_Bool)1;
}

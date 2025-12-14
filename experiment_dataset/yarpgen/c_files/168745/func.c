/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168745
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
    var_15 = ((/* implicit */unsigned int) ((_Bool) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
    var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)97))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) var_0)), (min((-4479348471114627029LL), (((/* implicit */long long int) var_8)))))) != (((/* implicit */long long int) ((((/* implicit */unsigned int) (((-2147483647 - 1)) - (arr_5 [i_2] [3U])))) + (((((/* implicit */_Bool) (unsigned char)4)) ? (arr_3 [i_0 - 1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
                    arr_9 [i_0 - 1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) arr_4 [i_2] [(unsigned char)9]);
                    var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 2])) ? (var_6) : (((/* implicit */long long int) arr_5 [i_0] [i_1 - 1])))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)85)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                {
                    arr_19 [(short)8] [i_4 - 1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4479348471114627030LL)) ? (var_9) : (var_9)))) ? (((/* implicit */int) ((var_12) < (((/* implicit */int) var_11))))) : ((+(((/* implicit */int) var_10))))))) ? (((/* implicit */int) ((_Bool) ((var_14) + (((/* implicit */int) var_0)))))) : ((+(max((((/* implicit */int) arr_15 [i_4] [i_4] [i_5])), (1411195375)))))));
                    var_18 *= ((((/* implicit */int) var_1)) + (min((((/* implicit */int) arr_10 [i_3] [i_4 - 1])), (((int) var_9)))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned int) (~(((((var_6) - (((/* implicit */long long int) var_4)))) << (((((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (3171330783U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) - (3171330783U)))))));
    }
    for (int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            for (short i_8 = 1; i_8 < 18; i_8 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (2090787839U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))), (((((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_26 [i_6] [i_6] [19] [i_8]))))) & (((/* implicit */int) ((_Bool) arr_24 [i_7] [4U])))))));
                    var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) >> (((((/* implicit */int) arr_23 [7LL])) - (32))))) == (((/* implicit */int) ((min((134217728), (((/* implicit */int) (short)-3818)))) > (((/* implicit */int) min((var_2), (((/* implicit */unsigned char) (_Bool)1))))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) max((var_22), ((!(((/* implicit */_Bool) ((((/* implicit */int) (short)13569)) / (arr_13 [i_6] [i_6] [i_6]))))))));
    }
}

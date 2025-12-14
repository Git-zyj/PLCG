/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180037
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
    var_12 = ((/* implicit */unsigned long long int) var_9);
    var_13 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 17597679774709799685ULL))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_11 [i_3] = ((/* implicit */unsigned char) var_5);
                        var_14 = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_4 = 2; i_4 < 16; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((unsigned long long int) arr_6 [i_5 - 1] [i_4 + 1] [i_5 + 3] [i_6])))));
                        var_16 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_6])))) | ((~(var_0)))));
                        arr_20 [i_6] [i_6] [i_5] [i_6] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
                        var_17 ^= ((/* implicit */signed char) arr_5 [i_4 + 1] [i_4 + 1] [i_5 + 1]);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
    {
        var_18 = ((/* implicit */_Bool) max((var_6), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))), (max((((/* implicit */unsigned long long int) (unsigned char)254)), (8838822880732450691ULL)))))));
        var_19 = ((/* implicit */signed char) var_9);
        var_20 = ((/* implicit */_Bool) arr_18 [(_Bool)0] [i_7]);
        arr_24 [i_7] = ((/* implicit */long long int) ((unsigned long long int) 8838822880732450691ULL));
    }
    var_21 = min((var_2), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (9607921192977100947ULL))))))));
}

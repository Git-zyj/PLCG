/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103621
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
        var_18 &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_2 [(_Bool)1] [i_0])));
        var_19 = ((((/* implicit */long long int) (-(((/* implicit */int) (!((_Bool)1))))))) % (((long long int) arr_1 [i_0])));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_0] [21ULL] = (_Bool)1;
                        var_20 -= (-(((min((arr_9 [i_3] [(short)10] [i_2] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_3)))) | (arr_5 [i_2]))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) 5396045560459120221LL))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_8 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) && (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))) < (arr_1 [i_0])))))) : (((((/* implicit */int) var_8)) << (((/* implicit */int) ((((/* implicit */int) arr_3 [15ULL] [i_0])) >= (((/* implicit */int) (_Bool)1)))))))));
    }
    var_21 += ((/* implicit */long long int) (-(((((((/* implicit */int) var_8)) * (((/* implicit */int) (_Bool)1)))) / ((-(((/* implicit */int) var_16))))))));
    var_22 = ((/* implicit */unsigned long long int) var_8);
    var_23 = (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9))))));
    var_24 = ((/* implicit */unsigned char) (_Bool)1);
}

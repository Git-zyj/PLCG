/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109877
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
    var_16 = ((/* implicit */unsigned long long int) var_14);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_6))));
        var_18 += ((/* implicit */_Bool) ((unsigned char) var_4));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7ULL)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_2 - 3] [i_2])))));
                    var_20 = ((/* implicit */unsigned char) ((18446744073709551609ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 11ULL))) / (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) >= (10ULL))))));
                    arr_8 [i_0] [i_0] [i_0] [i_2 + 1] = ((/* implicit */_Bool) (~(((7ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */_Bool) var_4);
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_22 = (!(((/* implicit */_Bool) var_0)));
                        arr_22 [i_3] [i_5] [i_5] [i_5] [5ULL] [i_3] = ((/* implicit */_Bool) max((arr_11 [i_4] [i_5]), ((((_Bool)0) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (113595330160234951ULL)))));
                        var_23 = ((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)203))))) ? (((/* implicit */int) ((_Bool) var_6))) : ((+(((/* implicit */int) arr_2 [i_3]))))))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */_Bool) var_9);
    var_25 = ((/* implicit */unsigned char) (!(var_10)));
}

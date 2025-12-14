/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13187
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_13 = ((/* implicit */int) (!((!(((/* implicit */_Bool) 288230376151711743ULL))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) min(((+(((/* implicit */int) arr_0 [(signed char)10])))), (((/* implicit */int) arr_0 [(unsigned char)6])))))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    var_15 = (!(((_Bool) (unsigned char)255)));
                    arr_9 [i_3] [(_Bool)1] [i_3] = ((min((max((((/* implicit */unsigned long long int) arr_3 [i_1])), (arr_5 [(_Bool)1]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (var_12))))) << ((((~(((/* implicit */int) (unsigned char)255)))) + (305))));
                    arr_10 [2LL] [i_2] [(unsigned char)12] [2LL] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (15229726771046218399ULL))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-71)), ((unsigned char)255)))))));
                    arr_11 [i_3] = arr_4 [i_1] [i_1] [i_1];
                }
            } 
        } 
        arr_12 [(unsigned char)2] = ((/* implicit */long long int) (-(((/* implicit */int) (short)12824))));
        var_16 = ((/* implicit */short) max((3599047846U), (((/* implicit */unsigned int) (signed char)3))));
    }
    var_17 = ((/* implicit */signed char) var_11);
    var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-12))))) - (var_11)));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (var_3) : (var_0)));
}

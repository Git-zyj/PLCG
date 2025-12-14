/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12271
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
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) var_7))));
    var_12 = var_1;
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */int) (short)-23096);
        arr_5 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) ((unsigned char) (~(var_6))));
        var_14 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)-23089)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) (+(var_0)));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (+((-(var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) var_0)) <= (var_4)))))) : (((unsigned int) (-(((/* implicit */int) arr_7 [i_2 + 1] [(_Bool)1])))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        var_17 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((arr_7 [i_3] [i_3]) ? (((/* implicit */int) (unsigned short)43427)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3] [(signed char)17])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) : ((-(var_4))))));
        var_18 ^= ((/* implicit */unsigned short) ((_Bool) var_3));
        /* LoopSeq 1 */
        for (short i_4 = 2; i_4 < 19; i_4 += 4) 
        {
            arr_16 [i_3] [i_3] = ((/* implicit */unsigned int) var_6);
            var_19 ^= ((/* implicit */int) (unsigned short)22118);
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */int) (unsigned short)22127)) : (((/* implicit */int) (short)2017))))) ? (((((/* implicit */int) var_8)) / (((/* implicit */int) arr_18 [i_3])))) : ((+(((/* implicit */int) arr_18 [i_3])))));
            arr_20 [(signed char)2] [i_5] [i_5] &= ((/* implicit */unsigned long long int) var_2);
            arr_21 [i_3] = ((/* implicit */signed char) arr_14 [(_Bool)1] [i_5]);
        }
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), ((+(var_0)))))) ? (arr_11 [i_3]) : (((/* implicit */unsigned int) var_6)))))));
    }
}

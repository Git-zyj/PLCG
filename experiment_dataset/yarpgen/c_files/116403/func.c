/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116403
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((var_13) << (((11677981454524673989ULL) - (11677981454524673989ULL))))), (((((/* implicit */_Bool) (short)4095)) ? (var_4) : (var_6)))))) != (var_16)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)112)) && (((/* implicit */_Bool) (unsigned char)255))))) << (((2147483647) - (2147483633)))))) ^ (((long long int) arr_0 [i_0 - 2])))))));
        var_21 = ((/* implicit */_Bool) arr_0 [i_0 + 2]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 4; i_1 < 16; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned long long int) var_7);
        var_23 = ((/* implicit */long long int) ((unsigned char) var_18));
        var_24 = ((var_15) == ((+(((/* implicit */int) arr_4 [i_1 + 1])))));
        var_25 = ((/* implicit */signed char) var_17);
        arr_5 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
    }
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (unsigned int i_3 = 2; i_3 < 21; i_3 += 3) 
        {
            for (unsigned char i_4 = 1; i_4 < 22; i_4 += 3) 
            {
                {
                    arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_3] [i_3]))) <= (arr_13 [i_2] [(unsigned short)20] [10ULL] [(unsigned short)20]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 461752140U)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_1)))) ? (var_1) : (((((/* implicit */_Bool) var_2)) ? (arr_9 [8] [i_2]) : (((/* implicit */long long int) 461752156U)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_18))) | (arr_9 [2ULL] [(unsigned short)3])))));
                    var_26 ^= ((/* implicit */signed char) var_13);
                    var_27 = ((/* implicit */_Bool) ((-2147483633) | (1068683907)));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120033
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) ((var_10) != (((/* implicit */long long int) ((/* implicit */int) var_13)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_0)))))))), (var_7))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (min((((/* implicit */unsigned long long int) (_Bool)1)), ((~(min((arr_1 [(_Bool)1]), (((/* implicit */unsigned long long int) (unsigned short)54286))))))))));
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) arr_5 [i_1 + 1] [i_1 + 1] [i_2] [i_1 + 2]))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 4) 
    {
        var_18 = ((((/* implicit */int) ((signed char) min((var_10), (((/* implicit */long long int) var_6)))))) + (((/* implicit */int) ((_Bool) ((long long int) 3063235721436082857ULL)))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((unsigned char) arr_6 [i_3 - 1]))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) (~(arr_11 [i_4])));
                    var_21 ^= ((/* implicit */unsigned short) arr_4 [i_4] [i_5] [i_5]);
                    var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4]))) != (var_7)))) >= (((/* implicit */int) ((_Bool) (-(var_10)))))));
                }
            } 
        } 
        var_23 &= ((/* implicit */unsigned int) arr_5 [i_4] [i_4] [8LL] [i_4]);
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (((+(((/* implicit */int) var_0)))) >= ((~(((/* implicit */int) (signed char)-30))))))) + (((/* implicit */int) var_5))));
}

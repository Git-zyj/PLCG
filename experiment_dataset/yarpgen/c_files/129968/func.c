/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129968
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
    var_16 ^= ((/* implicit */unsigned int) (unsigned char)255);
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_5))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) (_Bool)1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_18 -= ((/* implicit */int) max(((+(-1LL))), ((~(min((-4LL), (((/* implicit */long long int) arr_7 [i_0] [18]))))))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((-21LL), (max((((/* implicit */long long int) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((var_1) + (2016256691736434200LL)))))), (((-16LL) + (((/* implicit */long long int) var_0)))))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */_Bool) var_10);
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) << (((((/* implicit */int) arr_5 [i_3])) - (144)))));
        var_22 += ((/* implicit */unsigned short) (-(4LL)));
    }
    for (int i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_5 = 1; i_5 < 7; i_5 += 2) 
        {
            arr_17 [i_4] [i_4] [i_5] |= ((/* implicit */unsigned int) max((((/* implicit */long long int) var_8)), (max((((/* implicit */long long int) ((arr_4 [i_4] [i_4] [i_5]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [i_4])))))), ((-(-8451569196972920511LL)))))));
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((-1LL), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) max((var_7), (((/* implicit */short) var_5)))))) < (max((-12LL), (((/* implicit */long long int) arr_6 [i_4] [i_5 + 3]))))))))))));
        }
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) max((min((((/* implicit */unsigned int) min((((/* implicit */short) arr_5 [i_4])), ((short)-32762)))), (1186092391U))), (((/* implicit */unsigned int) (unsigned char)213)))))));
    }
    var_25 = ((/* implicit */int) (~(-32LL)));
}

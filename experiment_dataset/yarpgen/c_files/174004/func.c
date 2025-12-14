/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174004
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
    var_16 = ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
    var_17 = ((/* implicit */short) (+(((/* implicit */int) var_13))));
    var_18 = ((/* implicit */int) var_10);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) var_2)))) < (((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */int) (unsigned char)142)) : (-748162554))))))) - (min((-3813202053569463785LL), (((/* implicit */long long int) (signed char)22))))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)107))))), (((((/* implicit */_Bool) (unsigned short)18398)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 3] [i_1 + 3]))) : (9795071147227999826ULL))))))));
                    arr_8 [i_0] [i_2] [i_0] [(unsigned short)7] = (+(((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) (signed char)-107)))) : (((/* implicit */int) (signed char)-24)))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((long long int) max((((/* implicit */unsigned short) arr_5 [(unsigned short)1] [i_1 + 4])), ((unsigned short)18398))));
                    arr_10 [i_2] [i_2] = ((/* implicit */signed char) var_1);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)201))) : (3432832111U)));
        arr_13 [i_3] = ((/* implicit */short) (+(((/* implicit */int) var_15))));
    }
}

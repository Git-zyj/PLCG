/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11485
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) var_1);
                arr_6 [i_0] [i_0] [i_0] = ((unsigned long long int) ((short) arr_3 [i_0] [i_1]));
                arr_7 [(_Bool)1] [i_1] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (5116245709023493583ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)(-32767 - 1))), (var_10))))))));
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((long long int) ((int) var_10))) + (((long long int) max((((/* implicit */int) (unsigned char)136)), (arr_1 [i_0] [i_0])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (max((((/* implicit */unsigned long long int) var_8)), (var_4)))));
    /* LoopSeq 1 */
    for (int i_2 = 1; i_2 < 19; i_2 += 4) 
    {
        var_17 = ((/* implicit */short) (~(((((/* implicit */_Bool) max(((unsigned char)210), (((/* implicit */unsigned char) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_10 [i_2 + 1])) ? (((/* implicit */unsigned long long int) arr_8 [i_2] [i_2])) : (var_4))) : (((/* implicit */unsigned long long int) ((724878539U) + (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) max((arr_9 [i_2 + 1] [i_2 + 3]), (((_Bool) arr_8 [i_2 + 2] [i_2 + 2]))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((unsigned long long int) arr_14 [(_Bool)1] [i_4])) : (((/* implicit */unsigned long long int) var_2))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        for (signed char i_6 = 4; i_6 < 8; i_6 += 3) 
        {
            {
                arr_23 [8ULL] &= ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)248)), (4294967294U)));
                var_20 = ((/* implicit */long long int) ((((unsigned int) (~(((/* implicit */int) (unsigned char)233))))) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                arr_24 [i_5] [8U] |= ((/* implicit */signed char) ((_Bool) min((((/* implicit */unsigned long long int) arr_13 [i_6 + 1] [i_6 - 2] [i_6 - 2])), (((((/* implicit */_Bool) var_5)) ? (arr_19 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34259))))))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (short)(-32767 - 1)))) ? (((((/* implicit */_Bool) (~(0ULL)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) 4088407324U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)141)))))) : (((/* implicit */int) var_8))));
            }
        } 
    } 
}

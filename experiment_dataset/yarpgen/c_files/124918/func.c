/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124918
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (min((0ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_9))))))))));
                arr_5 [i_0] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) >> (((((/* implicit */int) var_4)) - (17886))))) != (((((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) >> (((((/* implicit */int) arr_1 [i_1])) - (33196)))))));
                var_11 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((((arr_3 [i_0] [i_1] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) var_3))))) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) % ((-(13948200422697818135ULL)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned short) arr_7 [i_2]);
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    {
                        arr_16 [i_2] [i_2] [i_2] [i_3] [i_2] [i_2] |= ((unsigned char) 12022305715030286693ULL);
                        var_12 = (i_2 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_2] [i_2])) << (((arr_7 [i_5]) ? (((/* implicit */int) arr_12 [i_4] [i_3])) : (((/* implicit */int) arr_7 [i_3]))))))) : (((/* implicit */unsigned char) ((((((/* implicit */int) arr_9 [i_2] [i_2])) + (2147483647))) << (((arr_7 [i_5]) ? (((/* implicit */int) arr_12 [i_4] [i_3])) : (((/* implicit */int) arr_7 [i_3])))))));
                        var_13 = ((/* implicit */long long int) arr_11 [i_2] [i_4] [i_5]);
                    }
                } 
            } 
        } 
        var_14 ^= ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)60645)))) >> (((((/* implicit */int) arr_6 [(unsigned short)4] [i_2])) + (8888)))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((short) (~((-(((/* implicit */int) arr_12 [(unsigned short)14] [i_6]))))))))));
        var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49152)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (var_10)))) ? (((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_6])))) ? (((/* implicit */int) arr_13 [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_11 [i_6] [i_6] [i_6])))) : (((((/* implicit */int) arr_12 [i_6] [i_6])) << (((((((/* implicit */int) var_9)) ^ (((/* implicit */int) (short)21728)))) - (62558)))))))));
    }
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */int) var_6)), ((-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_0)))))));
    var_18 = ((/* implicit */long long int) (((((-(((/* implicit */int) var_0)))) / (((/* implicit */int) min(((signed char)-1), (((/* implicit */signed char) var_8))))))) * (((/* implicit */int) var_2))));
    var_19 = ((/* implicit */_Bool) var_4);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189143
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
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    arr_7 [i_0] [i_0] [(signed char)19] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 12952702417271706865ULL)))))) % ((+(((long long int) var_11))))));
                    var_13 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) ^ (max((12952702417271706865ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 + 2])))))));
                }
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    var_14 ^= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) arr_1 [(short)13])) ? (min((arr_1 [i_3]), (((/* implicit */long long int) arr_5 [i_3] [i_3] [i_3])))) : (arr_1 [i_0 + 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)241)), (var_2)))) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) ((unsigned short) (_Bool)0))))))));
                }
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned short)13523))))), ((+(var_8)))))) ? (min((((/* implicit */long long int) var_12)), (var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [(short)1] [i_1])) && (((/* implicit */_Bool) var_2))))))));
                arr_10 [i_0 - 1] [i_1] [i_1] = ((/* implicit */short) var_11);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((((1203827461) * (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_12))));
    var_18 = ((/* implicit */_Bool) min((max((((/* implicit */short) var_11)), (max((var_7), (((/* implicit */short) (unsigned char)28)))))), (((/* implicit */short) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) var_7))))))))));
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            for (long long int i_6 = 1; i_6 < 15; i_6 += 3) 
            {
                {
                    arr_18 [(_Bool)1] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_4] [i_5])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) != (((/* implicit */long long int) (+(((/* implicit */int) var_12)))))))) << (((arr_4 [i_4] [i_6]) - (2155680264835705992ULL)))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))), (max((var_5), (((/* implicit */long long int) (unsigned short)37457))))))))));
                }
            } 
        } 
    } 
}

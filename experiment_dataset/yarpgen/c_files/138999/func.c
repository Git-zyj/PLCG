/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138999
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
    for (short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (long long int i_3 = 4; i_3 < 11; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [(short)11] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))) : (var_2)))) ? (((/* implicit */unsigned long long int) arr_7 [i_2] [i_0] [i_2])) : ((+((+(var_9)))))));
                        var_12 = ((/* implicit */unsigned char) min((arr_7 [i_0] [i_0] [i_2]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_3])) : (((/* implicit */int) (unsigned char)39))))) ? (arr_0 [i_0 + 1] [i_0]) : (((/* implicit */long long int) ((unsigned int) 62U)))))));
                        var_13 = ((/* implicit */unsigned int) max((var_13), (((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_11))) >= (var_10))) ? (((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (arr_4 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (((/* implicit */short) arr_10 [i_2] [i_1] [i_3] [i_3] [(unsigned short)2]))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 - 2] [i_3] [0U])))))) : (min((((((/* implicit */_Bool) var_9)) ? (arr_4 [i_3]) : (arr_5 [i_0] [i_3]))), (((unsigned int) var_6))))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0 - 1] = ((/* implicit */int) (+(max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)19725))))), (min((arr_7 [(unsigned char)10] [i_0] [i_0]), (((/* implicit */long long int) 4294967239U))))))));
    }
    for (unsigned int i_4 = 1; i_4 < 23; i_4 += 2) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned char) (-(min((((((/* implicit */int) (unsigned short)59297)) << (((((/* implicit */int) arr_13 [(unsigned char)7] [i_4])) + (581))))), (((/* implicit */int) ((((/* implicit */_Bool) (short)24576)) && (((/* implicit */_Bool) 3631541659U)))))))));
        arr_16 [i_4] [i_4] = ((((/* implicit */_Bool) arr_13 [i_4] [0U])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) min(((unsigned char)100), ((unsigned char)191)))), (arr_13 [i_4] [i_4]))))) : (min((var_6), (1799686823U))));
        arr_17 [(unsigned char)18] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4 + 1] [(unsigned short)7]))) : (arr_14 [i_4 - 1] [i_4]))))));
    }
    var_14 = ((/* implicit */unsigned char) (~((~(max((((/* implicit */unsigned int) -871928185)), (245760U)))))));
    var_15 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) min(((+(var_3))), ((~(var_4)))))))))));
    var_17 = ((/* implicit */unsigned int) var_1);
}

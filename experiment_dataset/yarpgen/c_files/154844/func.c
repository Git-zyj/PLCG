/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154844
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
    var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_9)))) : (var_8))) ^ (((/* implicit */long long int) ((/* implicit */int) (short)32548)))));
    var_17 = ((/* implicit */unsigned int) min(((short)-32549), ((short)-32549)));
    var_18 ^= ((/* implicit */int) min((((0LL) / (((/* implicit */long long int) ((/* implicit */int) (short)19602))))), (((/* implicit */long long int) var_7))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) min(((~(max((3407951718126397847LL), (((/* implicit */long long int) (short)32548)))))), (((/* implicit */long long int) (unsigned short)65535))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (_Bool)0);
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            arr_6 [i_1 - 2] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) arr_1 [i_0])))) : ((-(((/* implicit */int) (signed char)32))))))) ? (((/* implicit */long long int) var_12)) : (((((/* implicit */long long int) arr_3 [i_1 - 1] [i_1] [i_1])) - (((((/* implicit */_Bool) (unsigned short)46154)) ? (var_8) : (((/* implicit */long long int) -1146800354))))))));
            arr_7 [i_0] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 3993042482U)) ? (14336) : (((/* implicit */int) (short)0))))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(255492615022172939ULL))), (((/* implicit */unsigned long long int) var_2))))) ? (min((3980432241U), (((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), (var_1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-9088)))));
        }
        /* LoopSeq 1 */
        for (int i_2 = 2; i_2 < 17; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        var_21 ^= ((/* implicit */unsigned int) (+(min((((/* implicit */int) var_1)), (((((((/* implicit */int) var_7)) + (2147483647))) >> (((var_3) - (17181247119964327318ULL)))))))));
                        arr_16 [i_0] [i_0] [0U] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5888))) % ((((+(var_3))) >> ((((-(1874625193))) + (1874625207)))))));
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_10 [i_0]);
                    }
                } 
            } 
            arr_18 [(signed char)4] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))) >= ((-(((/* implicit */int) (unsigned short)59589)))))) ? (((/* implicit */int) ((arr_5 [i_0]) >= (arr_5 [i_0])))) : (((((/* implicit */int) (unsigned short)1552)) ^ (((/* implicit */int) arr_4 [i_0]))))));
            var_22 = ((/* implicit */short) var_0);
        }
    }
}

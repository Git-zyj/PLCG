/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111789
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0))))) : (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28660))) : (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)28660)) : (((/* implicit */int) var_1)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) -2147483635)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)24374)) != (((/* implicit */int) (unsigned short)41162)))))) : (747761737U));
        arr_3 [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((arr_1 [(signed char)11] [(signed char)11]) / (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)28688)) <= (((/* implicit */int) var_3)))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] [(signed char)4] &= ((/* implicit */int) ((signed char) (unsigned char)91));
            var_20 = ((/* implicit */unsigned int) ((-6962112244425415598LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)60)))));
        }
        for (short i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (var_2) : (arr_8 [i_0 - 1] [i_2])));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_22 = ((/* implicit */signed char) ((unsigned int) arr_8 [i_0] [i_2]));
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_4)))))))));
                var_24 = ((/* implicit */unsigned short) var_16);
            }
        }
        for (short i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
        {
            arr_15 [i_0] [i_0] = ((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4]))) : (723610019U))) | (arr_1 [i_0 + 1] [i_0 + 1]));
            var_25 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 2339185357U)) ? (4294967295U) : (((/* implicit */unsigned int) 51195107)))));
            arr_16 [i_4] [i_0 + 1] = ((/* implicit */long long int) var_6);
            var_26 = ((/* implicit */long long int) arr_7 [i_4]);
        }
        var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)24377)) % (((/* implicit */int) (signed char)127)))))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 4) 
    {
        arr_21 [i_5 + 2] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_19 [i_5])), ((unsigned char)27)))) || (((1495912657U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))))))) && (((/* implicit */_Bool) (~(arr_17 [i_5 + 1]))))));
        arr_22 [i_5] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_18 [i_5 - 1] [i_5 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 431068551U)))) : (var_10))));
        arr_23 [i_5] [i_5] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_17 [i_5 + 1])) ? (arr_17 [i_5 - 1]) : (((/* implicit */int) (_Bool)0)))));
        var_28 = ((/* implicit */int) min((((((var_6) <= (((/* implicit */unsigned int) arr_17 [i_5])))) ? ((~(var_5))) : (((/* implicit */unsigned long long int) ((int) arr_19 [i_5]))))), (((unsigned long long int) arr_17 [i_5 - 1]))));
    }
    var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_14)), (var_6)))) ? (((((/* implicit */_Bool) var_3)) ? (13469632390230581248ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)5)))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) -5712684833787798695LL))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))))));
}

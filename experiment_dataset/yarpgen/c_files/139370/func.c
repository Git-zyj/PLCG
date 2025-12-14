/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139370
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
    var_16 = ((/* implicit */long long int) var_8);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (3064602485123776707LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))) < ((+(min((-3568886505600273376LL), (-80248853894287753LL)))))));
            var_18 = ((/* implicit */long long int) ((((-598446177) + (2147483647))) << (((536870912U) - (536870912U)))));
            var_19 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
            var_20 |= ((((/* implicit */_Bool) ((((9223372036854775807LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (var_7) : ((~(arr_3 [i_1] [i_0] [i_0])))))) ? ((+(var_5))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_3)))) ? (-137400681) : (137400656)))));
        }
        for (short i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_0 [i_0]))));
            arr_9 [i_0] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)-13840)));
        }
        var_22 += ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) (short)-6463))))), (max((32752), (((/* implicit */int) (unsigned short)28208))))));
        arr_10 [i_0] [i_0] = ((/* implicit */long long int) 7ULL);
        var_23 = ((((/* implicit */_Bool) min((arr_7 [i_0]), (((/* implicit */long long int) ((((/* implicit */unsigned int) var_10)) < (var_9))))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)13840)))) & (((/* implicit */int) ((((/* implicit */int) (unsigned short)65525)) != (((/* implicit */int) (short)12288)))))))) : (((((/* implicit */_Bool) (unsigned short)28192)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_12))));
    }
    var_24 *= ((/* implicit */unsigned long long int) (-(var_12)));
    var_25 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 7983931418307684899LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_15)))) ? (((/* implicit */long long int) (+(var_7)))) : (max((var_15), (((/* implicit */long long int) var_14)))))) / (((9223372036854775804LL) + (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (1492669158))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154419
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
    for (short i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [(signed char)4] [(unsigned char)2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (arr_5 [i_0] [(short)10]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_5 [i_0] [i_0]) : (((/* implicit */int) arr_2 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 + 1])) ? (((((/* implicit */_Bool) arr_1 [i_0] [3U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_3 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-11549))) == (3563736466U)))))))) : (((((/* implicit */_Bool) (~(8ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [8] [(signed char)1])))) : (min((((/* implicit */unsigned long long int) var_2)), (7ULL)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_2 [i_0])), (((arr_2 [i_0]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        var_11 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2])))))) ? (((/* implicit */int) max((((/* implicit */short) var_8)), (arr_8 [i_2])))) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)169)), ((short)-4360)))))), (((/* implicit */int) var_0))));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) ((((/* implicit */int) (short)4360)) > (((/* implicit */int) (short)4096)))))));
    }
    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) var_3)) * (max((18446744073709551611ULL), (((/* implicit */unsigned long long int) arr_11 [i_3] [7LL])))))))))));
        var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_3]))) : (arr_12 [i_3])))) ? (var_10) : (((((/* implicit */int) var_8)) * (((/* implicit */int) var_0)))))))));
        arr_14 [10LL] [10LL] &= ((/* implicit */long long int) arr_9 [(unsigned short)11]);
    }
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */int) var_8))))), (max((((/* implicit */unsigned long long int) var_10)), (var_7)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */long long int) var_10)), (var_5))) < (((/* implicit */long long int) (~(((/* implicit */int) var_1))))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (short)4202)) ? (((/* implicit */long long int) var_10)) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)-28033), (((/* implicit */short) (signed char)32))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_5))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) var_8)) : (var_10))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) max((var_9), (((/* implicit */short) var_4)))))))) : (max((((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */int) var_0)))))))));
    var_17 = ((/* implicit */unsigned char) (+(min((var_5), (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
}

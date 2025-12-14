/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132436
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
    var_19 = ((/* implicit */signed char) ((_Bool) ((unsigned int) (unsigned char)101)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
        var_20 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)24381))))) ? (((/* implicit */int) (unsigned short)24388)) : ((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? ((~(((/* implicit */int) (unsigned char)32)))) : (((((/* implicit */_Bool) (unsigned short)41159)) ? (((/* implicit */int) (unsigned short)24377)) : (((/* implicit */int) (_Bool)1)))))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)24370)))), (((int) var_16))))) <= (((((/* implicit */_Bool) 3971063762U)) ? (((/* implicit */unsigned long long int) 323903534U)) : (17671379698022304788ULL))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_8 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((min((((long long int) 2097151U)), (((/* implicit */long long int) (-(arr_4 [i_0] [i_1])))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) 3094150614U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_18)))) : (((((/* implicit */_Bool) var_4)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)21)) ? (min((((/* implicit */unsigned long long int) var_14)), (8798016249480398231ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))))))) || (((/* implicit */_Bool) (signed char)16))));
        }
    }
    for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_3)))) ? (arr_9 [i_2] [i_2]) : (min((arr_9 [i_2] [i_2]), (((/* implicit */int) (unsigned char)27))))));
        var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (arr_9 [i_2] [i_2]) : (arr_9 [i_2] [i_2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((2924399695621399770ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((unsigned int) arr_9 [i_2] [i_2])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (arr_9 [i_2] [i_2])))))))));
    }
}

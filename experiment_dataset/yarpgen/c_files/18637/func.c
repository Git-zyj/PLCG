/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18637
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
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        var_11 = (~(2ULL));
        var_12 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0])))) + (3055160617U)));
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (short)10985)))) ? (max((((/* implicit */unsigned int) -1161925668)), (38940322U))) : (((0U) << (((arr_1 [i_0] [i_0]) + (1829686771))))))) << (((3783932868798574936ULL) & (((/* implicit */unsigned long long int) 18U)))))))));
        var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0 + 3] [i_0 + 2])) || (((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])))) && (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 3])) || (((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 - 1]))))));
    }
    for (short i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            for (unsigned char i_3 = 3; i_3 < 19; i_3 += 4) 
            {
                {
                    var_15 *= ((/* implicit */short) ((unsigned short) (~((~(((/* implicit */int) (unsigned short)23401)))))));
                    var_16 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_1 + 1]))) ^ (((unsigned long long int) ((((/* implicit */_Bool) 4284165709U)) ? (((/* implicit */int) (unsigned short)30150)) : (((/* implicit */int) arr_7 [i_1] [i_2 + 1])))))));
                }
            } 
        } 
        arr_9 [i_1] [i_1 + 1] = ((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned short)35398)) ^ (arr_3 [i_1] [i_1 + 1])))));
    }
    var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) var_8)), (((((/* implicit */long long int) ((/* implicit */int) ((signed char) 324993525U)))) % ((+(var_2)))))));
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((/* implicit */int) ((((((/* implicit */_Bool) (short)18772)) ? (3672625129U) : (3969973770U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 416129078U))))))))) - (1))))))));
    var_19 = ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned short)25675)))))));
}

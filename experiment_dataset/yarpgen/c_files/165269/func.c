/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165269
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_10 -= ((/* implicit */unsigned char) max((((unsigned int) arr_4 [i_0 - 2])), (((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) 533023387492175474ULL))))))));
                    arr_7 [i_1] [2LL] &= ((/* implicit */short) ((((min((((((/* implicit */_Bool) 533023387492175469ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_5))), (((/* implicit */long long int) arr_5 [i_0 + 2] [i_0] [i_0] [i_0])))) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) (+(17913720686217376141ULL)))) ? (((((/* implicit */int) arr_2 [i_0 - 2])) / (((/* implicit */int) (unsigned short)6244)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)7069))) < (17913720686217376141ULL))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) -983039652);
                                arr_13 [i_0] [i_0] [i_2 - 2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((var_3) > (((/* implicit */long long int) 3496089679U)))))))) + (517833087U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (min((533023387492175446ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (530382857U))))))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_7)) : ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))))));
    var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned int) var_0))), (17913720686217376145ULL)));
}

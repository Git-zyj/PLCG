/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148749
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
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */int) var_0)), (((((/* implicit */int) var_10)) & (((/* implicit */int) ((unsigned short) var_12)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_2 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 + 2]))) : (var_6))) % (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_8)))))))));
                    var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (((((/* implicit */_Bool) -6894188192225211441LL)) ? (16139033329972051926ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (var_6))))) >> (((((/* implicit */int) var_1)) - (10464)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_2] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_11 [i_1] [i_2] [i_1] [i_2] [i_1] [i_1] [i_1])) - (462167125)))))) % (((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_2] [i_3] [i_2] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) arr_0 [i_2 + 3])) : (arr_8 [i_2 - 1] [i_2 + 3] [i_0] [i_0])))));
                                var_18 = ((/* implicit */signed char) (-(min((((/* implicit */int) var_11)), (((((/* implicit */int) (unsigned char)150)) - (((/* implicit */int) var_11))))))));
                            }
                        } 
                    } 
                    var_19 += ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57808)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)7728))))), (11489052837375310871ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_2 [i_0] [i_0]))))) >> (((((/* implicit */int) arr_1 [i_2 + 2])) - (219))))))));
                }
            } 
        } 
        var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_6) : (arr_8 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))) <= (arr_0 [i_0])))))))) ? (((long long int) ((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57808)))));
    }
    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */unsigned long long int) (-(-1291500284)))) > (6957691236334240745ULL)))), ((+(((/* implicit */int) (unsigned short)57808))))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)57808)))))));
    }
}

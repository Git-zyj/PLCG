/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112834
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
    var_13 = ((/* implicit */long long int) ((_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 8655305954075069216LL)) ? (-14) : (12)))), (((((/* implicit */_Bool) -2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (477298885U))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) (signed char)-1))), (-26)));
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 43)) ? (((/* implicit */int) ((13) < (var_4)))) : (((((/* implicit */int) (unsigned short)36462)) / (((/* implicit */int) arr_7 [i_1 + 1] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) 17146314752LL)) ? (((unsigned long long int) (unsigned short)31102)) : (((/* implicit */unsigned long long int) ((int) arr_4 [i_0] [i_1 + 3]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_3] [i_1 + 3])) ? (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [(_Bool)1] [i_2])))) >> (((((int) arr_12 [i_0] [i_2] [i_3] [i_2])) + (973908889))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-42)))))))));
                            var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned int) var_1)) : (arr_2 [i_3] [i_0]))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_7)))))))));
                            arr_13 [i_0] [(_Bool)1] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 + 1] [i_1 + 1]);
                        }
                    } 
                } 
                arr_14 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) max(((unsigned short)34433), (((/* implicit */unsigned short) (_Bool)1)))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 12)) ? (-28) : (((/* implicit */int) (_Bool)0)))))))));
                var_17 += (unsigned short)31103;
            }
        } 
    } 
    var_18 = ((/* implicit */int) var_5);
    var_19 = ((/* implicit */unsigned long long int) ((int) ((max((12), (((/* implicit */int) var_2)))) >> (((((/* implicit */int) ((signed char) var_1))) + (78))))));
    var_20 = ((/* implicit */unsigned char) var_4);
}

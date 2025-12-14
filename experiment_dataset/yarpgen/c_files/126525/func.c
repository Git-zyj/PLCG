/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126525
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    arr_8 [i_0] [(_Bool)1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1] [i_2 - 1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_4)) % (var_18)))) : (var_7)));
                    var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_3 [i_2] [i_1])), (((((/* implicit */_Bool) arr_2 [i_1] [i_2 + 2])) ? (((((/* implicit */_Bool) arr_3 [i_1] [5])) ? (var_19) : (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) var_0))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) var_6);
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)122))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_2 - 2] [i_2 - 2] [i_2 - 2])) + (((/* implicit */int) var_9))))) : ((+(arr_10 [i_0] [i_2 - 1] [i_2 - 1] [i_3] [i_4]))))))));
                                var_22 += ((/* implicit */unsigned char) (+(((/* implicit */int) var_12))));
                            }
                        } 
                    } 
                    var_23 ^= ((/* implicit */unsigned short) ((unsigned long long int) max((arr_11 [i_2 - 1] [i_2 - 2] [i_2 + 2] [i_2 - 1] [i_2 - 2]), (((/* implicit */signed char) (_Bool)1)))));
                }
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) min((4730344788343244114ULL), (((/* implicit */unsigned long long int) -8615741969888563390LL)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 4730344788343244114ULL))))) % (((/* implicit */int) (signed char)122))))) : (13716399285366307501ULL)));
}

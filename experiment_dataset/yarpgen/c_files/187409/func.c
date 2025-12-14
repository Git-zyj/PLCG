/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187409
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
    var_16 = ((/* implicit */int) max(((unsigned char)39), (((/* implicit */unsigned char) (signed char)-37))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) -1449535852))));
                    arr_9 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) arr_2 [i_2 - 1] [i_2 - 1]);
                    arr_10 [14] [(_Bool)1] [i_0] [14] &= ((/* implicit */unsigned int) arr_1 [(unsigned short)0]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_1] [i_0] [4ULL] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0])))))));
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)3616)) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46343))))))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_14 [i_2] [i_2] [i_2 + 3] [i_2 + 4] [i_2 + 2] [i_0]))));
                        }
                        var_20 &= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-8))))) == ((~(((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [(unsigned short)10] [i_2] [i_3]))))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (-(((((/* implicit */int) ((short) (signed char)-5))) - (((/* implicit */int) ((short) var_13))))))))));
    var_22 ^= ((/* implicit */unsigned long long int) var_7);
}

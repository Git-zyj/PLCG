/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153561
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
    var_10 *= var_1;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_11 *= ((/* implicit */unsigned int) (-(max((((((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 2] [i_2])) + (var_4))), ((-(((/* implicit */int) (_Bool)1))))))));
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1 + 2]))) * (arr_1 [i_2]))), (((((((/* implicit */unsigned int) ((/* implicit */int) (short)-9349))) + (128U))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_5))))))))))));
                    var_13 -= ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) ((unsigned int) arr_6 [(unsigned short)15] [i_1] [i_0]))))));
                }
                var_14 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_4 [(_Bool)1] [i_0]))))))) > (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (unsigned short)52679)))))) + (arr_1 [i_1 + 3])))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) min((((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) var_0)))))), (((((var_2) > (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (min((var_0), (((/* implicit */unsigned int) var_5))))))));
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        var_16 = ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_3] [i_3] [i_3])) == (((/* implicit */int) arr_6 [i_3] [i_3] [i_3]))))) <= (((int) arr_0 [i_3])));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (unsigned int i_5 = 2; i_5 < 16; i_5 += 2) 
            {
                {
                    var_17 *= ((/* implicit */short) ((unsigned long long int) (short)32639));
                    var_18 -= ((/* implicit */unsigned int) var_4);
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 16; i_7 += 4) 
                        {
                            {
                                arr_22 [i_4] [i_4] [i_4] [i_4] [i_7] [i_4] = ((/* implicit */int) (((~(((unsigned int) var_9)))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_3] [i_6])) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-93)) - (var_4))))))))));
                                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_20 |= ((/* implicit */short) ((unsigned int) min(((~(((/* implicit */int) var_9)))), (((/* implicit */int) var_9)))));
}

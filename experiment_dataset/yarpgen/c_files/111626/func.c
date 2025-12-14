/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111626
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
    var_11 = ((/* implicit */unsigned short) var_8);
    var_12 = ((/* implicit */unsigned int) -2765140598321311891LL);
    var_13 = ((/* implicit */long long int) (signed char)-112);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 15; i_2 += 1) 
                {
                    var_14 = ((/* implicit */signed char) (+(var_3)));
                    var_15 = ((/* implicit */long long int) arr_5 [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 2]);
                    var_16 = ((_Bool) (short)-11889);
                }
                for (int i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned char) max(((short)-11881), (((/* implicit */short) (signed char)67))));
                            arr_16 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) var_8);
                            var_18 = ((/* implicit */unsigned char) 805378874);
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (min((((/* implicit */long long int) var_10)), (arr_13 [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 + 2] [i_3 + 1] [i_3 - 1])) && (((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 + 2] [i_3 + 2] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 2]))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        var_20 = ((/* implicit */long long int) (signed char)-15);
                        arr_19 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [12U] [12U])) ^ (((/* implicit */int) var_7)))))));
                        arr_20 [i_0] [i_1] [i_3 - 1] = ((/* implicit */short) var_7);
                        var_21 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_6] [i_6] [i_3] [i_1] [i_0]))))));
                    }
                    var_22 = ((/* implicit */unsigned short) ((int) min((var_3), (((/* implicit */int) (short)-11911)))));
                }
                arr_21 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) (signed char)-15));
            }
        } 
    } 
}

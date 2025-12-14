/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128293
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) 4294967287U);
                    arr_7 [i_0] = ((/* implicit */signed char) (-((+(((/* implicit */int) (unsigned short)31237))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_12 += ((/* implicit */signed char) ((arr_6 [i_3 + 1]) > (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)12)))))));
                                var_13 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_11 [i_0] [i_0] [i_3 + 1]))))));
                                var_14 = ((/* implicit */int) max((var_14), (min((max((((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)34303)))), (((((/* implicit */_Bool) 12437406093380807253ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)14)))))), (((/* implicit */int) var_0))))));
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 346223445)) ? (((/* implicit */int) (unsigned short)31237)) : (((/* implicit */int) (short)32767))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_1])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-24614)) : (((/* implicit */int) var_0))))))))))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30546)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2))))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)11499)) : (((/* implicit */int) (short)32767)))))))) ? (((/* implicit */int) (short)32756)) : ((+(((/* implicit */int) (unsigned char)18)))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_10)) + (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))))) ? ((-(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_10)) ? (346223469) : (((/* implicit */int) arr_4 [i_0] [i_0]))))));
    }
    var_19 = (signed char)-8;
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155670
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
    var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)366))))), (((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)22802))) : (var_4))))));
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) max((((((((/* implicit */_Bool) (short)-27649)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-115)))) | (((((/* implicit */int) (short)27663)) << (((((/* implicit */int) (short)27646)) - (27632))))))), (((/* implicit */int) ((short) ((signed char) (short)-27647)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                for (unsigned char i_3 = 1; i_3 < 9; i_3 += 1) 
                {
                    {
                        arr_12 [(unsigned char)1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (signed char)-115)) > (((/* implicit */int) (signed char)-38))))) & (2147483642)));
                        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)103)) : (-107303520))))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((int) var_2));
                        var_15 *= ((/* implicit */signed char) ((unsigned short) var_4));
                        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) var_6)))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */signed char) max((var_17), (((signed char) ((((/* implicit */int) (short)32741)) >> (((((/* implicit */int) (short)-27664)) + (27693))))))));
        arr_14 [i_0] [i_0] = (((_Bool)0) ? (((/* implicit */int) (short)-13959)) : (((/* implicit */int) (short)-32727)));
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0]))));
    }
}

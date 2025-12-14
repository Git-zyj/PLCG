/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147606
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
    var_10 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) (unsigned char)220)) : (-105382197))), (((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1517249748)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (short)11514))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (-11)));
                        arr_10 [i_0 + 3] [i_0] = ((/* implicit */_Bool) (signed char)-16);
                        arr_11 [i_0] = ((((/* implicit */int) ((unsigned char) var_7))) == (((-2147483643) - (-2147483643))));
                        var_13 += ((/* implicit */short) ((((/* implicit */_Bool) (short)-11500)) ? (((/* implicit */int) (short)32640)) : (2147483643)));
                    }
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) max((max(((short)504), (((/* implicit */short) (unsigned char)19)))), (((/* implicit */short) ((arr_2 [i_0]) || (arr_2 [i_0])))))));
                        var_14 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (var_4)))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)-11498)) : (((/* implicit */int) (_Bool)1))))) : (var_1)))));
                    }
                    for (signed char i_5 = 2; i_5 < 7; i_5 += 4) 
                    {
                        arr_18 [i_0] [i_5] = ((/* implicit */signed char) ((unsigned char) ((int) arr_1 [i_0])));
                        arr_19 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0]));
                    }
                    var_15 = (((-((~(((/* implicit */int) (unsigned char)58)))))) != (((/* implicit */int) var_0)));
                    arr_20 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (arr_0 [i_2])))) || (((/* implicit */_Bool) ((unsigned int) (signed char)0)))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */short) var_7);
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max(((-((+(((/* implicit */int) (signed char)-8)))))), (((/* implicit */int) ((((/* implicit */int) max((var_2), (var_7)))) == (((/* implicit */int) var_5))))))))));
}

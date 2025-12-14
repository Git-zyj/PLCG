/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10464
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
    var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-127)) >= (((/* implicit */int) var_2))))) != (((((/* implicit */_Bool) (short)23466)) ? (((/* implicit */int) var_8)) : (var_9))))))));
    var_14 = ((/* implicit */signed char) ((max((((((/* implicit */int) var_3)) / (var_1))), (((((/* implicit */int) (short)27338)) << (((((-1619042509) + (1619042526))) - (16))))))) == (((/* implicit */int) (short)-27338))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */short) ((signed char) (signed char)-107))), (min(((short)27338), (((/* implicit */short) arr_5 [i_1]))))))))))));
                    arr_9 [i_2 - 2] [(signed char)10] = ((/* implicit */signed char) max((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])), (((((/* implicit */int) min((var_4), (((/* implicit */short) arr_7 [i_2] [i_1] [i_1] [i_0]))))) / (-1926880156)))));
                    var_16 = (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)27338))))));
                }
            } 
        } 
    } 
}

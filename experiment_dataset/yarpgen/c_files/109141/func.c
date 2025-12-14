/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109141
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
    var_11 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) max(((signed char)-107), ((signed char)97)));
                            arr_12 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_11 [i_0] [i_0])))) ? (((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))) % (var_10)))) : (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned short) arr_4 [i_1])), ((unsigned short)23245)))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)98))))) ? ((+(((/* implicit */int) (unsigned short)33974)))) : (((/* implicit */int) arr_4 [i_1])))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_0] [i_1]))) : ((~(((/* implicit */int) (signed char)-107))))))));
                arr_13 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_0])) * (((/* implicit */int) ((unsigned char) arr_1 [i_0])))));
                arr_14 [i_1] [i_1] = ((/* implicit */short) (signed char)-110);
            }
        } 
    } 
}

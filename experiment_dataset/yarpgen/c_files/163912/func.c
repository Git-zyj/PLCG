/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163912
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
    var_18 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] |= ((/* implicit */unsigned char) arr_5 [i_0] [i_1]);
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 255742025)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_0))))), (arr_2 [i_0]))), (((/* implicit */unsigned long long int) ((short) (unsigned char)8)))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) min((arr_3 [i_0]), ((unsigned char)3)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)235)))) : (((/* implicit */int) ((unsigned short) 18446744073709551610ULL))))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned short i_3 = 4; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (arr_11 [i_3] [i_3] [i_3 + 3] [i_3] [i_3 - 1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3 + 3] [i_3] [i_3 - 1] [i_3])) && (((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3 + 3] [i_3] [i_3 - 1] [i_3])))))) : (min((arr_11 [i_3] [i_3] [i_3 + 3] [i_3] [i_3 - 1] [i_3]), (arr_11 [i_3] [i_3] [i_3 + 3] [i_3] [i_3 - 1] [i_3])))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) ((_Bool) arr_10 [i_0])))))));
                            arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (8024085349175427239LL)))) || (((((/* implicit */_Bool) (unsigned char)234)) && (((/* implicit */_Bool) 2789364739U))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)251)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)9227)))))) ? (((/* implicit */int) (short)28892)) : (((/* implicit */int) (signed char)0))))));
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */signed char) var_2);
                            arr_17 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) (unsigned char)9);
                        }
                    } 
                } 
            }
        } 
    } 
}

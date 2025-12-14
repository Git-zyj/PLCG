/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102734
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
    var_13 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */long long int) var_11);
                        var_14 = ((/* implicit */unsigned char) 2741136407958532899ULL);
                    }
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */signed char) (-(var_4)));
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) max((((/* implicit */int) var_7)), (arr_8 [i_4] [i_4] [(_Bool)1] [i_0] [i_0] [i_4]))))))))));
                        arr_16 [i_0] [i_1] [i_1] = arr_13 [i_0] [i_1] [i_2] [i_0] [i_2];
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] [(unsigned short)18] = ((/* implicit */unsigned long long int) (+(arr_4 [i_0] [i_1 - 1] [i_2])));
                        var_17 += ((unsigned int) (~(4264593846574273605ULL)));
                    }
                    arr_21 [i_0] [i_1 + 2] = ((/* implicit */unsigned char) ((unsigned long long int) arr_7 [i_0] [i_0] [i_2] [i_0]));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 2) 
                    {
                        arr_26 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) (unsigned char)246)))));
                        arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((arr_22 [i_0] [i_6] [i_6] [i_6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_15 [i_2] [i_2] [i_2] [i_0])))) : (((unsigned long long int) var_8))))));
                        var_18 &= ((/* implicit */unsigned short) ((int) (+(arr_24 [i_6] [i_1 - 1] [i_6 + 1] [i_1 + 1] [i_1 - 1] [i_6]))));
                    }
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_0] [i_0])) ? ((+(((/* implicit */int) var_1)))) : ((~(((/* implicit */int) (short)-16803))))))) ? (((int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0])) : ((~(1934711770)))));
                    var_20 |= ((/* implicit */signed char) (~(((unsigned long long int) (signed char)59))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((unsigned int) var_0));
}

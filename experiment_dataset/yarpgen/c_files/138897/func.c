/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138897
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
    var_12 = ((/* implicit */long long int) var_11);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) >= (((/* implicit */int) var_5))))), ((((!(((/* implicit */_Bool) 216172782113783808LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_11)))) : (var_10)))));
        var_14 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (var_0))), (((/* implicit */unsigned int) max((arr_2 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
    }
    var_15 = ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        for (unsigned short i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_3 = 1; i_3 < 16; i_3 += 4) 
                {
                    arr_11 [(_Bool)1] [i_2 + 1] [(_Bool)1] [i_1] &= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) -1350901301)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 2; i_4 < 17; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            {
                                arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) arr_0 [(unsigned char)18] [(unsigned char)18])) : (((/* implicit */int) (unsigned char)255))))) ? ((~(var_1))) : (((/* implicit */int) (_Bool)1))));
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) var_9)) | (((/* implicit */int) arr_4 [i_1])))) : ((~(((/* implicit */int) arr_10 [i_4 + 2] [i_2]))))));
                                arr_19 [i_2] = ((/* implicit */unsigned short) (((~(10LL))) != (((/* implicit */long long int) ((((/* implicit */_Bool) 1350901308)) ? (((/* implicit */int) arr_8 [i_2] [i_4])) : (((/* implicit */int) (short)-23909)))))));
                                var_17 = ((/* implicit */unsigned long long int) ((1350901278) | (var_1)));
                            }
                        } 
                    } 
                }
                arr_20 [i_2] [i_2] [i_2] = (unsigned char)8;
                /* LoopNest 3 */
                for (short i_6 = 4; i_6 < 18; i_6 += 4) 
                {
                    for (unsigned short i_7 = 2; i_7 < 18; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                                var_19 = ((/* implicit */long long int) min((var_19), (((((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) ? (max((arr_27 [6] [i_2] [i_1]), (((/* implicit */long long int) arr_12 [i_2 - 2] [i_6])))) : (((/* implicit */long long int) min((min((1350901322), (((/* implicit */int) arr_21 [(unsigned char)7] [i_1])))), (((/* implicit */int) (signed char)12)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

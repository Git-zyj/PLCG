/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134340
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
                    {
                        var_15 = ((/* implicit */int) (((((_Bool)1) ? (9223372036854775782LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))));
                        arr_12 [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */int) min((max((-1LL), (arr_0 [i_0]))), (((long long int) max((((/* implicit */unsigned long long int) (signed char)-44)), (16822920813886121043ULL))))));
                    }
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                    {
                        var_16 ^= ((/* implicit */int) arr_13 [i_0] [i_2]);
                        arr_15 [i_4] [(_Bool)0] [i_1] [i_0] = ((/* implicit */unsigned int) (+(min((((((/* implicit */_Bool) arr_9 [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) (signed char)-55))))));
                    }
                    var_17 = ((/* implicit */_Bool) (-(arr_3 [i_0] [i_0])));
                    var_18 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned long long int) arr_17 [i_6 - 1] [i_1 + 1] [i_1]);
                                var_20 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((2298305593297008692LL), (((/* implicit */long long int) 496964510U)))))));
                                var_21 &= ((/* implicit */unsigned short) max((((/* implicit */int) arr_4 [(unsigned short)0])), ((+(((/* implicit */int) arr_4 [i_1 + 2]))))));
                            }
                        } 
                    } 
                    var_22 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)141)), (1ULL)));
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (signed char)-64)))) << (((((((/* implicit */_Bool) -571595049)) ? (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [10LL] [i_0] [i_0])) : (8043938239584160268ULL))) - (1174402926ULL)))));
    }
    var_23 &= ((unsigned char) (-9223372036854775807LL - 1LL));
}

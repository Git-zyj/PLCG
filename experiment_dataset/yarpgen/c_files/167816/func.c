/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167816
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
    var_18 -= ((/* implicit */int) min((var_17), (var_17)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) 0U);
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-82)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2670635888U))))) : (((/* implicit */int) (!(var_13))))))) ? (((/* implicit */int) ((unsigned short) 601533988U))) : (((/* implicit */int) (signed char)-82))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (signed char i_4 = 2; i_4 < 18; i_4 += 3) 
            {
                {
                    var_21 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_2)), (min((((/* implicit */unsigned long long int) arr_3 [i_4 - 2])), (15710639353477224771ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        arr_15 [i_5] [i_4] = ((/* implicit */short) var_10);
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) max((max(((+(3413746103U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_3] [i_3])) > (((/* implicit */int) (unsigned char)158))))))), (((/* implicit */unsigned int) var_7))));
                            var_23 -= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_5 [i_4 - 2] [i_3] [i_4 - 2])))) ? (min((881221192U), (((/* implicit */unsigned int) var_17)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_4 - 2] [i_3] [i_4 - 2])) ? (((/* implicit */int) arr_5 [i_4 - 2] [i_4 - 2] [i_4])) : (((/* implicit */int) arr_5 [i_4 - 2] [i_3] [(short)9])))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_7 [i_0] [i_3])))) ? (((arr_9 [i_4 + 1] [i_4 - 1] [i_4 - 2]) ? (((/* implicit */int) arr_9 [i_4 + 1] [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) arr_9 [i_4 + 1] [i_4 + 1] [i_4 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)78)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))))))));
                        }
                        var_25 = ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) arr_3 [i_4 + 1])))));
                    }
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_26 = ((/* implicit */long long int) arr_20 [i_7] [i_7]);
        arr_21 [(unsigned char)21] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_20 [i_7] [i_7]))));
        var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_7] [i_7]))));
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_18 [i_7]))) / ((-(((/* implicit */int) var_17))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_26 [i_8] [i_8] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_25 [i_8])) ? (((/* implicit */unsigned int) (-(-199182807)))) : ((+(arr_24 [i_8] [i_8]))))), (((/* implicit */unsigned int) (signed char)(-127 - 1)))));
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 25; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_29 = ((/* implicit */long long int) arr_29 [i_8] [i_9] [i_10]);
                    var_30 = ((/* implicit */unsigned int) var_0);
                }
            } 
        } 
    }
}

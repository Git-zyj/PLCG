/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148874
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_7 [i_0] [i_0] [i_0] [i_0]))))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = max((var_0), ((-(503184896U))));
                }
            } 
        } 
        var_13 = ((/* implicit */_Bool) arr_6 [(unsigned char)10] [i_0] [(unsigned char)10] [i_0]);
        arr_9 [i_0] = ((/* implicit */int) ((_Bool) 3791782378U));
        var_14 = ((/* implicit */int) max((1053297663U), (((/* implicit */unsigned int) (unsigned char)3))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 2) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) <= (arr_18 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6])))) * ((~(var_8)))));
                        var_16 = ((/* implicit */signed char) max((max((arr_7 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6]), (arr_7 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1]))), (((((/* implicit */_Bool) arr_7 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1])) ? (arr_7 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1]) : (3791782380U)))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) (short)22361);
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (-(((int) (short)28044)))))));
        var_19 = ((/* implicit */short) (+(((((/* implicit */int) arr_13 [i_3] [i_3])) * (((((/* implicit */_Bool) arr_13 [i_3] [(_Bool)0])) ? (((/* implicit */int) arr_19 [i_3] [i_3] [i_3])) : (((/* implicit */int) var_9))))))));
        var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) var_8)))));
    }
    for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            var_21 += ((/* implicit */unsigned int) arr_24 [i_7] [i_8] [i_7]);
            arr_27 [i_7] [i_7] [i_8] = (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-5359))))));
            var_22 = arr_23 [i_8];
            var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_25 [i_7] [(short)4] [i_7]), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [(short)4] [(short)4])))))))) ? ((+(((/* implicit */int) (signed char)-60)))) : (((/* implicit */int) arr_26 [12U] [i_8]))));
        }
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            for (short i_10 = 2; i_10 < 16; i_10 += 3) 
            {
                {
                    var_24 = ((/* implicit */int) arr_31 [i_7] [i_9]);
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_9] [i_9] [i_7]))))) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) arr_33 [i_7] [i_9]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_11 = 1; i_11 < 15; i_11 += 3) 
        {
            arr_37 [i_7] = ((/* implicit */signed char) (_Bool)1);
            var_26 = ((/* implicit */int) ((signed char) max((arr_30 [i_7]), (arr_30 [i_7]))));
        }
        arr_38 [i_7] [3U] = ((/* implicit */_Bool) arr_28 [i_7]);
    }
    var_27 = (+(((((93742032U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))))) ? (((((/* implicit */int) (signed char)57)) / (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1)))));
    var_28 = (~(503184896U));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178599
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) ((-5091875467533034601LL) == (((/* implicit */long long int) ((/* implicit */int) var_2)))))), (arr_1 [i_0])))) % ((+(((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_12 = ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((_Bool) arr_4 [i_0 - 1] [i_0 - 1]))));
                    arr_7 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((long long int) -1401750243))) ? (((/* implicit */long long int) ((int) var_8))) : (((((/* implicit */_Bool) (short)12)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */long long int) (short)23527)), (arr_6 [i_2] [(_Bool)0] [i_0]))))))));
                    arr_8 [9U] [2] [2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [7])))))));
                }
            } 
        } 
        arr_9 [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)25129)) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)0))))));
        /* LoopNest 2 */
        for (signed char i_3 = 3; i_3 < 11; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    arr_14 [i_3] = ((/* implicit */_Bool) 55647324569241327LL);
                    var_13 = ((/* implicit */unsigned int) min((var_7), (var_8)));
                    arr_15 [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1413)) ? (((/* implicit */long long int) min((3794377761U), (((/* implicit */unsigned int) (_Bool)1))))) : (var_6)))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_10 [3] [i_3])))) - (((((/* implicit */_Bool) -1334195266)) ? (-1334195268) : (((/* implicit */int) (short)-1415))))))) : (max((((long long int) (short)-1415)), (((/* implicit */long long int) 1289827670U))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_22 [i_5] [i_6] [(_Bool)1] [i_5] = ((/* implicit */_Bool) var_10);
                    arr_23 [1LL] [(signed char)9] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */int) (short)-1426)) ^ (((/* implicit */int) ((_Bool) var_1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (36028794871480320ULL) : (((/* implicit */unsigned long long int) arr_4 [i_5] [i_6]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5] [i_5]))) >= (var_3)))) : (((/* implicit */int) ((127LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_7] [1LL] [i_7]))))))))) : (var_1));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        for (long long int i_9 = 1; i_9 < 8; i_9 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) ((((((/* implicit */int) arr_2 [i_9 + 4] [(short)6])) == (((/* implicit */int) (unsigned char)142)))) ? (max((((long long int) arr_20 [i_8] [4] [i_6])), (arr_27 [i_8] [4ULL] [(_Bool)1] [i_6] [i_8]))) : (((/* implicit */long long int) arr_18 [5LL] [i_7]))));
                                var_15 = ((/* implicit */short) min((((/* implicit */int) (short)-23992)), ((-(((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

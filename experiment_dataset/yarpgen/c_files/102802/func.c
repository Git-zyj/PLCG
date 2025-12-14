/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102802
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        arr_14 [i_0] [i_0] [5] [i_0] = (((((-(((/* implicit */int) (unsigned char)152)))) + (2147483647))) << (((((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) (unsigned char)103)))) - (49))));
                        arr_15 [i_3] [i_2 - 2] [16LL] [i_0] [i_0] &= (~(((int) arr_11 [i_1 + 3] [i_2 - 2])));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0]))))) ? (((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)152))))) - (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))) * (var_13))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)94))))));
        arr_16 [i_0] [i_0] = (unsigned char)103;
    }
    var_18 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        for (unsigned short i_5 = 2; i_5 < 9; i_5 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 10; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_27 [i_7] [i_6] [i_6] [i_4] = ((/* implicit */unsigned int) (~(((((((/* implicit */int) var_10)) < (((/* implicit */int) (unsigned short)13)))) ? (((/* implicit */int) arr_24 [i_5 - 2] [i_5] [i_5 - 2] [i_6] [i_6 + 1])) : (((/* implicit */int) arr_9 [i_4] [i_6 - 3] [i_6 - 3]))))));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_4])) || ((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65523))) / (3406361410066652346LL)))))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_8 = 1; i_8 < 10; i_8 += 4) 
                {
                    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_28 [i_8])))));
                    arr_32 [i_4] [i_4] [5U] = ((/* implicit */int) arr_8 [15U] [i_5] [i_8]);
                    arr_33 [i_8] [i_5 - 1] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_20 [i_8] [i_5] [(unsigned char)8]))));
                }
                /* vectorizable */
                for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    var_21 = ((/* implicit */long long int) ((signed char) arr_6 [i_5] [i_5 - 1]));
                    arr_38 [i_4] [i_4] [i_5] [i_4] |= ((((/* implicit */_Bool) arr_13 [i_5 - 1] [i_5 + 1] [i_5 - 2] [14U])) ? (4) : (((/* implicit */int) (unsigned short)4)));
                    arr_39 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_25 [i_4])) + ((-(((/* implicit */int) (unsigned char)241))))));
                }
                arr_40 [i_4] = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) (unsigned short)65531)) && (((/* implicit */_Bool) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)87)), (arr_21 [i_4] [i_5] [8])))) || (((((/* implicit */_Bool) arr_35 [i_4] [i_4] [i_4] [i_4])) && (((/* implicit */_Bool) (unsigned short)11)))))))) : (max((((unsigned long long int) arr_13 [15ULL] [i_5] [i_5] [i_5])), (((/* implicit */unsigned long long int) (unsigned short)14))))));
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((unsigned short) (+(arr_34 [i_5] [i_5] [i_5 + 1])))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) 36028797018961920LL))));
    var_24 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */long long int) -2129862854)) : (var_14))))))));
}

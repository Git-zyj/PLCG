/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162390
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_6 [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) 483728317U))) || (((/* implicit */_Bool) (unsigned short)23656))));
                    var_18 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) arr_4 [i_2] [i_1])) + (arr_5 [i_0]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) -8221364485262275421LL))));
                                var_20 = ((/* implicit */int) max((var_20), ((+((-((+(((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            arr_16 [(short)12] [i_5] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) >= (((/* implicit */int) (unsigned short)18)))) ? (((((/* implicit */int) arr_13 [i_0] [i_5])) % (((/* implicit */int) (unsigned short)38)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_13 [i_0] [i_5])) : (((/* implicit */int) (_Bool)0))))));
                            arr_17 [i_2] &= ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_1] [i_2])) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) arr_13 [i_0] [i_2])));
                            arr_18 [i_5] = ((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_5] [i_5] [i_6]);
                            arr_19 [i_6] [i_5] [i_2] [i_2] [i_5] [i_0] = ((/* implicit */unsigned int) (~(var_9)));
                        }
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((short) ((int) var_8))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        arr_22 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_7] [(signed char)3] [i_7]))))) ? ((((_Bool)1) ? (var_3) : (arr_5 [i_7]))) : (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) arr_2 [(unsigned short)1] [i_7] [i_7])) : (var_9))))))) ? ((+((~(((/* implicit */int) arr_1 [i_7])))))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_11 [i_7] [i_7] [i_7] [i_7] [(short)5] [(signed char)0])) * (((/* implicit */int) var_2))))))));
        var_22 = ((/* implicit */long long int) (!((!(((arr_21 [i_7] [i_7]) && (((/* implicit */_Bool) (unsigned short)23674))))))));
    }
    var_23 = ((/* implicit */signed char) (~(((((/* implicit */int) min((var_11), (var_13)))) | ((~(((/* implicit */int) var_14))))))));
}

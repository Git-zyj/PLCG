/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112545
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) | (var_7)))) <= (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) % (var_2)))))), ((-(((/* implicit */int) var_3))))));
                            arr_10 [i_0] [17U] [(_Bool)1] [(unsigned short)4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_15) % (arr_2 [i_0]))))));
                            arr_11 [i_0] [i_2] [i_2] [7] [i_1] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)121))));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) -2111840742))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) ((long long int) ((int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_4 = 2; i_4 < 20; i_4 += 1) 
    {
        arr_14 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((4294967294U), (((/* implicit */unsigned int) (_Bool)0))))) ? (((unsigned long long int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_13 [i_4 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4 + 2])))));
        arr_15 [i_4] = ((/* implicit */signed char) var_10);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_19 = arr_13 [i_5];
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) min((var_20), (var_14)));
                            var_21 = ((/* implicit */long long int) ((_Bool) -2111840742));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) arr_18 [15] [i_6]);
                var_23 = ((/* implicit */long long int) ((((unsigned long long int) arr_23 [i_5] [i_6] [i_6] [16U] [i_7])) < (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned int) var_1)), (arr_20 [i_5])))))));
            }
            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3571453525213816007LL))));
        }
        var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
        arr_29 [(_Bool)1] [i_5] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) arr_21 [i_5] [10LL] [i_5] [(signed char)14])) >= (((/* implicit */int) var_0))))), ((~(((/* implicit */int) (unsigned char)48))))));
    }
    var_26 = ((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) var_7))));
}

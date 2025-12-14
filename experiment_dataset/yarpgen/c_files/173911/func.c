/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173911
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
    var_14 = ((/* implicit */int) var_7);
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) 2002384599)), (var_12))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80))) : (var_12)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_12))) : (((/* implicit */unsigned int) ((int) 2635366424U)))))));
    var_16 = ((/* implicit */unsigned short) 13248633557999497870ULL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_1] [i_2] [i_1 - 1] [i_0] = ((/* implicit */short) 66846720);
                                var_17 = ((/* implicit */unsigned int) ((((arr_11 [i_4] [i_3] [(_Bool)1] [i_1 + 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_2]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_2 [7U] [7U]))))))));
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [i_0])) ? (arr_10 [i_1 - 1] [(_Bool)1] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1698875963U)))))))))));
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_1] [16ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -66846711)) ? (((/* implicit */int) (unsigned short)49110)) : (((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_2]))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 4) 
        {
            arr_20 [i_0] [i_0] |= ((/* implicit */unsigned short) arr_10 [i_0] [(unsigned short)2] [10U]);
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_5 [i_5] [17]))));
        }
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            arr_25 [i_0] [i_0] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_11)));
            arr_26 [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [7U] [i_6] [i_0])) != (((/* implicit */int) arr_13 [i_0] [i_6] [i_6] [i_0] [i_6] [i_6]))));
        }
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            var_20 = ((/* implicit */signed char) (+(((/* implicit */int) arr_24 [i_0]))));
            var_21 += ((/* implicit */unsigned long long int) (~(arr_0 [i_7] [i_7])));
            var_22 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)16432)) * (((/* implicit */int) (unsigned short)7254))));
        }
    }
    var_23 += ((/* implicit */unsigned short) var_0);
}

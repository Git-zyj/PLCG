/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118105
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */short) min((min((max((((/* implicit */unsigned int) arr_3 [i_0 - 1] [i_1])), (var_3))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))))), (var_2)));
                    arr_10 [i_2] [i_1] &= ((/* implicit */signed char) ((((arr_6 [i_0 - 1] [i_1] [i_2] [i_0 - 1]) >= (((((/* implicit */_Bool) (unsigned short)26832)) ? (var_4) : (arr_6 [i_0 - 1] [i_1] [i_0 - 1] [(unsigned short)8]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned char)174)))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_6 [i_2] [i_0 - 1] [i_2] [i_0 - 1])))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned long long int) var_2)), (12766556723212455418ULL))));
    var_14 = 2116041764;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_3] [i_5] [i_4] [7LL] [i_7]))) < (var_1))))));
                                arr_30 [i_5] [7LL] [i_7] = ((/* implicit */unsigned short) arr_14 [i_3]);
                                var_16 = ((/* implicit */int) ((((/* implicit */int) arr_17 [i_6] [i_4] [i_3])) < ((-(((/* implicit */int) var_7))))));
                                arr_31 [i_5] [i_4] [4LL] [i_6] [(unsigned char)11] [i_5] [i_7] = max((var_9), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)256), (((/* implicit */unsigned short) var_10)))))) <= (((unsigned long long int) arr_26 [13U] [13U] [13U] [(signed char)14] [13U]))))));
                            }
                        } 
                    } 
                    arr_32 [(unsigned short)2] [i_3] [i_5] [i_5] = ((/* implicit */unsigned char) (unsigned short)38703);
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 2; i_8 < 14; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 3; i_9 < 13; i_9 += 4) 
                        {
                            {
                                var_17 ^= ((/* implicit */int) var_3);
                                arr_38 [i_5] [i_5] = ((/* implicit */long long int) var_7);
                                arr_39 [i_3] [i_4] [i_5] [i_8] [i_4] [i_8] [i_9 - 1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((7583290060305205502ULL) & (((/* implicit */unsigned long long int) var_6))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (min((arr_19 [i_5] [i_5]), (((/* implicit */int) arr_12 [i_9]))))))));
                                var_18 ^= ((/* implicit */short) var_12);
                                var_19 = ((/* implicit */int) ((long long int) var_0));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) var_7);
}

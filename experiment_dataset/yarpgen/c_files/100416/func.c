/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100416
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) arr_5 [i_1] [i_1]);
                                arr_15 [i_2] [i_2] [(_Bool)1] [i_2] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0 - 1]))));
                                arr_16 [i_0] |= ((/* implicit */_Bool) (+(((/* implicit */int) max(((_Bool)1), (arr_9 [i_0] [i_0] [i_4] [(_Bool)1] [i_0 - 1]))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [(signed char)1] [(signed char)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) : (((/* implicit */int) (_Bool)1))))));
                arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (arr_14 [i_0])));
                var_18 += (!(var_14));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) ^ (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) (+(((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))) >> (((/* implicit */int) ((arr_32 [i_7]) && (((/* implicit */_Bool) arr_0 [i_5])))))))));
                                var_21 += ((/* implicit */unsigned char) (+(arr_4 [i_5] [i_5])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_10 = 3; i_10 < 19; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        {
                            var_22 ^= arr_33 [i_5] [i_5] [i_5] [i_5];
                            var_23 = ((/* implicit */short) min((arr_9 [i_5] [i_6] [i_6] [i_10 + 2] [i_6]), (arr_26 [i_5] [i_6] [i_10 - 1])));
                        }
                    } 
                } 
            }
        } 
    } 
}

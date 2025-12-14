/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11570
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_10 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_3]))));
                            var_11 ^= arr_9 [4U] [9U] [17U] [15ULL] [(_Bool)1] [10ULL];
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_12 ^= ((/* implicit */_Bool) ((((unsigned long long int) ((short) arr_12 [(unsigned char)11]))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) : (min((arr_10 [2ULL] [(signed char)11]), (((/* implicit */unsigned long long int) arr_12 [16U]))))))));
                                var_13 = ((/* implicit */unsigned int) arr_7 [0ULL] [i_0] [(short)19]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) arr_3 [(unsigned short)12]);
                            arr_25 [(unsigned short)3] [(unsigned short)12] [i_0] [19U] [18ULL] = ((/* implicit */short) ((((/* implicit */int) (signed char)-55)) + (((/* implicit */int) (_Bool)1))));
                            var_15 = ((/* implicit */signed char) ((unsigned int) ((unsigned long long int) ((unsigned char) var_2))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 -= ((/* implicit */short) 1605778605U);
}

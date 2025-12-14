/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110457
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_10 &= ((long long int) min((max((var_9), (((/* implicit */long long int) arr_5 [i_2] [(unsigned short)8] [i_4])))), (((/* implicit */long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_11 [5LL] [i_1] [5LL] [(short)23] [9LL] [5LL])))))));
                                var_11 = ((/* implicit */unsigned char) 2684626149U);
                                arr_13 [i_3] [i_2] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 464846002807674796LL))))))));
                            }
                        } 
                    } 
                    arr_14 [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((min((((464846002807674796LL) << (((464846002807674796LL) - (464846002807674792LL))))), (((/* implicit */long long int) ((_Bool) var_1))))), (((/* implicit */long long int) (+(arr_9 [(unsigned char)14] [i_2] [i_1] [i_1] [(unsigned char)14]))))));
                    arr_15 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) -464846002807674797LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 464846002807674785LL)) ? (var_9) : (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2])))))))) * (((/* implicit */int) ((-464846002807674809LL) == (((6302915888494998905LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))))))))));
                }
                var_12 -= ((/* implicit */unsigned char) ((long long int) arr_2 [i_0]));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    for (long long int i_6 = 1; i_6 < 22; i_6 += 4) 
                    {
                        {
                            var_13 -= ((/* implicit */short) ((((-9223372036854775804LL) + (9223372036854775807LL))) << ((((((~((+(9223372036854775803LL))))) - (-9223372036854775772LL))) + (36LL)))));
                            var_14 = ((unsigned short) ((long long int) (!(((/* implicit */_Bool) (signed char)6)))));
                            var_15 ^= min(((+(((long long int) var_2)))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) -6302915888494998918LL)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [(short)18])) : (((/* implicit */int) (unsigned short)24)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 |= ((/* implicit */unsigned int) ((long long int) (~(((var_4) & (var_4))))));
    var_17 = ((/* implicit */unsigned int) 464846002807674781LL);
    var_18 = 151538252412619372ULL;
}

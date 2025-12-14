/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161179
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_20 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((2305843009213693952LL), (min((((/* implicit */long long int) (unsigned short)30222)), (-2305843009213693952LL)))))), (max((5361204944209053889ULL), (((/* implicit */unsigned long long int) (signed char)-52))))));
        arr_2 [i_0] [i_0] |= ((/* implicit */signed char) min((min((11855952857779896778ULL), (((/* implicit */unsigned long long int) -2305843009213693952LL)))), (((/* implicit */unsigned long long int) max((max(((unsigned short)8191), ((unsigned short)32))), (((/* implicit */unsigned short) (_Bool)1)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)4032);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 4) 
                {
                    {
                        arr_13 [i_1] [i_2] [(signed char)2] [i_1] [i_1] &= ((/* implicit */unsigned short) 6590791215929654814ULL);
                        arr_14 [i_2] = ((/* implicit */unsigned int) (unsigned short)28672);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            arr_17 [i_5] = ((/* implicit */int) 5877502637108684398ULL);
            var_21 += ((/* implicit */_Bool) (unsigned short)27984);
            arr_18 [i_1] [i_1] [i_5] = ((/* implicit */_Bool) 11855952857779896778ULL);
        }
    }
    var_22 = ((/* implicit */int) 2856856638U);
}

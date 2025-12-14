/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145344
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) var_9);
        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))));
        var_14 ^= ((/* implicit */long long int) arr_0 [12]);
        var_15 ^= ((/* implicit */unsigned char) var_6);
    }
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) /* same iter space */
    {
        arr_4 [i_1] [i_1] = ((/* implicit */int) var_0);
        arr_5 [i_1] = ((/* implicit */long long int) (+(max((((/* implicit */unsigned int) var_6)), (var_3)))));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_9))));
            arr_8 [i_2] = ((/* implicit */unsigned short) var_11);
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 18; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) min((((/* implicit */int) var_11)), (arr_14 [i_1] [i_2] [i_2] [(short)15])));
                        arr_15 [i_1] [i_1] [i_2] [i_1 - 1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)39389)))))));
                    }
                } 
            } 
            var_18 *= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_12 [i_2] [9] [(signed char)1])))))))));
            var_19 &= ((/* implicit */int) arr_11 [(unsigned char)6] [(unsigned short)15] [i_2] [(unsigned short)15] [i_2] [i_1]);
        }
        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
        {
            arr_18 [i_5] [(short)4] = ((/* implicit */unsigned short) (+(4611686018427387904ULL)));
            /* LoopSeq 1 */
            for (int i_6 = 4; i_6 < 17; i_6 += 1) 
            {
                var_20 = ((/* implicit */long long int) var_10);
                arr_21 [i_1] [i_5] [i_1] = ((/* implicit */unsigned long long int) (~(var_1)));
            }
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                for (int i_8 = 2; i_8 < 19; i_8 += 1) 
                {
                    for (long long int i_9 = 2; i_9 < 18; i_9 += 4) 
                    {
                        {
                            arr_32 [i_1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_5] = ((/* implicit */unsigned char) min((var_2), (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min(((~(min((4609434218613702656LL), (-4609434218613702666LL))))), (((/* implicit */long long int) min(((unsigned short)0), (((/* implicit */unsigned short) (signed char)39))))))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_22 = ((/* implicit */short) var_7);
}

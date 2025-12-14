/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102369
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
    var_15 = ((/* implicit */int) ((((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)3323)))), (var_6)))) <= (var_7)));
    var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (((((/* implicit */unsigned long long int) var_6)) * (min((((/* implicit */unsigned long long int) var_10)), (var_13)))))));
    var_17 *= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_14)) <= (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) -2147483643)) : (var_13))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_9)), (min((var_1), (((/* implicit */unsigned short) var_8))))))), (((unsigned long long int) 3085155777U))));
        var_19 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned int) -1134739065)) == (arr_0 [i_0] [i_0]))))))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-1134739065) | (((/* implicit */int) (signed char)41))))) ? (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((arr_1 [i_0 + 3]) > (var_3)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            var_20 ^= ((/* implicit */long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) (unsigned short)47547))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */int) (signed char)-19)) ^ (((/* implicit */int) (unsigned char)92)))))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((int) arr_5 [i_0 + 2] [i_1 - 1] [i_2] [4]))) == (((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_0))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_9))) || (((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_1 + 1])))))));
            var_24 = ((/* implicit */unsigned int) -1134739068);
        }
    }
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_5 = 1; i_5 < 24; i_5 += 4) 
        {
            var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_5 - 1] [i_5 - 1] [i_4]))));
            var_26 *= ((/* implicit */unsigned char) (~(var_3)));
        }
        var_27 = ((/* implicit */unsigned int) 35184371040256LL);
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            {
                arr_21 [i_6] [1ULL] [(signed char)4] = ((/* implicit */_Bool) min(((short)32767), (((/* implicit */short) (signed char)108))));
                arr_22 [i_6] [i_6] [i_6] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (signed char)19)), (799484271836803466ULL)));
                arr_23 [i_7] = ((/* implicit */short) ((((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) ? (((((((/* implicit */int) arr_7 [i_6] [i_7])) + (2147483647))) << (((((((/* implicit */int) arr_7 [i_6] [i_7])) + (127))) - (20))))) : (((((/* implicit */_Bool) arr_7 [i_6] [i_6])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_6] [i_7]))))));
                arr_24 [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)53)) | (((/* implicit */int) arr_20 [i_6]))))) ? (((/* implicit */long long int) ((unsigned int) arr_20 [i_6]))) : (((long long int) 35184371040269LL))));
                /* LoopNest 3 */
                for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            {
                                var_28 += ((((-35184371040250LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6] [i_7] [i_8]))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_9] [10] [i_8])) && (((/* implicit */_Bool) var_1))))), (((unsigned int) (unsigned short)37533)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_6] [i_7] [i_8] [i_9] [i_10])))))));
                                var_29 = arr_16 [(_Bool)1];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

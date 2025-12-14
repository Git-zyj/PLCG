/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136059
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
    var_10 = ((/* implicit */unsigned char) (-((~(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (-(((/* implicit */int) ((signed char) ((7936) >> (((arr_2 [i_1] [i_1]) - (311398706U))))))))))));
                            arr_13 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [(unsigned char)5] = ((/* implicit */_Bool) max((((/* implicit */int) var_5)), (((((/* implicit */int) (unsigned char)125)) % ((-(((/* implicit */int) var_7))))))));
                            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) 18446744073709551614ULL))));
                        }
                    } 
                } 
                arr_14 [i_1] [(signed char)7] = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) arr_9 [i_0 - 1])))));
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) max(((unsigned char)130), (((/* implicit */unsigned char) (_Bool)0))))), (((unsigned short) var_0))));
                /* LoopSeq 3 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    var_13 = ((/* implicit */signed char) min((var_13), ((signed char)-5)));
                    arr_18 [(unsigned char)5] [i_0] [i_1] [(unsigned char)5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < ((-(((unsigned long long int) arr_1 [i_1]))))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)125))) : (arr_10 [i_0 - 3] [i_0 - 2])));
                    arr_22 [i_5] [i_1] [i_0 - 2] = ((/* implicit */int) (+(((((/* implicit */_Bool) var_8)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5] [i_1] [i_0] [i_0 - 3])))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_6 [i_1] [i_1] [2U]))))))) ? (min((arr_7 [i_0 - 3]), (arr_7 [i_0 - 2]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)11)) || ((_Bool)1)))))))));
                    var_16 = ((/* implicit */_Bool) (-(max((((/* implicit */int) arr_17 [i_0 - 1] [i_1] [(signed char)9] [i_6])), (((((/* implicit */int) arr_17 [i_0] [i_1] [i_6] [i_6])) << (((/* implicit */int) (_Bool)1))))))));
                }
                var_17 = ((/* implicit */signed char) (((~((-(arr_12 [10ULL] [i_1] [i_1] [10ULL]))))) ^ (((/* implicit */long long int) max((arr_19 [(_Bool)1] [i_0 - 1] [i_0 - 2] [i_0 - 2]), (((/* implicit */unsigned int) (unsigned char)130)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (((((-(var_3))) < (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ? (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) var_8)))) >> (((/* implicit */int) var_0)))) : (((/* implicit */int) var_0))));
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max((((unsigned char) (~(var_3)))), (((/* implicit */unsigned char) (signed char)-122)))))));
    /* LoopNest 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                {
                    arr_32 [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_1) != (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)127), ((unsigned char)255)))))))) >> ((((-((~(((/* implicit */int) (signed char)-122)))))) + (142)))));
                    var_20 -= (-((~(arr_29 [i_9] [i_8] [i_7]))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) arr_28 [i_7]);
                                var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_7] [i_7] [i_7] [(_Bool)1]))) + ((~(5276540298826927859ULL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

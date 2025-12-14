/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185484
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
    var_15 = ((/* implicit */short) ((((/* implicit */int) var_10)) >= (((((/* implicit */int) ((((/* implicit */_Bool) var_14)) || ((_Bool)0)))) * (((/* implicit */int) ((var_0) < (-2147483627))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (long long int i_3 = 3; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_8 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] = ((/* implicit */short) ((var_11) * (((/* implicit */unsigned long long int) arr_7 [i_3 - 2] [i_3 - 2] [3LL]))));
                        var_16 = ((/* implicit */short) ((((/* implicit */int) (short)7680)) >> (((((/* implicit */int) var_4)) - (25230)))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */long long int) (~(var_5)));
                            var_18 = ((/* implicit */unsigned short) ((((var_2) << (((2147483647) - (2147483647))))) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 + 2] [i_0 + 2] [i_4 - 1] [i_3 - 1] [i_0])))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_3] [i_3] [i_3 + 2] [(signed char)8])) - (((/* implicit */int) (_Bool)1))));
                            arr_12 [i_4 + 1] [i_1] [i_0] [i_3] [i_3 + 1] = (+(((/* implicit */int) var_10)));
                        }
                        for (int i_5 = 3; i_5 < 11; i_5 += 1) /* same iter space */
                        {
                            arr_16 [7U] [7U] [i_1] [7U] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((1473976958751060860ULL) <= (16426723523468719049ULL)));
                            var_20 = ((/* implicit */short) ((1332360192) <= (1228200638)));
                            arr_17 [i_0] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((arr_7 [i_5 + 1] [i_3 + 1] [i_0 + 1]) >> (((16307058337702822144ULL) - (16307058337702822108ULL)))));
                            var_21 = ((/* implicit */long long int) ((2020020550240832566ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_15 [i_0] [i_0] [i_2] [i_1] [3ULL] [i_2]) != (2716208077U)))))));
                        }
                        for (int i_6 = 3; i_6 < 11; i_6 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */int) ((3486850961526980892ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0 + 4] [i_3 + 1])))));
                            var_23 ^= ((/* implicit */short) (+(((/* implicit */int) (_Bool)0))));
                            var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_0] [i_6] [i_6 - 3] [i_6] [i_0]))));
                            arr_20 [i_0] [i_1] [i_2] [i_2] [i_0] = ((var_5) > (((/* implicit */int) (signed char)64)));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((var_5) + (2147483647))) << (((8444249301319680LL) - (8444249301319680LL)))));
                            var_26 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_6 [i_0] [(signed char)8] [i_0 + 1] [i_0 - 1]))));
                            var_27 = ((/* implicit */long long int) ((((-709205843) + (2147483647))) << (((((/* implicit */int) (short)21823)) - (21823)))));
                            var_28 = ((/* implicit */int) ((((882819036) % (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) var_3))));
                        }
                        var_29 = ((/* implicit */signed char) ((var_5) / (2147483647)));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) 2211046686U)) || (((/* implicit */_Bool) (signed char)-76)))))));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
    {
        arr_25 [i_8] = ((((/* implicit */int) arr_23 [i_8] [i_8])) == (((/* implicit */int) var_1)));
        var_31 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_23 [i_8] [i_8])))) >> (((/* implicit */int) (!(var_10))))));
        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_8] [i_8]))) - (-5702153980171312481LL)));
    }
    var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((((/* implicit */int) (!(((/* implicit */_Bool) 16426723523468719036ULL))))) * (((/* implicit */int) ((14959893112182570739ULL) != (((/* implicit */unsigned long long int) 1174399951))))))) == (((((/* implicit */int) var_10)) * (((/* implicit */int) var_1)))))))));
    var_34 = ((/* implicit */int) (((+(((var_11) / (((/* implicit */unsigned long long int) 3079714295U)))))) != (((/* implicit */unsigned long long int) var_7))));
    var_35 += ((/* implicit */signed char) var_14);
}

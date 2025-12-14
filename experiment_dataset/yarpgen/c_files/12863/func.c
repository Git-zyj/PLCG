/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12863
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
    var_17 *= (+(max((11978375470588768070ULL), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)3)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) min((max(((+(var_2))), (((/* implicit */long long int) min((arr_2 [i_0]), (((/* implicit */unsigned int) (unsigned char)33))))))), (((/* implicit */long long int) (~(max((var_6), (((/* implicit */unsigned int) (_Bool)1)))))))));
                    arr_9 [i_0] [i_2] [i_2] [i_2] &= ((/* implicit */short) min((max((max((((/* implicit */unsigned long long int) arr_6 [i_1] [i_2])), (var_0))), ((-(arr_7 [i_1]))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_2] [i_1]))))), ((+(1264539730U))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] = ((/* implicit */_Bool) (-((~(var_0)))));
                        var_18 &= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 6468368603120783545ULL)))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_4] [i_2] &= ((/* implicit */_Bool) (~((-(((/* implicit */int) var_9))))));
                        arr_16 [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_10 [i_0] [i_1] [i_2] [i_2] [i_4]))))));
                    }
                    arr_17 [i_0] = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 13892164414134302043ULL))))), ((+(arr_7 [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        var_19 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-16953))))));
        var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128)))))));
    }
    for (unsigned int i_6 = 1; i_6 < 23; i_6 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            for (signed char i_8 = 3; i_8 < 23; i_8 += 1) 
            {
                for (signed char i_9 = 3; i_9 < 21; i_9 += 4) 
                {
                    {
                        arr_32 [i_6 + 1] [i_7] [i_6] [i_9] = ((/* implicit */signed char) max((max(((~(6468368603120783550ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_25 [i_6] [i_8])), (arr_29 [i_9 - 1])))))), ((+(max((6468368603120783546ULL), (((/* implicit */unsigned long long int) arr_27 [i_6] [i_7] [i_8 - 1] [i_9]))))))));
                        arr_33 [i_6] [i_7] [i_8 - 3] [i_6] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_11)), (arr_23 [i_7])))), (min((((/* implicit */unsigned long long int) -8061460303324058628LL)), (var_0))))), (max((max((((/* implicit */unsigned long long int) var_14)), (14278965274881692861ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2669923182U)), (8061460303324058635LL))))))));
                        var_21 = max((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_12)))), ((~(((/* implicit */int) (unsigned char)64))))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_25 [i_6] [i_7])), (8643889913994637755LL)))), (max((arr_26 [i_8] [i_7] [i_6 + 2]), (((/* implicit */unsigned long long int) -6545208126483757562LL)))))));
                        arr_34 [i_6] [i_7] [i_6] [i_8 - 2] [i_9] = min((max(((~(((/* implicit */int) arr_24 [i_9 - 1])))), (((/* implicit */int) min((var_9), (var_7)))))), ((+((+(((/* implicit */int) arr_21 [i_6])))))));
                    }
                } 
            } 
        } 
        arr_35 [i_6] = ((/* implicit */int) max((min((max((6468368603120783545ULL), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_24 [i_6 + 1])), (arr_22 [i_6])))))), (max((max((((/* implicit */unsigned long long int) arr_29 [i_6 + 2])), (11978375470588768070ULL))), (((/* implicit */unsigned long long int) (-(arr_30 [i_6]))))))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        arr_39 [i_10] = ((/* implicit */unsigned char) max((min(((-(((/* implicit */int) var_3)))), (((/* implicit */int) max((arr_25 [i_10] [i_10]), (((/* implicit */unsigned short) (short)-2949))))))), ((-(((/* implicit */int) (short)32767))))));
        var_22 = max((((/* implicit */unsigned long long int) (-((~(var_8)))))), ((+(max((arr_20 [i_10]), (arr_20 [i_10]))))));
        var_23 = ((/* implicit */int) max((var_23), ((+((+(((/* implicit */int) max((var_16), (((/* implicit */short) arr_28 [i_10] [i_10] [i_10])))))))))));
        arr_40 [10LL] &= ((/* implicit */short) min(((signed char)-112), (((/* implicit */signed char) (_Bool)1))));
    }
}

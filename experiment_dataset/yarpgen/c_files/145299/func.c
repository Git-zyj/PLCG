/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145299
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_1 [i_0])) - (42272)))))) ? (((/* implicit */int) ((signed char) (signed char)-6))) : (((/* implicit */int) ((_Bool) arr_1 [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) >> (((((((/* implicit */int) arr_1 [i_0])) - (42272))) + (2096)))))) ? (((/* implicit */int) ((signed char) (signed char)-6))) : (((/* implicit */int) ((_Bool) arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */signed char) (~(((15617343187007562756ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6)))))));
        arr_4 [i_0] = ((/* implicit */signed char) (~(((unsigned long long int) var_9))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    {
                        arr_15 [(signed char)18] [i_2] [i_2] [(signed char)18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10087)) ? (7136149341149088236ULL) : (11310594732560463365ULL)))) ? (((((/* implicit */_Bool) ((11310594732560463365ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [10U] [i_4])))))) ? (((/* implicit */int) ((unsigned char) arr_5 [(_Bool)1] [(_Bool)1]))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [(signed char)20] [(short)0] [0U])) : (((/* implicit */int) (unsigned short)60633)))))) : (((((/* implicit */_Bool) min((((/* implicit */short) var_8)), (var_0)))) ? (((/* implicit */int) arr_11 [i_4] [(short)17] [(short)17])) : (((/* implicit */int) var_7))))));
                        arr_16 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_9 [i_1] [i_1]), (var_0)))) ? (((((/* implicit */_Bool) (short)-17989)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (short)8064)))) : (min((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)106)))), (((((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_3] [i_4] [i_1])) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) arr_9 [i_1] [i_1]))))))));
                        arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */int) arr_10 [i_4] [i_4] [i_1]);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    {
                        arr_25 [i_1] = ((/* implicit */short) (((+(((/* implicit */int) var_6)))) > ((~(((/* implicit */int) arr_18 [i_6] [i_1] [i_5 - 1]))))));
                        arr_26 [i_1] [i_5 - 1] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) ((signed char) arr_10 [i_6] [(_Bool)1] [i_6]))), ((~(((/* implicit */int) (unsigned char)167))))))));
                        arr_27 [i_7] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!((_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [17U] [i_5 - 1] [i_6]))) : (var_1)));
                        arr_28 [i_1] [(signed char)7] [(signed char)7] [(signed char)7] [(signed char)7] = ((/* implicit */int) var_7);
                    }
                } 
            } 
        } 
    }
    var_11 = ((/* implicit */_Bool) var_2);
    var_12 = ((unsigned long long int) max((var_4), (((/* implicit */signed char) var_6))));
}

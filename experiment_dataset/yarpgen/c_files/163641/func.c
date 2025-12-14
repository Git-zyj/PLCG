/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163641
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_10 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((unsigned long long int) (signed char)102)) : (8082219123885348741ULL)));
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        var_11 = arr_0 [i_0];
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)14)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_14 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) arr_3 [(signed char)22] [(signed char)8]))))))))));
        var_15 = (signed char)110;
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 24; i_2 += 4) 
        {
            var_16 += min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-98))) * (35167192219648ULL))), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (signed char)90)) ? (arr_4 [14ULL]) : (arr_6 [i_2 - 1] [i_1]))))));
            var_17 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)122))));
        }
    }
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            {
                var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_7)) ? (var_1) : (var_8)))))) && (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) var_9))))) < ((-(var_6)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        {
                            var_19 *= ((/* implicit */signed char) arr_9 [i_3] [i_3]);
                            var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [15ULL] [i_4])) ? (8082219123885348741ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 12409401765784189860ULL))))));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-9))))), (arr_12 [i_5] [(signed char)10]))), (((/* implicit */unsigned long long int) var_9)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

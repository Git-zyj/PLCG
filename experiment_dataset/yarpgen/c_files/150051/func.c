/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150051
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((var_0) >> (((((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)11] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)114))))));
                var_16 = arr_2 [i_0];
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) ((arr_1 [i_3] [i_3]) << (((((/* implicit */int) var_11)) + (22920)))))))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114))) : (10983645437255347776ULL)));
                        }
                    } 
                } 
                arr_12 [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_14)) % (((/* implicit */int) var_14)))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? (((((var_7) ? (10502279014508606096ULL) : (arr_9 [i_0] [i_0]))) ^ (max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_1] [i_1])), (10983645437255347767ULL))))) : (((/* implicit */unsigned long long int) (~((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-89))) : (var_5))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((_Bool) min((7463098636454203835ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-106)) && (((/* implicit */_Bool) 1338105855456712734ULL))))))));
    var_19 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) (signed char)-116)))));
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) var_14);
                var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) != (7463098636454203843ULL))))) < (((unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_4])))))));
                var_22 = ((/* implicit */signed char) var_3);
            }
        } 
    } 
}

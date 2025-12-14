/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149744
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((long long int) ((((/* implicit */int) var_10)) << (((((((/* implicit */long long int) var_6)) | (var_2))) - (3236677179218067421LL)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((arr_0 [i_0] [i_0]) + (arr_0 [i_0] [i_0]))) + (((var_9) << (((((/* implicit */int) var_10)) - (3494))))))))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), (13U)))) % (((((/* implicit */_Bool) 8651604189366075303LL)) ? (-8076422502925429706LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-7)))))))) ? (var_0) : (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        var_15 = ((/* implicit */unsigned int) (+(((max((((/* implicit */unsigned long long int) arr_2 [i_0])), (70368609959936ULL))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)448))) - (3446798073082321777ULL)))))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_16 = ((/* implicit */long long int) (unsigned char)139);
        var_17 = ((/* implicit */unsigned int) min(((unsigned short)448), ((unsigned short)65106)));
    }
    for (int i_2 = 1; i_2 < 23; i_2 += 3) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2] [18])) || (((arr_6 [i_2] [i_2 + 1]) != (arr_6 [i_2] [i_2 + 1])))));
        var_19 = (i_2 % 2 == 0) ? (((((((/* implicit */_Bool) ((4104082782U) << (((arr_6 [i_2] [i_2]) - (17298959106502399828ULL)))))) ? (arr_6 [i_2] [i_2]) : (arr_6 [i_2] [i_2 - 1]))) + (((min((4592854292618627002ULL), (arr_5 [i_2 - 1]))) / (arr_6 [i_2] [i_2]))))) : (((((((/* implicit */_Bool) ((4104082782U) << (((((arr_6 [i_2] [i_2]) - (17298959106502399828ULL))) - (9213071100996730903ULL)))))) ? (arr_6 [i_2] [i_2]) : (arr_6 [i_2] [i_2 - 1]))) + (((min((4592854292618627002ULL), (arr_5 [i_2 - 1]))) / (arr_6 [i_2] [i_2])))));
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_5 [(_Bool)1]))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                for (unsigned int i_5 = 2; i_5 < 23; i_5 += 2) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) (unsigned short)65113);
                        arr_13 [i_2] [i_2] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) - (var_5)))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)126)) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [(unsigned char)9] [i_3] [(unsigned char)9] [i_3] [i_3] [i_3])) || (((/* implicit */_Bool) -2973892519403612394LL))))))))));
                    }
                } 
            } 
        }
        for (long long int i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)430)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1]))))) >> (((arr_8 [i_2] [i_2]) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2])))))));
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((unsigned char) min((arr_9 [i_2] [i_2 + 1] [i_2 - 1] [i_2]), (((/* implicit */unsigned long long int) var_8))))))));
        }
        var_24 = ((unsigned int) ((((/* implicit */_Bool) 1966708025101762553ULL)) ? (((/* implicit */int) (unsigned short)65130)) : (((/* implicit */int) (unsigned short)65106))));
    }
    var_25 = ((/* implicit */unsigned long long int) var_8);
}

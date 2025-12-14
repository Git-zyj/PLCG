/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100809
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
    var_16 = ((/* implicit */_Bool) var_13);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (8796093022207ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105)))))) ? ((~(((/* implicit */int) (signed char)118)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (0ULL))))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (9980185812189714192ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)417)))))) ? (((/* implicit */unsigned int) 67108864)) : (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))) : (594171658U)))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4143248987221271200ULL)) ? (594171666U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((9980185812189714192ULL) * (8466558261519837424ULL)))));
        var_20 = ((((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4687))) : (9980185812189714192ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-8071), ((short)-14742))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
    {
        for (unsigned int i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            {
                arr_10 [i_2] [(signed char)19] [i_3] = ((((/* implicit */_Bool) max((3751466407U), (((/* implicit */unsigned int) (short)-14742))))) ? (((3700795637U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-8071))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)0))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (signed char)64))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 594171666U)) ? (((/* implicit */int) (short)8071)) : (((/* implicit */int) (short)31715))))) : (3700795630U)))) * (((((/* implicit */_Bool) 3871619412U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26414))) : (0ULL))))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) * (0ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 637856130U)) ? (-972387337) : ((+(((/* implicit */int) (short)-20361))))))) : ((+(((4761684806446938679ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)38)))))))));
            }
        } 
    } 
}

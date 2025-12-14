/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145141
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) (+(var_5)));
                var_14 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (arr_5 [i_0] [i_0] [i_1]) : (var_3)))));
            }
        } 
    } 
    var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)55560)) : (((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */_Bool) var_8)) ? ((~(var_12))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))))));
    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
    /* LoopSeq 3 */
    for (unsigned char i_2 = 3; i_2 < 11; i_2 += 1) 
    {
        var_17 = (~(((/* implicit */int) ((_Bool) arr_1 [i_2 + 2]))));
        arr_9 [i_2 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */long long int) (+(min((((/* implicit */int) (_Bool)1)), (-17)))))) : (((long long int) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    arr_17 [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (((((/* implicit */_Bool) arr_10 [i_4] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55560))) : (arr_10 [i_2 - 3] [i_3])))));
                    var_18 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) min((((/* implicit */short) arr_12 [i_3])), (arr_2 [i_3]))))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)55560)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65530)) ? (14531633622719627435ULL) : (3915110450989924160ULL)))) ? (((((/* implicit */int) (unsigned short)9975)) & (((/* implicit */int) (unsigned short)51645)))) : (((/* implicit */int) min(((unsigned short)55560), ((unsigned short)0)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 17; i_5 += 1) 
    {
        var_20 += ((/* implicit */unsigned short) (-((~(0LL)))));
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14301478502357027348ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9962)))))) : ((+(14531633622719627455ULL)))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_25 [i_6] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)0))));
        var_21 += ((/* implicit */long long int) arr_23 [i_6]);
    }
    var_22 += ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned int) max((var_11), ((unsigned short)11363)))), (((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3760))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (var_2) : (((/* implicit */unsigned long long int) var_7)))))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186366
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) ((var_9) ? (5692819849535440331ULL) : (13845212101041161723ULL)))) ? (((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (3079264999U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)15))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0 - 2]))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) > ((((_Bool)1) ? (-4277084392824758024LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (long long int i_3 = 3; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) 3579959279U);
                        var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) var_10)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65500)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((unsigned short) 13845212101041161729ULL)))));
            var_22 = (unsigned short)4095;
            arr_14 [i_0] [i_4] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        }
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */long long int) ((unsigned int) -9223372036854775800LL))) / ((-(var_11))))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)114)))))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            {
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_1))));
                var_25 = ((/* implicit */long long int) arr_6 [i_5]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        for (signed char i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            for (unsigned short i_9 = 1; i_9 < 18; i_9 += 2) 
            {
                {
                    arr_30 [i_8] [18ULL] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_28 [i_7] [i_8] [i_9])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10256))) : (var_4)))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_14)))) ? ((+(15727778645308597184ULL))) : (10708438628095898474ULL)))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) (_Bool)1);
                                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (((((_Bool)1) && (((/* implicit */_Bool) 4206125270U)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))) : ((~(((/* implicit */int) (_Bool)1))))))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

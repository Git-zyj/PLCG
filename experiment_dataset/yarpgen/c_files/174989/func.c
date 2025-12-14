/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174989
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
    var_16 = ((/* implicit */short) var_6);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (-740813327)));
                    var_17 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) 740813326))) % (-740813317)));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) max((((((/* implicit */int) ((((/* implicit */unsigned long long int) 740813326)) == (386706408058591813ULL)))) >= (((/* implicit */int) var_2)))), (((_Bool) arr_1 [i_0] [i_0]))));
    }
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) var_3)), (arr_10 [i_3] [i_4]))) >> (((((((/* implicit */_Bool) (unsigned short)224)) ? (14087593903397182425ULL) : (((/* implicit */unsigned long long int) -740813317)))) - (14087593903397182384ULL)))));
                var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) 3756748061U)) ? (var_5) : (((/* implicit */unsigned long long int) var_13))))));
                var_21 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65311)) ? (((/* implicit */int) (short)14819)) : (0)))) ? (((/* implicit */int) min((var_14), (((/* implicit */short) arr_9 [i_4] [i_3]))))) : (((int) 766212106U)))));
                arr_12 [i_3] = ((/* implicit */short) ((((((/* implicit */int) arr_11 [i_3])) <= (((/* implicit */int) arr_9 [i_3] [i_4])))) ? (((/* implicit */int) ((_Bool) arr_9 [i_3] [(unsigned short)8]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    for (short i_6 = 1; i_6 < 21; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 3; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(3756748070U)))) ? (arr_21 [(unsigned short)19] [(unsigned char)16] [i_6 + 1] [(signed char)10]) : (((/* implicit */unsigned long long int) min((-740813327), (((/* implicit */int) (unsigned short)54772)))))))) && (((/* implicit */_Bool) (~(min((var_8), (((/* implicit */unsigned long long int) arr_19 [i_3] [i_4] [i_4] [i_5] [i_5] [i_6] [i_7])))))))));
                                var_23 ^= ((/* implicit */unsigned short) arr_15 [i_6] [6] [(unsigned short)20]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) (+(var_13)));
    var_25 = min(((((~(((/* implicit */int) var_11)))) - (((((/* implicit */_Bool) var_13)) ? (-740813326) : (((/* implicit */int) var_15)))))), (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) (unsigned short)25348)) ? (740813317) : (0))) : (((/* implicit */int) (!(((/* implicit */_Bool) 740813324))))))));
}

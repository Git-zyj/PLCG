/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149166
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_20 -= ((/* implicit */short) var_4);
                    var_21 = ((/* implicit */unsigned long long int) min((max(((-(179488999844143861LL))), (((/* implicit */long long int) ((unsigned char) (-9223372036854775807LL - 1LL)))))), (((/* implicit */long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)13)) < (((/* implicit */int) (unsigned char)13))))), ((unsigned char)13))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 4; i_3 < 22; i_3 += 2) 
        {
            /* LoopSeq 3 */
            for (int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) / (179488999844143861LL)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))) | (var_18)))))) && (((/* implicit */_Bool) 562949953420800LL))));
                var_23 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) 4294967295U)) ? (179488999844143860LL) : (-179488999844143862LL))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_16 [i_5] [i_3] [i_5] = ((/* implicit */unsigned int) ((unsigned char) min((var_17), (((int) var_7)))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) ((unsigned short) -562949953420801LL)))) != (((/* implicit */int) ((unsigned char) 4294967295U)))));
                            var_25 &= (!(((/* implicit */_Bool) ((unsigned short) max((2U), (((/* implicit */unsigned int) var_0)))))));
                            arr_21 [i_5] [i_6] [i_5] [i_5] [i_3] [i_5] = ((/* implicit */long long int) 3826485458U);
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((max((((/* implicit */long long int) max((((/* implicit */short) var_5)), ((short)-32765)))), (min((((/* implicit */long long int) 0U)), (-9213093997989268068LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -7865928642992827964LL)))))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */long long int) max((min((min((((/* implicit */unsigned long long int) -8842798048490816920LL)), (9861380177814756724ULL))), (var_16))), (((/* implicit */unsigned long long int) var_17))));
            }
            for (short i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                var_28 += ((/* implicit */unsigned short) ((unsigned int) min(((_Bool)0), (var_5))));
                var_29 -= ((/* implicit */unsigned int) max((((max((-179488999844143862LL), (var_1))) / (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)18921))))))), (((/* implicit */long long int) ((((unsigned int) 4389456576512ULL)) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))));
                var_30 = ((/* implicit */_Bool) min((min(((unsigned char)116), (((/* implicit */unsigned char) (signed char)100)))), (((/* implicit */unsigned char) ((max((179488999844143844LL), (((/* implicit */long long int) (unsigned char)13)))) <= (max((-9213093997989268079LL), (((/* implicit */long long int) var_6)))))))));
                var_31 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)29901)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) (unsigned char)217)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (9861380177814756712ULL))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)26513)) && (((_Bool) var_17))))))));
            }
            arr_24 [14ULL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (-918135274))))) * (min((var_18), (((/* implicit */unsigned long long int) var_17))))))) ? (((((/* implicit */_Bool) min(((unsigned short)18165), (((/* implicit */unsigned short) var_11))))) ? (((long long int) (unsigned short)56863)) : (9213093997989268058LL))) : (562949953420815LL)));
        }
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 18; i_9 += 2) 
    {
        var_32 = ((/* implicit */unsigned short) (_Bool)1);
        arr_27 [i_9] [i_9] = ((/* implicit */long long int) (unsigned short)43020);
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 20; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((((/* implicit */_Bool) (unsigned short)8672)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_8))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_18)))));
                        arr_36 [i_11] = ((/* implicit */unsigned long long int) var_19);
                        var_34 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) | (-8842798048490816938LL)));
                    }
                } 
            } 
        } 
        arr_37 [i_9] = ((/* implicit */short) var_1);
    }
    var_35 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) min((var_9), (var_15)))) * (((/* implicit */int) (!(((/* implicit */_Bool) -277247988024227914LL)))))))), (min((max((-815208058950206063LL), (var_1))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_18)))))))));
}

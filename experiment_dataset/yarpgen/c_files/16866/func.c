/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16866
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 16; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [(short)4] [i_2] = ((/* implicit */signed char) 1066393125);
                            var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5432026930759865380ULL)) ? (5432026930759865382ULL) : (((/* implicit */unsigned long long int) 3840511025U))))) ? (((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_3] [i_2 - 1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_2 + 3]))) : (((((/* implicit */_Bool) (short)31909)) ? (1069587687413668884ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31909))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-31918)) && (((/* implicit */_Bool) 17592186044415LL))))))));
                            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_2] [i_2 - 4] [i_2 - 2] [i_2 + 2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1 - 1] [i_2 - 4])) << (((arr_2 [i_1 - 1]) - (11091606172483846327ULL)))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (min((var_9), (((/* implicit */unsigned int) (unsigned char)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 12168471193430680235ULL))))))));
                            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)7846)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    for (short i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [(unsigned short)15] [i_4] [i_4] [i_5]))) - (((((/* implicit */_Bool) var_8)) ? (((18446744073709551615ULL) + (5432026930759865380ULL))) : (arr_8 [i_0] [i_1 + 1])))));
                            arr_20 [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((arr_9 [i_1 + 1] [i_5 - 1] [i_0] [i_5]), (((/* implicit */unsigned int) (unsigned char)24))))), (((unsigned long long int) (unsigned short)48400))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 1; i_6 < 18; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) var_1);
                            arr_25 [i_7] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((var_4) == (2819800869655811061ULL))))) % (((((/* implicit */_Bool) 5ULL)) ? (1150669704793161728LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((var_9), (((/* implicit */unsigned int) var_7))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (-391746853) : (((/* implicit */int) (short)-8001))))), (((((/* implicit */_Bool) 491520U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25290))) : (5963363807602394530ULL)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 4) 
                {
                    for (int i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        for (unsigned int i_10 = 4; i_10 < 16; i_10 += 2) 
                        {
                            {
                                var_16 = arr_30 [i_10 + 3];
                                arr_33 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-20011))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_0] [i_10])) ? (((/* implicit */long long int) var_1)) : (1150669704793161728LL)))) != (2147467264ULL))))) : (((((/* implicit */_Bool) (-(144115179485921280ULL)))) ? (((/* implicit */long long int) arr_17 [i_0])) : (min((var_3), (((/* implicit */long long int) var_6))))))));
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) 3147700746U)) ? (((/* implicit */int) (short)-656)) : (((/* implicit */int) (unsigned short)57689)))))));
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_6))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 17; i_11 += 3) 
    {
        for (int i_12 = 2; i_12 < 13; i_12 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 17; i_13 += 2) 
                {
                    for (short i_14 = 2; i_14 < 16; i_14 += 3) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 4) 
                        {
                            {
                                arr_46 [11ULL] [11ULL] [11ULL] [i_11] [11ULL] [i_12] [11ULL] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_29 [i_12 + 2] [i_12 + 2])) ? (985162418487296ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_12 - 2] [i_12 - 2] [i_12 - 2] [i_12 + 4]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_12 - 2] [i_12 - 2])) && (((/* implicit */_Bool) 13014717142949686224ULL)))))));
                                arr_47 [i_11] [i_11] [i_11] [16ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -102834200)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17136))) : (((((/* implicit */_Bool) 13908113613489798934ULL)) ? (17375426808222676569ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) arr_29 [i_12 + 4] [i_12 + 2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) var_10)) : (1066393116)))) : (min((var_9), (((/* implicit */unsigned int) (short)-10111))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 17; i_16 += 1) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 4) 
                    {
                        {
                            arr_53 [i_11] [7] [14] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_35 [i_12 + 1] [i_12]), (((/* implicit */unsigned long long int) arr_9 [i_12 + 1] [i_12] [i_12] [i_12]))))) ? (((/* implicit */unsigned long long int) arr_9 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12])) : (((unsigned long long int) 13322692745700452634ULL))));
                            arr_54 [i_12] &= ((((/* implicit */_Bool) (unsigned short)24585)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_38 [i_12 - 2] [(_Bool)0]))))) ? ((-(((/* implicit */int) (unsigned char)156)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)10658)), (arr_5 [i_11])))))) : (((((/* implicit */_Bool) 4468415255281664ULL)) ? (((/* implicit */int) ((arr_22 [i_11]) != (((/* implicit */unsigned long long int) 134217728U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-79))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 3) 
                {
                    for (signed char i_19 = 0; i_19 < 17; i_19 += 1) 
                    {
                        {
                            arr_63 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (short)10657))))) / (((((/* implicit */_Bool) 3510598486748503846ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29395))) : (2364532377U)))));
                            var_19 = ((/* implicit */unsigned int) (unsigned char)192);
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1071644672U)), (34634616274944ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7468611210777557835ULL)) ? (((/* implicit */int) (short)-10658)) : (268402688)))) ? (min((((/* implicit */unsigned long long int) (short)-15503)), (183916208977295036ULL))) : (((/* implicit */unsigned long long int) arr_48 [i_11] [i_11] [i_11] [i_19])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) (_Bool)0)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

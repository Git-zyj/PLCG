/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167600
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_11 [i_2] [i_1] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_15)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (var_15))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_6))))))) % (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (var_17)))));
                            var_20 |= ((((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned long long int) var_19))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 13; i_6 += 2) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) var_16)) >= (((/* implicit */int) var_7)))))));
                                var_21 += (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_16)) : (var_15))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    for (short i_8 = 3; i_8 < 15; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            {
                                var_22 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */int) min((var_8), (((/* implicit */short) var_3))))) + (((((/* implicit */int) var_9)) << (((((/* implicit */int) var_6)) - (21538))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (var_2))))))));
                                arr_30 [i_0] [i_7] [6ULL] [i_0] [6ULL] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) 357995932)) ? (var_15) : (-2109445560)))))) / ((~(var_14)))));
                                arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_10);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_10 = 2; i_10 < 13; i_10 += 1) 
    {
        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned short) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_19))))) : (max((((/* implicit */unsigned long long int) var_0)), (var_17)))));
                            arr_42 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) var_2))))), (var_8)))) ? (max((((/* implicit */long long int) var_7)), (var_13))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_3)))))));
                            var_24 = ((/* implicit */short) (((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))))) ^ (((((var_0) ? (var_1) : (((/* implicit */int) var_19)))) | (((/* implicit */int) var_9))))));
                            var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
                            var_26 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((-2109445560), (((/* implicit */int) (short)-31215))))), (max((var_14), (((/* implicit */unsigned long long int) var_13))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    for (int i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50415))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57239))) * (((((/* implicit */_Bool) var_8)) ? (18395950504659951719ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57239)))))))));
                            arr_50 [i_10] [i_10] [i_11] [14] [i_10] = ((/* implicit */short) ((long long int) var_13));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 1) 
                    {
                        {
                            arr_56 [i_10 - 2] [i_11] [i_11] [i_17] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 357995947)) ? (((/* implicit */long long int) -2109445564)) : (510355396745350954LL))) * (((/* implicit */long long int) ((/* implicit */int) ((short) ((short) var_15)))))));
                            arr_57 [i_10] [i_11] = ((/* implicit */unsigned char) ((short) 510355396745350954LL));
                            var_28 ^= ((/* implicit */signed char) min((min((357995947), (((/* implicit */int) (unsigned char)236)))), (max((var_15), (((/* implicit */int) var_19))))));
                            arr_58 [i_11] = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) var_19)), (var_13))), (((/* implicit */long long int) ((((/* implicit */int) var_18)) | (var_1))))));
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_8)) : (var_15)))), (((max((((/* implicit */long long int) var_15)), (var_10))) << (((max((((/* implicit */long long int) var_0)), (var_13))) - (1LL))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

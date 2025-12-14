/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141747
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 7; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned short) arr_5 [i_1] [i_2] [i_3] [i_4]))))) && (((/* implicit */_Bool) ((long long int) (unsigned short)63141)))))), (((signed char) (-(((/* implicit */int) (_Bool)1)))))));
                                var_12 -= ((/* implicit */unsigned short) ((short) ((unsigned int) max((var_6), (((/* implicit */unsigned short) arr_7 [i_3] [i_4 + 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 7; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (arr_8 [i_0] [i_1] [i_5] [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_6)) ? (3515222129U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                                var_14 = ((/* implicit */long long int) ((int) ((unsigned int) (_Bool)0)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_15 = var_3;
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((unsigned int) ((short) (~(arr_20 [(unsigned char)19]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 1; i_11 < 19; i_11 += 2) 
                {
                    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        {
                            arr_34 [i_7] [i_8] [i_7] [i_12] = ((/* implicit */unsigned short) var_4);
                            arr_35 [i_11] [i_11] [i_11] [i_12] [i_7] = ((/* implicit */signed char) var_5);
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_33 [i_11] [i_11] [i_11 + 1] [i_11 + 1] [i_11]))));
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)173)))) != (4294967295U))) ? (855250039U) : (((/* implicit */unsigned int) (-((~(((/* implicit */int) (_Bool)0))))))))))));
                            var_19 = ((/* implicit */unsigned int) ((signed char) max((arr_23 [i_11 + 1] [i_11] [i_7]), (arr_23 [i_11 + 1] [i_11 + 1] [i_7]))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        for (int i_15 = 2; i_15 < 19; i_15 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) (-(((unsigned int) var_4))));
                                var_21 = ((short) (+(-2652323032761025293LL)));
                                var_22 = ((/* implicit */short) min((((((/* implicit */int) var_7)) - (min((var_9), (((/* implicit */int) (short)32767)))))), (((/* implicit */int) max(((unsigned short)61076), (((/* implicit */unsigned short) ((short) 0U))))))));
                                arr_45 [i_13] [1] [i_13] [1] [1] [i_7] [i_13] = ((/* implicit */_Bool) ((unsigned char) (unsigned short)0));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_16 = 0; i_16 < 21; i_16 += 1) 
    {
        for (int i_17 = 0; i_17 < 21; i_17 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (int i_19 = 0; i_19 < 21; i_19 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_47 [i_16])) + (((/* implicit */int) arr_47 [i_16]))))) ? (((/* implicit */int) max((max(((short)768), ((short)-22852))), (((/* implicit */short) (signed char)56))))) : (((((/* implicit */int) (unsigned char)100)) >> (((/* implicit */int) ((106335606) != (((/* implicit */int) var_8)))))))));
                            var_24 = ((/* implicit */int) min((var_24), ((-(((((/* implicit */_Bool) arr_49 [i_17] [i_18] [i_19])) ? (-1383610661) : (((/* implicit */int) var_7))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_20 = 0; i_20 < 21; i_20 += 1) 
                {
                    for (unsigned short i_21 = 0; i_21 < 21; i_21 += 1) 
                    {
                        {
                            arr_60 [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_10))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)4)) != (((/* implicit */int) arr_51 [i_16] [16] [i_16] [i_16]))))) : ((-(((/* implicit */int) (signed char)28))))));
                            var_25 = ((/* implicit */unsigned int) ((((long long int) arr_58 [i_16] [i_17] [i_20] [i_20] [i_16])) << ((((+(((((/* implicit */_Bool) -1667885254)) ? (((/* implicit */int) (unsigned char)152)) : (2147483623))))) - (152)))));
                            var_26 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [i_21])))))) >= (min((arr_53 [i_20]), (max((((/* implicit */unsigned int) var_8)), (var_0)))))));
                            var_27 = ((/* implicit */short) 738553919);
                        }
                    } 
                } 
            }
        } 
    } 
}

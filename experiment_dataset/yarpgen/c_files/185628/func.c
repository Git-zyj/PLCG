/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185628
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((+(min((((/* implicit */unsigned int) var_2)), (1977536753U)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((((/* implicit */short) (signed char)87)), ((short)-7349)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) % (var_0))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1977536742U)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_10)))))))));
                    var_17 = ((/* implicit */unsigned int) var_4);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_11 [i_1] [i_0] = ((/* implicit */signed char) var_2);
                                var_18 ^= ((/* implicit */_Bool) 10061869913439088481ULL);
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((max(((-(((/* implicit */int) var_4)))), ((+(((/* implicit */int) (signed char)-52)))))), (((/* implicit */int) var_3)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_3 [(_Bool)1]))));
                                var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (1977536741U)))) ? (((/* implicit */unsigned long long int) 1977536745U)) : (((((/* implicit */_Bool) arr_10 [i_6] [i_5] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) 1977536745U)) : (10061869913439088512ULL))))), (((/* implicit */unsigned long long int) min((min((2317430541U), (1977536741U))), (((/* implicit */unsigned int) var_2)))))));
                                arr_18 [i_0] [i_0] [(unsigned char)11] = (short)10832;
                                arr_19 [i_0] [i_0] [i_6] = ((/* implicit */unsigned char) 4194272U);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 1; i_7 < 9; i_7 += 1) 
    {
        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned short) 8384874160270463122ULL);
                var_23 = ((/* implicit */unsigned short) (+(((unsigned long long int) ((((/* implicit */_Bool) 2317430550U)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_7] [i_7] [i_7] [i_8] [i_7]))))))));
                /* LoopSeq 4 */
                for (signed char i_9 = 3; i_9 < 8; i_9 += 3) 
                {
                    var_24 ^= ((/* implicit */unsigned int) ((((8384874160270463104ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) + (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (var_7)))));
                    var_25 *= ((/* implicit */unsigned int) var_14);
                }
                /* vectorizable */
                for (unsigned short i_10 = 2; i_10 < 8; i_10 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_0))));
                    var_27 = ((/* implicit */unsigned short) ((signed char) var_5));
                    arr_30 [i_7] [i_8] [i_8] = ((/* implicit */signed char) 8384874160270463104ULL);
                    var_28 *= ((/* implicit */short) var_5);
                }
                for (unsigned short i_11 = 2; i_11 < 8; i_11 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */signed char) ((arr_7 [i_7] [17U]) >= (min(((+(-1941452498))), (((/* implicit */int) min((var_14), (((/* implicit */unsigned char) (_Bool)0)))))))));
                    var_30 = max((8384874160270463135ULL), (max((var_12), (arr_24 [i_7 + 1] [i_11 + 1]))));
                }
                for (unsigned short i_12 = 2; i_12 < 8; i_12 += 1) /* same iter space */
                {
                    var_31 *= max(((~(max((8384874160270463104ULL), (((/* implicit */unsigned long long int) 2317430542U)))))), (((/* implicit */unsigned long long int) (+((+(-1941452523)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 11; i_14 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned long long int) (signed char)88);
                                arr_39 [i_14] [i_14] [i_7] [i_8] [i_7] [i_8] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */signed char) arr_4 [i_7] [i_7])), (arr_36 [i_8] [i_12] [i_8] [4])));
                                var_33 = ((/* implicit */short) ((int) ((((arr_2 [10ULL] [(_Bool)1] [i_7]) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_13] [(unsigned short)4]))))));
                                arr_40 [i_7] [i_7] [i_13] [i_7] [i_13] [i_13] [i_8] = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 65011712U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-22366))))) ? ((-(4229955584U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (-784950016) : (((/* implicit */int) (_Bool)1))))))), (min((min((2095104U), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) (+(arr_9 [15U] [15U] [i_12] [15U] [i_8]))))))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    var_34 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114))) : (12435319936151769907ULL)));
                    var_35 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) max((((/* implicit */unsigned int) var_4)), (2317430528U)))))));
                    /* LoopNest 2 */
                    for (signed char i_16 = 2; i_16 < 9; i_16 += 3) 
                    {
                        for (unsigned short i_17 = 2; i_17 < 8; i_17 += 3) 
                        {
                            {
                                arr_48 [i_7] [i_7] [(short)2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */long long int) var_14)), (860056178424341236LL)))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)507)) <= (((/* implicit */int) var_14)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1941452512)) ? ((-(arr_8 [i_7] [i_8] [i_15 - 1] [i_7]))) : (((/* implicit */int) arr_14 [i_7 + 1] [i_17] [i_7])))))));
                                arr_49 [i_7] [i_7] = ((/* implicit */unsigned short) ((min(((+(0ULL))), (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */int) (_Bool)1))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) ((signed char) -1549561217)))))))));
                                var_36 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) var_10)))), ((+(((/* implicit */int) (signed char)-88))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135853
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((((/* implicit */int) var_0)), (212246520))))));
    var_15 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */int) (~((~(arr_4 [i_2] [i_1])))));
                    arr_10 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+((-2147483647 - 1))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_4 = 3; i_4 < 23; i_4 += 4) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)(-127 - 1)))));
                            var_17 |= ((/* implicit */unsigned short) (~((+(-212246521)))));
                            var_18 = ((/* implicit */unsigned short) ((long long int) 212246500));
                            var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
                            var_20 &= ((/* implicit */unsigned int) -212246520);
                        }
                        for (unsigned short i_5 = 3; i_5 < 23; i_5 += 4) /* same iter space */
                        {
                            arr_19 [i_1] [i_1] [(unsigned short)10] [i_1] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-100)));
                            arr_20 [i_0] [i_1] [i_2] [i_1] [i_5] = ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_12 [i_5]))))));
                        }
                        var_21 = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (212246520)));
                        var_22 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [8LL] [i_1] [i_2] [i_2] [i_3]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                        {
                            var_23 += ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) -212246517)) ? (((/* implicit */int) arr_8 [i_2] [i_6] [(signed char)12] [i_6])) : (((/* implicit */int) arr_22 [i_0] [i_1] [i_2] [i_2] [i_6]))))))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_16 [(_Bool)1] [i_1] [17ULL] [i_1] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0 - 2]))))) > ((+((+(((/* implicit */int) (signed char)125))))))));
                            var_25 = ((/* implicit */_Bool) (-(((((/* implicit */int) var_5)) * (((/* implicit */int) (unsigned short)0))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3225422694U)) ? (((/* implicit */int) (unsigned short)43924)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-5)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)0)))))));
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) (+(-8395637459083392241LL)));
                        }
                        arr_28 [i_1] [i_1] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */unsigned short) 33554431);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_27 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_3)))))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_14 [(unsigned char)22] [i_2] [i_2]))))))));
                        var_28 = ((/* implicit */unsigned short) arr_1 [i_0 + 1]);
                        var_29 &= ((((/* implicit */int) (!((_Bool)1)))) <= ((+(((/* implicit */int) (_Bool)1)))));
                        arr_31 [i_1] = (~(((((0LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)100))))) << ((((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))) + (77))))));
                    }
                    var_30 = ((/* implicit */_Bool) ((((17860758302184988181ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-79))))) ? (((-1LL) % (((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) (_Bool)1))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((short) (signed char)-78))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        var_31 = ((/* implicit */signed char) (~(((/* implicit */int) arr_30 [i_0 + 1] [i_0 - 1] [i_0 + 1]))));
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_2] [i_9] [i_9])) >> (((((/* implicit */int) (signed char)-110)) + (130))))))));
                        var_33 = ((/* implicit */short) (+(((/* implicit */int) var_1))));
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_14 [i_0] [i_0] [i_0 + 1]))))) > ((((_Bool)1) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) (_Bool)1))))));
                    }
                }
            } 
        } 
    } 
}

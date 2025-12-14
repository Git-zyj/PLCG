/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151342
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
    var_11 = var_2;
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_11 [i_3] [i_1] [i_0] [i_3] [(short)10] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 - 2]))))) - (((int) ((arr_1 [i_3]) || (((/* implicit */_Bool) arr_4 [i_4] [i_4] [i_4])))))));
                                var_12 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0] [i_0]))))) & ((~(((/* implicit */int) (unsigned short)56666)))))))));
                                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) min(((unsigned short)56666), (((/* implicit */unsigned short) (short)28954)))))));
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) 3215211727U))));
                            }
                        } 
                    } 
                } 
                var_15 -= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) 214162956)), ((~(3215211727U))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_5 [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 2] [i_0 - 2])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1 + 4] [i_1])) : (((/* implicit */int) arr_1 [i_1])))))))));
                arr_12 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)8857)) : (((/* implicit */int) var_1))));
            }
        } 
    } 
    var_16 += ((/* implicit */_Bool) (-(min((var_8), (((/* implicit */int) var_10))))));
    var_17 = ((/* implicit */unsigned char) (~(var_8)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_18 = ((/* implicit */long long int) ((unsigned char) arr_8 [i_5] [i_5] [i_6] [i_6]));
            var_19 = ((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6] [i_6]);
            var_20 ^= ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_5]))));
            /* LoopNest 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_21 [i_5] [i_5] [i_7] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_7])) ? (((/* implicit */long long int) arr_16 [i_5])) : (arr_13 [i_7 - 1])));
                        arr_22 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] |= ((/* implicit */long long int) ((int) 1079755589U));
                        var_21 = (-(((/* implicit */int) (_Bool)1)));
                    }
                } 
            } 
        }
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (~(var_9))))));
    }
    for (long long int i_9 = 0; i_9 < 19; i_9 += 1) 
    {
        arr_25 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)40018)) ? (((/* implicit */int) (unsigned short)56654)) : (340497753))), (((/* implicit */int) arr_24 [i_9] [i_9]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_9] [i_9] [(signed char)16] [i_9])) < (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (arr_2 [i_9]))))))) : ((~(((/* implicit */int) (_Bool)1))))));
        var_23 = (~(((((/* implicit */_Bool) 3215211731U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)72)))));
        /* LoopSeq 2 */
        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
        {
            arr_30 [i_9] [i_9] [i_9] = (-(var_8));
            arr_31 [i_9] [i_9] [i_9] = ((/* implicit */int) var_4);
            var_24 -= ((/* implicit */short) min((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 673638651U)) ? (1127324236) : (((/* implicit */int) (unsigned short)40009))))))), ((-(((arr_7 [10U] [10U] [6LL] [i_10]) ? (arr_27 [i_10] [(short)4]) : (arr_5 [i_9])))))));
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 1; i_13 < 18; i_13 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (-((~(arr_38 [i_9] [i_12 - 1] [i_9] [i_9] [(unsigned char)12]))))))));
                            var_26 = ((/* implicit */int) var_1);
                        }
                    } 
                } 
                arr_40 [(_Bool)1] [6LL] [i_11] |= ((/* implicit */short) (-(((/* implicit */int) (!(arr_28 [10U]))))));
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)51021)))))));
            }
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_10])) & (((/* implicit */int) arr_0 [i_10]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_9]))) : (var_4))))));
        }
        for (unsigned short i_14 = 3; i_14 < 15; i_14 += 2) 
        {
            arr_43 [(short)10] |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)39978)) ^ (((/* implicit */int) min(((unsigned short)47471), ((unsigned short)25528))))));
            var_29 = ((/* implicit */int) (short)19784);
        }
        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (((long long int) arr_27 [i_9] [(_Bool)1])))))));
    }
}

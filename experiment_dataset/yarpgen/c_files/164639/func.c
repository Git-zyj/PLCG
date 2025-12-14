/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164639
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
    var_18 = ((/* implicit */unsigned short) var_14);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_19 &= ((/* implicit */short) 9);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_0])), (-12)));
            var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((unsigned long long int) var_3)) & ((+(6420269963747722735ULL)))))) ? (((/* implicit */unsigned long long int) (-(arr_3 [i_0] [(unsigned short)6])))) : (((((((/* implicit */_Bool) -27)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)84))) : (var_5))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0]))))))));
            var_22 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((((/* implicit */int) arr_1 [(unsigned char)7])) <= (((/* implicit */int) arr_1 [i_0])))))));
        }
        for (long long int i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                arr_10 [i_0] [i_2] [i_3] &= var_13;
                arr_11 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */_Bool) (~((-(-1395292116)))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_17) ? ((+(arr_3 [i_2] [i_3]))) : (arr_3 [i_2] [i_2])))) ? (((/* implicit */int) (short)10243)) : (-1395292113)));
            }
            arr_12 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_1 [i_2]))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)13845))))) < (1124978028148965589LL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [0U] [0U] [i_2])))))));
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_2 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_16)))) : (((arr_9 [i_2] [i_2] [i_0]) / (((/* implicit */unsigned long long int) (+(1395292116))))))));
        }
        var_25 = ((/* implicit */unsigned char) var_12);
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                {
                    arr_17 [i_0] [i_4] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) 3998903595U))));
                    arr_18 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_5])) : (var_5)))) ? (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned int) 524287)) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))));
                    var_26 ^= ((/* implicit */unsigned int) ((long long int) min((min(((unsigned short)47396), (((/* implicit */unsigned short) arr_5 [i_4] [i_4])))), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)32571)) != (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) 1783585217212113321ULL);
        var_28 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)89))) : (arr_6 [i_6] [i_6]))));
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_33 [i_6] [i_6] [i_7] [i_7] [i_9] [i_9] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_20 [i_8])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_30 [i_6] [8] [i_7] [i_8] [i_8] [i_9])) / (((/* implicit */int) arr_20 [i_6]))))) : (-1124978028148965581LL))));
                        var_29 = ((/* implicit */short) arr_29 [i_6] [i_6] [i_7] [i_6]);
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) 1395292115))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        arr_37 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_10))))))) ? ((+(arr_3 [i_10] [i_10]))) : (var_6)));
        arr_38 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((min((arr_3 [i_10] [i_10]), (arr_3 [i_10] [i_10]))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_10] [i_10] [22] [i_10] [i_10])))));
    }
    var_31 = ((/* implicit */unsigned char) (((-(-810500898))) / (((/* implicit */int) max((var_3), (((/* implicit */unsigned char) ((_Bool) var_10))))))));
    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_0)) : (var_7)));
}

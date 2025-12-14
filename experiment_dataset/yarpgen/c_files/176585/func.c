/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176585
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)79)) : (var_1)))))) ? ((+((~(var_7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_16)))))))));
    var_20 = min((((((/* implicit */_Bool) (~(-1114507458)))) ? (((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned long long int) var_13)));
    var_21 = ((/* implicit */_Bool) ((((var_17) & (min((var_2), (((/* implicit */unsigned long long int) -1114507458)))))) << (((/* implicit */int) var_6))));
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_9)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_9 [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_0] [6U])) : (((/* implicit */int) (unsigned char)0))))) ? ((~(((/* implicit */int) arr_2 [i_2])))) : (((/* implicit */int) arr_8 [i_0] [(unsigned char)21] [i_2]))));
                        var_23 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_18)))) == (((((/* implicit */int) var_15)) / (((/* implicit */int) arr_0 [i_0]))))));
                        var_24 = ((/* implicit */signed char) ((arr_7 [i_3 + 2] [i_1]) ? (((/* implicit */int) arr_7 [i_3 - 1] [(unsigned char)0])) : (733685088)));
                        arr_10 [i_0] [i_0] [i_2] [(_Bool)1] [i_0] [i_0] = ((/* implicit */signed char) arr_6 [i_2] [i_3 - 1]);
                        var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_3] [i_3 + 2]))));
                    }
                } 
            } 
        } 
        var_26 = arr_2 [i_0];
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_3 [i_0]))))) - (-5281209640493806230LL))))));
        arr_11 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_10))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (((120566254127610867ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)1])))))));
    }
    for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (-(arr_12 [i_6])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_5))))) % (18326177819581940744ULL)))));
                                arr_23 [(signed char)4] [i_7] [i_6] [i_7] = ((/* implicit */int) ((arr_2 [i_4]) ? (((((/* implicit */unsigned long long int) arr_20 [i_4] [i_6] [i_7] [i_8])) - (((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */unsigned long long int) -5281209640493806230LL)) : (var_2))))) : (((((((/* implicit */_Bool) 2241433617047643311LL)) ? (14785739601718750988ULL) : (18326177819581940748ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)198)))))));
                                var_29 &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2114987684U)) ? (((((/* implicit */_Bool) 18326177819581940748ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_8]))) : (arr_19 [i_4] [i_5] [(short)12] [(short)12]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)94)))))) + (arr_6 [(short)8] [(short)8])));
                            }
                        } 
                    } 
                    arr_24 [i_4] = ((/* implicit */signed char) (~(max((((((/* implicit */long long int) ((/* implicit */int) var_18))) ^ (var_13))), (((/* implicit */long long int) arr_21 [i_4] [14] [i_4] [i_4]))))));
                    var_30 = ((/* implicit */_Bool) (signed char)92);
                    var_31 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [20LL] [i_5] [20LL])))))));
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned char) var_7);
    }
    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
    {
        arr_27 [i_9] = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned char)58)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(signed char)4] [i_9] [(unsigned char)18]))))) : ((-(((/* implicit */int) arr_8 [0ULL] [i_9] [(short)0]))))));
        arr_28 [i_9] |= ((/* implicit */unsigned int) arr_26 [(unsigned short)9] [i_9]);
    }
}

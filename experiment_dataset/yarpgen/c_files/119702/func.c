/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119702
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
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_10 |= ((/* implicit */signed char) min((((((arr_2 [i_0]) || (((/* implicit */_Bool) (unsigned char)124)))) ? (((/* implicit */int) arr_4 [(signed char)16])) : (((/* implicit */int) (_Bool)1)))), ((((((_Bool)1) ? (((/* implicit */int) arr_7 [i_3] [i_1] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1)))) ^ ((~(((/* implicit */int) arr_7 [(_Bool)1] [i_2 - 1] [i_1] [i_0 - 1]))))))));
                        var_11 = ((/* implicit */_Bool) var_0);
                        arr_9 [i_2] [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_8))))) || (((/* implicit */_Bool) var_7))))));
                        var_12 = ((/* implicit */unsigned char) (~((((_Bool)1) ? (((/* implicit */long long int) (+(((/* implicit */int) var_0))))) : ((~(-803804900528617107LL)))))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((short) (~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) != (((/* implicit */int) arr_8 [(short)12] [i_0] [(short)12])))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            arr_15 [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))), (var_6)));
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                for (short i_6 = 1; i_6 < 14; i_6 += 2) 
                {
                    {
                        arr_20 [i_0] [i_4] [17LL] [i_6] [i_4] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_18 [i_0] [i_6 + 3] [i_6] [i_6]), (arr_18 [i_0] [i_6 + 3] [i_6 + 3] [11U])))) << (((/* implicit */int) min(((_Bool)1), (arr_2 [i_0 + 1]))))));
                        arr_21 [i_0] |= ((/* implicit */long long int) var_9);
                        arr_22 [i_0] [i_4] [i_5] [i_6] [i_4] = ((/* implicit */unsigned int) (_Bool)1);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_26 [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) && (arr_16 [i_7] [i_0 - 1] [i_0] [i_0])));
            arr_27 [(_Bool)1] [i_0] |= (((((_Bool)0) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((long long int) var_9))) : (var_9));
            arr_28 [i_0] &= ((/* implicit */unsigned char) (~(var_6)));
            var_13 = ((/* implicit */unsigned int) ((signed char) (unsigned char)30));
        }
        for (unsigned long long int i_8 = 3; i_8 < 17; i_8 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_9 = 2; i_9 < 17; i_9 += 3) /* same iter space */
            {
                arr_33 [15ULL] [i_8 + 1] [i_8] [(signed char)9] = ((/* implicit */long long int) (~(((/* implicit */int) max((arr_19 [i_0 + 1] [i_8 - 3] [(unsigned short)0]), (arr_19 [i_0 - 1] [i_8 - 2] [i_9]))))));
                var_14 = ((/* implicit */_Bool) max((arr_31 [i_8] [i_8]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)241)))))));
                var_15 = ((/* implicit */unsigned long long int) var_8);
            }
            for (long long int i_10 = 2; i_10 < 17; i_10 += 3) /* same iter space */
            {
                arr_36 [(_Bool)1] [i_10] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_30 [i_0 - 1])) & (((/* implicit */int) arr_6 [i_0 + 1] [i_8])))) - (((/* implicit */int) ((_Bool) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                arr_37 [i_10] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) ^ (var_7))) >> (((var_6) - (12401296885087669189ULL)))));
            }
            arr_38 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_34 [2U] [i_0] [2U])) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((/* implicit */int) (short)15518)) - (15507))))) << (((((var_4) >> (((/* implicit */int) (_Bool)1)))) - (129394792U)))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_16 |= ((/* implicit */_Bool) var_4);
            /* LoopSeq 2 */
            for (unsigned int i_12 = 0; i_12 < 18; i_12 += 3) 
            {
                arr_43 [i_0 - 1] [i_11] [i_12] [(unsigned char)6] |= ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (arr_40 [(_Bool)1])))) / (((((/* implicit */_Bool) arr_32 [i_0 + 1] [i_11] [i_11])) ? (((/* implicit */int) arr_40 [(unsigned char)16])) : (((/* implicit */int) arr_32 [(_Bool)1] [i_0 + 1] [i_0 + 1]))))));
                var_17 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_3))))) + (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_39 [i_0] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_11] [i_0] [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0)))) : (((((/* implicit */_Bool) var_5)) ? (((803804900528617122LL) / (-4131497804851944305LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_11 [(signed char)6] [i_11] [i_11]), (var_8))))))));
            }
            for (signed char i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_7 [i_0] [i_11] [i_11] [2ULL])) - (35888)))))) ? (((((/* implicit */_Bool) -1637235066029584265LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_11] [i_13] [i_13]))) : (arr_0 [i_0 - 1])));
                var_19 = ((/* implicit */long long int) (+(2622054214144738479ULL)));
            }
        }
    }
    for (unsigned int i_14 = 1; i_14 < 17; i_14 += 4) /* same iter space */
    {
        arr_50 [i_14] = ((/* implicit */long long int) var_5);
        arr_51 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)6943)) && (((/* implicit */_Bool) 13609600001389339209ULL))));
    }
    var_20 = var_7;
}

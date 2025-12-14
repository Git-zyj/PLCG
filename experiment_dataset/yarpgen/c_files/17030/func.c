/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17030
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
    var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_2)) << (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
    var_17 |= ((/* implicit */_Bool) (+((((-(var_9))) & (((/* implicit */unsigned long long int) min((var_15), (((/* implicit */long long int) var_4)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) var_4);
        var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)46535))));
    }
    for (long long int i_1 = 2; i_1 < 8; i_1 += 3) 
    {
        var_20 = max(((+(arr_1 [i_1 - 2]))), (min((var_12), (var_1))));
        var_21 += ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (var_7) : (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */int) (_Bool)0))))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 6; i_2 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                var_22 = ((/* implicit */signed char) arr_0 [2ULL]);
                /* LoopSeq 3 */
                for (long long int i_4 = 2; i_4 < 9; i_4 += 1) 
                {
                    arr_14 [i_1 - 1] [i_2 + 2] [i_2 + 2] [i_1] = ((/* implicit */unsigned short) var_4);
                    /* LoopSeq 4 */
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        var_23 *= ((/* implicit */signed char) ((long long int) ((unsigned int) (unsigned char)99)));
                        arr_17 [i_1] [i_1] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_10 [i_1] [i_1] [i_3] [i_5])))) + (var_6)));
                        var_24 = ((/* implicit */unsigned long long int) ((((int) (short)-14964)) + (((/* implicit */int) ((((/* implicit */unsigned long long int) 3016945885U)) != (2198470954370352394ULL))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
                        var_26 = ((/* implicit */unsigned short) ((2198470954370352394ULL) * (((/* implicit */unsigned long long int) 0))));
                        arr_20 [(unsigned short)0] [9ULL] [3] [i_1] [i_6] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)26)) != (((/* implicit */int) arr_9 [i_1] [i_1 + 2] [i_1]))));
                    }
                    for (long long int i_7 = 1; i_7 < 9; i_7 += 3) 
                    {
                        arr_23 [i_7] [i_1] [i_1] [i_1] = ((/* implicit */int) ((signed char) ((_Bool) var_8)));
                        arr_24 [i_1] [i_2 + 3] [i_1] [i_1] [4ULL] = ((/* implicit */unsigned short) ((((arr_0 [(unsigned short)3]) % (((/* implicit */long long int) var_12)))) > (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                        arr_25 [i_1 + 1] [i_2] [3ULL] [i_4 - 2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1])) * (((/* implicit */int) ((signed char) var_13)))));
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) (signed char)105))))) ? (((var_3) + (((/* implicit */unsigned long long int) var_1)))) : (((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_9))))))));
                    }
                    for (unsigned int i_8 = 3; i_8 < 9; i_8 += 4) 
                    {
                        var_28 = (-(var_3));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_5))));
                        var_30 += ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_4 [i_1 + 1]))));
                        var_32 = ((/* implicit */int) ((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    }
                    arr_28 [i_1] = ((/* implicit */unsigned int) ((arr_27 [i_2 + 1] [i_2 + 1] [i_3] [3ULL]) + ((+((-2147483647 - 1))))));
                }
                for (int i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    var_33 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((var_15) + (7328683857425538677LL))) - (22LL)))));
                    var_34 = ((/* implicit */short) var_0);
                    var_35 = ((/* implicit */int) ((_Bool) arr_9 [i_2 + 4] [0] [i_1]));
                    var_36 = var_12;
                }
                for (long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    var_37 |= ((/* implicit */_Bool) ((((-413331368) + (2147483647))) << (((((-413331368) + (413331384))) - (16)))));
                    var_38 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((var_15) + (((/* implicit */long long int) ((/* implicit */int) var_4)))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (var_9)))));
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)230)) << (((/* implicit */int) ((var_9) != (((/* implicit */unsigned long long int) var_6)))))));
                }
                var_40 = ((/* implicit */short) var_0);
                var_41 = ((/* implicit */unsigned short) var_4);
            }
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (signed char i_12 = 2; i_12 < 8; i_12 += 1) 
                {
                    {
                        var_42 = ((/* implicit */int) ((((((arr_22 [i_12] [i_12] [i_11] [(unsigned char)5] [i_1]) << (((((/* implicit */int) var_5)) - (69))))) % (arr_6 [i_1] [i_2 + 1] [i_2 + 3]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                        arr_39 [i_1] [i_1] [i_1] [i_1] [i_1] = (((((_Bool)1) ? (4362862139015168ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25075))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_33 [i_1] [i_2 - 1] [6ULL] [i_1])) : (((/* implicit */int) arr_33 [i_1] [i_2 - 1] [9U] [i_1]))))));
                    }
                } 
            } 
            arr_40 [i_1] = ((/* implicit */_Bool) var_0);
        }
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 10; i_13 += 2) 
        {
            for (int i_14 = 2; i_14 < 9; i_14 += 3) 
            {
                {
                    var_43 = ((/* implicit */_Bool) ((signed char) var_2));
                    var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) ((min((arr_13 [i_14] [i_14] [i_14] [i_14 - 1] [i_1 - 2]), (((/* implicit */unsigned long long int) var_12)))) % (((unsigned long long int) var_11)))))));
                    var_45 &= arr_29 [i_1];
                }
            } 
        } 
    }
}

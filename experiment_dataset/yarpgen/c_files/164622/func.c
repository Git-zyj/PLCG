/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164622
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((10859797944201490191ULL), (((/* implicit */unsigned long long int) -6768032899479772262LL))))) ? (min((((((/* implicit */_Bool) var_1)) ? (var_10) : (var_10))), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) min(((_Bool)1), ((_Bool)0)))) & (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))))), (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_17)) : (var_8))), (((/* implicit */unsigned long long int) ((var_7) ^ (((/* implicit */int) var_11)))))))))));
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) var_7)) : (var_5))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 9; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 3) 
                    {
                        {
                            var_21 += ((/* implicit */_Bool) min((((/* implicit */long long int) min((((var_17) != (((/* implicit */int) arr_5 [i_0] [i_1] [i_3] [i_4 + 2])))), (((((/* implicit */_Bool) var_0)) && (arr_0 [i_0])))))), (var_5)));
                            var_22 = ((/* implicit */long long int) var_10);
                        }
                    } 
                } 
            } 
            arr_14 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_2) && (((/* implicit */_Bool) var_11))))), (min((var_8), (2481614583144957702ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_1))) >> (min((((/* implicit */long long int) (_Bool)1)), (4920589107182138685LL)))))) : (arr_2 [1LL] [i_0] [1LL])));
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_15 [(unsigned short)9] [i_1] [5LL]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_5))))))) : (((/* implicit */int) ((arr_18 [i_0] [i_0] [i_0] [i_6]) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [(_Bool)1] [i_6]))) & (arr_18 [i_0] [i_0] [i_5] [i_5]))))))));
                        arr_21 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]);
                        /* LoopSeq 2 */
                        for (long long int i_7 = 2; i_7 < 9; i_7 += 4) 
                        {
                            var_24 = var_2;
                            arr_25 [i_0] [i_1] [(_Bool)1] [6] [i_0] = ((/* implicit */int) arr_7 [i_7] [i_6] [i_0] [i_0]);
                        }
                        for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            var_25 = ((/* implicit */_Bool) min((((arr_19 [i_0] [i_1] [i_0] [i_1] [i_0]) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_5] [i_6])) && (((/* implicit */_Bool) arr_18 [i_8] [i_1] [i_1] [i_0])))))));
                            var_26 = ((/* implicit */signed char) ((_Bool) min((((/* implicit */int) arr_10 [i_8])), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_13 [i_8] [i_6] [i_5] [i_1] [i_0])))))));
                            arr_29 [2ULL] [i_6] [i_1] [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_0] [i_1] [i_5] [i_0] [i_6] [i_8]))))))), (var_2)));
                        }
                        var_27 |= ((((/* implicit */_Bool) 10859797944201490172ULL)) ? (((/* implicit */long long int) -1306319635)) : (2448902699820456034LL));
                        var_28 = ((/* implicit */long long int) arr_12 [i_0] [i_1] [i_1] [i_5] [i_6] [i_6]);
                    }
                } 
            } 
        }
        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                for (unsigned short i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    {
                        arr_37 [(unsigned short)6] [i_10] [(unsigned short)6] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(var_8))), (((/* implicit */unsigned long long int) min((var_3), (var_2))))))) ? (((/* implicit */long long int) ((min(((_Bool)0), ((_Bool)1))) ? (((/* implicit */int) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_9] [i_10] [i_10] [i_11])) <= (((/* implicit */int) (_Bool)0))))) : (((/* implicit */int) var_2))))) : (max((-2448902699820456034LL), (((arr_22 [i_10] [i_11] [i_10]) | (var_13)))))));
                        arr_38 [2LL] [(signed char)0] [2LL] [i_11] |= ((/* implicit */signed char) 14407944496280850430ULL);
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((arr_18 [i_0] [i_0] [i_0] [i_0]), (4038799577428701186ULL)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 10859797944201490191ULL)) || (((/* implicit */_Bool) var_1)))))))) <= (((/* implicit */unsigned long long int) min((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))))));
            arr_39 [i_0] [i_9] = ((/* implicit */unsigned long long int) var_16);
        }
        var_30 *= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((min((var_17), (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0])))), ((-(((/* implicit */int) var_16))))))), ((~(arr_22 [i_0] [i_0] [i_0])))));
        arr_40 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_0])) <= (((((/* implicit */int) arr_19 [i_0] [(signed char)9] [i_0] [i_0] [i_0])) >> (((var_5) + (4596040240388832551LL)))))));
    }
}

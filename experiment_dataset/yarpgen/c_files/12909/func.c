/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12909
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_11 -= ((/* implicit */short) var_6);
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) max((((/* implicit */int) var_10)), (((((var_4) && (((/* implicit */_Bool) var_7)))) ? (min((((/* implicit */int) var_1)), (var_8))) : (((var_8) >> (((var_6) - (3893885499255893930LL))))))))))));
            var_13 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((var_9) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))), (((((/* implicit */int) var_9)) & (((/* implicit */int) var_4))))))), (max((((((/* implicit */long long int) 3910093678U)) & (2615641826387158352LL))), (((/* implicit */long long int) min((var_2), (((/* implicit */unsigned short) var_5)))))))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_2);
            arr_8 [i_0] [i_0] = ((/* implicit */long long int) max((var_2), (min((((/* implicit */unsigned short) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_10))))), (max((var_3), (((/* implicit */unsigned short) var_9))))))));
            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))) < (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))))))) & (min((((/* implicit */long long int) var_0)), (var_6))))))));
        }
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 21; i_2 += 2) 
    {
        arr_13 [i_2] [i_2] = ((((/* implicit */int) var_0)) ^ (((/* implicit */int) ((var_6) > (((/* implicit */long long int) var_8))))));
        var_15 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_1))))) : (var_7));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) & (((/* implicit */long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_3))))))))));
        /* LoopSeq 4 */
        for (short i_3 = 3; i_3 < 19; i_3 += 1) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_10) && (((/* implicit */_Bool) var_2)))))) != (var_6)));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (var_8)))));
            arr_18 [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))))));
        }
        for (int i_4 = 4; i_4 < 19; i_4 += 1) /* same iter space */
        {
            arr_21 [i_4] = ((/* implicit */_Bool) ((((((/* implicit */int) var_4)) << (((((/* implicit */int) var_2)) - (35029))))) + (((/* implicit */int) var_3))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) var_9);
                        arr_26 [i_4] [i_4] [i_4] [i_4] = var_0;
                        arr_27 [i_2] [i_4] [i_6] [i_2] [(signed char)20] &= ((/* implicit */unsigned char) ((var_7) >= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))));
                        var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */int) var_4)) << (((/* implicit */int) var_9))))));
                    }
                } 
            } 
        }
        for (int i_7 = 4; i_7 < 19; i_7 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) var_3)) + (((var_9) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))))))));
            var_22 &= ((/* implicit */long long int) ((((((var_7) + (2147483647))) << (((/* implicit */int) var_4)))) >> (((var_6) - (3893885499255893930LL)))));
        }
        for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                for (int i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    for (short i_11 = 1; i_11 < 21; i_11 += 4) 
                    {
                        {
                            var_23 *= ((/* implicit */int) var_9);
                            var_24 = ((/* implicit */short) var_7);
                        }
                    } 
                } 
            } 
            var_25 &= ((/* implicit */signed char) ((var_4) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (var_6)))) : (((/* implicit */int) var_2))));
        }
        var_26 = ((/* implicit */_Bool) ((((var_8) >> (((((/* implicit */int) var_1)) - (65022))))) & (((var_9) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))));
    }
    var_27 = ((/* implicit */int) max((var_27), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))) : (((var_10) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((((var_4) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))) + (max((((/* implicit */int) var_5)), (var_7))))) : (((min((((/* implicit */int) var_10)), (var_8))) + (max((var_8), (((/* implicit */int) var_4))))))))));
    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */long long int) var_8)) > (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_6))) % (((/* implicit */long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_5))))))))))));
    /* LoopNest 2 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            {
                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) max((max((((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_1)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))))), (((/* implicit */int) min((var_5), (((/* implicit */unsigned char) max((var_9), (var_10))))))))))));
                var_30 -= ((((/* implicit */int) var_2)) * (((((/* implicit */int) min((var_9), (var_9)))) * (((((/* implicit */int) var_1)) * (((/* implicit */int) var_4)))))));
            }
        } 
    } 
}

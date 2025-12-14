/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110199
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) ((((var_10) << (((((/* implicit */int) var_13)) + (86))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) var_9)))))))))));
    var_16 = ((/* implicit */unsigned short) ((var_10) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) < (((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_17 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((var_1) > (((/* implicit */unsigned int) ((/* implicit */int) ((var_12) != (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))))) < (((((/* implicit */int) ((((/* implicit */int) (signed char)71)) < (((/* implicit */int) var_14))))) << (((((/* implicit */int) (signed char)-119)) + (124)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)1331)) || (((/* implicit */_Bool) (unsigned short)60259))));
            arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_9)))))) <= (((var_12) ^ (var_7)))));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 3; i_3 < 11; i_3 += 4) 
            {
                var_19 *= ((/* implicit */signed char) var_12);
                arr_11 [i_0] [i_3 - 3] [i_3] = ((/* implicit */unsigned int) var_8);
                arr_12 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (var_7))) >> (((((((/* implicit */int) var_3)) << (((var_1) - (3766820283U))))) - (135139)))));
                var_20 = ((/* implicit */unsigned short) ((((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) - (((24243963U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118)))))));
            }
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) << (((var_6) - (4124036211U))))) / (((/* implicit */int) var_3)))))));
            arr_13 [i_0] = ((/* implicit */unsigned short) var_2);
        }
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_3)))) || (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_13))))))) >> (((((/* implicit */int) var_0)) - (42659)))));
    }
    for (unsigned short i_4 = 1; i_4 < 12; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_5 = 1; i_5 < 12; i_5 += 2) 
        {
            var_23 = ((/* implicit */unsigned int) var_0);
            var_24 = ((/* implicit */unsigned int) var_8);
            var_25 = ((/* implicit */unsigned short) var_1);
            /* LoopSeq 1 */
            for (unsigned int i_6 = 2; i_6 < 11; i_6 += 2) 
            {
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_5))));
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((((var_7) + (var_11))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_10)))))))))));
                arr_22 [i_4] [(signed char)6] [(unsigned short)0] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((((/* implicit */int) var_14)) >= (((/* implicit */int) var_4)))))))) - (var_12)));
            }
            arr_23 [i_4 + 1] [i_4 + 1] = ((/* implicit */unsigned short) var_10);
        }
        /* LoopSeq 1 */
        for (unsigned int i_7 = 3; i_7 < 10; i_7 += 2) 
        {
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) var_10))));
            /* LoopSeq 3 */
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((var_11) >> (((((/* implicit */int) var_2)) - (76))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_8))))) != (((/* implicit */int) var_3)))))))))));
                var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) > (var_11)));
                var_31 ^= var_12;
            }
            for (unsigned short i_9 = 1; i_9 < 12; i_9 += 2) 
            {
                arr_31 [i_7] = ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-103)) < (((/* implicit */int) (signed char)117)))))) / (((var_12) - (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) * (var_7));
                var_32 = ((/* implicit */unsigned short) var_11);
            }
            for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                var_33 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) | (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_4)))))))) != (var_10)));
                var_34 = ((/* implicit */signed char) var_0);
            }
        }
        arr_36 [i_4] [i_4] = ((/* implicit */signed char) ((((((var_1) >> (((var_12) - (2862624430U))))) << (((((((/* implicit */int) (signed char)32)) | (((/* implicit */int) (signed char)118)))) - (113))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
        var_35 ^= ((/* implicit */signed char) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) ^ (var_6))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) == (var_10)));
        /* LoopNest 2 */
        for (signed char i_11 = 3; i_11 < 9; i_11 += 2) 
        {
            for (signed char i_12 = 1; i_12 < 10; i_12 += 1) 
            {
                {
                    arr_42 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) <= (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (var_12))) < (var_6))))));
                    arr_43 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) var_14);
                    var_36 = ((/* implicit */unsigned short) var_5);
                }
            } 
        } 
    }
    for (unsigned short i_13 = 1; i_13 < 12; i_13 += 3) /* same iter space */
    {
        var_37 = ((/* implicit */signed char) max((var_37), (var_3)));
        var_38 = ((/* implicit */signed char) ((((((var_7) - (var_10))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_4))))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
        var_39 = ((/* implicit */signed char) ((var_12) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64)))));
    }
}

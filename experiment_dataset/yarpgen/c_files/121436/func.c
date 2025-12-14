/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121436
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
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
    var_18 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
    var_19 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-25))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) (signed char)24);
        var_21 = arr_0 [i_0];
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    {
                        var_22 = ((/* implicit */long long int) (~(arr_2 [i_1] [i_2])));
                        var_23 ^= ((/* implicit */int) arr_8 [i_2] [i_4]);
                        var_24 += ((arr_4 [i_3] [i_4]) ^ (((/* implicit */unsigned int) (~((~(var_16)))))));
                        arr_12 [i_1] [i_3] [(unsigned short)6] [i_1] = max((((/* implicit */int) (unsigned short)22)), ((~(((((/* implicit */int) (signed char)81)) | (((/* implicit */int) arr_8 [i_1] [i_1])))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */unsigned long long int) arr_11 [i_2] [i_5])) : (3963567027497104657ULL)))) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned int) arr_2 [i_1] [i_1])))));
                            arr_15 [i_1] [i_2] [i_2] [i_3] [i_1] [i_5] = ((/* implicit */signed char) var_12);
                        }
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) min(((signed char)-49), ((signed char)38)))) != (max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (unsigned char)124))))))));
    }
    for (short i_6 = 2; i_6 < 10; i_6 += 3) 
    {
        var_27 &= var_8;
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 2; i_10 < 10; i_10 += 3) 
                        {
                            arr_29 [i_6 - 2] [i_6 - 2] [i_8] [i_6] [i_10 + 1] = ((/* implicit */unsigned char) -536870912);
                            var_28 = ((/* implicit */long long int) arr_2 [i_6 + 1] [i_10 + 1]);
                            var_29 &= ((unsigned int) (signed char)-81);
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned short) arr_9 [i_6] [i_6] [i_6]);
                            var_31 = ((/* implicit */signed char) max((var_31), (arr_27 [i_9] [i_11] [i_8] [i_9])));
                            var_32 = ((/* implicit */unsigned char) (-((((~(var_10))) | (((/* implicit */long long int) ((arr_16 [i_11] [i_7]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)165))))))))));
                        }
                        var_33 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) arr_23 [i_6 - 2] [i_6 + 1] [i_6])), (var_8))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6])))));
                    }
                } 
            } 
            arr_33 [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_12))))))) ? (536870897) : (((/* implicit */int) max(((signed char)51), ((signed char)-41))))));
            var_34 = ((/* implicit */unsigned int) (+(max((-20LL), (((((/* implicit */_Bool) -536870912)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
        }
        arr_34 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned int) arr_2 [i_6] [i_6])) ^ (3085017861U))) != (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)99)), ((unsigned short)0))))))))) < (((arr_4 [i_6] [i_6 - 2]) / (((/* implicit */unsigned int) (+(((/* implicit */int) arr_23 [i_6] [i_6 + 1] [i_6])))))))));
    }
    for (unsigned int i_12 = 0; i_12 < 21; i_12 += 2) 
    {
        var_35 = ((/* implicit */unsigned char) var_9);
        /* LoopNest 2 */
        for (unsigned char i_13 = 3; i_13 < 18; i_13 += 1) 
        {
            for (long long int i_14 = 2; i_14 < 20; i_14 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 2; i_15 < 18; i_15 += 3) 
                    {
                        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (~(((((((/* implicit */_Bool) 4294967295U)) ? (arr_39 [i_12] [i_12] [(unsigned char)16]) : (((/* implicit */unsigned int) var_16)))) & (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)167))))))))))));
                        arr_45 [i_12] [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) arr_9 [i_15 - 1] [i_14 + 1] [i_13 - 1])), (var_14)))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 21; i_16 += 4) 
                    {
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_44 [i_16] [i_14 - 2] [i_12] [i_12]))) | (711851017495146734LL))) | (((((/* implicit */_Bool) (unsigned char)147)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_12] [i_12] [i_14 + 1] [10U])))))))) ? (((((/* implicit */unsigned long long int) (~(-1802317757)))) ^ (min((((/* implicit */unsigned long long int) arr_42 [i_12] [i_14 + 1])), (6ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)24)) ? (4128768U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242))))))));
                        var_38 = (+(((max((((/* implicit */unsigned int) var_3)), (var_11))) * (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)27))))))));
                    }
                    var_39 ^= ((/* implicit */unsigned long long int) max((-536870912), (((/* implicit */int) ((unsigned char) arr_46 [i_13 + 3])))));
                }
            } 
        } 
        var_40 |= ((/* implicit */int) max((min((arr_4 [i_12] [i_12]), (((/* implicit */unsigned int) arr_44 [i_12] [i_12] [i_12] [i_12])))), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_44 [i_12] [i_12] [i_12] [i_12])))))));
        var_41 ^= ((/* implicit */int) (unsigned char)54);
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150983
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-122)) % (((/* implicit */int) var_14))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_0 [i_0]))))) : (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((/* implicit */int) arr_0 [i_0])))))) ^ (((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_0 [(_Bool)1]))))))));
        var_17 ^= var_6;
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (signed char)-86))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_12 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (!(((arr_1 [(signed char)4]) || ((_Bool)1)))))) - (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_2] [i_2]))))) || (arr_5 [i_0]))))));
                        var_18 = ((/* implicit */signed char) var_16);
                        arr_13 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_0 [i_3])))) > ((-(((/* implicit */int) arr_8 [i_1]))))));
                        var_19 = ((/* implicit */signed char) (-((+(((((/* implicit */int) var_12)) + (((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-122)) ^ (((/* implicit */int) (signed char)-117)))) >> (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)31))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), ((!(var_16)))));
        /* LoopNest 2 */
        for (signed char i_5 = 3; i_5 < 20; i_5 += 1) 
        {
            for (signed char i_6 = 3; i_6 < 20; i_6 += 1) 
            {
                {
                    arr_21 [i_4] [(signed char)8] [i_6 - 1] [(signed char)18] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)74))));
                    var_22 = arr_18 [i_4] [i_5 - 3] [(_Bool)1];
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                    {
                        var_23 += ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_25 [i_4] [i_4] [i_4] [i_4]), (var_13))))));
                        arr_26 [i_4] [i_4] [i_6] [i_6] = arr_14 [i_7] [i_4];
                        var_24 = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_22 [i_4] [i_4]))))))));
                        arr_27 [i_4] [i_4] [i_4] [(signed char)1] = (_Bool)1;
                        arr_28 [i_4] = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && ((_Bool)0)))) + (((/* implicit */int) arr_18 [i_4] [i_5] [i_6])))) ^ ((+(((/* implicit */int) max((var_14), (var_3))))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                    {
                        arr_31 [i_4] [i_5] [i_5] [i_4] [i_5] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))));
                        var_25 = min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_4])) || (((/* implicit */_Bool) arr_25 [i_4] [i_5] [i_6] [(_Bool)1]))))), (var_14));
                        var_26 = var_6;
                    }
                    arr_32 [i_6] [i_5] [i_4] = var_11;
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (signed char i_9 = 2; i_9 < 10; i_9 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_27 -= ((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_1))))) ? ((+(((/* implicit */int) arr_6 [i_12] [i_11])))) : (((/* implicit */int) arr_40 [i_10 - 1] [i_11] [i_12]))))));
                        var_28 &= ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) arr_42 [i_9] [i_12])))));
                    }
                } 
            } 
        } 
        var_29 ^= (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_37 [i_9 + 2] [i_9] [i_9])) ^ (((/* implicit */int) arr_20 [i_9] [i_9])))) + (((((/* implicit */int) arr_39 [i_9 - 2])) | (((/* implicit */int) arr_15 [i_9]))))))));
    }
    for (signed char i_13 = 0; i_13 < 25; i_13 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-102))));
        arr_48 [i_13] [i_13] = ((/* implicit */_Bool) (signed char)116);
    }
    for (signed char i_14 = 0; i_14 < 25; i_14 += 3) /* same iter space */
    {
        arr_52 [i_14] = arr_51 [i_14] [(_Bool)1];
        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_14])) ^ (((/* implicit */int) arr_51 [i_14] [i_14]))))) ? ((+(((/* implicit */int) arr_51 [i_14] [i_14])))) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_49 [i_14] [i_14])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)82)) * (((/* implicit */int) arr_51 [i_14] [i_14]))))))))));
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 25; i_15 += 2) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))))));
                    arr_59 [i_14] |= ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) arr_49 [i_14] [i_15])))));
                }
            } 
        } 
    }
}

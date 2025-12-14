/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144615
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 3792333378U)))) ? (((/* implicit */unsigned long long int) ((long long int) 22117677U))) : (4999865716454811052ULL)));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-110)) ? (((((/* implicit */_Bool) 359987001U)) ? (3934980271U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (unsigned int i_3 = 3; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_14 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) arr_1 [i_3 + 1])))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [15] [i_3] |= ((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)213))))) : (arr_11 [i_3 - 2] [i_3] [i_3 - 1] [i_3 - 2] [(unsigned char)11]));
                        arr_13 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) arr_7 [i_0] [i_1] [i_1]);
                    }
                } 
            } 
        }
        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            var_15 = ((/* implicit */unsigned char) ((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) >= (var_3)));
            arr_18 [i_0] = ((/* implicit */unsigned char) ((arr_7 [i_0] [i_0] [(signed char)3]) ? (((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_4])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_4]))));
            var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)7074))) | (7384825539319466779ULL)));
        }
        var_17 ^= ((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))));
    }
    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_4 [(unsigned short)1] [i_5] [i_5]), (var_4)))) ? (((/* implicit */long long int) ((unsigned int) 1672768397U))) : ((-((~(var_6))))))))));
        var_19 = ((/* implicit */unsigned long long int) ((arr_6 [i_5] [i_5] [i_5]) << (((/* implicit */int) var_1))));
        arr_23 [i_5] [i_5] = ((/* implicit */short) var_7);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned int) (_Bool)1))))), (var_3)));
        /* LoopSeq 3 */
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) var_11))));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6871665130852417983LL)) ? ((+(359987001U))) : (((/* implicit */unsigned int) min((((/* implicit */int) ((short) 359987026U))), ((~(((/* implicit */int) (_Bool)1)))))))));
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_34 [i_8] [i_8])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [7U] [i_6]))))));
            arr_35 [i_6] [i_6] = min((((((/* implicit */_Bool) 3934980271U)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_8 - 1]))))), (min((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) (unsigned short)65535))))), (((unsigned long long int) 0LL)))));
        }
        for (long long int i_9 = 1; i_9 < 21; i_9 += 2) 
        {
            var_24 = ((/* implicit */_Bool) (-(min((3433288499619671050ULL), (((/* implicit */unsigned long long int) -2141235833))))));
            arr_40 [i_6] = ((/* implicit */short) ((((long long int) var_7)) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_9 - 1]))))));
        }
        var_25 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), ((unsigned short)3)));
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) (~(var_2)));
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 23; i_13 += 4) 
                {
                    {
                        var_27 &= ((/* implicit */int) arr_28 [(_Bool)1]);
                        var_28 = ((/* implicit */unsigned long long int) ((signed char) 359986983U));
                        arr_52 [i_10] [i_10] [4U] [i_12] [i_13] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_41 [i_10] [(_Bool)1]))));
                    }
                } 
            } 
            var_29 = ((/* implicit */_Bool) ((unsigned char) ((unsigned int) (unsigned char)124)));
        }
        arr_53 [i_10] = ((/* implicit */short) (-(((/* implicit */int) var_0))));
    }
    var_30 = ((/* implicit */signed char) ((unsigned int) var_5));
    /* LoopNest 2 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        for (signed char i_15 = 3; i_15 < 21; i_15 += 3) 
        {
            {
                arr_59 [i_15] = ((/* implicit */_Bool) (~((-(((/* implicit */int) var_11))))));
                arr_60 [i_15] [i_15] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_46 [i_15 + 1] [i_15] [i_15 + 1] [i_15 + 1]))))));
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) var_9);
    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((_Bool) var_11)))));
}

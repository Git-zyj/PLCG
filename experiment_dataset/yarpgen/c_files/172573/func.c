/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172573
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (long long int i_3 = 3; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_19 -= (((_Bool)1) && (((/* implicit */_Bool) 1772737132U)));
                        arr_9 [(_Bool)1] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
                        var_20 *= ((/* implicit */unsigned char) arr_8 [i_0] [i_3] [i_0] [i_3] [i_3]);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0]))));
        arr_10 [i_0] [i_0] = ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]);
    }
    for (short i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_5 = 4; i_5 < 16; i_5 += 2) 
        {
            for (long long int i_6 = 1; i_6 < 16; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_17 [i_4] [i_5] [13LL] [i_7]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5] [i_6] [i_7])))))))))) == ((-(arr_11 [i_4])))));
                        var_23 ^= ((/* implicit */signed char) ((long long int) (+(((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4] [i_5]))))))));
                    }
                } 
            } 
        } 
        arr_20 [i_4] [i_4] = ((/* implicit */long long int) arr_13 [i_4]);
        arr_21 [i_4] = ((/* implicit */long long int) arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]);
        arr_22 [i_4] = ((/* implicit */_Bool) ((unsigned int) ((int) ((unsigned int) arr_0 [i_4] [i_4]))));
    }
    for (short i_8 = 0; i_8 < 18; i_8 += 3) /* same iter space */
    {
        arr_25 [i_8] = ((((/* implicit */_Bool) arr_14 [i_8] [i_8] [(_Bool)1])) ? ((+(((/* implicit */int) (!(var_15)))))) : (((/* implicit */int) var_10)));
        /* LoopNest 3 */
        for (short i_9 = 1; i_9 < 15; i_9 += 3) 
        {
            for (short i_10 = 2; i_10 < 17; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_24 ^= ((/* implicit */long long int) arr_6 [i_11] [i_11] [i_11] [6U]);
                        arr_33 [i_8] [i_8] = ((/* implicit */signed char) (~(((long long int) arr_14 [i_9 + 1] [i_10 - 1] [i_11]))));
                        var_25 = ((/* implicit */unsigned int) min((var_25), ((+(arr_31 [i_8] [i_10] [i_8] [i_8])))));
                        arr_34 [i_8] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */long long int) var_16);
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_13 [i_8])) ? (((/* implicit */int) arr_13 [i_8])) : (((/* implicit */int) arr_13 [i_8]))))));
    }
    var_27 += ((/* implicit */_Bool) ((unsigned short) var_14));
    /* LoopNest 3 */
    for (int i_12 = 4; i_12 < 17; i_12 += 2) 
    {
        for (short i_13 = 0; i_13 < 20; i_13 += 3) 
        {
            for (long long int i_14 = 0; i_14 < 20; i_14 += 3) 
            {
                {
                    arr_45 [i_12] [i_12 - 3] [i_12 - 3] = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_38 [(short)4] [i_13]))))))));
                    arr_46 [i_12] [17ULL] [17ULL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-((~(var_13))))))));
                    arr_47 [i_12] = ((/* implicit */short) (+(((/* implicit */int) ((short) arr_1 [i_12 - 4] [i_13])))));
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (((((-(((/* implicit */int) var_15)))) + (2147483647))) >> ((+(((/* implicit */int) arr_42 [i_14])))))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */signed char) (+(max(((+(var_5))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)-1)))))))));
    var_30 = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))));
}

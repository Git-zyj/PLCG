/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140642
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) (~((~(((arr_1 [i_0]) | (arr_0 [i_0] [i_0])))))));
        var_18 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) var_3)), (arr_1 [7]))), (arr_1 [(_Bool)0])));
        arr_2 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (300415778U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (((/* implicit */int) (_Bool)1))))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [1])) || (((/* implicit */_Bool) 2147483624)))))))) >= (var_14)));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    {
                        var_20 = arr_6 [i_4] [i_2] [i_1];
                        /* LoopSeq 2 */
                        for (int i_5 = 1; i_5 < 13; i_5 += 2) 
                        {
                            arr_16 [i_1] [i_2] [(signed char)12] [i_1] [(signed char)12] [i_5] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)15)) - (((/* implicit */int) (unsigned char)246))))) - (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) arr_6 [i_1] [(unsigned short)5] [i_1])) : (5948744737377083011ULL))));
                            var_21 = ((/* implicit */_Bool) (((+(((/* implicit */int) var_13)))) >> (((((/* implicit */_Bool) 12497999336332468609ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_15 [i_1]))))));
                            arr_17 [i_1] [i_4] [i_3] [i_2] [i_1] = ((/* implicit */signed char) var_13);
                            arr_18 [(signed char)5] [i_1] [i_3] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((signed char) arr_13 [i_5 + 1] [(unsigned short)1] [(unsigned short)6] [i_5] [i_5]));
                        }
                        for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_14 [(unsigned short)5] [(signed char)5] [i_3] [i_4] [i_6]))))));
                            var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)26847)) : (((/* implicit */int) var_6)))) + (((/* implicit */int) var_16))));
                            var_24 = (~(((/* implicit */int) arr_3 [i_1] [i_6])));
                        }
                        var_25 = ((/* implicit */long long int) arr_7 [i_1] [i_1] [i_1]);
                    }
                } 
            } 
            var_26 = ((/* implicit */int) var_3);
        }
        for (short i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            arr_25 [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))) : (arr_6 [i_1] [i_1] [i_7]))) <= (((/* implicit */long long int) (-(((/* implicit */int) var_16)))))));
            arr_26 [i_7] = ((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_1] [i_1]))));
            var_27 -= ((/* implicit */unsigned char) 15664356975758645713ULL);
        }
        for (unsigned char i_8 = 2; i_8 < 12; i_8 += 1) 
        {
            var_28 -= ((/* implicit */signed char) ((_Bool) var_5));
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(12497999336332468605ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12497999336332468612ULL)));
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                for (unsigned short i_10 = 1; i_10 < 13; i_10 += 1) 
                {
                    {
                        var_30 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_10 + 1] [i_8 + 2]))));
                        var_31 = ((/* implicit */_Bool) arr_10 [i_1]);
                    }
                } 
            } 
        }
        arr_35 [(unsigned short)0] [i_1] &= ((/* implicit */unsigned long long int) ((int) arr_7 [i_1] [i_1] [i_1]));
        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1]))));
    }
    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) /* same iter space */
    {
        arr_38 [i_11] = ((/* implicit */short) ((((unsigned long long int) arr_15 [i_11])) >> (((((/* implicit */int) arr_28 [i_11] [i_11] [i_11])) & (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (_Bool)1)))))))));
        arr_39 [i_11] = ((/* implicit */unsigned short) 10884780291428464794ULL);
        arr_40 [7ULL] = ((((/* implicit */_Bool) arr_12 [i_11] [i_11] [i_11] [i_11])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_1))))));
        arr_41 [i_11] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_19 [i_11] [i_11]))))));
        arr_42 [i_11] = ((/* implicit */_Bool) (+(var_11)));
    }
    var_33 = ((/* implicit */signed char) ((unsigned int) var_13));
}

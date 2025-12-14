/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177322
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
    var_19 = ((/* implicit */short) var_2);
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)92)))) + ((~(((/* implicit */int) max((((/* implicit */short) (signed char)106)), (var_13))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max((max((arr_2 [i_0 + 1] [i_0 + 1] [(unsigned char)0]), (((/* implicit */unsigned int) arr_1 [i_0 + 1])))), (((/* implicit */unsigned int) ((short) arr_2 [i_0 + 1] [i_0 + 1] [(short)10]))))))));
            var_22 = arr_4 [i_0];
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_4 [(unsigned char)10]))));
            var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 16798617346089366693ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [(_Bool)1] [i_0] [(_Bool)1]), (((/* implicit */unsigned int) var_3))))) && (((/* implicit */_Bool) ((int) arr_3 [i_0] [i_0] [i_0])))))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-93))))));
        }
        for (unsigned short i_2 = 4; i_2 < 22; i_2 += 2) 
        {
            var_25 = ((/* implicit */_Bool) min((var_25), (arr_4 [i_2])));
            var_26 = ((/* implicit */_Bool) var_13);
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_2] [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) var_1))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (1648126727620184923ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) + (((((/* implicit */_Bool) ((arr_0 [i_2]) - (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_2])))) : (arr_0 [i_2]))))))));
        }
        var_28 = ((/* implicit */int) (+(var_17)));
        arr_9 [i_0] = ((/* implicit */_Bool) var_6);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            arr_16 [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 31744U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)92))) : (527509094414680733ULL)));
            arr_17 [i_3] = ((/* implicit */unsigned char) ((unsigned int) arr_4 [i_4]));
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                var_29 = ((((/* implicit */_Bool) 16777215U)) || (((/* implicit */_Bool) 1846426170)));
                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) var_7)))))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_3 - 1] [i_3 + 1])) ? (((/* implicit */int) arr_6 [i_3 + 2] [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) arr_6 [i_3 + 2] [i_3 + 2] [i_3 + 1]))));
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_3 - 1] [(unsigned char)19])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3]))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) (_Bool)1))))));
            }
            arr_23 [i_3] [i_4] = ((/* implicit */unsigned char) var_17);
        }
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            arr_27 [i_3] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_3 - 1] [i_7]))) / (1648126727620184923ULL)))) ? (((((/* implicit */int) arr_18 [i_7] [i_3] [i_3 - 1] [(unsigned short)3])) * (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_24 [i_7] [i_7] [16]))));
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    {
                        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) 16798617346089366686ULL))));
                        var_34 = ((/* implicit */_Bool) min((var_34), ((!(((/* implicit */_Bool) var_8))))));
                    }
                } 
            } 
            arr_35 [i_3] [(unsigned char)22] [i_7] = ((/* implicit */signed char) arr_22 [i_3 + 1] [i_3 + 1] [i_7] [i_7]);
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_11 = 3; i_11 < 21; i_11 += 3) 
                {
                    var_35 = ((/* implicit */unsigned int) var_16);
                    arr_41 [i_3] [i_7] [i_10] [i_3] [i_3] [i_11] = ((/* implicit */_Bool) (+(4294967295U)));
                    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) var_18))));
                }
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 1; i_13 < 22; i_13 += 3) 
                    {
                        var_37 = ((((/* implicit */int) (signed char)92)) == (1846426170));
                        var_38 -= ((/* implicit */short) ((_Bool) arr_39 [i_13 - 1] [i_13 - 1] [i_7] [i_7] [i_12] [i_3]));
                        arr_47 [i_13] [i_10] [i_10] [i_3] = ((/* implicit */int) ((arr_11 [i_12 - 1]) >= (((/* implicit */unsigned long long int) 1846426170))));
                    }
                    var_39 = ((/* implicit */unsigned char) ((unsigned int) arr_20 [i_3] [i_7] [i_10] [i_12]));
                }
                arr_48 [i_10] [i_10] [i_10] = ((/* implicit */signed char) arr_18 [i_3] [i_7] [i_7] [i_10]);
                var_40 = ((/* implicit */signed char) (-(var_9)));
            }
            for (unsigned char i_14 = 0; i_14 < 23; i_14 += 4) 
            {
                var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (signed char)76))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_13 [i_3 + 2])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 1648126727620184922ULL)))))));
                arr_53 [i_3] = ((/* implicit */unsigned int) arr_52 [i_3]);
            }
        }
        var_42 -= ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
        arr_54 [i_3] = ((/* implicit */unsigned char) var_14);
        var_43 = ((/* implicit */unsigned char) arr_34 [i_3]);
    }
    for (short i_15 = 0; i_15 < 25; i_15 += 3) 
    {
        arr_57 [i_15] = ((/* implicit */int) ((signed char) max((min((var_6), (((/* implicit */unsigned long long int) arr_55 [i_15] [i_15])))), (((/* implicit */unsigned long long int) var_14)))));
        var_44 *= ((/* implicit */unsigned int) (unsigned char)174);
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 12; i_16 += 3) 
    {
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            for (unsigned char i_18 = 1; i_18 < 10; i_18 += 1) 
            {
                {
                    arr_64 [i_17] = ((/* implicit */unsigned char) arr_21 [i_18] [i_17 - 1] [i_16]);
                    arr_65 [i_18] [i_17] [i_17] [(_Bool)1] = ((/* implicit */unsigned char) ((arr_0 [i_17]) >> (max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)174))))), (min((var_14), (((/* implicit */int) (_Bool)1))))))));
                    arr_66 [i_16] [i_17] [i_17] [i_16] = ((/* implicit */unsigned int) var_3);
                }
            } 
        } 
    } 
}

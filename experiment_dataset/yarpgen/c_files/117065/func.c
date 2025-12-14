/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117065
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) (~((~(min((((/* implicit */int) (signed char)-61)), (var_15)))))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((((((/* implicit */unsigned int) (~(var_12)))) <= (arr_3 [(signed char)8]))), (min((arr_0 [i_4 - 1]), (arr_0 [i_4 - 1]))))))));
                                var_21 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [3]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) (-((~(arr_3 [i_1])))));
                    var_23 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_7)), (arr_6 [i_0] [i_0] [i_1] [i_0]))), (((/* implicit */unsigned long long int) max(((+(var_15))), (((((/* implicit */int) (signed char)61)) - (((/* implicit */int) (signed char)45)))))))));
                    var_24 = max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (-2147483647 - 1))) != (1159463149U))))) == (1159463149U)))), (var_2));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        var_25 = (+(arr_5 [(short)9]));
        var_26 = ((/* implicit */signed char) var_17);
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_27 = ((/* implicit */int) max((var_27), ((+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_14))))))))))));
            var_28 += ((/* implicit */short) min((((/* implicit */unsigned long long int) ((var_15) > (((/* implicit */int) (!(arr_0 [(unsigned short)11]))))))), ((((_Bool)1) ? (((((/* implicit */unsigned long long int) 3135504148U)) + (8302080923570531410ULL))) : (((/* implicit */unsigned long long int) var_17))))));
            /* LoopNest 3 */
            for (short i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    for (int i_9 = 2; i_9 < 12; i_9 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
                            var_30 = ((/* implicit */int) var_9);
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */short) arr_23 [i_5] [i_5] [i_6] [i_6] [(unsigned char)10] [i_6]);
        }
        var_32 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)106)) && (((/* implicit */_Bool) (signed char)-26)))))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))))));
        var_33 = ((/* implicit */signed char) (+(((((/* implicit */int) (short)-13564)) % (((/* implicit */int) (_Bool)1))))));
    }
    for (long long int i_10 = 3; i_10 < 17; i_10 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 3) 
            {
                {
                    var_34 = ((/* implicit */int) var_18);
                    var_35 = ((/* implicit */unsigned short) var_16);
                    var_36 |= ((/* implicit */signed char) min((arr_9 [i_10] [i_11]), (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_32 [(_Bool)0] [i_11] [i_11])))))))));
                    var_37 &= ((/* implicit */_Bool) arr_5 [(short)10]);
                }
            } 
        } 
        var_38 = ((((/* implicit */_Bool) arr_11 [i_10] [i_10] [(short)5])) && (((/* implicit */_Bool) arr_30 [i_10 - 1] [i_10 - 1])));
        var_39 = ((/* implicit */unsigned char) ((arr_37 [7] [7] [i_10] [i_10]) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_10 - 1])) || (((/* implicit */_Bool) var_9))))))));
    }
    /* vectorizable */
    for (unsigned int i_13 = 1; i_13 < 11; i_13 += 3) 
    {
        var_40 -= ((/* implicit */unsigned short) ((unsigned char) ((var_2) - (((/* implicit */unsigned int) arr_8 [i_13] [(unsigned short)14] [i_13] [i_13] [i_13])))));
        var_41 = ((/* implicit */short) (-((~(9358837609401715065ULL)))));
        var_42 = ((/* implicit */unsigned char) arr_7 [i_13] [i_13] [i_13 + 2] [i_13]);
    }
    /* LoopNest 2 */
    for (unsigned short i_14 = 4; i_14 < 11; i_14 += 2) 
    {
        for (short i_15 = 1; i_15 < 11; i_15 += 2) 
        {
            {
                var_43 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((150994944) + (((/* implicit */int) (unsigned char)25))))), (((arr_1 [i_14] [i_15 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_15 + 1] [i_15 + 1] [i_14] [i_14 - 3] [i_14])))))));
                var_44 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}

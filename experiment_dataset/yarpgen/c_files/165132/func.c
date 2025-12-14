/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165132
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
    var_16 = ((/* implicit */signed char) var_6);
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((short) var_11))) : (((/* implicit */int) var_11))));
    var_18 = ((/* implicit */int) max((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) var_1)))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_19 = ((((/* implicit */_Bool) (~((~(var_14)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((unsigned long long int) arr_0 [i_0])) >> (((var_3) - (2386940212U))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) / (((-1320924749) / (((/* implicit */int) arr_0 [i_0]))))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        arr_11 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */int) (signed char)55)) <= (((((/* implicit */_Bool) (signed char)-104)) ? (((((/* implicit */int) arr_6 [i_2] [i_1] [i_2])) * (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_1 [i_2]))))));
                        var_21 = ((/* implicit */unsigned long long int) arr_1 [i_1]);
                        var_22 = ((/* implicit */short) (-((-((+(((/* implicit */int) var_11))))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_3)))) ? (((arr_3 [i_1]) >> (((arr_3 [i_0]) - (1976348107))))) : (((/* implicit */int) (signed char)-104))));
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) (-(var_3)));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (short i_5 = 1; i_5 < 16; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        {
                            var_24 = var_9;
                            var_25 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_7 [i_0] [i_4] [i_4] [i_6])))) > (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115))) : (3737449475618952831ULL)))))), (var_3)));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) max((((/* implicit */unsigned long long int) (unsigned short)1925)), (arr_13 [i_0] [i_4] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-105))))) : (min((arr_23 [i_0] [i_4] [i_4] [i_0] [i_4] [i_0] [i_0]), (arr_23 [i_4] [i_4] [i_4] [i_0] [5ULL] [i_0] [i_0])))));
            var_27 = ((/* implicit */unsigned char) 1646353793);
        }
    }
    for (unsigned char i_8 = 2; i_8 < 16; i_8 += 1) 
    {
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8 + 1])) ? (((/* implicit */int) var_5)) : (arr_27 [i_8])));
        var_29 += ((/* implicit */long long int) min((((int) arr_26 [i_8 - 2])), (((/* implicit */int) (signed char)-74))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)65)) ? (arr_26 [i_8 + 4]) : (((/* implicit */unsigned long long int) min((arr_27 [i_8 + 1]), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12)))))))));
        var_31 = ((/* implicit */unsigned int) (signed char)-47);
    }
    for (unsigned long long int i_9 = 2; i_9 < 8; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            for (unsigned int i_11 = 1; i_11 < 7; i_11 += 4) 
            {
                {
                    var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_9 + 1] [i_10] [i_11]))) : (arr_22 [i_9] [i_10] [i_10] [i_11] [i_9 + 2] [i_11]))), (((/* implicit */long long int) arr_25 [i_10])))))));
                    var_33 = ((/* implicit */long long int) min((arr_1 [i_11]), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_9] [(_Bool)1] [i_11]))) == (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_9)))))));
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        for (int i_13 = 1; i_13 < 8; i_13 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((arr_24 [i_9 - 2] [i_12] [(signed char)8] [i_9 - 1] [i_13] [i_9 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-104))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_12))))))))));
                                arr_40 [i_12] [i_12] [i_12] = ((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) arr_9 [i_12] [i_13 + 1] [i_11 + 2] [i_12])))));
                                var_35 |= ((/* implicit */signed char) arr_36 [i_9 - 1] [i_10] [i_9] [i_12]);
                                var_36 = ((/* implicit */signed char) ((((((/* implicit */long long int) var_1)) - (arr_15 [i_9 + 1] [i_12]))) + (((/* implicit */long long int) (+(var_14))))));
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_9 + 2] [i_9 - 1] [i_11 + 3])) ? (((/* implicit */unsigned long long int) arr_33 [i_9 + 1] [i_10] [i_11 + 3])) : (var_4)))) ? (((((/* implicit */_Bool) var_14)) ? (arr_33 [i_9 - 2] [i_10] [i_11 + 3]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : ((+(arr_33 [i_9 - 1] [i_9 - 1] [i_11 + 2]))))))));
                }
            } 
        } 
        var_38 = ((/* implicit */unsigned long long int) ((_Bool) var_3));
    }
    var_39 += var_2;
}
